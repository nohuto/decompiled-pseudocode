/*
 * XREFs of ?InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z @ 0x180677A00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsBase::InitializeViewDependent(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+58h] [rbp+20h] BYREF

  wil::AcquireSRWLockExclusive(&v13, (RTL_SRWLOCK *)(a1 + 128));
  if ( a4 && *(_QWORD *)(a1 + 72) != a4 )
  {
    v12 = a4;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v12);
    v12 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = a4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  }
  *(_DWORD *)(a1 + 60) = a2;
  *(_BYTE *)(a1 + 96) = a5;
  if ( *(_DWORD *)(a1 + 80) )
    MicrosoftTelemetryAssertTriggeredNoArgs(v10, v9);
  else
    *(_DWORD *)(a1 + 80) = a3;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
  return 0LL;
}
