/*
 * XREFs of ?IsAllocationAccessPending@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1401040D0
 * Callers:
 *     VidMmIsAllocationAccessPending @ 0x1400430A0 (VidMmIsAllocationAccessPending.c)
 * Callees:
 *     VidSchIsDeviceBusy @ 0x140034FC8 (VidSchIsDeviceBusy.c)
 */

bool __fastcall VIDMM_GLOBAL::IsAllocationAccessPending(VIDMM_GLOBAL *this, struct VIDMM_MULTI_ALLOC *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL);
  return v2 && VidSchIsDeviceBusy(*(_QWORD *)(v2 + 800)) != 0;
}
