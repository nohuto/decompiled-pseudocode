/*
 * XREFs of LdrpLoadWow64 @ 0x18006531C
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrGetProcedureAddress @ 0x180004B80 (LdrGetProcedureAddress.c)
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18000B1F0 (LdrpLoadDll.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180065A30 (LdrpInitializeDllPath.c)
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadWow64(__int64 a1)
{
  int Dll; // ebx
  __int64 v3; // r14
  unsigned int i; // edi
  char v6[8]; // [rsp+40h] [rbp-C0h] BYREF
  char *v7; // [rsp+48h] [rbp-B8h]
  __int64 v8; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9[16]; // [rsp+60h] [rbp-A0h] BYREF
  char v10; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)v6 = 34078720LL;
  memset_thunk_772440563353939046(v9, 0, 0x80uLL);
  v8 = 0LL;
  v7 = &v10;
  RtlAppendUnicodeStringToString(v6, a1);
  RtlAppendUnicodeToString(v6, L"wow64.dll");
  LdrpInitializeDllPath(v7, 16385LL, v9);
  Dll = LdrpLoadDll((__int64)v6, (__int64)v9, 2048, (__int64)&v8);
  LdrpReleaseDllPath(v9);
  if ( Dll < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      4338,
      (__int64)"LdrpLoadWow64",
      0,
      "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      (char)v6);
  }
  else
  {
    LdrProtectMrdata(0);
    v3 = v8;
    for ( i = 0; i < 6; ++i )
    {
      Dll = LdrGetProcedureAddress(
              *(_QWORD *)(v3 + 48),
              (int)*(&off_1801736C0 + 2 * i),
              0,
              (int)*(&off_1801736C0 + 2 * i + 1));
      if ( Dll < 0 )
      {
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrinit.c",
          4361,
          (__int64)"LdrpLoadWow64",
          0,
          "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
          (char)*(&off_1801736C0 + 2 * i));
        break;
      }
    }
    LdrProtectMrdata(1);
    LdrpDereferenceModule(v3);
  }
  return (unsigned int)Dll;
}
