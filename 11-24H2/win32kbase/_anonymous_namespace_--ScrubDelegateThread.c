/*
 * XREFs of _anonymous_namespace_::ScrubDelegateThread @ 0x1401468D0
 * Callers:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401B3064 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1401B3104 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::ScrubDelegateThread(__int64 a1)
{
  *(_QWORD *)(a1 + 1360) &= ~0x2000uLL;
  *(_QWORD *)(a1 + 1464) = 0LL;
  *(_QWORD *)(a1 + 1472) = 0LL;
  if ( (*(_QWORD *)(a1 + 1360) & 0x1000000LL) == 0 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 528), 0xFFFFFFBF);
}
