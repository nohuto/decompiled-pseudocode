/*
 * XREFs of ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18005BEBC
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18001C99C (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x18001D3E0 (--$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEn.c)
 * Callees:
 *     ??1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x18005C140 (--1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180071EDC (--3@YAXPEAX@Z.c)
 */

ModernResourceEnforcer::ModernResourceEnforcerWorkItem *__fastcall ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
        ModernResourceEnforcer::ModernResourceEnforcerWorkItem *this)
{
  ModernResourceEnforcer::ModernResourceEnforcerWorkItem::~ModernResourceEnforcerWorkItem(this);
  operator delete(this);
  return this;
}
