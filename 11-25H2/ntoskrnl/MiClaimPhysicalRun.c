/*
 * XREFs of MiClaimPhysicalRun @ 0x1403416E0
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiDefragmentSlabWorker @ 0x14067B5D0 (MiDefragmentSlabWorker.c)
 *     MiScrubNode @ 0x140A337C8 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x140ABD000 (MmRelocatePfnList.c)
 * Callees:
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
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
  unsigned __int64 v14; // rbx
  __int64 v15; // r13
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
  __int64 v28; // [rsp+D8h] [rbp+50h]

  v10 = 0;
  v13 = a2;
  v27 = a8;
  v20[1] = a5;
  v25 = 0LL;
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
  v14 = 48 * a2 - 0x220000000000LL;
  v15 = a2 + a3;
  v16 = v14 + 48 * a3;
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
          v28 = v15 - (v13 & ~(v25 - 1));
        v10 = 1;
      }
      if ( (a6 & 0x2000) == 0 )
        goto LABEL_14;
      if ( v17 >= v15 - v13 )
        return v28;
      goto LABEL_6;
    }
    v21 -= v17;
    if ( !v21 )
      break;
LABEL_6:
    v24 = -1LL;
    v13 += v17;
    v14 += 48 * v17;
    if ( v14 >= v16 )
    {
      if ( (a6 & 0x2000) == 0 )
      {
LABEL_14:
        ++dword_140EF4C60;
        v19 = a3 - v21;
        dword_140EF4C64 = -1431655765 * ((__int64)(v14 + 0x220000000000LL) >> 4);
        if ( a8 )
          *(_DWORD *)(a8 + 40) += -4096 * v19;
        for ( ; v19; --v19 )
        {
          v14 -= 48LL;
          MiReleaseFreshPage(v14);
        }
      }
      return v28;
    }
  }
  ++dword_140EF4B7C;
  if ( a9 )
    *a9 = v24;
  return 0LL;
}
