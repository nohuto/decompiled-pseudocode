/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C01FB4B8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9444 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0059464 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00BCDF0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01B52A4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01B537C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C01FB7C0 (_anonymous_namespace_--ValidateUIPI.c)
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1C0205BA8 (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 */

bool __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4)
{
  bool v5; // di
  __int64 v7; // rcx
  HWND WindowHandle; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *v12; // rdx
  __int64 v13; // rcx
  _BYTE v15[64]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  v16 = a4;
  v5 = 1;
  if ( !CInputDest::DoesBelongToForeground((__int64)a2, 1) )
  {
    if ( *((_DWORD *)a3 + 8) == 1 )
    {
      if ( gpqForeground
        && *((_DWORD *)a2 + 23) == 2
        && (v7 = *((_QWORD *)a2 + 10)) != 0
        && grpdeskRitInput
        && v7 == *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 1) + 24LL) )
      {
        WindowHandle = CInputDest::GetWindowHandle(a2);
        CBaseProcessor::PostQEventWork(v9, (__int64)WindowHandle, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        v10 = *((_QWORD *)a3 + 1);
        v16 = *(_QWORD *)(v10 + 132);
        v11 = *(_DWORD *)(v10 + 108);
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v15, a2);
        v12 = &v16;
        if ( v11 == 1 )
          v12 = 0LL;
        v5 = (unsigned int)ApiSetEditionChangeForegroundQueueForMouseInput(a2, v12) != 0;
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v15);
      }
    }
    else
    {
      v13 = *((_QWORD *)a3 + 1);
      if ( *(_DWORD *)(v13 + 108) != 1 )
        return (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v13 + 132), a2) != 0;
    }
  }
  return v5;
}
