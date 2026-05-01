/*
 * XREFs of ??1CPersistence@ApplicationViewManagement@@QEAA@XZ @ 0x18007485C
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ @ 0x180074670 (-v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ.c)
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x1802165AC (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplicationViewManagement::CPersistence::~CPersistence(HKEY *this)
{
  HKEY v1; // rax

  v1 = *this;
  *this = 0LL;
  if ( v1 )
    RegCloseKey(v1);
}
