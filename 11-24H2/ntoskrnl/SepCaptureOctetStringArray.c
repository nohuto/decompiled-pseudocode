/*
 * XREFs of SepCaptureOctetStringArray @ 0x14079228C
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14088BFA8 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureOctetStringArray(void *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // r13
  unsigned int v7; // esi
  __int64 result; // rax
  unsigned int *Pool2; // rdi
  unsigned int i; // edx
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ebx
  _QWORD *v15; // rax
  _QWORD *v16; // r15
  char *v17; // r14
  unsigned int v18; // ebx
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-48h]
  char *v23; // [rsp+28h] [rbp-40h]

  v6 = 16LL * a2;
  v7 = -1;
  if ( v6 <= 0xFFFFFFFF )
    v7 = 16 * a2;
  result = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 <= 0xFFFFFFFF )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, v7, 0x74416553u);
    if ( Pool2 )
    {
      if ( v7 && ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      memmove(Pool2, Src, v7);
      for ( i = 0; ; ++i )
      {
        v11 = v7;
        if ( i >= a2 )
          break;
        v12 = v7 + Pool2[4 * i + 2];
        v13 = -1;
        if ( v12 >= v7 )
          v13 = v7 + Pool2[4 * i + 2];
        v7 = v13;
        v14 = v12 < v11 ? 0xC0000095 : 0;
        if ( v12 < v11 )
          goto LABEL_17;
      }
      v15 = (_QWORD *)ExAllocatePool2(0x100uLL, v7, 0x74416553u);
      v16 = v15;
      if ( !v15 )
      {
        v14 = -1073741670;
LABEL_17:
        ExFreePoolWithTag(Pool2, 0);
        return v14;
      }
      memmove(v15, Pool2, v6);
      v17 = (char *)&v16[v6 / 8];
      v23 = (char *)&v16[v6 / 8];
      v18 = 0;
      v22 = 0;
      while ( v18 < a2 )
      {
        v19 = 2LL * v18;
        v20 = Pool2[4 * v18 + 2];
        if ( (_DWORD)v20 )
        {
          v21 = *(_QWORD *)&Pool2[4 * v18];
          if ( v21 + v20 > 0x7FFFFFFF0000LL || v21 + v20 < v21 )
          {
            v17 = v23;
            v18 = v22;
          }
        }
        memmove(v17, *(const void **)&Pool2[2 * v19], Pool2[2 * v19 + 2]);
        v16[v19] = v17;
        v17 += Pool2[2 * v19 + 2];
        v23 = v17;
        v22 = ++v18;
      }
      ExFreePoolWithTag(Pool2, 0);
      *a4 = v16;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
