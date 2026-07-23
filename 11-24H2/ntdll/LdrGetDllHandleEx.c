/*
 * XREFs of LdrGetDllHandleEx @ 0x180037360
 * Callers:
 *     CsrClientConnectToServer @ 0x180023B90 (CsrClientConnectToServer.c)
 *     SbpResolveBasedOnName @ 0x180113358 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x180006024 (LdrpLogDllStateEx2.c)
 *     LdrpFindLoadedDll @ 0x180036E00 (LdrpFindLoadedDll.c)
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpIncrementModuleLoadCount @ 0x180046500 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpPinModule @ 0x180089BC8 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  wchar_t *Buffer; // rdi
  ULONG v9; // edi
  NTSTATUS LoadedDll; // ebx
  PVOID *v11; // rbp
  int Count; // eax
  __int64 v14; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-90h]
  wchar_t *v18; // [rsp+60h] [rbp-88h]

  BaseAddress = 0LL;
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2314LL, "LdrGetDllHandleEx", 3LL, "DLL name: %wZ\n", DllName);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2315LL, "LdrGetDllHandleEx", 5LL, "%wZ\n", DllName);
  Buffer = DllName->Buffer;
  memset_thunk_772440563353939046(v16, 0, 0x80uLL);
  if ( ((unsigned __int8)DllPath & 1) != 0 || !DllPath )
  {
    v18 = Buffer;
    v17 = (unsigned int)DllPath & 0xFFFFFFFE;
  }
  else
  {
    v16[0] = DllPath;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      1552LL,
      "LdrpInitializeDllPath",
      2LL,
      "DLL search path passed in externally: %ws\n",
      DllPath);
    LdrpLogDllStateEx2(v14, Buffer, DllPath, 0x14C0u);
  }
  if ( (Flags & 0xFFFFFFF8) != 0 || (Flags & 3) == 3 )
    goto LABEL_15;
  if ( DllHandle )
  {
    v9 = Flags & 2;
    goto LABEL_7;
  }
  v9 = Flags & 2;
  if ( (Flags & 2) == 0 )
  {
LABEL_15:
    LoadedDll = -1073741811;
    goto LABEL_13;
  }
LABEL_7:
  LoadedDll = LdrpFindLoadedDll((__int64)DllName, (__int64)v16, &BaseAddress);
  if ( LoadedDll >= 0 )
  {
    v11 = (PVOID *)BaseAddress;
    if ( v9 )
    {
      Count = LdrpPinModule(BaseAddress);
    }
    else
    {
      if ( (Flags & 1) != 0 )
        goto LABEL_10;
      Count = LdrpIncrementModuleLoadCount(BaseAddress);
    }
    LoadedDll = Count;
    if ( Count < 0 )
    {
LABEL_12:
      LdrpDereferenceModule(v11);
      goto LABEL_13;
    }
LABEL_10:
    if ( DllHandle )
      *DllHandle = v11[6];
    goto LABEL_12;
  }
LABEL_13:
  LdrpReleaseDllPath(v16);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2363LL, "LdrGetDllHandleEx", 4LL, "Status: 0x%08lx\n", LoadedDll);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2364LL, "LdrGetDllHandleEx", 6LL, "%x\n", LoadedDll);
  return LoadedDll;
}
