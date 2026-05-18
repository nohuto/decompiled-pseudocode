/*
 * XREFs of ?IsDWMBeingDebugged@@YAHXZ @ 0x18000C0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 IsDWMBeingDebugged(void)
{
  unsigned int v0; // ebx
  WINBOOL pbDebuggerPresent; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !ghDwmProcess )
    return 0LL;
  pbDebuggerPresent = 0;
  if ( !CheckRemoteDebuggerPresent(ghDwmProcess, &pbDebuggerPresent) )
    return 0LL;
  LOBYTE(v0) = pbDebuggerPresent != 0;
  return v0;
}
