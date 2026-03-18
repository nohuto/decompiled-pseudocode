/*
 * XREFs of InbvSetVirtualFrameBuffer @ 0x14058BE40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSetVirtualFrameBuffer(__int64 a1)
{
  if ( qword_140E65AE8 && *(_QWORD *)(qword_140E65AE8 + 176) )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 3221225474LL;
}
