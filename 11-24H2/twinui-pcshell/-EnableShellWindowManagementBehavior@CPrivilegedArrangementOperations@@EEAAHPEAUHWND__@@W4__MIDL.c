/*
 * XREFs of ?EnableShellWindowManagementBehavior@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0004_0001@@1@Z @ 0x1803FA150
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18005DC10 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1801947DC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::EnableShellWindowManagementBehavior(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v7; // ebx
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*(_QWORD *)(a1 + 48), &v9);
  v7 = EnableWindowShellWindowManagementBehavior(a2, a3, a4);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v9);
  return v7;
}
