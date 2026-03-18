/*
 * XREFs of IopInitializeOfflineCrashDump @ 0x140594AD0
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x140C1C8B4 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     IopConstructInMemoryDumpHeader @ 0x140593950 (IopConstructInMemoryDumpHeader.c)
 *     IopInitializeInMemoryDumpData @ 0x14059488C (IopInitializeInMemoryDumpData.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     IoSetEnvironmentVariableEx @ 0x1409664F0 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140966F70 (IoGetEnvironmentVariableEx.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140A77340 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     IopCachePreviousBootData @ 0x140C1A560 (IopCachePreviousBootData.c)
 */

void __fastcall IopInitializeOfflineCrashDump(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  char v3; // [rsp+30h] [rbp-50h] BYREF
  char v4; // [rsp+31h] [rbp-4Fh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  PVOID P; // [rsp+40h] [rbp-40h]
  int v7; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v9[4]; // [rsp+60h] [rbp-20h] BYREF

  P = 0LL;
  v1 = 0;
  v9[0] = 2012912317;
  Handle = 0LL;
  dword_140E65E40 = 0;
  v9[1] = 1295123289;
  v9[2] = -198680387;
  v9[3] = 1266192359;
  v8[0] = 8388734LL;
  v8[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v4 = 0;
  v7 = 1;
  v3 = 0;
  if ( a1 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 2808) - 1) > 2 )
    {
      dword_140E65E40 = -1073741736;
    }
    else
    {
      PoOffCrashConfigTable = *(_OWORD *)(a1 + 2808);
      xmmword_140F0E3F0 = *(_OWORD *)(a1 + 2824);
      v2 = IopOpenRegistryKey(&Handle, 0LL, v8, 131097LL, 0);
      if ( v2 >= 0 )
      {
        if ( (int)IopGetRegistryValue(Handle) < 0 )
          goto LABEL_11;
        if ( *((_DWORD *)P + 3) )
          v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v1 == 1 )
        {
          OfflineDumpEnabled = 1;
          v3 = 1;
        }
        else
        {
LABEL_11:
          OfflineDumpEnabled = 0;
          if ( (unsigned int)PoOffCrashConfigTable >= 2 && (BYTE8(PoOffCrashConfigTable) & 4) != 0 )
            v3 = 4;
        }
        if ( (int)IoGetEnvironmentVariableEx(
                    (unsigned int)L"OfflineMemoryDumpUseCapability",
                    (unsigned int)v9,
                    (unsigned int)&v4,
                    (unsigned int)&v7,
                    0LL) < 0
          || v4 != v3 )
        {
          IoSetEnvironmentVariableEx(
            (unsigned int)L"OfflineMemoryDumpUseCapability",
            (unsigned int)v9,
            (unsigned int)&v3,
            1,
            7);
        }
        if ( OfflineDumpEnabled )
        {
          IopCachePreviousBootData(&Handle);
          IopInitializeInMemoryDumpData();
          IopConstructInMemoryDumpHeader();
          if ( (int)IopGetRegistryValue(Handle) >= 0 )
          {
            if ( *((_DWORD *)P + 3) )
              DumpPolicyAttemptOffline = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
        }
      }
      else
      {
        dword_140E65E40 = v2;
      }
    }
    if ( Handle )
      ObCloseHandle(Handle, 0);
  }
  else
  {
    dword_140E65E40 = -1073741275;
  }
}
