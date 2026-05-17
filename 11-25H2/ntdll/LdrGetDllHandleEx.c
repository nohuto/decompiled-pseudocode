/*
 * XREFs of LdrGetDllHandleEx @ 0x180049800
 * Callers:
 *     CsrClientConnectToServer @ 0x1800355E0 (CsrClientConnectToServer.c)
 *     SbpResolveBasedOnName @ 0x18011B468 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpPinModule @ 0x18003E278 (LdrpPinModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180047B20 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDll @ 0x1800492A0 (LdrpFindLoadedDll.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpLogDllStateEx2 @ 0x1800AC504 (LdrpLogDllStateEx2.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrGetDllHandleEx(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rdi
  int v9; // edi
  int LoadedDll; // ebx
  __int64 v11; // rbp
  int Count; // eax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-A8h] BYREF
  int v17; // [rsp+58h] [rbp-90h]
  __int64 v18; // [rsp+60h] [rbp-88h]

  v15 = 0LL;
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2314, (int)"LdrGetDllHandleEx", 3, "DLL name: %wZ\n", a4);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2315, (int)"LdrGetDllHandleEx", 5, "%wZ\n", a4);
  v8 = *(_QWORD *)(a4 + 8);
  memset_thunk_772440563353939046(v16, 0, 0x80uLL);
  if ( (a2 & 1) != 0 || !a2 )
  {
    v18 = v8;
    v17 = a2 & 0xFFFFFFFE;
  }
  else
  {
    v16[0] = a2;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrutil.c",
      1552,
      (int)"LdrpInitializeDllPath",
      2,
      "DLL search path passed in externally: %ws\n",
      a2);
    LdrpLogDllStateEx2(v14, v8, a2, 5312LL);
  }
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 3) == 3 )
    goto LABEL_15;
  if ( a5 )
  {
    v9 = a1 & 2;
    goto LABEL_7;
  }
  v9 = a1 & 2;
  if ( (a1 & 2) == 0 )
  {
LABEL_15:
    LoadedDll = -1073741811;
    goto LABEL_13;
  }
LABEL_7:
  LoadedDll = LdrpFindLoadedDll((unsigned __int16 *)a4, (int)v16, &v15);
  if ( LoadedDll >= 0 )
  {
    v11 = v15;
    if ( v9 )
    {
      Count = LdrpPinModule(v15);
    }
    else
    {
      if ( (a1 & 1) != 0 )
        goto LABEL_10;
      Count = LdrpIncrementModuleLoadCount(v15);
    }
    LoadedDll = Count;
    if ( Count < 0 )
    {
LABEL_12:
      LdrpDereferenceModule(v11);
      goto LABEL_13;
    }
LABEL_10:
    if ( a5 )
      *a5 = *(_QWORD *)(v11 + 48);
    goto LABEL_12;
  }
LABEL_13:
  LdrpReleaseDllPath(v16);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2363, (int)"LdrGetDllHandleEx", 4, "Status: 0x%08lx\n", LoadedDll);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2364, (int)"LdrGetDllHandleEx", 6, "%x\n", LoadedDll);
  return (unsigned int)LoadedDll;
}
