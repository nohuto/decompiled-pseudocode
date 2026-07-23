/*
 * XREFs of CmpSetupConfigurationTree @ 0x140C4CCD0
 * Callers:
 *     CmpInitializeHardwareConfiguration @ 0x140C4CB7C (CmpInitializeHardwareConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140C4CCD0 (CmpSetupConfigurationTree.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     _stricmp @ 0x1404FB970 (_stricmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     CmpInitializeRegistryNode @ 0x1407DEF9C (CmpInitializeRegistryNode.c)
 *     CmpSetupConfigurationTree @ 0x140C4CCD0 (CmpSetupConfigurationTree.c)
 */

NTSTATUS __fastcall CmpSetupConfigurationTree(__int64 a1, void *a2, BOOL a3, unsigned int a4)
{
  unsigned __int16 i; // cx
  NTSTATUS result; // eax
  __int64 v10; // rcx
  int v11; // r14d
  HANDLE Handle; // [rsp+40h] [rbp-B8h] BYREF
  _WORD v13[48]; // [rsp+50h] [rbp-A8h] BYREF

  Handle = 0LL;
  for ( i = 0; i < 0x2Au; ++i )
  {
    if ( 2 * (unsigned __int64)i >= 0x54 )
      _report_rangecheckfailure();
    v13[i] = 0;
  }
  while ( a1 )
  {
    if ( *(_DWORD *)(a1 + 24) == 3 && !*(_DWORD *)(*(_QWORD *)a1 + 24LL) && *(_DWORD *)(a1 + 28) == 12 )
    {
      a4 = 0;
      a3 = stricmp(*(const char **)(a1 + 56), "ISA") == 0;
    }
    result = CmpInitializeRegistryNode(a1, a2, &Handle, a3, a4, (__int64)v13);
    if ( result < 0 )
      return result;
    v10 = *(_QWORD *)(a1 + 8);
    if ( v10 )
    {
      v11 = CmpSetupConfigurationTree(v10, Handle, a3, a4);
      if ( v11 < 0 )
      {
        ZwClose(Handle);
        return v11;
      }
    }
    ZwClose(Handle);
    a1 = *(_QWORD *)(a1 + 16);
  }
  return 0;
}
