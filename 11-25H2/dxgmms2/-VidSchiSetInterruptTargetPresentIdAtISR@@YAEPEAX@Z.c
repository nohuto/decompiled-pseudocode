/*
 * XREFs of ?VidSchiSetInterruptTargetPresentIdAtISR@@YAEPEAX@Z @ 0x14003F050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall VidSchiSetInterruptTargetPresentIdAtISR(_DWORD *a1)
{
  a1[6] = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[67])(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 3120LL),
            a1 + 2);
  return 1;
}
