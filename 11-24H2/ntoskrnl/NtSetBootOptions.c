/*
 * XREFs of NtSetBootOptions @ 0x1407BE8B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     IoSetEnvironmentVariableEx @ 0x1409664F0 (IoSetEnvironmentVariableEx.c)
 */

__int64 __fastcall NtSetBootOptions(int *a1, char a2)
{
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v8; // eax
  struct _KTHREAD *v9; // rax
  int v10; // ebx
  unsigned int v11; // [rsp+34h] [rbp-34h] BYREF
  _DWORD v12[2]; // [rsp+38h] [rbp-30h] BYREF
  int v13; // [rsp+40h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-18h]

  v11 = 0;
  v12[0] = 0;
  if ( dword_140EFEAF0 != 2 || PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v5 = (unsigned __int64)(a1 + 1);
  if ( PreviousMode )
  {
    if ( v5 >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    v6 = *(_DWORD *)v5;
  }
  else
  {
    v6 = *(_DWORD *)v5;
  }
  v12[1] = v6;
  if ( v6 < 0x14 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  v13 = *a1;
  if ( v13 != 1 )
    return 3221225485LL;
  v11 = a1[2];
  v8 = a1[4];
  v12[0] = v8;
  if ( (a2 & 2) != 0 && v8 > 0xFFFF )
    return 3221225485LL;
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v10 = 0;
  if ( (a2 & 1) != 0 )
  {
    if ( v11 == -1 )
    {
      v11 = 0xFFFF;
    }
    else if ( v11 > 0xFFFE )
    {
      v11 = 65534;
    }
    v10 = IoSetEnvironmentVariableEx(
            (unsigned int)L"Timeout",
            (unsigned int)&EfiBootVariablesGuid,
            (unsigned int)&v11,
            2,
            1);
  }
  if ( v10 >= 0 && (a2 & 2) != 0 )
    v10 = IoSetEnvironmentVariableEx(
            (unsigned int)L"BootNext",
            (unsigned int)&EfiBootVariablesGuid,
            (unsigned int)v12,
            2,
            1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
