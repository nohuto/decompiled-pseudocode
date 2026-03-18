/*
 * XREFs of ClearDelegationCapture @ 0x14010F6D8
 * Callers:
 *     zzzDestroyQueue @ 0x140161AA0 (zzzDestroyQueue.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401B3064 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1401B3104 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ClearDelegationCapture(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1328LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
