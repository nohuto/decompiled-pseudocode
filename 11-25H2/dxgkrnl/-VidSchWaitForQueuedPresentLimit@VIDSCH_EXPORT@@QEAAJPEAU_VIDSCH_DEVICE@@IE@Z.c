/*
 * XREFs of ?VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z @ 0x14003E43C
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1402A4C80 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchWaitForQueuedPresentLimit(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_DEVICE *a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // r10d

  v4 = a3;
  LOBYTE(a3) = a4;
  return (*(__int64 (__fastcall **)(struct _VIDSCH_DEVICE *, _QWORD, __int64))(*((_QWORD *)this + 1) + 184LL))(
           a2,
           v4,
           a3);
}
