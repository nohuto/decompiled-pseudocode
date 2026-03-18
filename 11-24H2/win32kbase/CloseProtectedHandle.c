/*
 * XREFs of CloseProtectedHandle @ 0x1400DDCE8
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1400DDD30 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL);
  return ObCloseHandle(Handle, 1);
}
