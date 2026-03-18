/*
 * XREFs of ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x14019F0B4
 * Callers:
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14019EECC (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030EA30 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140336748 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

struct _IFIMETRICS *__fastcall PDEVOBJ::QueryFont(
        PDEVOBJ *this,
        struct DHPDEV__ *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  return (struct _IFIMETRICS *)(*(__int64 (__fastcall **)(struct DHPDEV__ *, __int64, _QWORD, unsigned __int64 *))(*(_QWORD *)this + 2888LL))(
                                 a2,
                                 a3,
                                 a4,
                                 a5);
}
