/*
 * XREFs of ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18007137C
 * Callers:
 *     ?EnforceCapability@ContentManagement@@YAJXZ @ 0x18002EF20 (-EnforceCapability@ContentManagement@@YAJXZ.c)
 *     ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x1800615B0 (-GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA-AV-$.c)
 *     ?EnsureCallingProcessHasStoreAppInstallCapability@ContentManagement@@YAJXZ @ 0x180073FEC (-EnsureCallingProcessHasStoreAppInstallCapability@ContentManagement@@YAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A3E4 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180064A20 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180071470 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180071964 (-GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CallerIdentity::CheckCallerCapability(CallerIdentity *this, const unsigned __int16 *a2, bool *a3)
{
  CallerIdentity *v5; // rcx
  void **v6; // r8
  int CallingProcessHandle; // eax
  bool *v8; // r9
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CallerIdentity *v12; // [rsp+38h] [rbp+10h] BYREF

  *(_BYTE *)a2 = 0;
  v12 = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&v12,
    0LL);
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v5, (unsigned int)&v12, v6);
  v9 = CallingProcessHandle;
  if ( CallingProcessHandle >= 0 )
    v9 = CallerIdentity::CheckCapabilityFromProcessHandle(v12, this, a2, v8);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v12);
  return v9;
}
