/*
 * XREFs of IopReadDumpRegistry @ 0x140594D8C
 * Callers:
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 *     IopInitializeCrashDump @ 0x140710F50 (IopInitializeCrashDump.c)
 * Callees:
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140A77340 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopReadDumpRegistry(__int64 a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  char v4; // [rsp+20h] [rbp-20h]
  _QWORD v5[2]; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+20h] BYREF

  Handle = 0LL;
  v5[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v5[0] = 8388734LL;
  v4 = 0;
  result = IopOpenRegistryKey(&Handle, 0LL, v5, 131097LL, v4);
  if ( result >= 0 )
  {
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( MEMORY[0xC] )
        IopAutoReboot = *(_DWORD *)MEMORY[8];
      ExFreePoolWithTag(0LL, 0);
    }
    if ( a2 && (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( MEMORY[0xC] )
        *a2 = *(_DWORD *)MEMORY[8];
      ExFreePoolWithTag(0LL, 0);
    }
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( MEMORY[0xC] )
        MinRemoveAllocSize = *(_DWORD *)MEMORY[8];
      ExFreePoolWithTag(0LL, 0);
    }
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( MEMORY[0xC] )
        UseRemovePagesArray = *(_DWORD *)MEMORY[8];
      ExFreePoolWithTag(0LL, 0);
    }
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( MEMORY[0xC] )
        PartialDumpControl = *(_DWORD *)MEMORY[8];
      ExFreePoolWithTag(0LL, 0);
    }
    return ObCloseHandle(Handle, 0);
  }
  return result;
}
