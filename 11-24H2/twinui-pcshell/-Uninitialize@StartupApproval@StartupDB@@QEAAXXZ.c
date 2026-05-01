/*
 * XREFs of ?Uninitialize@StartupApproval@StartupDB@@QEAAXXZ @ 0x180584888
 * Callers:
 *     ??1?$unique_ptr@VStartupApproval@StartupDB@@U?$default_delete@VStartupApproval@StartupDB@@@std@@@std@@QEAA@XZ @ 0x180583900 (--1-$unique_ptr@VStartupApproval@StartupDB@@U-$default_delete@VStartupApproval@StartupDB@@@std@@.c)
 *     ?Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z @ 0x180584218 (-Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall StartupDB::StartupApproval::Uninitialize(HKEY *this)
{
  if ( (unsigned __int64)*this > 2 )
    RegCloseKey(*this);
  *this = 0LL;
}
