/*
 * XREFs of HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140984538
 * Callers:
 *     HvpViewMapAdjustFlag @ 0x140984734 (HvpViewMapAdjustFlag.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14046A844 (CmSiProtectViewOfSection.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x140984700 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 */

void __fastcall HvpViewMapMakeViewRangeUnCOWByPolicy(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  char v11; // al
  char v12; // al
  int v13; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 < a4 )
  {
    v13 = 0;
    v5 = a3;
    do
    {
      v8 = a2[3];
      v9 = (unsigned __int64)(v5 - v8) >> 12;
      v10 = a2[7] + v5 - v8;
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
          CmSiProtectViewOfSection(a1, *(__int64 **)(a1 + 24), v10, 4096LL, 0x80000002, (__int64)&v13);
      }
      v5 += 4096LL;
    }
    while ( v5 < a4 );
  }
}
