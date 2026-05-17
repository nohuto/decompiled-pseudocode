/*
 * XREFs of LdrpLoadWow64 @ 0x1800D0A34
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrGetProcedureAddress @ 0x180007770 (LdrGetProcedureAddress.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18004A090 (LdrpLoadDll.c)
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpInitializeDllPath @ 0x1800D1140 (LdrpInitializeDllPath.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadWow64(const void **a1)
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
  RtlAppendUnicodeStringToString((unsigned __int16 *)v6, a1);
  RtlAppendUnicodeToString((unsigned __int16 *)v6, L"wow64.dll");
  LdrpInitializeDllPath(v7, 16385LL, v9);
  Dll = LdrpLoadDll((unsigned __int16 *)v6, (__int64)v9, 2048, (__int64)&v8);
  LdrpReleaseDllPath(v9);
  if ( Dll < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      4340,
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
              (int)*(&off_180175BC0 + 2 * i),
              0,
              (int)*(&off_180175BC0 + 2 * i + 1));
      if ( Dll < 0 )
      {
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrinit.c",
          4363,
          (__int64)"LdrpLoadWow64",
          0,
          "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
          (char)*(&off_180175BC0 + 2 * i));
        break;
      }
    }
    LdrProtectMrdata(1);
    LdrpDereferenceModule(v3);
  }
  return (unsigned int)Dll;
}
