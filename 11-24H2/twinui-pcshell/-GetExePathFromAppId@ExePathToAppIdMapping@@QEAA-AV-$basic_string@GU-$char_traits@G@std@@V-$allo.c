/*
 * XREFs of ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180574DD4
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180574C40 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?GetExePath@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180574D60 (-GetExePath@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18010EB48 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExePathToAppIdMapping::GetExePathFromAppId(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v6; // r10
  _WORD *v7; // r8
  __int64 v8; // rcx
  __int64 *v9; // r10
  __int64 **v10; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v14, (RTL_SRWLOCK *)a1);
  v6 = **(__int64 ***)(a1 + 8);
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = v6 + 8;
    if ( (unsigned __int64)v6[11] > 7 )
      v7 = *(_WORD **)v7;
    v8 = (__int64)a3;
    if ( (unsigned __int64)a3[3] > 7 )
      v8 = *a3;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(v8, a3[2], v7, v6[10]) )
    {
      std::wstring::wstring(a2, (__int64)(v9 + 4));
      goto LABEL_19;
    }
    v10 = (__int64 **)v9[2];
    if ( *((_BYTE *)v10 + 25) )
    {
      for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25) && v9 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v9 = i;
      v6 = i;
    }
    else
    {
      v6 = (__int64 *)v9[2];
      for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
LABEL_19:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v14);
  return a2;
}
