/*
 * XREFs of MiValidatePagefilePageHash @ 0x140341950
 * Callers:
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiInPageGapPage @ 0x140341BD8 (MiInPageGapPage.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiArePagefileContentsCorrupted @ 0x140341C34 (MiArePagefileContentsCorrupted.c)
 *     MiObtainPagefileHashes @ 0x140341E3C (MiObtainPagefileHashes.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiValidatePagefilePageHash(_QWORD *a1)
{
  _QWORD *v1; // rdx
  unsigned int v2; // r15d
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  unsigned int v16; // ecx
  unsigned int PagingFileOffset; // r10d
  __int64 v18; // rax
  int v20; // eax
  int v21; // [rsp+20h] [rbp-158h]
  unsigned __int64 v22; // [rsp+28h] [rbp-150h]
  __int64 v23; // [rsp+30h] [rbp-148h]
  _OWORD v25[16]; // [rsp+40h] [rbp-138h] BYREF

  v1 = a1 + 34;
  v2 = 0;
  if ( a1[32] )
    v1 = (_QWORD *)a1[32];
  LODWORD(v3) = 0;
  v23 = 0LL;
  v4 = 0;
  v5 = v1 + 6;
  v6 = (unsigned __int64)&v1[(((unsigned __int64)((*((_DWORD *)v1 + 8) + *((_DWORD *)v1 + 11)) & 0xFFF) + a1[11] + 4095LL) >> 12)
                           + 6];
  v22 = v6;
  if ( (unsigned __int64)(v1 + 6) < v6 )
  {
    v7 = (unsigned __int64)&v1[(((unsigned __int64)((*((_DWORD *)v1 + 8) + *((_DWORD *)v1 + 11)) & 0xFFF)
                               + a1[11]
                               + 4095LL) >> 12)
                             + 6];
    v8 = v6 - (_QWORD)v5;
    do
    {
      v9 = *v5;
      v10 = 48 * *v5 - 0x220000000000LL;
      if ( v10 != qword_140E37470 )
      {
        if ( !(unsigned int)MiInPageGapPage(48 * *v5 - 0x220000000000LL) )
        {
          v15 = (unsigned __int8)MiLockPageInline(v10, v11, v12, v13);
          if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
          {
            if ( (v16 = (*(_DWORD *)(v10 + 16) >> 5) & 0x1F, (dword_140FC5200 & 1) != 0)
              || v16 == 31
              || (v16 >> 3 != 3 || ((*(_DWORD *)(v10 + 16) >> 5) & 7) == 0) && v16 >> 3 != 1 )
            {
              PagingFileOffset = MiGetPagingFileOffset(*(_QWORD *)(v10 + 16));
              if ( PagingFileOffset )
              {
                v18 = v23;
                if ( !v23 )
                {
                  v18 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL))
                                  + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v10 + 16)) >> 4)
                                  + 18528);
                  v23 = v18;
                }
                if ( v4 >= (unsigned int)v3 )
                {
                  v3 = v8 >> 3;
                  if ( (unsigned int)(v8 >> 3) > 0x10 )
                    LODWORD(v3) = 16;
                  MiObtainPagefileHashes(v18, PagingFileOffset, (unsigned int)v3, v25);
                  v4 = 0;
                }
                if ( (unsigned int)MiArePagefileContentsCorrupted(v9, &v25[v4], 1LL) )
                {
                  v20 = *(_DWORD *)(v10 + 32);
                  v21 = v20;
                  if ( v10 == a1[31] )
                    v2 = -1073741761;
                  HIBYTE(v21) = HIBYTE(v20) | 0x10;
                  *(_DWORD *)(v10 + 32) = v21;
                }
              }
            }
          }
          if ( (_BYTE)v15 != 17 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (unsigned __int8)v15 < 2u )
            {
              if ( KiIrqlFlags )
              {
                LOBYTE(v14) = v15;
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
              }
              __writecr8(v15);
            }
          }
        }
        v7 = v22;
      }
      ++v4;
      ++v5;
      v8 -= 8LL;
    }
    while ( (unsigned __int64)v5 < v7 );
  }
  return v2;
}
