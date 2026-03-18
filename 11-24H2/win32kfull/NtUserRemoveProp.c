/*
 * XREFs of NtUserRemoveProp @ 0x140244FE0
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402BF08C (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 */

__int64 __fastcall NtUserRemoveProp(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  EnterSharedCrit(0LL, 0LL);
  v8[0] = 0;
  v9 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v8);
  v5 = ValidatePropWindow(a1, 3LL);
  if ( v5 )
    v4 = InternalRemoveProp(v5, a2, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v8);
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
