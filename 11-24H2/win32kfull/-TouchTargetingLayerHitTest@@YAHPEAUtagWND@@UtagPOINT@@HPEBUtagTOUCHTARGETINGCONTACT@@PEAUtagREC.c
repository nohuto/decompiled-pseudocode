/*
 * XREFs of ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x140221EF8
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1401B5F90 (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 * Callees:
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1400223EC (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14019CE40 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     TouchTargetingRankForRectDeep @ 0x1401B6CF0 (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall TouchTargetingLayerHitTest(
        struct tagWND *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int *a5,
        unsigned __int16 *a6,
        _DWORD *a7,
        int a8)
{
  int v9; // edi
  int v13; // eax
  bool v14; // al
  unsigned __int16 v15; // bp
  __int64 v16; // rbx
  int v19[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v20; // [rsp+40h] [rbp-28h] BYREF
  int v21; // [rsp+7Ch] [rbp+14h]
  struct tagPOINT v22; // [rsp+A0h] [rbp+38h]
  struct tagPOINT v23; // [rsp+A0h] [rbp+38h]

  v21 = HIDWORD(a2);
  v9 = a2;
  v13 = a7[1] + HIDWORD(a2);
  v22.x = a2 + *a7;
  v22.y = v13;
  if ( a3 )
    v14 = DCELayerHitTest(a1, v22);
  else
    v14 = LayerHitTest(a1, v22);
  if ( v14 )
    return 1LL;
  *(_QWORD *)v19 = *(_QWORD *)a7;
  v20 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  v15 = TouchTargetingRankForRectDeep(&v20, a4, a5, v19, a8);
  if ( v15 <= 0xFFDu )
  {
    v16 = *(_QWORD *)v19;
    v23.y = v19[1] + v21;
    v23.x = v19[0] + v9;
    if ( a3 ? DCELayerHitTest(a1, v23) : LayerHitTest(a1, v23) )
    {
      *(_QWORD *)a7 = v16;
      *a6 = v15;
      return 1LL;
    }
  }
  return 0LL;
}
