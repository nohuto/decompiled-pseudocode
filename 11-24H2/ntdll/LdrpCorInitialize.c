/*
 * XREFs of LdrpCorInitialize @ 0x180065128
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18000B1F0 (LdrpLoadDll.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18001C830 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpGetProcedureAddress @ 0x180058DA0 (LdrpGetProcedureAddress.c)
 *     LdrpBuildSystem32FileName @ 0x180065710 (LdrpBuildSystem32FileName.c)
 *     RtlQueryEnvironmentVariable @ 0x1800851D0 (RtlQueryEnvironmentVariable.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpCorInitialize(__int64 *a1)
{
  bool v2; // bl
  int Dll; // ebx
  int *v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v8; // [rsp+38h] [rbp-1C0h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-1B8h] BYREF
  int v10; // [rsp+50h] [rbp-1A8h] BYREF
  _WORD *v11; // [rsp+58h] [rbp-1A0h]
  _WORD v12[128]; // [rsp+60h] [rbp-198h] BYREF
  __int64 v13[16]; // [rsp+160h] [rbp-98h] BYREF

  v9 = 0LL;
  memset_thunk_772440563353939046(v13, 0, 0x80uLL);
  v2 = 1;
  v8 = 0LL;
  memset_thunk_772440563353939046(&v10, 0, 0x110uLL);
  v7 = 0LL;
  RtlEnterCriticalSection((__int64)&FastPebLock);
  if ( (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 19LL, 0LL, 0LL, &v7) == -1073741789 )
    v2 = (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 15LL, 0LL, 0LL, &v7) != -1073741789;
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  v11 = v12;
  v10 = 0x1000000;
  v12[0] = 0;
  if ( v2 )
  {
    Dll = LdrpBuildSystem32FileName(&v10, &LdrpMscoreeDllName);
    v4 = &v10;
  }
  else
  {
    v4 = (int *)&LdrpMscoreeDllName;
    Dll = 0;
  }
  if ( Dll >= 0 )
  {
    Dll = LdrpLoadDll((__int64)v4, (__int64)v13, 1, (__int64)&v8);
    LdrpReleaseDllPath(v13);
    if ( Dll >= 0 )
    {
      v6 = v8;
      Dll = LdrpGetProcedureAddress(*(_QWORD *)(v8 + 48), "_CorExeMain", 0, &v9);
      if ( Dll < 0 )
      {
        LdrpDecrementModuleLoadCountEx(v6, 0);
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
    RtlpSysVolFree((__int64)v11);
  return (unsigned int)Dll;
}
