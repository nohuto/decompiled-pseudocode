/*
 * XREFs of IoInitializeLiveDump @ 0x140597A4C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     MmQueryMemoryRanges @ 0x1407EB410 (MmQueryMemoryRanges.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     IopOpenRegistryKey @ 0x140A77340 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void IoInitializeLiveDump()
{
  char v0; // [rsp+20h] [rbp-60h]
  _QWORD v1[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v2[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v3; // [rsp+60h] [rbp-20h]
  PVOID v4; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+90h] [rbp+10h] BYREF
  PVOID P; // [rsp+98h] [rbp+18h]

  Handle = 0LL;
  P = 0LL;
  v1[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DeviceGuard";
  v1[0] = 8257660LL;
  EtwRegister(&LiveDumpProvGuid, IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E06E80, 0LL, 0LL);
  v0 = 0;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, v1, 131097LL, v0) >= 0 )
  {
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
      ExFreePoolWithTag(P, 0);
    ObCloseHandle(Handle, 0);
  }
  v2[2] = 0LL;
  v2[0] = 0xF00000001LL;
  v3 = 0LL;
  v2[3] = 0x40000000LL;
  v2[1] = -2LL;
  LODWORD(v3) = 0x80000000;
  v4 = 0LL;
  if ( (int)MmQueryMemoryRanges(v2) >= 0 && *((_QWORD *)&v3 + 1) )
  {
    IOSpaceEnabled = 1;
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
}
