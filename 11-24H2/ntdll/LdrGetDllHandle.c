/*
 * XREFs of LdrGetDllHandle @ 0x18000A780
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDll @ 0x18000A400 (LdrpFindLoadedDll.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpLogDllStateEx2 @ 0x180084174 (LdrpLogDllStateEx2.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrGetDllHandle(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rbp
  int LoadedDll; // ebx
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-A8h] BYREF
  int v14; // [rsp+58h] [rbp-90h]
  __int64 v15; // [rsp+60h] [rbp-88h]

  v12 = 0LL;
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2314, (int)"LdrGetDllHandleEx", 3, "DLL name: %wZ\n", a3);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2315, (int)"LdrGetDllHandleEx", 5, "%wZ\n", a3);
  v7 = *(_QWORD *)(a3 + 8);
  memset_thunk_772440563353939046(v13, 0, 0x80uLL);
  if ( (a1 & 1) != 0 || !a1 )
  {
    v15 = v7;
    v14 = a1 & 0xFFFFFFFE;
  }
  else
  {
    v13[0] = a1;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrutil.c",
      1552,
      (int)"LdrpInitializeDllPath",
      2,
      "DLL search path passed in externally: %ws\n",
      a1);
    LdrpLogDllStateEx2(v11, v7, a1, 5312LL);
  }
  if ( a4 )
  {
    LoadedDll = LdrpFindLoadedDll(a3, (__int64)v13, &v12);
    if ( LoadedDll >= 0 )
    {
      v9 = v12;
      *a4 = *(_QWORD *)(v12 + 48);
      LdrpDereferenceModule(v9);
    }
  }
  else
  {
    LoadedDll = -1073741811;
  }
  LdrpReleaseDllPath(v13);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2363, (int)"LdrGetDllHandleEx", 4, "Status: 0x%08lx\n", LoadedDll);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2364, (int)"LdrGetDllHandleEx", 6, "%x\n", LoadedDll);
  return (unsigned int)LoadedDll;
}
