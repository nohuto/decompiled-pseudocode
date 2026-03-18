/*
 * XREFs of IsClearDelegationCaptureSupported @ 0x1C009B050
 * Callers:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C009AFC0 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     zzzDestroyQueue @ 0x1C012DDA0 (zzzDestroyQueue.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C0135650 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsClearDelegationCaptureSupported()
{
  if ( qword_1C0295570 )
    return qword_1C0295570();
  else
    return 3221225659LL;
}
