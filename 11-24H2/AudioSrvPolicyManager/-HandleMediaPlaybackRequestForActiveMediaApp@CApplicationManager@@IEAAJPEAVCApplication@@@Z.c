/*
 * XREFs of ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180037C94
 * Callers:
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180037D9C (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000D680 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180012580 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     WPP_SF_S @ 0x18002F290 (WPP_SF_S.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800325E0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 */

__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(
        CApplicationManager *this,
        struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  int v6; // ebx
  __int64 *Next; // rax
  _QWORD *v8; // rcx
  USHORT v9; // dx
  _QWORD *v11; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = this;
  if ( *((_DWORD *)a2 + 52) )
    goto LABEL_14;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  v5 = (_QWORD *)*((_QWORD *)a2 + 9);
  v12 = v3;
  v6 = 0;
  v11 = v5;
  while ( v5 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v4, &v11);
    v4 = *Next;
    if ( !*(_DWORD *)(*Next + 416) && *(_DWORD *)(v4 + 232) )
    {
      v6 = 1;
      break;
    }
    v5 = v11;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  if ( v6 || (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
  {
LABEL_14:
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v9 = 32;
      goto LABEL_18;
    }
  }
  else
  {
    CApplication::GrantGoodFaithPLMExemption((const wchar_t **)a2);
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v9 = 33;
LABEL_18:
      WPP_SF_S(v8[2], v9, &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids, *((const wchar_t **)a2 + 3));
    }
  }
  return 0LL;
}
