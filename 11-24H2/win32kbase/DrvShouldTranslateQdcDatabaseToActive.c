/*
 * XREFs of DrvShouldTranslateQdcDatabaseToActive @ 0x1400E92E8
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x14016CB70 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x14016F580 (NtUserQueryDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

char __fastcall DrvShouldTranslateQdcDatabaseToActive(__int64 a1, unsigned int *a2)
{
  char v2; // bl
  __int64 DxgkWin32kInterface; // rax

  v2 = 0;
  if ( (*a2 & 7) == 4 )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
    if ( (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 536))() )
    {
      v2 = 1;
      *a2 = *a2 & 0xEFFFFFF8 | 0x10000002;
    }
  }
  return v2;
}
