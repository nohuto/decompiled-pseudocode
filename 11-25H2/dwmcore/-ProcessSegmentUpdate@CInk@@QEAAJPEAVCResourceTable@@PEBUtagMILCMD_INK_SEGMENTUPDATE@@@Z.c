/*
 * XREFs of ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x1802A6B64
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802A6840 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInk::ProcessSegmentUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INK_SEGMENTUPDATE *a3)
{
  __int128 v3; // xmm0
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct ID2D1Ink *v7; // rdi
  __int128 v8; // xmm6
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 i; // rbp
  int ID2D1InkAndInkStyle; // eax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  bool v17; // cf
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  struct ID2D1InkStyle *v22; // [rsp+80h] [rbp+8h] BYREF
  struct ID2D1Ink *v23; // [rsp+88h] [rbp+10h] BYREF

  v23 = a2;
  v3 = *((_OWORD *)a3 + 1);
  v5 = *((_QWORD *)this + 18);
  v6 = 0;
  v22 = 0LL;
  v7 = 0LL;
  v8 = *((_OWORD *)a3 + 2);
  v23 = 0LL;
  v10 = 9LL * *((unsigned int *)a3 + 2);
  *(_DWORD *)(v5 + 4 * v10) = *((_DWORD *)a3 + 3);
  *(_OWORD *)(v5 + 4 * v10 + 4) = v3;
  *(_OWORD *)(v5 + 4 * v10 + 20) = v8;
  v11 = (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v11; i = (unsigned int)(i + 1) )
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(*((_QWORD *)this + 11) + 8 * i), &v23, &v22);
    v6 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2D1InkAndInkStyle, 0xCAu, 0LL);
      v7 = v23;
      goto LABEL_13;
    }
    v7 = v23;
    v14 = (*(__int64 (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v23 + 80LL))(v23);
    v15 = *((unsigned int *)a3 + 2);
    v16 = 36 * v15;
    v17 = (unsigned int)v15 < v14;
    v18 = *(_QWORD *)v7;
    if ( v17 )
    {
      v19 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64, __int64))(v18 + 64))(
              v7,
              v15,
              *((_QWORD *)this + 18) + v16,
              1LL);
      v6 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xCFu, 0LL);
        goto LABEL_13;
      }
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64))(v18 + 48))(
              v7,
              v16 + *((_QWORD *)this + 18),
              1LL);
      v6 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0xD6u, 0LL);
        goto LABEL_13;
      }
    }
    ReleaseInterface<IDXGIFactory7>((__int64 *)&v23);
    ReleaseInterface<IDXGIFactory7>((__int64 *)&v22);
    v7 = v23;
  }
  (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
LABEL_13:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v7);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v22);
  return v6;
}
