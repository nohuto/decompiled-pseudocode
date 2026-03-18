/*
 * XREFs of ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x140232210
 * Callers:
 *     ?EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1402322E0 (-EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NP.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140023480 (GreLockDwmState.c)
 *     ReferenceDwmProcess @ 0x14006F910 (ReferenceDwmProcess.c)
 *     UserDereferenceDwmProcess @ 0x14006F990 (UserDereferenceDwmProcess.c)
 *     DCompositionIsVailContainer @ 0x140222A9C (DCompositionIsVailContainer.c)
 *     DirectComposition::TryOpenSharedSectionAndGetUserModeHandle @ 0x1402324D4 (DirectComposition--TryOpenSharedSectionAndGetUserModeHandle.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::CreateDwmHandle(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this)
{
  __int64 UserModeHandle; // rbx
  __int64 v3; // rcx
  __int64 v5; // rcx
  struct _KPROCESS *v6; // rax
  __int64 v7; // rcx
  struct _KPROCESS *v8; // rdi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  UserModeHandle = 0LL;
  if ( (unsigned int)DCompositionIsVailContainer() )
    return 0LL;
  GreLockDwmState(v3);
  v6 = (struct _KPROCESS *)ReferenceDwmProcess(v5);
  v8 = v6;
  if ( v6 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v6, &ApcState);
    UserModeHandle = DirectComposition::TryOpenSharedSectionAndGetUserModeHandle(
                       (char *)this + 72,
                       (char *)this + 88,
                       (char *)this + 56);
    KeUnstackDetachProcess(&ApcState);
    UserDereferenceDwmProcess(v8);
  }
  GreUnlockDwmState(v7);
  return UserModeHandle;
}
