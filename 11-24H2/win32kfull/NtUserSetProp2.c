/*
 * XREFs of NtUserSetProp2 @ 0x140246810
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z @ 0x140290A38 (-CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402BF08C (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetProp2(__int64 a1, struct _UNICODE_STRING *a2, __int64 a3)
{
  int v6; // edi
  unsigned __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rax
  struct _RTL_ATOM_TABLE *v10; // rbx
  int v11; // eax
  ULONG v12; // ecx
  __int64 v13; // rcx
  RTL_ATOM v15; // [rsp+20h] [rbp-258h] BYREF
  _BYTE v16[24]; // [rsp+28h] [rbp-250h] BYREF
  unsigned __int16 v17[256]; // [rsp+40h] [rbp-238h] BYREF

  v6 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v16, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  v8 = ValidatePropWindow(a1, 3LL);
  if ( v8 && CaptureAtomName(a2, v17, v7) )
  {
    v9 = UserGlobalAtomTableCallout();
    v10 = (struct _RTL_ATOM_TABLE *)v9;
    if ( !v9 )
    {
      v12 = 5;
      goto LABEL_9;
    }
    v15 = 0;
    v11 = RtlAddAtomToAtomTableEx(v9, v17, &v15, 0LL);
    if ( v11 < 0
      || (v6 = InternalSetProp(v8, v15, a3, 2u)) == 0 && (v11 = RtlDeleteAtomFromAtomTable(v10, v15), v11 < 0) )
    {
      v12 = RtlNtStatusToDosError(v11);
LABEL_9:
      UserSetLastError(v12);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
  UserSessionSwitchLeaveCrit(v13);
  return v6;
}
