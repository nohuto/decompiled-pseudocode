/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x1409C4C50
 * Callers:
 *     _CmRaiseDeleteEvent @ 0x14081CA00 (_CmRaiseDeleteEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x140820610 (_PnpCmMatchCallbackRoutine.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1409C3E70 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmRaiseCreateEvent @ 0x1409C423C (_CmRaiseCreateEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x1409C42C4 (_CmRaisePropertyChangeEvent.c)
 *     PiDmGetCmObjectListFromCache @ 0x1409C4A08 (PiDmGetCmObjectListFromCache.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1409C4A60 (PiDmObjectGetCachedCmProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmMapCmObjectTypeToPnpObjectType(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 == 3 )
    return 3LL;
  v2 = a1 - 1;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 2;
  if ( !v4 )
    return 4LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 5LL;
  if ( v5 == 1 )
    return 6LL;
  return 0LL;
}
