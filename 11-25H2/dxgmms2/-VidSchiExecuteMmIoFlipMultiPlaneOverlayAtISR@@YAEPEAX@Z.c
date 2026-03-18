/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR@@YAEPEAX@Z @ 0x140041030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR(_DWORD *a1)
{
  a1[530] = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[48])(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 3120LL),
              a1 + 2);
  return 1;
}
