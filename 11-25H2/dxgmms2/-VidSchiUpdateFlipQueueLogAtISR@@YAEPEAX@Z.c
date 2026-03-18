/*
 * XREFs of ?VidSchiUpdateFlipQueueLogAtISR@@YAEPEAX@Z @ 0x140042CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall VidSchiUpdateFlipQueueLogAtISR(_DWORD *a1)
{
  a1[5] = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[68])(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 3120LL),
            a1 + 2);
  return 1;
}
