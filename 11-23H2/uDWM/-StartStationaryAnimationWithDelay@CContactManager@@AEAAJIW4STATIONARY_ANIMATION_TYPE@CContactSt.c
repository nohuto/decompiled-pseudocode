/*
 * XREFs of ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800B2300
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800B032C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800B14D4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180053BD8 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180053C4C (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x1800AE470 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800B2710 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 */

__int64 __fastcall CContactManager::StartStationaryAnimationWithDelay(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  __int64 v7; // rax
  int v11; // eax
  CContactManager *v12; // rcx
  unsigned int v13; // ebx
  int v14; // r10d
  unsigned int v15; // eax
  int v16; // eax
  CBaseObject *v17; // rcx
  CContactManager *v18; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int128 v26; // [rsp+30h] [rbp-20h] BYREF
  CBaseObject *v27; // [rsp+40h] [rbp-10h] BYREF

  v7 = *a4;
  v27 = 0LL;
  LODWORD(v26) = a2;
  *(_QWORD *)((char *)&v26 + 4) = v7;
  v11 = CreateTouchVisual<CContactStationaryVisual>(a6, &v27);
  v13 = v11;
  if ( v11 < 0 )
  {
    v14 = v11;
    v15 = 1954;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, v15);
    if ( !v27 )
      return v13;
    CContactManager::RemoveFromTouchNode(v18, a6, v27);
    v17 = v27;
    goto LABEL_8;
  }
  v16 = CContactManager::AddToTouchNode(v12, a6, v27);
  v17 = v27;
  if ( v16 < 0 )
  {
LABEL_8:
    if ( v17 )
      CBaseObject::Release(v17);
    return v13;
  }
  v13 = CContactStationaryVisual::Start(v27, a3, a4, a5, a7);
  v14 = v13;
  if ( (v13 & 0x80000000) != 0 )
  {
    v15 = 1957;
    goto LABEL_6;
  }
  v20 = *(unsigned int *)(a1 + 144);
  v21 = v20 + 1;
  if ( (int)v20 + 1 >= (unsigned int)v20 )
  {
    if ( v21 > *(_DWORD *)(a1 + 140) )
    {
      v24 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 120, 24, 1, &v26);
      if ( v24 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xC0u);
    }
    else
    {
      v22 = 3 * v20;
      v23 = *(_QWORD *)(a1 + 120);
      *(_OWORD *)(v23 + 8 * v22) = v26;
      *(_QWORD *)(v23 + 8 * v22 + 16) = v27;
      *(_DWORD *)(a1 + 144) = v21;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v13;
}
