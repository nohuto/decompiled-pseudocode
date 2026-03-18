/*
 * XREFs of MiValidatePagefilePageHash @ 0x1402E57B0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 * Callees:
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiInPageGapPage @ 0x1402E5A38 (MiInPageGapPage.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiArePagefileContentsCorrupted @ 0x1402E5A94 (MiArePagefileContentsCorrupted.c)
 *     MiObtainPagefileHashes @ 0x1402E5C9C (MiObtainPagefileHashes.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
  unsigned __int64 v12; // rbp
  unsigned int v13; // ecx
  unsigned int PagingFileOffset; // r10d
  __int64 v15; // rax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-158h]
  unsigned __int64 v19; // [rsp+28h] [rbp-150h]
  __int64 v20; // [rsp+30h] [rbp-148h]
  _OWORD v22[16]; // [rsp+40h] [rbp-138h] BYREF

  v1 = a1 + 34;
  v2 = 0;
  if ( a1[32] )
    v1 = (_QWORD *)a1[32];
  LODWORD(v3) = 0;
  v20 = 0LL;
  v4 = 0;
  v5 = v1 + 6;
  v6 = (unsigned __int64)&v1[(((unsigned __int64)((*((_DWORD *)v1 + 8) + *((_DWORD *)v1 + 11)) & 0xFFF) + a1[11] + 4095LL) >> 12)
                           + 6];
  v19 = v6;
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
      if ( v10 != qword_140E37330 )
      {
        if ( !(unsigned int)MiInPageGapPage(48 * *v5 - 0x220000000000LL) )
        {
          v12 = (unsigned __int8)MiLockPageInline(v10);
          if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
          {
            if ( (v13 = (*(_DWORD *)(v10 + 16) >> 5) & 0x1F, (dword_140FC4200 & 1) != 0)
              || v13 == 31
              || (v13 >> 3 != 3 || ((*(_DWORD *)(v10 + 16) >> 5) & 7) == 0) && v13 >> 3 != 1 )
            {
              PagingFileOffset = MiGetPagingFileOffset(*(_QWORD *)(v10 + 16));
              if ( PagingFileOffset )
              {
                v15 = v20;
                if ( !v20 )
                {
                  v15 = *(_QWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL))
                                  + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v10 + 16)) >> 4)
                                  + 18528);
                  v20 = v15;
                }
                if ( v4 >= (unsigned int)v3 )
                {
                  v3 = v8 >> 3;
                  if ( (unsigned int)(v8 >> 3) > 0x10 )
                    LODWORD(v3) = 16;
                  MiObtainPagefileHashes(v15, PagingFileOffset, (unsigned int)v3, v22);
                  v4 = 0;
                }
                if ( (unsigned int)MiArePagefileContentsCorrupted(v9, &v22[v4], 1LL) )
                {
                  v17 = *(_DWORD *)(v10 + 32);
                  v18 = v17;
                  if ( v10 == a1[31] )
                    v2 = -1073741761;
                  HIBYTE(v18) = HIBYTE(v17) | 0x10;
                  *(_DWORD *)(v10 + 32) = v18;
                }
              }
            }
          }
          if ( (_BYTE)v12 != 17 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (unsigned __int8)v12 < 2u )
            {
              if ( KiIrqlFlags )
              {
                LOBYTE(v11) = v12;
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
              }
              __writecr8(v12);
            }
          }
        }
        v7 = v19;
      }
      ++v4;
      ++v5;
      v8 -= 8LL;
    }
    while ( (unsigned __int64)v5 < v7 );
  }
  return v2;
}
