/*
 * XREFs of LdrGetDllHandle @ 0x180049620
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDll @ 0x1800492A0 (LdrpFindLoadedDll.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpLogDllStateEx2 @ 0x1800AC504 (LdrpLogDllStateEx2.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
    LoadedDll = LdrpFindLoadedDll((unsigned __int16 *)a3, (int)v13, &v12);
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
