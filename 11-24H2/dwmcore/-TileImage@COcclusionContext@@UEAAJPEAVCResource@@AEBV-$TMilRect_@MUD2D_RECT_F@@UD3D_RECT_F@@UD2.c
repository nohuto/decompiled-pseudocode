/*
 * XREFs of ?TileImage@COcclusionContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_POINT_2F@@M@Z @ 0x180208130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::TileImage(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  char v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+41h] [rbp-17h]
  __int16 v10; // [rsp+45h] [rbp-13h]
  char v11; // [rsp+47h] [rbp-11h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, 18LL) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v6[0] = *(_QWORD *)(a1 + 1544);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v6[1] = a2;
    v7 = DirectX::g_XMZero;
    v8 = 0;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 208LL))(v4, v6);
  }
  return 0LL;
}
