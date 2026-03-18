/*
 * XREFs of ?GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AB7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801ABBD0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::GetBounds(__int64 a1, __int64 a2, float *a3)
{
  unsigned int v3; // edi
  int v6; // eax
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  if ( !*(_DWORD *)(a1 + 264) )
  {
    *(_OWORD *)a3 = DirectX::g_XMZero;
    goto LABEL_7;
  }
  v9 = 0LL;
  v10 = 0LL;
  v6 = CDeviceResourceTable<CD2DGenericInk,CGenericInk>::FindOrCreateResourceNoRef(a1 + 152, 0LL, &v9);
  v3 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x11Bu, 0LL);
    return v3;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v9 + 72) + 32LL))(*(_QWORD *)(v9 + 72), &v10);
  v3 = v7;
  if ( v7 >= 0 )
  {
    *(_OWORD *)a3 = v10;
LABEL_7:
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)(a1 + 72));
    return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x11Cu, 0LL);
  return v3;
}
