/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x1801267BC
 * Callers:
 *     PolicyConfigRemoveDynamicRoutingRule @ 0x180108110 (PolicyConfigRemoveDynamicRoutingRule.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004FBEC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x1801266C0 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(DynamicAudioEndpointManager *this, void *a2, __int64 a3)
{
  RTL_SRWLOCK *v5; // rbp
  __int64 (__fastcall *v6)(struct IAudioPolicyManager *, void *, struct IAudioProcess **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAudioProcess *v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = (RTL_SRWLOCK *)g_DynamicAudioEndpointManager;
  v12 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                               + 32LL);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset((__int64 *)&v12);
  v7 = v6(g_PolicyManager, a2, &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = DynamicAudioEndpointManager::RemoveRule(v5, v12, a3);
    if ( v9 >= 0 )
      v8 = 0;
    else
      v8 = v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x235,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v7);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  return v8;
}
