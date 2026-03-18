/*
 * XREFs of ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1800752B4
 * Callers:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075104 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180075F80 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall ShapeBoundsEmpty(const struct CShape *a1)
{
  __int64 v1; // rax
  char v2; // bl
  float v4; // [rsp+20h] [rbp-28h]
  float v5; // [rsp+20h] [rbp-28h]
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v6 = 0LL;
  if ( (*(int (__fastcall **)(const struct CShape *, __int128 *, _QWORD))(v1 + 48))(a1, &v6, 0LL) < 0 )
    return 1;
  v4 = (float)(*((float *)&v6 + 2) - *(float *)&v6) + 6291456.25;
  if ( (LODWORD(v4) & 0x200000) != 0 || (LODWORD(v4) & 0xFFFFFFFE) << 10 == 0 )
    return 1;
  v5 = (float)(*((float *)&v6 + 3) - *((float *)&v6 + 1)) + 6291456.25;
  if ( (LODWORD(v5) & 0x200000) != 0 || (LODWORD(v5) & 0xFFFFFFFE) << 10 == 0 )
    return 1;
  return v2;
}
