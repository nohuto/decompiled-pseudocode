/*
 * XREFs of ?ResetToStart@ClipPlaneIterator@@AEAAXXZ @ 0x18006DCC4
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@@Z @ 0x18006E780 (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall ClipPlaneIterator::ResetToStart(ClipPlaneIterator *this)
{
  char *v2; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 1) = 0;
  *(_BYTE *)this = 0;
  v2 = (char *)this + 56;
  *((_DWORD *)v2 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v2, 4LL);
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 24, 16LL);
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 88, 4LL);
  *((_QWORD *)this + 15) = 0LL;
}
