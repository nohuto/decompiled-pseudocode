/*
 * XREFs of MiValidatePagefilePageHash @ 0x140226530
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 * Callees:
 *     MiInPageGapPage @ 0x1402267E0 (MiInPageGapPage.c)
 *     MiArePagefileContentsCorrupted @ 0x140226808 (MiArePagefileContentsCorrupted.c)
 *     MiObtainPagefileHashes @ 0x140226A10 (MiObtainPagefileHashes.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiValidatePagefilePageHash(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  _QWORD *v2; // r9
  __int64 v3; // r8
  unsigned int v4; // esi
  __int64 v5; // r12
  __int64 *v6; // rdi
  signed __int64 v7; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-158h]
  int v18; // [rsp+24h] [rbp-154h]
  unsigned int v19; // [rsp+28h] [rbp-150h]
  _OWORD v21[16]; // [rsp+40h] [rbp-138h] BYREF

  v1 = (unsigned __int64)(a1 + 34);
  v2 = a1;
  v3 = 0LL;
  v17 = 0;
  if ( a1[32] )
    v1 = a1[32];
  v4 = 0;
  v5 = 0LL;
  v19 = 0;
  v6 = (__int64 *)(v1 + 48);
  v7 = 8 * ((a1[11] + 4095LL + (unsigned __int64)((*(_DWORD *)(v1 + 32) + *(_DWORD *)(v1 + 44)) & 0xFFF)) >> 12);
  v8 = v7 + v1 + 48;
  if ( v1 + 48 >= v8 )
    return 0LL;
  do
  {
    v9 = *v6;
    v10 = 48 * *v6 - 0x220000000000LL;
    if ( v10 != qword_140E370F0 && !(unsigned int)MiInPageGapPage(48 * *v6 - 0x220000000000LL, v1, v3, v2) )
    {
      v11 = (unsigned __int8)MiLockPageInline(v10);
      if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
      {
        if ( (v1 = *(_QWORD *)(v10 + 16), v12 = (v1 >> 5) & 0x1F, (dword_140FC41F0 & 1) != 0)
          || (_DWORD)v12 == 31
          || ((unsigned int)v12 >> 3 != 3 || ((v1 >> 5) & 7) == 0) && (unsigned int)v12 >> 3 != 1 )
        {
          if ( (v1 & 4) != 0 )
          {
            if ( qword_140E2D940 && (v1 & 0x10) == 0 )
              v1 &= ~qword_140E2D940;
            v13 = HIDWORD(v1);
            if ( !v5 )
              v5 = *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL))
                             + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v10 + 16)) >> 4)
                             + 18528);
            if ( v4 >= v19 )
            {
              v15 = v7 >> 3;
              if ( (unsigned int)(v7 >> 3) > 0x10 )
                LODWORD(v15) = 16;
              v19 = v15;
              MiObtainPagefileHashes(v5, v13, (unsigned int)v15, v21);
              v4 = 0;
            }
            if ( (unsigned int)MiArePagefileContentsCorrupted(v9, &v21[v4], 1LL) )
            {
              v16 = v17;
              if ( v10 == a1[31] )
                v16 = -1073741761;
              v17 = v16;
              v18 = *(_DWORD *)(v10 + 32);
              HIBYTE(v18) |= 0x10u;
              *(_DWORD *)(v10 + 32) = v18;
            }
          }
        }
      }
      if ( (_BYTE)v11 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v11 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
          __writecr8(v11);
        }
      }
    }
    ++v4;
    ++v6;
    v7 -= 8LL;
  }
  while ( (unsigned __int64)v6 < v8 );
  return v17;
}
