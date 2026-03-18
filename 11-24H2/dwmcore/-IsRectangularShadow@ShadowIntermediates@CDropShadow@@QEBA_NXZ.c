/*
 * XREFs of ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x180137050
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180136C8C (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180201A00 (-NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180201AB0 (-OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x180203458 (-CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z.c)
 * Callees:
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180136530 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801370C0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDropShadow::ShadowIntermediates::IsRectangularShadow(CDropShadow::ShadowIntermediates *this)
{
  __int64 v1; // rcx
  char v2; // bl
  bool (__fastcall *v3)(__int64, int); // rax
  char v4; // al

  v1 = *((_QWORD *)this + 6);
  v2 = 0;
  if ( !v1 )
    return 1;
  v3 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v1 + 64LL);
  if ( (char *)v3 == (char *)CNineGridBrush::IsOfType )
    v4 = CNineGridBrush::IsOfType(v1, 22LL);
  else
    v4 = v3 == CSurfaceBrush::IsOfType ? CSurfaceBrush::IsOfType(v1, 22) : v3(v1, 22);
  if ( v4 )
    return 1;
  return v2;
}
