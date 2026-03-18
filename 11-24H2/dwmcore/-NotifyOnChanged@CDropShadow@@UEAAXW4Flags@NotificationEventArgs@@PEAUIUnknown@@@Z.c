/*
 * XREFs of ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180201A00
 * Callers:
 *     ?ProcessSetSourcePolicy@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETSOURCEPOLICY@@@Z @ 0x18020193C (-ProcessSetSourcePolicy@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETSOURCE.c)
 *     ?SetBlurRadius@CDropShadow@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180201960 (-SetBlurRadius@CDropShadow@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CDropShadow@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1802019B0 (-SetAnimatedProperty@CDropShadow@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x180220A48 (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004DD48 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x180137050 (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180201AB0 (-OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CDropShadow::NotifyOnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v7; // rbx
  _QWORD **v8; // r14
  _QWORD *i; // rbx

  v4 = a2;
  if ( a3 && a3 != a1 )
  {
    v7 = a1 + 128;
    if ( *(_QWORD *)(a1 + 176)
      && a3 == *(_QWORD *)(a1 + 176)
      && !CDropShadow::ShadowIntermediates::IsRectangularShadow((CDropShadow::ShadowIntermediates *)(a1 + 128)) )
    {
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)(v7 + 56));
    }
    v8 = *(_QWORD ***)(a1 + 208);
    for ( i = *v8; i != v8; i = (_QWORD *)*i )
      CDropShadow::ShadowIntermediates::OnChanged(i + 3, a2, a3);
    if ( v4 == 1 )
      v4 = 6;
  }
  return CResource::NotifyOnChanged((_DWORD *)a1, v4, a1);
}
