/*
 * XREFs of MiRestartZeroingPass @ 0x140413810
 * Callers:
 *     MiReassessZeroThreads @ 0x1404125C0 (MiReassessZeroThreads.c)
 *     MiAddZeroingThreads @ 0x140413008 (MiAddZeroingThreads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRestartZeroingPass(__int64 a1)
{
  volatile __int32 *v1; // rdx
  volatile __int32 *i; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 16) = 0;
  v1 = (volatile __int32 *)(a1 + 192);
  *(_QWORD *)(a1 + 96) = 0LL;
  for ( i = *(volatile __int32 **)(a1 + 192); i != v1; i = *(volatile __int32 **)i )
    result = (unsigned int)_InterlockedExchange(i - 7, 0);
  return result;
}
