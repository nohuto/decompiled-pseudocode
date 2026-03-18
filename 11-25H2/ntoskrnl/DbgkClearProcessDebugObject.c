/*
 * XREFs of DbgkClearProcessDebugObject @ 0x1409BAAC0
 * Callers:
 *     PspTerminateAllThreads @ 0x1408BDBA4 (PspTerminateAllThreads.c)
 *     NtRemoveProcessDebug @ 0x1409BA890 (NtRemoveProcessDebug.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     DbgkpWakeTarget @ 0x1409BB05C (DbgkpWakeTarget.c)
 *     DbgkpMarkProcessPeb @ 0x140AABA14 (DbgkpMarkProcessPeb.c)
 */

__int64 __fastcall DbgkClearProcessDebugObject(PRKPROCESS PROCESS, __int64 a2)
{
  unsigned __int64 UserTime; // rbx
  int v5; // edi
  PVOID *v7; // rax
  PVOID **v8; // rdx
  PVOID ***v9; // rcx
  PVOID *v10; // r9
  _DWORD *v11; // rcx
  __int64 v12; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
  UserTime = PROCESS[1].UserTime;
  if ( UserTime && (UserTime == a2 || !a2) )
  {
    PROCESS[1].UserTime = 0LL;
    v5 = 0;
  }
  else
  {
    UserTime = 0LL;
    v5 = -1073740973;
  }
  KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v5 >= 0 )
    DbgkpMarkProcessPeb(PROCESS);
  if ( UserTime )
  {
    p_P = &P;
    P = &P;
    ExAcquireFastMutex((PKGUARDED_MUTEX)(UserTime + 24));
    v7 = *(PVOID **)(UserTime + 80);
    while ( v7 != (PVOID *)(UserTime + 80) )
    {
      v8 = (PVOID **)v7;
      v7 = (PVOID *)*v7;
      if ( v8[7] == (PVOID *)PROCESS )
      {
        if ( v7[1] != v8
          || (v9 = (PVOID ***)v8[1], *v9 != v8)
          || (*v9 = (PVOID **)v7, v7[1] = v9, v10 = p_P, *p_P != &P) )
        {
LABEL_14:
          __fastfail(3u);
        }
        v8[1] = p_P;
        *v8 = &P;
        *v10 = v8;
        p_P = (PVOID *)v8;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(UserTime + 24));
    ObfDereferenceObject((PVOID)UserTime);
    while ( 1 )
    {
      v11 = P;
      if ( P == &P )
        break;
      if ( *((PVOID **)P + 1) != &P )
        goto LABEL_14;
      v12 = *(_QWORD *)P;
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
        goto LABEL_14;
      P = *(PVOID *)P;
      *(_QWORD *)(v12 + 8) = &P;
      v11[18] = -1073740972;
      DbgkpWakeTarget(v11);
    }
  }
  return (unsigned int)v5;
}
