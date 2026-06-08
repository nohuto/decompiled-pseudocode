/*
 * XREFs of CpcSubspaceReadFeedback @ 0x140008F80
 * Callers:
 *     <none>
 * Callees:
 *     CpcConsolidateCommandCompletion @ 0x140004D3C (CpcConsolidateCommandCompletion.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CpcSubspaceReadFeedback(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, __int64 (__fastcall *)(__int64, __int64), _QWORD *); // rax
  __int64 result; // rax

  v2 = (__int64 (__fastcall *)(_QWORD, __int64 (__fastcall *)(__int64, __int64), _QWORD *))a1[14];
  a1[22] = a2;
  result = v2(a1[9], CpcReadFeedbackAcquireCallback, a1);
  if ( (int)result < 0 )
    return CpcConsolidateCommandCompletion(a1[22]);
  return result;
}
