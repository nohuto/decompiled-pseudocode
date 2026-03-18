/*
 * XREFs of ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140088DBC
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140087E70 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

struct DHPDEV__ *__fastcall PDEVOBJ::EnablePDEV(
        PDEVOBJ *this,
        struct _devicemodeW *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        HSURF *a5,
        unsigned int a6,
        struct _GDIINFO *a7,
        unsigned int a8,
        struct tagDEVINFO *a9,
        HDEV a10,
        const unsigned __int16 *a11,
        void *a12)
{
  return (struct DHPDEV__ *)(*(__int64 (__fastcall **)(struct _devicemodeW *, const unsigned __int16 *, __int64, HSURF *, int, struct _GDIINFO *, int, struct tagDEVINFO *, HDEV, const unsigned __int16 *, void *))(*(_QWORD *)this + 2680LL))(
                              a2,
                              a3,
                              6LL,
                              a5,
                              320,
                              a7,
                              312,
                              a9,
                              a10,
                              a11,
                              a12);
}
