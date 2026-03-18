/*
 * XREFs of ?VidSchDestroyDeviceSyncObject@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_DEVICE@@_NPEAUVIDSCH_REGISTERED_SIGNAL_ON_ERROR@@@Z @ 0x14004A308
 * Callers:
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402CE5A0 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall VIDSCH_EXPORT::VidSchDestroyDeviceSyncObject(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_SYNC_OBJECT *a2,
        struct _VIDSCH_DEVICE *a3,
        char a4,
        struct VIDSCH_REGISTERED_SIGNAL_ON_ERROR *a5)
{
  struct _VIDSCH_DEVICE *v5; // r11

  v5 = a3;
  LOBYTE(a3) = a4;
  (*(void (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *, struct _VIDSCH_DEVICE *, struct _VIDSCH_DEVICE *, struct VIDSCH_REGISTERED_SIGNAL_ON_ERROR *))(*((_QWORD *)this + 1) + 680LL))(
    a2,
    v5,
    a3,
    a5);
}
