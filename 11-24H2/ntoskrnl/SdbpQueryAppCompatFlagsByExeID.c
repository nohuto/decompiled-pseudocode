/*
 * XREFs of SdbpQueryAppCompatFlagsByExeID @ 0x1408079B4
 * Callers:
 *     SdbGetEntryFlags @ 0x140A9FFF0 (SdbGetEntryFlags.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     AslRegistryGetKey @ 0x140809214 (AslRegistryGetKey.c)
 *     AslRegistryGetUInt32 @ 0x1408094D8 (AslRegistryGetUInt32.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpQueryAppCompatFlagsByExeID(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int Key; // eax
  unsigned int v7; // ebx
  int UInt32; // eax
  bool v9; // zf
  int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+54h] [rbp+Ch]
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v12 = HIDWORD(a1);
  v11 = 0;
  Handle = 0LL;
  Key = AslRegistryGetKey(
          &Handle,
          L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags",
          2147483904LL,
          a3);
  v7 = Key;
  if ( Key >= 0 )
  {
    UInt32 = AslRegistryGetUInt32(&v11, Handle, a2);
    v7 = UInt32;
    if ( UInt32 >= 0 )
    {
      v7 = 0;
    }
    else if ( UInt32 != -1073741772 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpQueryAppCompatFlagsByExeID",
        75,
        (unsigned int)"AslRegistryGetUInt32 failed for key: '%ws' [%x]");
    }
  }
  else if ( Key != -1073741772 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpQueryAppCompatFlagsByExeID",
      64,
      (unsigned int)"AslRegistryGetKey failed [%x]");
  }
  v9 = Handle == 0LL;
  *a4 = v11;
  if ( !v9 )
    ZwClose(Handle);
  return v7;
}
