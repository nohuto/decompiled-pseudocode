/*
 * XREFs of NtDeleteDriverEntry @ 0x1407BDE90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x14094EF80 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x14094FA00 (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __cdecl NtDeleteDriverEntry(ULONG Id)
{
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // edi
  int v6; // [rsp+30h] [rbp-38h] BYREF
  wchar_t Dst[12]; // [rsp+38h] [rbp-30h] BYREF

  if ( dword_140EFEE10 == 2 )
  {
    if ( Id > 0xFFFF )
      return -1073741811;
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
        return -1073741727;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
      swprintf_s(Dst, 0xBuLL, L"Driver%04X", Id);
      v6 = 0;
      EnvironmentVariable = IoGetEnvironmentVariableEx(
                              (unsigned int)Dst,
                              (unsigned int)&EfiDriverVariablesGuid,
                              0,
                              (unsigned int)&v6,
                              0LL);
      if ( EnvironmentVariable == -1073741568 )
      {
        if ( ((2 * ((Id | (2 * Id)) & 0xC4444444)) & Id) == 0 )
        {
LABEL_14:
          ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
          KeLeaveCriticalRegion();
          return EnvironmentVariable;
        }
        swprintf_s(Dst, 0xBuLL, L"Driver%04x", Id);
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
  return -1073741822;
}
