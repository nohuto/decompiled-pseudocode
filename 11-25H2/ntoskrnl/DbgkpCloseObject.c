/*
 * XREFs of DbgkpCloseObject @ 0x1408E0060
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x14091F3D4 (PsTerminateProcess.c)
 *     DbgkpWakeTarget @ 0x1409BB05C (DbgkpWakeTarget.c)
 *     DbgkpMarkProcessPeb @ 0x140AABA14 (DbgkpMarkProcessPeb.c)
 */

void __fastcall DbgkpCloseObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rsi
  int v6; // ebx
  struct _KPROCESS *NextProcess; // rdi
  char v8; // bl
  _DWORD *v9; // rcx

  if ( a4 <= 1 )
  {
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a2 + 24));
    *(_DWORD *)(a2 + 96) |= 1u;
    v5 = *(_QWORD **)(a2 + 80);
    *(_QWORD *)(a2 + 88) = a2 + 80;
    *(_QWORD *)(a2 + 80) = a2 + 80;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 24));
    KeSetEvent((PRKEVENT)a2, 0, 0);
    v6 = *(_DWORD *)(a2 + 96) & 2;
    NextProcess = (struct _KPROCESS *)PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      v8 = v6 != 0 ? 2 : 0;
      do
      {
        if ( NextProcess[1].UserTime == a2 )
        {
          v8 &= ~1u;
          ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
          if ( NextProcess[1].UserTime == a2 )
          {
            NextProcess[1].UserTime = 0LL;
            v8 |= 1u;
          }
          KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
          if ( (v8 & 1) != 0 )
          {
            DbgkpMarkProcessPeb(NextProcess);
            if ( (v8 & 2) != 0 )
              PsTerminateProcess(NextProcess, 3221226324LL);
            ObfDereferenceObject((PVOID)a2);
          }
        }
        NextProcess = (struct _KPROCESS *)PsGetNextProcess(NextProcess);
      }
      while ( NextProcess );
    }
    while ( v5 != (_QWORD *)(a2 + 80) )
    {
      v9 = v5;
      v5 = (_QWORD *)*v5;
      v9[18] = -1073740972;
      DbgkpWakeTarget(v9);
    }
  }
}
