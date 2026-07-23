/*
 * XREFs of ExpLegacyWorkerInitialization @ 0x140656B74
 * Callers:
 *     ExpWorkerInitialization @ 0x140C45050 (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

__int64 ExpLegacyWorkerInitialization()
{
  int v0; // ecx
  int v1; // edx
  __int64 v2; // r8
  int v3; // eax
  unsigned __int16 *v4; // rax
  ULONG_PTR *v5; // rcx
  ULONG_PTR v6; // rax
  unsigned __int16 *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax

  v0 = ExpAdditionalCriticalWorkerThreads;
  if ( (unsigned int)ExpAdditionalCriticalWorkerThreads > 0x64 )
  {
    v0 = 100;
    ExpAdditionalCriticalWorkerThreads = 100;
  }
  v1 = ExpAdditionalDelayedWorkerThreads;
  if ( (unsigned int)ExpAdditionalDelayedWorkerThreads > 0x64 )
  {
    v1 = 100;
    ExpAdditionalDelayedWorkerThreads = 100;
  }
  v2 = 0LL;
  v3 = 5;
  if ( (_BYTE)dword_140FC521C )
    v3 = 10;
  ExCriticalWorkerThreads = v0 + v3;
  ExDelayedWorkerThreads = v1 + 7;
  v4 = 0LL;
  if ( (_UNKNOWN *)KeNodeBlock[0] != &KiNodeInit )
    v4 = (unsigned __int16 *)KeNodeBlock[0];
  v5 = *(ULONG_PTR **)(*(_QWORD *)(*((_QWORD *)PspSystemPartition + 2) + 8LL) + 8LL * *v4);
  v6 = 0LL;
  if ( (*v5 & 1) == 0 )
    v6 = *v5;
  ExWorkerQueue = v6;
  v7 = 0LL;
  if ( (_UNKNOWN *)KeNodeBlock[0] != &KiNodeInit )
    v7 = (unsigned __int16 *)KeNodeBlock[0];
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PspSystemPartition + 2) + 8LL) + 8LL * *v7);
  result = *(_QWORD *)(v8 + 8);
  if ( (result & 1) == 0 )
    v2 = *(_QWORD *)(v8 + 8);
  IoWorkerQueue = v2;
  return result;
}
