/*
 * XREFs of CleanupInputDelegation @ 0x140136650
 * Callers:
 *     DestroyBaseWindow @ 0x1401BE600 (DestroyBaseWindow.c)
 * Callees:
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401B3064 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1401B3104 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 */

__int64 __fastcall CleanupInputDelegation(int *a1)
{
  __int64 result; // rax
  char v3; // cl

  result = HMPheFromObject(a1);
  v3 = *(_BYTE *)(result + 24);
  if ( v3 == 1 )
    return anonymous_namespace_::ScrubDelegatedWindow_tagWND___(a1);
  if ( v3 == 23 )
    return anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(a1);
  return result;
}
