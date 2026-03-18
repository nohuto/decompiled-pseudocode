/*
 * XREFs of MiClaimPhysicalRun @ 0x14022B3F0
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiDefragmentSlabWorker @ 0x140686E60 (MiDefragmentSlabWorker.c)
 *     MmRelocatePfnList @ 0x140932988 (MmRelocatePfnList.c)
 *     MiScrubNode @ 0x140A38DD4 (MiScrubNode.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v21; // r15
  _QWORD v22[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h]
  int v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+3Ch] [rbp-4Ch]
  __int64 v26; // [rsp+40h] [rbp-48h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]
  __int64 v28; // [rsp+50h] [rbp-38h]
  __int64 v29; // [rsp+58h] [rbp-30h]
  __int64 v30; // [rsp+C8h] [rbp+40h]
  __int64 v31; // [rsp+D8h] [rbp+50h]

  v10 = 0;
  v13 = a2;
  v22[1] = a5;
  v27 = 0LL;
  v29 = a8;
  v22[0] = a1;
  v24 = a6;
  v23 = a3;
  v25 = a7;
  *a10 = 0;
  v28 = a4;
  if ( a9 )
    v26 = *a9;
  else
    v26 = -1LL;
  v30 = a3;
  v15 = 48 * a2 - 0x220000000000LL;
  v16 = v15 + 48 * a3;
  v31 = a2 + a3;
  while ( 1 )
  {
    v17 = MiTradePage(v22, v13, a10);
    if ( !v17 )
    {
      v17 = 1LL;
      if ( v27 > 1 )
      {
        v18 = ~(v27 - 1);
        if ( v13 == (v13 & v18) )
          v17 = v27;
        else
          v17 = (v18 & (v13 + v27 - 1)) - v13;
      }
      if ( !v10 )
      {
        if ( v27 )
        {
          v18 = v31 - (v13 & ~(v27 - 1));
          v30 = v18;
        }
        v10 = 1;
      }
      if ( (a6 & 0x2000) == 0 )
        goto LABEL_14;
      if ( v17 >= v31 - v13 )
        return v30;
      goto LABEL_6;
    }
    v23 -= v17;
    if ( !v23 )
      break;
LABEL_6:
    v26 = -1LL;
    v13 += v17;
    v15 += 48 * v17;
    if ( v15 >= v16 )
    {
      if ( (a6 & 0x2000) == 0 )
      {
LABEL_14:
        ++dword_140EF4F40;
        v21 = a3 - v23;
        dword_140EF4F44 = -1431655765 * ((__int64)(v15 + 0x220000000000LL) >> 4);
        if ( a8 )
          *(_DWORD *)(a8 + 40) += -4096 * v21;
        for ( ; v21; --v21 )
        {
          v15 -= 48LL;
          MiReleaseFreshPage(v15, v18, v19);
        }
      }
      return v30;
    }
  }
  ++dword_140EF4E5C;
  if ( a9 )
    *a9 = v26;
  return 0LL;
}
