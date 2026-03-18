/*
 * XREFs of ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x18004949C
 * Callers:
 *     ?OnSourceModificationsChanged@CWindowNode@@AEAAXXZ @ 0x1800492F0 (-OnSourceModificationsChanged@CWindowNode@@AEAAXXZ.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800495FC (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18002650C (-ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x18004951C (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::SetColorKey(CGdiSpriteBitmap *this, char a2, const struct CColorKey *a3)
{
  char *v3; // r10
  const struct CColorKey *v4; // r11

  v3 = (char *)this + 376;
  v4 = a3;
  if ( a2 != *((_BYTE *)this + 155) || !(unsigned __int8)CColorKey::operator==((char *)this + 376, a3) )
  {
    *((_BYTE *)this + 155) = a2;
    *(_OWORD *)v3 = *(_OWORD *)v4;
    *((_OWORD *)v3 + 1) = *((_OWORD *)v4 + 1);
    *((_DWORD *)v3 + 8) = *((_DWORD *)v4 + 8);
    if ( CGdiSpriteBitmap::ReleaseBitmapRealization(this) )
      CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
}
