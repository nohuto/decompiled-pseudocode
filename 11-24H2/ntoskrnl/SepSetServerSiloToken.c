/*
 * XREFs of SepSetServerSiloToken @ 0x14078FC08
 * Callers:
 *     SepCopyClientTokenAndSetSilo @ 0x14078F794 (SepCopyClientTokenAndSetSilo.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2F9D0 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140446E44 (SepDeReferenceLogonSessionDirect.c)
 *     SepAddTokenLogonSession @ 0x140793570 (SepAddTokenLogonSession.c)
 *     SepRemoveTokenLogonSession @ 0x140793A58 (SepRemoveTokenLogonSession.c)
 *     SepReferenceLogonSessionSilo @ 0x140A31B44 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepSetServerSiloToken(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v5 = -1073741816;
  }
  else
  {
    v5 = SepReferenceLogonSessionSilo(a1 + 24, a2, &v8);
    if ( v5 >= 0 )
    {
      if ( SeTokenLeakTracking )
        SepRemoveTokenLogonSession(a1);
      SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
      *(_QWORD *)(a1 + 216) = v8;
      if ( SeTokenLeakTracking )
        SepAddTokenLogonSession(a1);
      *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    }
  }
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
