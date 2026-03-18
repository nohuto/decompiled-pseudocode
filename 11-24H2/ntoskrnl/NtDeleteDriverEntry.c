/*
 * XREFs of NtDeleteDriverEntry @ 0x1407BDA40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     swprintf_s @ 0x140502E50 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x1409664F0 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140966F70 (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall NtDeleteDriverEntry(unsigned int a1)
{
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // edi
  int v6; // [rsp+30h] [rbp-38h] BYREF
  wchar_t Dst[12]; // [rsp+38h] [rbp-30h] BYREF

  if ( dword_140EFEAF0 == 2 )
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
