/*
 * XREFs of ?HampInProcStopActivity@@YAJPEAX_K@Z @ 0x18006D040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HampInProcStopActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  return HamSrvStopActivity(a1, a2);
}
