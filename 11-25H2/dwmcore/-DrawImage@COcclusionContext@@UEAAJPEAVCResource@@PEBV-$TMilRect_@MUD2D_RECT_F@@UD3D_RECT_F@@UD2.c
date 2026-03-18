/*
 * XREFs of ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180217BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800554D0 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(COcclusionContext *a1, struct IUnknown *a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  char v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+51h] [rbp-27h]
  __int16 v14; // [rsp+55h] [rbp-23h]
  char v15; // [rsp+57h] [rbp-21h]

  if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[2].Release)(a2, 18LL) )
  {
    v6 = *((_QWORD *)a1 + 1);
    v10[0] = *((_QWORD *)a1 + 193);
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v10[1] = a2;
    v11 = DirectX::g_XMZero;
    v12 = 0;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 208LL))(v6, v10);
  }
  v7 = COcclusionContext::DrawImage(a1, a2, a3, 0);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x468u, 0LL);
  return v8;
}
