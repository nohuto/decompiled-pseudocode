/*
 * XREFs of ?SetRect@CAppLayoutItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEBUtagRECT@@@Z @ 0x1806C6820
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppLayoutItem::SetRect(RTL_SRWLOCK *a1, int a2, const RECT *a3)
{
  struct tagRECT *v6; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v7, a1 + 3);
  if ( !a2 )
  {
    v6 = (struct tagRECT *)&a1[6];
    goto LABEL_5;
  }
  if ( a2 == 1 )
  {
    v6 = (struct tagRECT *)&a1[8];
LABEL_5:
    CopyRect(v6, a3);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
}
