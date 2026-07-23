/*
 * XREFs of PopEtInit @ 0x140C34CA0
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     PopEtInitializeBuiltinAppId @ 0x14075D414 (PopEtInitializeBuiltinAppId.c)
 *     RtlInternTableInitialize @ 0x1407876E8 (RtlInternTableInitialize.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     PoEnergyContextStart @ 0x1408DEB60 (PoEnergyContextStart.c)
 *     PopEtAllocate @ 0x14099D3A0 (PopEtAllocate.c)
 *     RtlGetVersion @ 0x140A04F30 (RtlGetVersion.c)
 *     PoEnergyContextInitialize @ 0x140A4EF04 (PoEnergyContextInitialize.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 PopEtInit()
{
  __int64 Pool2; // rax
  _QWORD *v1; // rbx
  __int64 result; // rax
  _WORD *v3; // rcx
  __int16 dwBuildNumber; // dx
  __int16 dwMajorVersion; // ax
  bool v6; // cf
  __int16 dwMinorVersion; // ax
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r11
  struct _LIST_ENTRY *Flink; // rax
  __int64 *i; // rcx
  __int64 v15; // rcx
  __int64 *NextProcess; // rax
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22; // [rsp+32h] [rbp-CEh]
  int v23; // [rsp+38h] [rbp-C8h]
  int v24; // [rsp+4Ch] [rbp-B4h]
  int v25; // [rsp+54h] [rbp-ACh]
  int v26; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v27)(__int64, __int64, __int64, __int64); // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v28)(__int64 *); // [rsp+78h] [rbp-88h]
  _OSVERSIONINFOW VersionInformation; // [rsp+B0h] [rbp-50h] BYREF

  DestinationString = 0LL;
  if ( !PopEnergyEstimationEnabled )
    return 0LL;
  Pool2 = ExAllocatePool2(0x40uLL, 0x450uLL, 0x54456F50uLL);
  PopEtGlobals = Pool2;
  v1 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0((void *)(Pool2 + 32), 0, 0x430uLL);
  v1[3] = 0LL;
  v1[2] = 0LL;
  v1[1] = v1;
  *v1 = v1;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( RtlGetVersion(&VersionInformation) >= 0 )
  {
    v3 = (_WORD *)PopEtGlobals;
    dwBuildNumber = -1;
    dwMajorVersion = -1;
    if ( VersionInformation.dwMajorVersion < 0xFFFF )
      dwMajorVersion = VersionInformation.dwMajorVersion;
    v6 = VersionInformation.dwMinorVersion < 0xFFFF;
    *(_WORD *)(PopEtGlobals + 1070) = dwMajorVersion;
    dwMinorVersion = -1;
    if ( v6 )
      dwMinorVersion = VersionInformation.dwMinorVersion;
    v6 = VersionInformation.dwBuildNumber < 0xFFFF;
    v3[534] = dwMinorVersion;
    if ( v6 )
      dwBuildNumber = VersionInformation.dwBuildNumber;
    v3[533] = dwBuildNumber;
    v3[532] = 8894;
  }
  v8 = (_QWORD *)PopEtGlobals;
  *(_OWORD *)(PopEtGlobals + 40) = 0LL;
  v8[5] = 0LL;
  v8[11] = PopEtInternerAllocate;
  v8[12] = PopEtInternerFree;
  v8[13] = PopEtInternerLock;
  v8[14] = PopEtInternerUnlock;
  v8[15] = PopEtInternerEntryInitialize;
  RtlInternTableInitialize(v8 + 7, (__int64)(v8 + 11));
  PoEnergyContextInitialize(v8 + 16);
  v9 = PsIdleProcess;
  *((_QWORD *)PsIdleProcess + 205) = v10;
  PopEtInitializeBuiltinAppId((__int64)(v8 + 99), (__int64)L"Default");
  PopEtInitializeBuiltinAppId((__int64)(v8 + 110), (__int64)L"Undetermined");
  PopEtInitializeBuiltinAppId((__int64)(v8 + 121), (__int64)L"Overflow");
  PopEtInitializeBuiltinAppId((__int64)(v8 + 88), (__int64)L"IsrDpc");
  v11 = (__int64)(v8 + 77);
  *(_QWORD *)(v9[205] + 456LL) = v12;
  PopEtInitializeBuiltinAppId(v11, (__int64)L"System");
  Flink = PsInitialSystemProcess[3].ProcessListEntry.Flink;
  if ( Flink )
    Flink[28].Blink = (struct _LIST_ENTRY *)v11;
  for ( i = 0LL; ; i = v17 )
  {
    NextProcess = PsGetNextProcess(i);
    v17 = NextProcess;
    if ( !NextProcess )
      break;
    v15 = NextProcess[205];
    if ( v15 )
    {
      if ( !*(_QWORD *)(v15 + 456) )
      {
        *(_QWORD *)(v15 + 456) = PopEtGlobals + 792;
        PoEnergyContextStart((ULONG_PTR)NextProcess);
      }
    }
  }
  RtlInitUnicodeString(&DestinationString, L"EnergyTracker");
  memset_0(&v21, 0, 0x78uLL);
  v22 |= 4u;
  v27 = PopEtEnergyTrackerClose;
  v21 = 120;
  v28 = PopEtEnergyTrackerDelete;
  v25 = 1;
  v26 = 664;
  v23 = 402;
  v24 = 2031617;
  result = ObCreateObjectType(&DestinationString, &v21, 0LL, PopEtGlobals + 32);
  if ( (int)result >= 0 )
  {
    v18 = PopEtAllocate(0x270uLL);
    v19 = PopEtGlobals;
    *(_QWORD *)(PopEtGlobals + 1088) = v18;
    if ( !v18 )
      return 3221225626LL;
    *(_DWORD *)(v19 + 1096) = -1;
    return 0LL;
  }
  return result;
}
