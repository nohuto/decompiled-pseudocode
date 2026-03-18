/*
 * XREFs of ?VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z @ 0x14003939C
 * Callers:
 *     VidSchFlushDevice @ 0x1400ACF70 (VidSchFlushDevice.c)
 * Callees:
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400B3910 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 */

void __fastcall VidMmEnsureDeviceSchedulable(struct VIDMM_DEVICE *a1, bool a2)
{
  VIDMM_DEVICE::EnsureSchedulable(a1, a2);
}
