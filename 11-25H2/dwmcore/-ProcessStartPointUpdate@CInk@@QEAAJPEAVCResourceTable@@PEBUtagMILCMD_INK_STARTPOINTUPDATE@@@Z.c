/*
 * XREFs of ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x1802A6D38
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802A6840 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInk::ProcessStartPointUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INK_STARTPOINTUPDATE *a3)
{
  unsigned int v3; // edi
  char *v4; // r14
  __int64 v6; // rbp
  __int64 i; // rsi
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1InkStyle *v10; // [rsp+50h] [rbp+8h] BYREF
  struct ID2D1Ink *v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v4 = (char *)this + 176;
  v11 = 0LL;
  v10 = 0LL;
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 45) = *((_DWORD *)a3 + 3);
  v6 = (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v6; i = (unsigned int)(i + 1) )
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(*((_QWORD *)this + 11) + 8 * i), &v11, &v10);
    v3 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2D1InkAndInkStyle, 0x6Au, 0LL);
      goto LABEL_7;
    }
    (*(void (__fastcall **)(struct ID2D1Ink *, char *))(*(_QWORD *)v11 + 32LL))(v11, v4);
    ReleaseInterface<IDXGIFactory7>((__int64 *)&v11);
    ReleaseInterface<IDXGIFactory7>((__int64 *)&v10);
  }
  (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
LABEL_7:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v11);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v10);
  return v3;
}
