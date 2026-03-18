/*
 * XREFs of ?GetBounds@CInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18029C8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x18029C70C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18029CAC0 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInk::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  struct ID2D1Ink *v4; // rsi
  struct ID2D1InkStyle *v5; // r14
  int v6; // eax
  unsigned int v7; // ebx
  int ID2D1InkAndInkStyle; // eax
  int v9; // eax
  struct ID2D1Ink *v11; // [rsp+30h] [rbp-30h] BYREF
  struct ID2D1InkStyle *v12; // [rsp+38h] [rbp-28h] BYREF
  CD2DInk *v13; // [rsp+40h] [rbp-20h] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v6 = CDeviceResourceTable<CD2DInk,CInk>::FindOrCreateResourceNoRef(a1 + 72, 0LL, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x15u, 0LL);
  }
  else
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v13, &v11, &v12);
    v7 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2D1InkAndInkStyle, 0x17u, 0LL);
      v4 = v11;
      v5 = v12;
    }
    else
    {
      v4 = v11;
      v5 = v12;
      v9 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, struct ID2D1InkStyle *, _QWORD, __int128 *))(*(_QWORD *)v11 + 104LL))(
             v11,
             v12,
             0LL,
             &v14);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x19u, 0LL);
      else
        *a3 = v14;
    }
  }
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v4);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v5);
  return v7;
}
