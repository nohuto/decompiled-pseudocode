/*
 * XREFs of ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x180084F20
 * Callers:
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800C03AC (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescripto.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18004E288 (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ??1?$pair@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x1800671D8 (--1-$pair@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wi.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800C367C (-IsExclusiveModeSession@CAudioSession@@QEAAHXZ.c)
 *     ??$?0$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@$0A@@?$pair@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x1800C5FC0 (--$-0$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::FindExclusiveModeAudioSession(
        CAudioSessionManager *this,
        struct CAudioSession **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *i; // rbx
  int IsExclusiveModeSession; // esi
  int v9; // eax
  unsigned int v10; // ebx
  int v11[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v12[80]; // [rsp+30h] [rbp-98h] BYREF
  CAudioSession *v13; // [rsp+80h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  *a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  *(_QWORD *)v11 = v4;
  v5 = (_QWORD *)*((_QWORD *)this + 7);
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    std::pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>(
      v12,
      i + 2);
    IsExclusiveModeSession = CAudioSession::IsExclusiveModeSession(v13);
    std::pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::~pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>((CAudioSessionInstanceId *)v12);
    if ( IsExclusiveModeSession )
      break;
  }
  if ( i == *((_QWORD **)this + 7) )
  {
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2147942402LL;
  }
  else
  {
    v9 = wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>(i + 12, a2);
    v10 = v9;
    if ( v9 >= 0 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v11);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v9);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v11);
      return v10;
    }
  }
}
