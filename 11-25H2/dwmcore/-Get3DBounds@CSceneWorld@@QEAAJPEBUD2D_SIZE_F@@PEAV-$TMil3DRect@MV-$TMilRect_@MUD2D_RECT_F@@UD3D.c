/*
 * XREFs of ?Get3DBounds@CSceneWorld@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B4D28
 * Callers:
 *     ?Get3DContentBounds@CSceneVisual@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18025A848 (-Get3DContentBounds@CSceneVisual@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18009CBD0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18016DEF8 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneWorld::Get3DBounds(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  _BYTE v7[64]; // [rsp+40h] [rbp-39h] BYREF
  int v8; // [rsp+80h] [rbp+7h]
  __int64 v9; // [rsp+90h] [rbp+17h] BYREF
  int v10; // [rsp+98h] [rbp+1Fh]
  __int64 v11; // [rsp+A0h] [rbp+27h] BYREF
  int v12; // [rsp+A8h] [rbp+2Fh]
  _QWORD v13[2]; // [rsp+B0h] [rbp+37h] BYREF
  int v14; // [rsp+C0h] [rbp+47h]
  int v15; // [rsp+C4h] [rbp+4Bh]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 216LL))(a1) )
  {
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)a3 = 0;
  }
  else
  {
    v5 = a1[11];
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
    v12 = 0;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v9, &v11);
    v8 = 0;
    v13[0] = v9;
    v13[1] = v11;
    v14 = v10;
    v15 = v12;
    CMILMatrix::SetScale((CMILMatrix *)v7, 1.0, -1.0, 1.0, 0.0, 0.0, 0.0);
    CMILMatrix::Transform3DBoundsHelper<1>((__int64)v7, (float *)v13, (float *)a3);
  }
  return 0LL;
}
