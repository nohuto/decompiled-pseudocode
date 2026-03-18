/*
 * XREFs of ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x180264470
 * Callers:
 *     ??1?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAA@XZ @ 0x180264420 (--1-$unique_ptr@VCInternalMilCmdConnection@@U-$default_delete@VCInternalMilCmdConnection@@@std@@.c)
 *     ?reset@?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAAXPEAVCInternalMilCmdConnection@@@Z @ 0x1802645D8 (-reset@-$unique_ptr@VCInternalMilCmdConnection@@U-$default_delete@VCInternalMilCmdConnection@@@s.c)
 *     _dynamic_atexit_destructor_for__g_pConnection___0 @ 0x1802E9060 (_dynamic_atexit_destructor_for__g_pConnection___0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CInternalMilCmdConnection@@UEAA@XZ @ 0x180264444 (--1CInternalMilCmdConnection@@UEAA@XZ.c)
 */

CInternalMilCmdConnection *__fastcall CInternalMilCmdConnection::`scalar deleting destructor'(
        CInternalMilCmdConnection *this,
        char a2)
{
  CInternalMilCmdConnection::~CInternalMilCmdConnection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
