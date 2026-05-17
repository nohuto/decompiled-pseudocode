/*
 * XREFs of LdrLoadDll @ 0x180014E40
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeKernel32Functions @ 0x1800CB874 (LdrpInitializeKernel32Functions.c)
 *     SbpResolveBasedOnName @ 0x18011B468 (SbpResolveBasedOnName.c)
 *     RtlLogMessageInEventLogger @ 0x18011FC3C (RtlLogMessageInEventLogger.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18004A090 (LdrpLoadDll.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpLogDllStateEx2 @ 0x1800AC504 (LdrpLogDllStateEx2.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrLoadDll(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  int v8; // r9d
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12; // ecx
  __int64 v13; // rbp
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v17; // rcx
  char v18; // [rsp+28h] [rbp-C0h]
  __int64 v19; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-98h]
  __int128 v22; // [rsp+60h] [rbp-88h]
  __int128 v23; // [rsp+70h] [rbp-78h]
  __int128 v24; // [rsp+80h] [rbp-68h]
  __int128 v25; // [rsp+90h] [rbp-58h]
  __int128 v26; // [rsp+A0h] [rbp-48h]
  __int128 v27; // [rsp+B0h] [rbp-38h]

  v4 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( a2 )
  {
    v8 = *a2;
    v9 = 2 * (*a2 & 4);
    v10 = v9 | 0x40;
    if ( (v8 & 2) == 0 )
      v10 = v9;
    v11 = v10 | 0x80;
    if ( (v8 & 0x800000) == 0 )
      v11 = v10;
    v12 = v11 | 0x100;
    if ( (v8 & 0x1000) == 0 )
      v12 = v11;
    v4 = v12 | 0x400000;
    if ( v8 >= 0 )
      v4 = v12;
  }
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1347, (int)"LdrLoadDll", 3, "DLL name: %wZ\n", a3);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1348, (int)"LdrLoadDll", 5, "%wZ\n", a3);
  if ( (LdrpPolicyBits & 4) == 0 && (a1 & 0x401) == 0x401 )
    return 3221225485LL;
  if ( (v4 & 8) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      v14 = -1073740004;
    }
    else
    {
      v13 = *(_QWORD *)(a3 + 8);
      if ( (a1 & 1) != 0 || !a1 )
      {
        *(_QWORD *)&v22 = *(_QWORD *)(a3 + 8);
        DWORD2(v21) = a1 & 0xFFFFFFFE;
      }
      else
      {
        *(_QWORD *)&v20 = a1;
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrutil.c",
          1552,
          (int)"LdrpInitializeDllPath",
          2,
          "DLL search path passed in externally: %ws\n",
          a1);
        LdrpLogDllStateEx2(v17, v13, a1, 5312LL);
      }
      v14 = LdrpLoadDll(a3, &v20, v4, &v19);
      LdrpReleaseDllPath(&v20);
      if ( v14 >= 0 )
      {
        v15 = v19;
        *a4 = *(_QWORD *)(v19 + 48);
        LdrpDereferenceModule(v15);
      }
    }
  }
  else
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrapi.c",
      1371,
      (int)"LdrLoadDll",
      0,
      "Nonpackaged process attempted to load a packaged DLL.\n",
      v18);
    v14 = -1073741398;
  }
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1405, (int)"LdrLoadDll", 4, "Status: 0x%08lx\n", v14);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1406, (int)"LdrLoadDll", 6, "%x\n", v14);
  return (unsigned int)v14;
}
