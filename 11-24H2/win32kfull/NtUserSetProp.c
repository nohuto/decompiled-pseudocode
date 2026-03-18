/*
 * XREFs of NtUserSetProp @ 0x140246760
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402BF08C (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 */

__int64 __fastcall NtUserSetProp(__int64 a1, int a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v6 = 0;
  EnterSharedCrit(0LL, 0LL);
  v10[0] = 0;
  v11 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v10);
  v7 = ValidatePropWindow(a1, 3LL);
  if ( v7 )
    v6 = InternalSetProp(v7, (unsigned __int16)a2, a3, HIWORD(a2) != 0 ? 2 : 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v10);
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
