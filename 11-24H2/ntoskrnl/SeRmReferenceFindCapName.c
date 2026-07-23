/*
 * XREFs of SeRmReferenceFindCapName @ 0x1404CD004
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140698064 (AdtpBuildContextFromSecurityDescriptor.c)
 * Callees:
 *     SepRmReferenceFindCap @ 0x1403B562C (SepRmReferenceFindCap.c)
 *     SepValidateCAPID @ 0x1404F697C (SepValidateCAPID.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SeRmReferenceFindCapName(PSID Sid1, _DWORD *a2, __int64 *a3)
{
  int v3; // edi
  PSID *v4; // r14
  char *v5; // rsi
  unsigned int v6; // r13d
  __int64 Pool2; // r15
  int v8; // ebx
  int v10; // ebp
  int Cap; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned __int16 **v14; // r8
  __int64 v15; // r9
  unsigned __int16 *v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  char *i; // r14
  __int64 v20; // rbx
  unsigned __int16 v21; // cx
  PSID v23; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v24; // [rsp+78h] [rbp+10h]
  __int64 *v25; // [rsp+80h] [rbp+18h]
  char *v26; // [rsp+88h] [rbp+20h] BYREF

  v25 = a3;
  v24 = a2;
  v23 = Sid1;
  v3 = 0;
  v4 = &v23;
  v5 = 0LL;
  v26 = 0LL;
  v6 = 0;
  Pool2 = 0LL;
  v8 = 0;
  while ( 1 )
  {
    v10 = SepValidateCAPID(*v4);
    if ( v10 < 0 )
      break;
    ++v8;
    ++v4;
    if ( v8 )
    {
      Cap = SepRmReferenceFindCap(Sid1, (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v26);
      v5 = v26;
      v10 = Cap;
      if ( Cap >= 0 )
      {
        v12 = *((_DWORD *)v26 + 15);
        v13 = v12;
        if ( v12 )
        {
          v14 = (unsigned __int16 **)(v26 + 64);
          v15 = v12;
          do
          {
            v16 = *v14++;
            v17 = *v16;
            if ( v17 <= 2 )
              v17 = 0;
            v6 += v17;
            --v15;
          }
          while ( v15 );
        }
        Pool2 = ExAllocatePool2(0x100uLL, v6 + 16 * v13, 0x70536553u);
        if ( Pool2 )
        {
          v18 = 0;
          for ( i = (char *)(Pool2 + 16LL * *((unsigned int *)v5 + 15));
                v18 < *((_DWORD *)v5 + 15);
                i += 2 * ((unsigned __int64)*(unsigned __int16 *)(Pool2 + 8 * v20) >> 1) )
          {
            v20 = 2LL * v18;
            *(_QWORD *)(Pool2 + 16LL * v18 + 8) = i;
            v21 = **(_WORD **)&v5[8 * v18 + 64];
            if ( v21 <= 2u )
              v21 = 0;
            *(_WORD *)(Pool2 + 16LL * v18 + 2) = v21;
            *(_WORD *)(Pool2 + 16LL * v18) = v21;
            memmove(i, *(const void **)(*(_QWORD *)&v5[8 * v18++ + 64] + 8LL), v21);
          }
        }
        else
        {
          v10 = -1073741801;
        }
      }
      break;
    }
  }
  *v25 = Pool2;
  if ( v5 )
    v3 = *((_DWORD *)v5 + 15);
  *v24 = v3;
  return (unsigned int)v10;
}
