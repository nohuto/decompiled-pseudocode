/*
 * XREFs of NtDeleteDriverEntry @ 0x1407AE270
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     swprintf_s @ 0x1405006D0 (swprintf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     IoSetEnvironmentVariableEx @ 0x140821C20 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x1408224D8 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtDeleteDriverEntry(unsigned int a1)
{
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // edi
  int v6; // [rsp+30h] [rbp-38h] BYREF
  wchar_t Dst[12]; // [rsp+38h] [rbp-30h] BYREF

  if ( dword_140EFE810 == 2 )
  {
    if ( a1 > 0xFFFF )
      return 3221225485LL;
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
        return 3221225569LL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
      swprintf_s(Dst, 0xBuLL, L"Driver%04X", a1);
      v6 = 0;
      EnvironmentVariable = IoGetEnvironmentVariableEx(
                              (unsigned int)Dst,
                              (unsigned int)&EfiDriverVariablesGuid,
                              0,
                              (unsigned int)&v6,
                              0LL);
      if ( EnvironmentVariable == -1073741568 )
      {
        if ( ((2 * ((a1 | (2 * a1)) & 0xC4444444)) & a1) == 0 )
        {
LABEL_14:
          ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
          KeLeaveCriticalRegion();
          return EnvironmentVariable;
        }
        swprintf_s(Dst, 0xBuLL, L"Driver%04x", a1);
        v6 = 0;
        EnvironmentVariable = IoGetEnvironmentVariableEx(
                                (unsigned int)Dst,
                                (unsigned int)&EfiDriverVariablesGuid,
                                0,
                                (unsigned int)&v6,
                                0LL);
      }
      if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
        EnvironmentVariable = IoSetEnvironmentVariableEx(
                                (unsigned int)Dst,
                                (unsigned int)&EfiDriverVariablesGuid,
                                0,
                                0,
                                1);
      goto LABEL_14;
    }
  }
  return 3221225474LL;
}
