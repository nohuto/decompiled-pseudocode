/*
 * XREFs of ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x18056D380
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2678 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$GetAppDisplayName@PEBGPEBG@AppUsageTelemetry@@SAX$$QEAPEBG0@Z @ 0x18056AF90 (--$GetAppDisplayName@PEBGPEBG@AppUsageTelemetry@@SAX$$QEAPEBG0@Z.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18057070C (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppDisplayName(
        RTL_SRWLOCK *this,
        HSTRING a2,
        HSTRING *a3)
{
  PCWSTR StringRawBuffer; // rdx
  __int64 v6; // r8
  PVOID Ptr; // rcx
  void **v8; // r8
  __int64 v9; // rax
  const WCHAR *v10; // rcx
  HRESULT String; // eax
  const WCHAR *v12; // rax
  const WCHAR *v13; // rax
  const WCHAR *v15; // [rsp+20h] [rbp-98h] BYREF
  const WCHAR *v16; // [rsp+28h] [rbp-90h] BYREF
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-88h] BYREF
  PCNZWCH sourceString[2]; // [rsp+38h] [rbp-80h] BYREF
  UINT32 length[4]; // [rsp+48h] [rbp-70h]
  void *v20[3]; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-48h]
  void *v22[4]; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *a3 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v20, StringRawBuffer);
  *(_OWORD *)sourceString = 0LL;
  *(__m128i *)length = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(sourceString[0]) = 0;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v17, this + 18);
  Ptr = this[17].Ptr;
  if ( Ptr )
  {
    v8 = v20;
    if ( v21 > 7 )
      v8 = (void **)v20[0];
    v9 = (*(__int64 (__fastcall **)(PVOID, void **, void **))(*(_QWORD *)Ptr + 88LL))(Ptr, v22, v8);
    std::wstring::operator=((__int64)sourceString, v9);
    std::wstring::_Tidy_deallocate(v22);
  }
  else
  {
    std::wstring::operator=((char *)sourceString, (char *)v20, v6);
  }
  v10 = (const WCHAR *)sourceString;
  if ( *(_QWORD *)&length[2] > 7uLL )
    v10 = sourceString[0];
  String = WindowsCreateString(v10, length[0], a3);
  if ( String < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF2,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)String,
      (int)v15);
  v12 = (const WCHAR *)sourceString;
  if ( *(_QWORD *)&length[2] > 7uLL )
    v12 = sourceString[0];
  v15 = v12;
  v13 = (const WCHAR *)v20;
  if ( v21 > 7 )
    v13 = (const WCHAR *)v20[0];
  v16 = v13;
  AppUsageTelemetry::GetAppDisplayName<unsigned short const *,unsigned short const *>(&v16, &v15);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
  std::wstring::_Tidy_deallocate((void **)sourceString);
  std::wstring::_Tidy_deallocate(v20);
  return 0LL;
}
