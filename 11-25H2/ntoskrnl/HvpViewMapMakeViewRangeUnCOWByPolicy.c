/*
 * XREFs of HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140A4054C
 * Callers:
 *     HvpViewMapAdjustFlag @ 0x140A401E4 (HvpViewMapAdjustFlag.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14046BB00 (CmSiProtectViewOfSection.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x140A40714 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 */

void __fastcall HvpViewMapMakeViewRangeUnCOWByPolicy(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  void *v10; // rbp
  char v11; // al
  char v12; // al
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 < a4 )
  {
    LODWORD(v13) = 0;
    v5 = a3;
    do
    {
      v8 = a2[3];
      v9 = (unsigned __int64)(v5 - v8) >> 12;
      v10 = (void *)(a2[7] + v5 - v8);
      if ( (*((_BYTE *)a2 + v9 + 72) & 0x10) != 0 )
      {
        HvpViewMapReleaseChargesAndUnlockViewPages(a1, *(_QWORD *)(a1 + 24), a2[7] + v5 - v8, 4096LL);
        *((_BYTE *)a2 + v9 + 72) &= ~0x10u;
        --a2[8];
      }
      v11 = *((_BYTE *)a2 + v9 + 72);
      if ( (v11 & 4) != 0 )
      {
        v12 = v11 & 0xFB;
        *((_BYTE *)a2 + v9 + 72) = v12;
        if ( (v12 & 2) == 0 )
          CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), v10, 0x1000uLL, 0x80000002, (ULONG *)&v13);
      }
      v5 += 4096LL;
    }
    while ( v5 < a4 );
  }
}
