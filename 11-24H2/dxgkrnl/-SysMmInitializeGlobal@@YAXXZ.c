/*
 * XREFs of ?SysMmInitializeGlobal@@YAXXZ @ 0x1402873BC
 * Callers:
 *     DriverEntry @ 0x140435078 (DriverEntry.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x140050C58 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x140056FDC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064960 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?SmmLoadConfiguration@@YAXXZ @ 0x14018481C (-SmmLoadConfiguration@@YAXXZ.c)
 *     SmmInitEtw @ 0x1403F5A44 (SmmInitEtw.c)
 */

void SysMmInitializeGlobal(void)
{
  unsigned int v0; // ebx
  int IommuInterface; // eax
  int v2; // eax

  SmmInitEtw();
  SmmLoadConfiguration();
  if ( (dword_140161610 & 0x200) != 0 )
    v0 = 3;
  else
    v0 = ((dword_140161610 & 0x100) != 0) + 1;
  IommuInterface = IoGetIommuInterfaceEx(v0, 0LL, &SmmGlobal);
  if ( IommuInterface < 0 )
  {
    WdLogSingleEntry2(3LL, v0, IommuInterface);
    dword_140161528 = 0;
    WdLogGlobalForLineNumber = 90;
  }
  if ( (unsigned int)SmmGetIommuInterfaceVersion() >= 2 )
  {
    if ( SmmUseIommuV2Interface() || SmmUseIommuV3Interface() )
    {
      v2 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))qword_140161530)(
             1LL,
             0LL,
             0LL,
             0LL,
             &qword_140161608);
      if ( v2 >= 0 )
        return;
    }
    else
    {
      v2 = -1073741823;
    }
    WdLogSingleEntry1(3LL, v2);
    dword_140161528 = 0;
    WdLogGlobalForLineNumber = 148;
  }
}
