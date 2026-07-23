/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x14085BEE0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
 *     PspCompleteServerSiloShutdown @ 0x1407727C8 (PspCompleteServerSiloShutdown.c)
 *     PspBeginServerSiloShutdown @ 0x14085A824 (PspBeginServerSiloShutdown.c)
 *     PspGetNextJobProcess @ 0x14085CC88 (PspGetNextJobProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 */

__int64 __fastcall PspTerminateProcessesJobCallback(__int64 a1, __int64 a2)
{
  int *v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  struct _KTHREAD *CurrentThread; // r14
  __int64 i; // r9
  __int64 v9; // rax
  __int64 v10; // rbp
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]

  v12 = 0LL;
  v13 = 0LL;
  if ( PsIsServerSilo(a1) )
    v6 = PspBeginServerSiloShutdown(v5, *v4);
  else
    v6 = 0;
  CurrentThread = KeGetCurrentThread();
  for ( i = 0LL; ; i = v10 )
  {
    v9 = ((__int64 (__fastcall *)(__int64, struct _KTHREAD *, __int128 *, __int64))PspGetNextJobProcess)(
           a1,
           CurrentThread,
           &v12,
           i);
    v10 = v9;
    if ( !v9 )
      break;
    if ( (*(_DWORD *)(v9 + 496) & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    PspRemoveProcessFromJobChain((PEPROCESS)v9);
  }
  if ( v6 )
    PspCompleteServerSiloShutdown(a1);
  return 0LL;
}
