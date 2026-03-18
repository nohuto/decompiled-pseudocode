/*
 * XREFs of ?VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z @ 0x140037DF8
 * Callers:
 *     VidSchFlushDevice @ 0x1400B5320 (VidSchFlushDevice.c)
 * Callees:
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400BB8F0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 */

void __fastcall VidMmEnsureDeviceSchedulable(struct VIDMM_DEVICE *a1, bool a2)
{
  VIDMM_DEVICE::EnsureSchedulable(a1, a2);
}
