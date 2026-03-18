/*
 * XREFs of ?ProcessSetColorTransform@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETCOLORTRANSFORM@@@Z @ 0x180296E28
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CCompositionMagnifierBrush::ProcessSetColorTransform(
        CCompositionMagnifierBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETCOLORTRANSFORM *a3)
{
  bool v3; // al

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 28) - *((float *)a3 + 2)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 29) - *((float *)a3 + 3)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 30) - *((float *)a3 + 4)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 31) - *((float *)a3 + 5)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 32) - *((float *)a3 + 6)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 33) - *((float *)a3 + 7)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 34) - *((float *)a3 + 8)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 35) - *((float *)a3 + 9)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 36) - *((float *)a3 + 10)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 37) - *((float *)a3 + 11)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 38) - *((float *)a3 + 12)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 39) - *((float *)a3 + 13)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 40) - *((float *)a3 + 14)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 41) - *((float *)a3 + 15)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 42) - *((float *)a3 + 16)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 43) - *((float *)a3 + 17)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 44) - *((float *)a3 + 18)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 45) - *((float *)a3 + 19)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 46) - *((float *)a3 + 20)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 47) - *((float *)a3 + 21)) & _xmm) > 0.0000011920929 )
  {
    *((_OWORD *)this + 7) = *(_OWORD *)((char *)a3 + 8);
    *((_OWORD *)this + 8) = *(_OWORD *)((char *)a3 + 24);
    *((_OWORD *)this + 9) = *(_OWORD *)((char *)a3 + 40);
    *((_OWORD *)this + 10) = *(_OWORD *)((char *)a3 + 56);
    *((_OWORD *)this + 11) = *(_OWORD *)((char *)a3 + 72);
    v3 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 28) - 1.0) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 29) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 30) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 31) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 32) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 33) - 1.0) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 34) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 35) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 36) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 37) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 38) - 1.0) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 39) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 40) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 41) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 42) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 43) - 1.0) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 44) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 45) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 46) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) >= 0.0000011920929;
    *((_BYTE *)this + 109) = v3;
    CBrush::NotifyOnChanged((__int64)this, 6u, (__int64)this);
  }
  return 0LL;
}
