/*
 * XREFs of HvpViewMapMakeViewRangeCOWByCaller @ 0x140881B00
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x1407CF564 (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x140881A90 (HvpViewMapCOWAndUnsealRange.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C519C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiProtectViewOfSection @ 0x14046BB00 (CmSiProtectViewOfSection.c)
 *     CmSiUnlockViewOfSection @ 0x14048F8C4 (CmSiUnlockViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x140882A78 (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeCOWByCaller(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  ULONG_PTR v8; // rcx
  NTSTATUS v9; // ebp
  __int64 v10; // r8
  __int64 i; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  void *v15; // r8
  void **v16; // rbx
  ULONG_PTR v18; // rcx
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v19) = 0;
  v4 = a3;
  v9 = CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), (void *)(a2[7] + a3 - a2[3]), a4 - a3, 8u, (ULONG *)&v19);
  if ( v9 >= 0 )
  {
    for ( i = v4; i < a4; i += 4096LL )
    {
      v12 = a2[3];
      if ( (*((_BYTE *)a2 + ((unsigned __int64)(i - v12) >> 12) + 72) & 2) == 0 )
      {
        LOBYTE(v10) = 1;
        v9 = HvpViewMapTouchPages(a2[7] + i - v12, 4096LL, v10);
        if ( v9 < 0 )
        {
          while ( v4 < a4 )
          {
            v18 = a2[3];
            if ( (*((_BYTE *)a2 + ((v4 - v18) >> 12) + 72) & 6) == 0 )
              CmSiProtectViewOfSection(
                v18,
                *(void ***)(a1 + 24),
                (void *)(a2[7] + v4 - v18),
                0x1000uLL,
                0x80000002,
                (ULONG *)&v19);
            v4 += 4096LL;
          }
          return (unsigned int)v9;
        }
      }
    }
    while ( v4 < a4 )
    {
      v13 = a2[3];
      v14 = (unsigned __int64)(v4 - v13) >> 12;
      v15 = (void *)(a2[7] + v4 - v13);
      LOBYTE(v13) = *((_BYTE *)a2 + v14 + 72) | 0xA;
      *((_BYTE *)a2 + v14 + 72) = v13;
      if ( (v13 & 0x10) != 0 )
      {
        v16 = *(void ***)(a1 + 24);
        CmSiUnlockViewOfSection(v8, v16, v15, 0x1000uLL);
        CmSiReleaseProcessLockedPagesCharge(v16, 4096LL);
        *((_BYTE *)a2 + v14 + 72) &= ~0x10u;
        --a2[8];
        *((_BYTE *)a2 + v14 + 72) |= 4u;
      }
      v4 += 4096LL;
    }
    return 0;
  }
  return (unsigned int)v9;
}
