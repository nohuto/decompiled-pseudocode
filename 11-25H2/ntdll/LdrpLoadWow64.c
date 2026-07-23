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

__int64 __fastcall LdrpLoadWow64(PCUNICODE_STRING Source)
{
  int Dll; // ebx
  PVOID *v3; // r14
  unsigned int i; // edi
  NTSTATUS ProcedureAddress; // eax
  int v7; // [rsp+30h] [rbp-D0h]
  NTSTATUS v8; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddress[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11[16]; // [rsp+60h] [rbp-A0h] BYREF
  char v12; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&Destination.Length = 34078720LL;
  memset_thunk_772440563353939046(v11, 0, 0x80uLL);
  BaseAddress[0] = 0LL;
  Destination.Buffer = (wchar_t *)&v12;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeToString(&Destination, L"wow64.dll");
  LdrpInitializeDllPath(Destination.Buffer, 16385LL, v11);
  Dll = LdrpLoadDll(&Destination.Length, (int)v11, 2048, (__int64)BaseAddress);
  LdrpReleaseDllPath(v11);
  if ( Dll < 0 )
  {
    v7 = Dll;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      4340,
      (__int64)"LdrpLoadWow64",
      0,
      "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      &Destination,
      v7);
  }
  else
  {
    LdrProtectMrdata(0);
    v3 = (PVOID *)BaseAddress[0];
    for ( i = 0; i < 6; ++i )
    {
      ProcedureAddress = LdrGetProcedureAddress(
                           v3[6],
                           (PANSI_STRING)*(&off_180175BC0 + 2 * i),
                           0,
                           (PVOID *)*(&off_180175BC0 + 2 * i + 1));
      Dll = ProcedureAddress;
      if ( ProcedureAddress < 0 )
      {
        v8 = ProcedureAddress;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          4363,
          (__int64)"LdrpLoadWow64",
          0,
          "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
          *(&off_180175BC0 + 2 * i),
          &Destination,
          v8);
        break;
      }
    }
    LdrProtectMrdata(1);
    LdrpDereferenceModule((char *)v3);
  }
  return (unsigned int)Dll;
}
