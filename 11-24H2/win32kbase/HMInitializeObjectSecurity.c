/*
 * XREFs of HMInitializeObjectSecurity @ 0x1401240C4
 * Callers:
 *     ?UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z @ 0x140123F20 (-UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z.c)
 *     ?UserSetUserObjectCapability@@YAHPEAXK0H@Z @ 0x1401646C0 (-UserSetUserObjectCapability@@YAHPEAXK0H@Z.c)
 * Callees:
 *     HMInitializeSecurityDescriptor @ 0x140124158 (HMInitializeSecurityDescriptor.c)
 */

__int64 __fastcall HMInitializeObjectSecurity(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  __int64 UserSessionState; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = UserSessionState;
  if ( (_BYTE)v2 == 1 || (_BYTE)v2 == 23 )
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(v5 + 40),
      CompareCapabilityTableEntries,
      AllocateCapabilityTableEntry,
      (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
      0LL);
  return HMInitializeSecurityDescriptor(v5, v6 + 16 * v2 + 42632);
}
