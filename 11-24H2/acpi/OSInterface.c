/*
 * XREFs of OSInterface @ 0x140051490
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     _stricmp_0 @ 0x1400567F7 (_stricmp_0.c)
 *     Feature_Servicing_NewOsiString__private_IsEnabledNoReportingNoInline @ 0x14006F5C0 (Feature_Servicing_NewOsiString__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall OSInterface(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r12d
  unsigned int v7; // esi
  const char **v8; // r14
  unsigned int v9; // ebx
  const char *v10; // r15
  bool v11; // al
  bool v12; // cf
  _QWORD v14[24]; // [rsp+20h] [rbp-A9h] BYREF

  v14[19] = "Windows 2020";
  v14[20] = "Windows 2021";
  v14[21] = "Windows 2022";
  v14[22] = "Windows 2025H2";
  v6 = ((unsigned int)Feature_Servicing_NewOsiString__private_IsEnabledNoReportingNoInline(
                        a1,
                        a2,
                        a3,
                        a4,
                        "Windows 2000",
                        "Windows 2001",
                        "Windows 2001 SP1",
                        "Windows 2001.1",
                        "Windows 2001 SP2",
                        "Windows 2001.1 SP1",
                        "Windows 2006",
                        "Windows 2006 SP1",
                        "Windows 2006.1",
                        "Windows 2009",
                        "Windows 2012",
                        "Windows 2013",
                        "Windows 2015",
                        "Windows 2016",
                        "Windows 2017",
                        "Windows 2017.2",
                        "Windows 2018",
                        "Windows 2018.2",
                        "Windows 2019") != 0)
     + 22;
  v7 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "A");
  if ( !v7 )
  {
    v7 = ValidateArgTypes(a1, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, "Z");
    if ( !v7 )
    {
      v8 = (const char **)v14;
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
      v9 = 0;
      v10 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) + 32LL);
      while ( stricmp_0(*v8, v10) )
      {
        ++v9;
        ++v8;
        if ( v9 >= v6 )
          goto LABEL_9;
      }
      v11 = IsCompatableDSDTRevision();
      v7 = 0;
      v12 = gdwHighestOSVerQueried < v9;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)v11 & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      if ( v12 )
        gdwHighestOSVerQueried = v9;
LABEL_9:
      if ( ghCheckOsiString && (int)ghCheckOsiString(v10) >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL)
                                                 + 0xFFFFFFFF;
        return 0;
      }
    }
  }
  return v7;
}
