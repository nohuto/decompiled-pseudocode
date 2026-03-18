/*
 * XREFs of ?VidSchiUpdateNativeFenceMonitoredValueAtISR@@YAEPEAX@Z @ 0x140051FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall VidSchiUpdateNativeFenceMonitoredValueAtISR(_DWORD *a1)
{
  a1[4] = ((__int64 (__fastcall *)(_QWORD, _QWORD))DxgCoreInterface[101])(
            *(_QWORD *)(*(_QWORD *)a1 + 8LL),
            *((_QWORD *)a1 + 1));
  return 1;
}
