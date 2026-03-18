/*
 * XREFs of ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x1802A68A0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802A6840 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInk::ProcessBasicStateUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INK_BASICSTATEUPDATE *a3)
{
  unsigned int v3; // esi
  char *v4; // r15
  __int64 v6; // r14
  __int64 i; // rbp
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1InkStyle *v9; // rbx
  struct ID2D1Ink *v11; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1InkStyle *v12; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = (char *)this + 192;
  v11 = 0LL;
  v12 = 0LL;
  *((_DWORD *)this + 47) = *((_DWORD *)a3 + 6) != 0;
  *((_OWORD *)this + 12) = *(_OWORD *)((char *)a3 + 28);
  *((_QWORD *)this + 26) = *(_QWORD *)((char *)a3 + 44);
  *((_DWORD *)this + 35) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 34) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 2);
  v6 = (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v6; i = (unsigned int)(i + 1) )
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(*((_QWORD *)this + 11) + 8 * i), &v11, &v12);
    v3 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2D1InkAndInkStyle, 0x44u, 0LL);
      goto LABEL_7;
    }
    v9 = v12;
    (*(void (__fastcall **)(struct ID2D1InkStyle *, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, *((unsigned int *)this + 47));
    (*(void (__fastcall **)(struct ID2D1InkStyle *, char *))(*(_QWORD *)v9 + 32LL))(v9, v4);
    ReleaseInterface<IDXGIFactory7>((__int64 *)&v11);
    ReleaseInterface<IDXGIFactory7>((__int64 *)&v12);
  }
  (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
LABEL_7:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v11);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v12);
  return v3;
}
