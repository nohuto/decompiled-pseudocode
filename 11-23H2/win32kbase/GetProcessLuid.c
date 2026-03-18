/*
 * XREFs of GetProcessLuid @ 0x1C0037670
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0036A38 (xxxInitProcessInfo.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C00375A0 (-InitPreviousUserString@@YAXXZ.c)
 *     xxxODI_ColorInit @ 0x1C0061B50 (xxxODI_ColorInit.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00A2650 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessLuid(PETHREAD Thread, PLUID AuthenticationId)
{
  struct _KTHREAD *CurrentThread; // rbx
  PACCESS_TOKEN v4; // rdi
  struct _KPROCESS *ThreadProcess; // rax
  unsigned int AuthenticationIdToken; // ebx
  unsigned __int8 EffectiveOnly; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+50h] [rbp+18h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+58h] [rbp+20h] BYREF

  ImpersonationLevel = SecurityAnonymous;
  CopyOnOpen = 0;
  CurrentThread = Thread;
  EffectiveOnly = 0;
  if ( !Thread )
    CurrentThread = KeGetCurrentThread();
  v4 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  if ( v4 && ImpersonationLevel >= SecurityImpersonation
    || (ThreadProcess = PsGetThreadProcess(CurrentThread), (v4 = PsReferencePrimaryToken(ThreadProcess)) != 0LL) )
  {
    AuthenticationIdToken = SeQueryAuthenticationIdToken(v4, AuthenticationId);
    ObfDereferenceObject(v4);
  }
  else
  {
    return (unsigned int)-1073741700;
  }
  return AuthenticationIdToken;
}
