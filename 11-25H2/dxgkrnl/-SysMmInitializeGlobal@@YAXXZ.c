/*
 * XREFs of ?SysMmInitializeGlobal@@YAXXZ @ 0x14027FF1C
 * Callers:
 *     DriverEntry @ 0x140433078 (DriverEntry.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1400511E8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1400577CC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064D40 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?SmmLoadConfiguration@@YAXXZ @ 0x14018236C (-SmmLoadConfiguration@@YAXXZ.c)
 *     SmmInitEtw @ 0x1403FBAAC (SmmInitEtw.c)
 */

void SysMmInitializeGlobal(void)
{
  unsigned int v0; // ebx
  int IommuInterface; // eax
  int v2; // eax

  SmmInitEtw();
  SmmLoadConfiguration();
  if ( (dword_14015E600 & 0x200) != 0 )
    v0 = 3;
  else
    v0 = ((dword_14015E600 & 0x100) != 0) + 1;
  IommuInterface = IoGetIommuInterfaceEx(v0, 0LL, &SmmGlobal);
  if ( IommuInterface < 0 )
  {
    WdLogSingleEntry2(3LL, v0, IommuInterface);
    dword_14015E518 = 0;
    WdLogGlobalForLineNumber = 90;
  }
  if ( (unsigned int)SmmGetIommuInterfaceVersion() >= 2 )
  {
    if ( SmmUseIommuV2Interface() || SmmUseIommuV3Interface() )
    {
      v2 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))qword_14015E520)(
             1LL,
             0LL,
             0LL,
             0LL,
             &qword_14015E5F8);
      if ( v2 >= 0 )
        return;
    }
    else
    {
      v2 = -1073741823;
    }
    WdLogSingleEntry1(3LL, v2);
    dword_14015E518 = 0;
    WdLogGlobalForLineNumber = 148;
  }
}
