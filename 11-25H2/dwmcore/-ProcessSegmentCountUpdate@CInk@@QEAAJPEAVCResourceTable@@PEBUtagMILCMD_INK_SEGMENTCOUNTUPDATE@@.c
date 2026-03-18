/*
 * XREFs of ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x1802A69F0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802A6840 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInk::ProcessSegmentCountUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INK_SEGMENTCOUNTUPDATE *a3)
{
  int v3; // r15d
  unsigned int v4; // ebx
  struct ID2D1Ink *v5; // rsi
  int v6; // r15d
  __int64 v9; // r14
  __int64 i; // rbp
  int ID2D1InkAndInkStyle; // eax
  int v12; // eax
  int v13; // eax
  struct ID2D1InkStyle *v15; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1Ink *v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = a2;
  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  v15 = 0LL;
  v5 = 0LL;
  v6 = v3 - *((_DWORD *)this + 42);
  v16 = 0LL;
  if ( v6 >= 0 )
  {
    v13 = DynArrayImpl<0>::Grow((__int64)this + 144, 0x24u, v6, 0, 0LL);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x9Bu, 0LL);
      goto LABEL_12;
    }
  }
  else
  {
    v9 = (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v9; i = (unsigned int)(i + 1) )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(*((_QWORD *)this + 11) + 8 * i), &v16, &v15);
      v4 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2D1InkAndInkStyle, 0x91u, 0LL);
        v5 = v16;
        goto LABEL_12;
      }
      v5 = v16;
      v12 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD))(*(_QWORD *)v16 + 56LL))(v16, (unsigned int)-v6);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x93u, 0LL);
        goto LABEL_12;
      }
      ReleaseInterface<IDXGIFactory7>((__int64 *)&v16);
      ReleaseInterface<IDXGIFactory7>((__int64 *)&v15);
      v5 = v16;
    }
  }
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
LABEL_12:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v5);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v15);
  return v4;
}
