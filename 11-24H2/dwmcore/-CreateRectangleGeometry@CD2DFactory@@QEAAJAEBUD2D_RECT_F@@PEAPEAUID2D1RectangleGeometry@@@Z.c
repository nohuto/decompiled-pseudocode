/*
 * XREFs of ?CreateRectangleGeometry@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@PEAPEAUID2D1RectangleGeometry@@@Z @ 0x1801FC384
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801AD040 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DFactory::CreateRectangleGeometry(
        CD2DFactory *this,
        const struct D2D_RECT_F *a2,
        struct ID2D1RectangleGeometry **a3)
{
  return (*(__int64 (__fastcall **)(__int64, const struct D2D_RECT_F *, struct ID2D1RectangleGeometry **))(*(_QWORD *)g_DeviceManager + 40LL))(
           g_DeviceManager,
           a2,
           a3);
}
