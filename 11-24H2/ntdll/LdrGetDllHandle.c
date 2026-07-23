/*
 * XREFs of LdrGetDllHandle @ 0x180037180
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x180006024 (LdrpLogDllStateEx2.c)
 *     LdrpFindLoadedDll @ 0x180036E00 (LdrpFindLoadedDll.c)
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl LdrGetDllHandle(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  wchar_t *Buffer; // rbp
  NTSTATUS LoadedDll; // ebx
  PVOID v9; // rcx
  __int64 v11; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-90h]
  wchar_t *v15; // [rsp+60h] [rbp-88h]

  BaseAddress = 0LL;
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2314LL, "LdrGetDllHandleEx", 3LL, "DLL name: %wZ\n", DllName);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2315LL, "LdrGetDllHandleEx", 5LL, "%wZ\n", DllName);
  Buffer = DllName->Buffer;
  memset_thunk_772440563353939046(v13, 0, 0x80uLL);
  if ( ((unsigned __int8)DllPath & 1) != 0 || !DllPath )
  {
    v15 = Buffer;
    v14 = (unsigned int)DllPath & 0xFFFFFFFE;
  }
  else
  {
    v13[0] = DllPath;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      1552LL,
      "LdrpInitializeDllPath",
      2LL,
      "DLL search path passed in externally: %ws\n",
      DllPath);
    LdrpLogDllStateEx2(v11, Buffer, DllPath, 0x14C0u);
  }
  if ( DllHandle )
  {
    LoadedDll = LdrpFindLoadedDll((__int64)DllName, (__int64)v13, &BaseAddress);
    if ( LoadedDll >= 0 )
    {
      v9 = BaseAddress;
      *DllHandle = (PVOID)*((_QWORD *)BaseAddress + 6);
      LdrpDereferenceModule(v9);
    }
  }
  else
  {
    LoadedDll = -1073741811;
  }
  LdrpReleaseDllPath(v13);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2363LL, "LdrGetDllHandleEx", 4LL, "Status: 0x%08lx\n", LoadedDll);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2364LL, "LdrGetDllHandleEx", 6LL, "%x\n", LoadedDll);
  return LoadedDll;
}
