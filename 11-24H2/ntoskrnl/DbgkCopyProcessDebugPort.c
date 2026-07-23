/*
 * XREFs of DbgkCopyProcessDebugPort @ 0x1408FDA74
 * Callers:
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409E358C (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpMarkProcessPeb @ 0x140AABE84 (DbgkpMarkProcessPeb.c)
 */

__int64 __fastcall DbgkCopyProcessDebugPort(PRKPROCESS PROCESS, __int64 a2, void *a3, char *a4)
{
  char v4; // di
  unsigned __int64 v6; // rbx
  __int64 v10; // rcx
  int v11; // ebp
  __int16 v12; // ax
  unsigned __int64 SecureHandle; // rbp
  char v14; // bp
  _BYTE v15[8]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-B0h]
  __int64 v17; // [rsp+30h] [rbp-A8h]

  v4 = 0;
  PROCESS[1].UserTime = 0LL;
  v6 = (unsigned __int64)a3;
  if ( a3 )
  {
    PsReferenceSiloContext(a3);
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 776) )
      goto LABEL_3;
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v6 = *(_QWORD *)(a2 + 776);
    if ( v6 )
    {
      if ( (*(_DWORD *)(a2 + 500) & 2) != 0 )
        v6 = 0LL;
      else
        PsReferenceSiloContext(*(void **)(a2 + 776));
    }
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
    if ( !v6 )
      goto LABEL_3;
  }
  LOBYTE(v10) = KeGetCurrentThread()->PreviousMode;
  if ( !(unsigned __int8)PsTestProtectedProcessIncompatibility(v10, a2, PROCESS) )
  {
    if ( (*(_DWORD *)(v6 + 96) & 4) != 0 )
    {
      if ( !PROCESS[1].ReadyTime || (v12 = WORD2(PROCESS[3].PerProcessorCycleTimes), v12 != 332) && v12 != 452 )
      {
        v11 = -1073741637;
        goto LABEL_20;
      }
    }
    SecureHandle = PROCESS->SecureState.SecureHandle;
    if ( (SecureHandle & 1) != 0 )
    {
      memset_0(v15, 0, 0x68uLL);
      v16 = SecureHandle;
      v17 = 1LL;
      v11 = VslpEnterIumSecureMode(2u, 0xCu, 0, (__int64)v15);
      if ( v11 < 0 )
        goto LABEL_20;
    }
    v14 = 0;
    ExAcquireFastMutex((PKGUARDED_MUTEX)(v6 + 24));
    if ( (*(_DWORD *)(v6 + 96) & 1) != 0 )
      v14 = 1;
    else
      PROCESS[1].UserTime = v6;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 24));
    if ( v14 )
    {
      ObfDereferenceObject((PVOID)v6);
    }
    else
    {
      DbgkpMarkProcessPeb(PROCESS);
      v4 = 1;
    }
LABEL_3:
    *a4 = v4;
    return 0LL;
  }
  v11 = -1073740014;
LABEL_20:
  ObfDereferenceObject((PVOID)v6);
  return (unsigned int)v11;
}
