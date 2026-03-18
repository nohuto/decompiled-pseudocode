/*
 * XREFs of DpiSendAsyncResumeAdapterRequest @ 0x14002AFF4
 * Callers:
 *     DpiRequestDevicePowerState @ 0x14002A4E8 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiSendAsyncResumeAdapterRequest(__int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rax

  WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
  *(_DWORD *)(a1 + 4152) = 2;
  v2 = *(_QWORD **)(a1 + 4112);
  v3 = (_QWORD *)(a1 + 4128);
  WdLogGlobalForLineNumber = 140;
  if ( *v2 != a1 + 4104 )
    __fastfail(3u);
  *v3 = a1 + 4104;
  *(_QWORD *)(a1 + 4136) = v2;
  *v2 = v3;
  *(_QWORD *)(a1 + 4112) = v3;
  return KeSetEvent((PRKEVENT)(a1 + 4072), 0, 0);
}
