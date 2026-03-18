/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x14018FBDC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?IsDesktopWindow@CInputDest@@QEBA_NXZ @ 0x1400946B8 (-IsDesktopWindow@CInputDest@@QEBA_NXZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x14009477C (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1400967F8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x140123ACC (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1401913D4 (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1401F32F4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x140212644 (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 *     UpdateDelegationTargetForMouseInput @ 0x1402137A0 (UpdateDelegationTargetForMouseInput.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14021ED84 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

char __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3)
{
  char v4; // di
  __int64 v6; // rcx
  int WindowHandle; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 *v11; // rdx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // xmm0_8
  int v15; // eax
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  _BYTE v19[64]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h] BYREF
  int v21; // [rsp+78h] [rbp-30h]

  v4 = 1;
  if ( CInputDest::DoesBelongToForeground(a2, 1) )
  {
    if ( (unsigned int)Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline(v6) && *((_DWORD *)a3 + 8) == 1 )
    {
      UserSessionState = W32GetUserSessionState(v16);
      UpdateDelegationTargetForMouseInput(*(tagTHREADINFO **)(UserSessionState + 18960));
    }
  }
  else if ( *((_DWORD *)a3 + 8) == 1 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v6) + 18944) && CInputDest::IsDesktopWindow(a2) )
    {
      WindowHandle = (unsigned int)CInputDest::GetWindowHandle(a2);
      CBaseProcessor::PostQEventWork(v8, WindowHandle, 0, 0, 0LL, 0LL);
    }
    else
    {
      v9 = *((_QWORD *)a3 + 1);
      v20 = *(_QWORD *)(v9 + 144);
      v21 = *(_DWORD *)(v9 + 152);
      v10 = *(_DWORD *)(v9 + 116);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v19, a2);
      v11 = &v20;
      if ( v10 == 1 )
        v11 = 0LL;
      v12 = ApiSetEditionChangeForegroundQueueForMouseInput(a2, v11);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v19);
      return v12 != 0;
    }
  }
  else
  {
    v13 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)(v13 + 116) != 1 )
    {
      v14 = *(_QWORD *)(v13 + 144);
      v15 = *(_DWORD *)(v13 + 152);
      v20 = v14;
      v21 = v15;
      return (unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v20) != 0;
    }
  }
  return v4;
}
