/*
 * XREFs of ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180013B70
 * Callers:
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180013B30 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180004DE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___ @ 0x180013CA4 (std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--remove_if__lambda_6.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001E3D8 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDuckingManager::OnStateChanged(
        CDuckingManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  __int64 result; // rax
  const char *v7; // r9
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioSessionInfo *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  if ( *((_BYTE *)this + 408) )
    return 0LL;
  try
  {
    if ( (*(unsigned int (**)(void))(*(_QWORD *)a2 + 40LL))() )
      return 0LL;
    if ( (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v14 + 56LL))(v14) )
      return 0LL;
    if ( a4 == AudioSessionStateActive )
    {
      if ( (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v14 + 48LL))(v14) )
        goto LABEL_14;
      v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
      v9 = (_QWORD *)((char *)this + 64);
      v11 = v9;
      v12 = 0LL;
      v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      v10[1] = v14;
      *v10 = *v9;
      v12 = 0LL;
      *v9 = v10;
      std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>(&v11);
      if ( !v8 )
        goto LABEL_14;
    }
    else
    {
      if ( a4 )
        goto LABEL_14;
      v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
      std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___(
        (char *)this + 64,
        &v14);
      if ( this == (CDuckingManager *)-24LL )
        goto LABEL_14;
    }
    LeaveCriticalSection(v8);
LABEL_14:
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x113,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                           v7);
  }
  return result;
}
