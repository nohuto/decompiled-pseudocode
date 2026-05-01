/*
 * XREFs of ?SetViewData@CAppLayoutItem@@UEAAXPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1806C6890
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall CAppLayoutItem::SetViewData(RTL_SRWLOCK *this, const struct APPLICATION_VIEW_DATA *a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v4, this + 3);
  *(_OWORD *)&this[10].Ptr = *(_OWORD *)a2;
  *(_OWORD *)&this[12].Ptr = *((_OWORD *)a2 + 1);
  this[14].Ptr = *(PVOID *)((char *)a2 + 32);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
}
