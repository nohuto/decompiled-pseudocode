/*
 * XREFs of LdrpCorInitialize @ 0x1800ACFF8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x180037BF0 (LdrpLoadDll.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180049230 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpGetProcedureAddress @ 0x18006E980 (LdrpGetProcedureAddress.c)
 *     LdrpBuildSystem32FileName @ 0x1800AD5E0 (LdrpBuildSystem32FileName.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpCorInitialize(char **a1)
{
  bool v2; // bl
  int Dll; // ebx
  unsigned __int16 *v4; // rcx
  char *v6; // rdi
  ULONG_PTR ReturnLength; // [rsp+30h] [rbp-1C8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-1C0h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-1B8h] BYREF
  int v10; // [rsp+50h] [rbp-1A8h] BYREF
  _WORD *v11; // [rsp+58h] [rbp-1A0h]
  _WORD v12[128]; // [rsp+60h] [rbp-198h] BYREF
  __int64 v13[16]; // [rsp+160h] [rbp-98h] BYREF

  v9 = 0LL;
  memset_thunk_772440563353939046(v13, 0, 0x80uLL);
  v2 = 1;
  BaseAddress = 0LL;
  memset_thunk_772440563353939046(&v10, 0, 0x110uLL);
  ReturnLength = 0LL;
  RtlEnterCriticalSection(&FastPebLock);
  if ( RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &ReturnLength) == -1073741789 )
    v2 = RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &ReturnLength) != -1073741789;
  RtlLeaveCriticalSection(&FastPebLock);
  v11 = v12;
  v10 = 0x1000000;
  v12[0] = 0;
  if ( v2 )
  {
    Dll = LdrpBuildSystem32FileName(&v10, &LdrpMscoreeDllName);
    v4 = (unsigned __int16 *)&v10;
  }
  else
  {
    v4 = (unsigned __int16 *)&LdrpMscoreeDllName;
    Dll = 0;
  }
  if ( Dll >= 0 )
  {
    Dll = LdrpLoadDll(v4, (int)v13, 1, (__int64)&BaseAddress);
    LdrpReleaseDllPath(v13);
    if ( Dll >= 0 )
    {
      v6 = (char *)BaseAddress;
      Dll = LdrpGetProcedureAddress(*((_QWORD *)BaseAddress + 6), "_CorExeMain", 0, (char **)&v9);
      if ( Dll < 0 )
      {
        LdrpDecrementModuleLoadCountEx((__int64)v6, 0);
      }
      else
      {
        LdrpCorExeMainRoutine = __ROR8__(v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        *a1 = v6;
      }
      LdrpDereferenceModule(v6);
    }
  }
  if ( v12 != v11 )
    RtlpSysVolFree(v11);
  return (unsigned int)Dll;
}
