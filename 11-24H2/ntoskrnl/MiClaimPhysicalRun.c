/*
 * XREFs of MiClaimPhysicalRun @ 0x1402FED00
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiDefragmentSlabWorker @ 0x140687F90 (MiDefragmentSlabWorker.c)
 *     MmRelocatePfnList @ 0x1408F754C (MmRelocatePfnList.c)
 *     MiScrubNode @ 0x140A2DE94 (MiScrubNode.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 */

__int64 __fastcall MiClaimPhysicalRun(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 *a9,
        _DWORD *a10)
{
  int v10; // r12d
  __int64 v13; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v19; // r15
  _QWORD v20[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+30h] [rbp-58h]
  int v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+3Ch] [rbp-4Ch]
  __int64 v24; // [rsp+40h] [rbp-48h]
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]
  __int64 v26; // [rsp+50h] [rbp-38h]
  __int64 v27; // [rsp+58h] [rbp-30h]
  __int64 v28; // [rsp+C8h] [rbp+40h]
  __int64 v29; // [rsp+D8h] [rbp+50h]

  v10 = 0;
  v13 = a2;
  v20[1] = a5;
  v25 = 0LL;
  v27 = a8;
  v20[0] = a1;
  v22 = a6;
  v21 = a3;
  v23 = a7;
  *a10 = 0;
  v26 = a4;
  if ( a9 )
    v24 = *a9;
  else
    v24 = -1LL;
  v28 = a3;
  v15 = 48 * a2 - 0x220000000000LL;
  v16 = v15 + 48 * a3;
  v29 = a2 + a3;
  while ( 1 )
  {
    v17 = MiTradePage(v20, v13, a10);
    if ( !v17 )
    {
      v17 = 1LL;
      if ( v25 > 1 )
      {
        if ( v13 == (v13 & ~(v25 - 1)) )
          v17 = v25;
        else
          v17 = (~(v25 - 1) & (v13 + v25 - 1)) - v13;
      }
      if ( !v10 )
      {
        if ( v25 )
          v28 = v29 - (v13 & ~(v25 - 1));
        v10 = 1;
      }
      if ( (a6 & 0x2000) == 0 )
        goto LABEL_14;
      if ( v17 >= v29 - v13 )
        return v28;
      goto LABEL_6;
    }
    v21 -= v17;
    if ( !v21 )
      break;
LABEL_6:
    v24 = -1LL;
    v13 += v17;
    v15 += 48 * v17;
    if ( v15 >= v16 )
    {
      if ( (a6 & 0x2000) == 0 )
      {
LABEL_14:
        ++dword_140EF5160;
        v19 = a3 - v21;
        dword_140EF5164 = -1431655765 * ((__int64)(v15 + 0x220000000000LL) >> 4);
        if ( a8 )
          *(_DWORD *)(a8 + 40) += -4096 * v19;
        for ( ; v19; --v19 )
        {
          v15 -= 48LL;
          MiReleaseFreshPage(v15);
        }
      }
      return v28;
    }
  }
  ++dword_140EF507C;
  if ( a9 )
    *a9 = v24;
  return 0LL;
}
