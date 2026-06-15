/*
 * XREFs of ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x180032A40
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x180037A04 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000D680 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x18001AEA0 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 *     WPP_SF_Sd @ 0x180035A98 (WPP_SF_Sd.c)
 */

__int64 __fastcall CApplication::IsMutedForSleep(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  CProcess *v3; // rcx
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  CProcess **Next; // rax
  _QWORD *v8; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  v9 = v1;
  v5 = 0;
  v8 = v4;
  while ( v4 )
  {
    Next = (CProcess **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v3, &v8);
    v3 = *Next;
    if ( !*((_DWORD *)*Next + 104) && CProcess::GetSessionDisplayPolicyVolume(v3) < 0.000099999997 )
    {
      v5 = 1;
      break;
    }
    v4 = v8;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      26,
      (unsigned int)&WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
      *((_QWORD *)this + 3),
      v5);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  return v5;
}
