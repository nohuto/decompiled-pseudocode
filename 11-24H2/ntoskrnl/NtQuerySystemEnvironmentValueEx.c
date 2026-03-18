/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x1409667C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExUnlockUserBuffer @ 0x14026893C (ExUnlockUserBuffer.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCheckTokenMembershipEx @ 0x140471840 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x14085D560 (PsIsProcessAppContainer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1409666C0 (ExGetFirmwareEnvironmentVariable.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x140966F70 (IoGetEnvironmentVariableEx.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140AA0B18 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQuerySystemEnvironmentValueEx(
        __int64 a1,
        __int128 *a2,
        volatile void *a3,
        unsigned int *a4,
        _DWORD *a5)
{
  BOOLEAN v9; // bl
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned __int64 v13; // rbx
  _WORD *Pool2; // rax
  _WORD *v15; // rsi
  __int64 v16; // r8
  int EnvironmentVariable; // ebx
  int v18; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v21; // eax
  char v22; // cl
  char v23[4]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-A4h] BYREF
  int v25; // [rsp+38h] [rbp-A0h]
  _WORD *v26; // [rsp+40h] [rbp-98h]
  int v27; // [rsp+48h] [rbp-90h] BYREF
  __int64 v28; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+58h] [rbp-80h] BYREF
  __m128i Src; // [rsp+60h] [rbp-78h]
  __int128 v31; // [rsp+80h] [rbp-58h] BYREF

  Src = 0LL;
  v26 = 0LL;
  v31 = 0LL;
  v24 = 0;
  v27 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable(a1, (int)a2, (int)a3, (int)a4, (__int64)a5);
  v9 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v9 )
  {
    if ( PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process) )
      v9 = ExpFirmwareAccessAppContainerCheck(1LL);
    if ( !v9 )
    {
      v23[0] = 0;
      v21 = RtlCheckTokenMembershipEx(0LL, SeExports->SeUserModeDriversSid, 0, v23);
      v22 = v23[0];
      if ( v21 < 0 )
        v22 = 0;
      v23[0] = v22;
      if ( !v22 )
      {
        EnvironmentVariable = -1073741727;
        goto LABEL_40;
      }
    }
  }
  if ( dword_140EFEAF0 != 2 )
  {
    EnvironmentVariable = -1073741822;
LABEL_40:
    v15 = v26;
    goto LABEL_36;
  }
  if ( (a1 & 3) != 0 )
LABEL_24:
    ExRaiseDatatypeMisalignment();
  v10 = 0x7FFFFFFF0000LL;
  Src = *(__m128i *)a1;
  if ( (unsigned __int16)_mm_cvtsi128_si32(Src) )
  {
    if ( (Src.m128i_i8[8] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a2 & 3) == 0 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a4;
      *(_DWORD *)v11 = *(_DWORD *)v11;
      v12 = *a4;
      v24 = *a4;
      if ( !a3 )
      {
        v24 = 0;
        v12 = 0;
      }
      if ( v12 )
        ProbeForWrite(a3, v12, 1u);
      if ( a5 )
      {
        if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
          v10 = (__int64)a5;
        *(_DWORD *)v10 = *(_DWORD *)v10;
      }
      v31 = *a2;
      v13 = Src.m128i_u16[0];
      Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
      v15 = Pool2;
      v26 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, (const void *)Src.m128i_i64[1], (unsigned int)v13);
        v15[v13 >> 1] = 0;
        P = 0LL;
        v28 = 0LL;
        if ( v24
          && (LOBYTE(v16) = 1, v18 = ExLockUserBuffer(a3, v24, v16, 1LL, &v28, &P), EnvironmentVariable = v18, v18 < 0) )
        {
          v25 = v18;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
          v15 = v26;
          EnvironmentVariable = IoGetEnvironmentVariableEx(
                                  (_DWORD)v26,
                                  (unsigned int)&v31,
                                  v28,
                                  (unsigned int)&v24,
                                  (__int64)&v27);
          ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
          KeLeaveCriticalRegion();
          if ( P )
            ExUnlockUserBuffer((struct _MDL *)P);
          v25 = EnvironmentVariable;
        }
        if ( (int)(EnvironmentVariable + 0x80000000) < 0 || EnvironmentVariable == -1073741789 )
          *a4 = v24;
        if ( a5 && EnvironmentVariable >= 0 )
          *a5 = v27;
      }
      else
      {
        EnvironmentVariable = -1073741670;
        v25 = -1073741670;
      }
      goto LABEL_36;
    }
    goto LABEL_24;
  }
  EnvironmentVariable = -1073741819;
  v25 = -1073741819;
  v15 = v26;
LABEL_36:
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)EnvironmentVariable;
}
