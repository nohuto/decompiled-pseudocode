/*
 * XREFs of ?GetPendingActivationData@UwpWindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180428EC0
 * Callers:
 *     ?TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@_KPEAUIAsyncCallback@@@Z @ 0x1800D5944 (-TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x18041693C (--$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowEventDispatcher::GetPendingActivationData(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  _QWORD *Ptr; // rbx
  __int64 v8; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v9; // rcx
  const char *v10; // r9
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+18h] BYREF

  v15 = a2;
  *a3 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v14, this + 58);
  Ptr = this[65].Ptr;
  while ( 1 )
  {
    Ptr = (_QWORD *)*Ptr;
    if ( Ptr == this[65].Ptr )
      break;
    v8 = Ptr[2];
    if ( *(_QWORD *)(v8 + 8) == a2 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v8 + 16), 0LL);
      ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
        &v15,
        (__int64 *)&StringRawBuffer);
      v9 = *(struct Windows::Foundation::Collections::IPropertySet **)(Ptr[2] + 32LL);
      if ( v9 )
      {
        *a3 = v9;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v9 + 8LL))(v9);
      }
      else
      {
        *a3 = 0LL;
      }
    }
  }
  if ( !a3 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x86A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070490LL,
        v12);
    }
    catch ( ... )
    {
      *(_DWORD *)(v11 + 64) = wil::details::in1diag3::Return_CaughtException(
                                retaddr,
                                (void *)0x86E,
                                (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                                v10);
      return (unsigned int)v14;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v14);
  return 0LL;
}
