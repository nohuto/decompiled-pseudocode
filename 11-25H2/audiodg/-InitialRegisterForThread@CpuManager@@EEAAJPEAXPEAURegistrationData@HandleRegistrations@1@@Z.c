/*
 * XREFs of ?InitialRegisterForThread@CpuManager@@EEAAJPEAXPEAURegistrationData@HandleRegistrations@1@@Z @ 0x140068BC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 */

__int64 __fastcall CpuManager::InitialRegisterForThread(
        CpuManager *this,
        void *a2,
        struct CpuManager::HandleRegistrations::RegistrationData *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  signed int LastError; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  HANDLE v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  NTSTATUS v14; // ebx
  HANDLE v15; // rax
  HANDLE TargetHandle; // [rsp+40h] [rbp-148h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-138h] BYREF
  _QWORD ThreadInformation[33]; // [rsp+58h] [rbp-130h] BYREF

  TargetHandle = 0LL;
  memset_0(&v18, 0, 0x108uLL);
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( DuplicateHandle(v7, a2, CurrentProcess, &TargetHandle, 0x400u, 0, 0) )
  {
    v10 = *((unsigned __int16 *)this + 272);
    v11 = TargetHandle;
    ThreadInformation[v10] |= *((_QWORD *)this + 69);
    v12 = v18;
    v13 = v10 + 1;
    if ( v18 <= v13 )
      v12 = v13;
    v18 = v12;
    v14 = NtSetInformationThread(v11, ThreadEnableAlignmentFaultFixup|0x20, ThreadInformation, 8 * v12);
    if ( v14 >= 0 )
    {
      v15 = TargetHandle;
      TargetHandle = 0LL;
      v9 = 0;
      *(_QWORD *)a3 = v15;
    }
    else
    {
      v9 = v14 | 0x10000000;
    }
  }
  else
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( TargetHandle )
    CloseHandle(TargetHandle);
  return v9;
}
