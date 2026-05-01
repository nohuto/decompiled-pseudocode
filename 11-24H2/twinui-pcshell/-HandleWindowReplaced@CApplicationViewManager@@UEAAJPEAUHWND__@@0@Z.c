/*
 * XREFs of ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x1801D8D30
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002EBC0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::HandleWindowReplaced(RTL_SRWLOCK *this, HWND a2, HWND a3)
{
  RTL_SRWLOCK *v5; // rbx
  _QWORD *Ptr; // rdi
  _QWORD *v7; // r14
  HWND v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+58h] [rbp+20h]

  v5 = this + 49;
  v10 = this + 49;
  AcquireSRWLockShared(this + 49);
  Ptr = this[50].Ptr;
  v7 = &Ptr[(__int64)this[51].Ptr];
  while ( Ptr != v7 )
  {
    v9 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, HWND *))(*(_QWORD *)*Ptr + 72LL))(*Ptr, &v9) >= 0 && v9 == a3 )
    {
      CApplicationViewManager::RaiseApplicationViewChanged(
        (__int64)this,
        (int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *))*Ptr,
        0xCu,
        0LL);
      break;
    }
    ++Ptr;
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return 0LL;
}
