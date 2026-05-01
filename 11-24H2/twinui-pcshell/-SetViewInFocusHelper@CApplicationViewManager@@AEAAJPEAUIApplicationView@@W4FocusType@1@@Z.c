/*
 * XREFs of ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x180189C58
 * Callers:
 *     ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18030DEC0 (-SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002EBC0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::SetViewInFocusHelper(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v6; // rbx
  int (__fastcall ***v7)(_QWORD, GUID *, LPMALLOC *); // rdx
  int (__fastcall ***v8)(_QWORD, GUID *, LPMALLOC *); // rdx
  __int64 v9; // rcx
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp+8h] BYREF

  v6 = (RTL_SRWLOCK *)(a1 + 528);
  v11 = (RTL_SRWLOCK *)(a1 + 528);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 528));
  if ( a3 )
  {
    if ( a3 == 1 && a2 == *(_QWORD *)(a1 + 568) )
    {
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
      return 0LL;
    }
    goto LABEL_4;
  }
  if ( a2 != *(_QWORD *)(a1 + 568) || (*(_BYTE *)(a1 + 576) & 1) != 0 )
  {
LABEL_4:
    v7 = *(int (__fastcall ****)(_QWORD, GUID *, LPMALLOC *))(a1 + 568);
    if ( v7 && v7 != (int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *))a2 )
      CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v7, 9u, a2);
    v8 = *(int (__fastcall ****)(_QWORD, GUID *, LPMALLOC *))(a1 + 568);
    if ( v8 != (int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *))a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 568) = a2;
      v8 = (int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *))a2;
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, a2);
        v8 = *(int (__fastcall ****)(_QWORD, GUID *, LPMALLOC *))(a1 + 568);
      }
    }
    if ( a3 == 1 )
      *(_DWORD *)(a1 + 576) |= 1u;
    else
      *(_DWORD *)(a1 + 576) &= ~1u;
    if ( v8 )
      CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v8, 8 - (a3 != 1), 0LL);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return 0LL;
}
