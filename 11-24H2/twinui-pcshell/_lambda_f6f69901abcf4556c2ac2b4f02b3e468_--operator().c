/*
 * XREFs of _lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator() @ 0x18008B694
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_f6f69901abcf4556c2ac2b4f02b3e468__&__1_long_::Invoke @ 0x18013BC80 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_--DelegateInvo.c)
 * Callees:
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x180089D40 (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator()(__int64 a1, DWORD a2)
{
  HWND v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r9
  HWND v7; // r8
  DWORD Ptr_high; // edx
  unsigned int v10; // edi
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  DWORD dwProcessId; // [rsp+48h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+50h] [rbp+18h] BYREF

  dwProcessId = a2;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 160);
  if ( v5 )
  {
    if ( *(_DWORD *)(v4 + 124) )
    {
      hWnd = 0LL;
      v11 = 0;
      if ( (*(int (__fastcall **)(__int64, HWND *, unsigned int *))(*(_QWORD *)v5 + 528LL))(v5, &hWnd, &v11) < 0 )
        return 0LL;
      v10 = 0;
      dwProcessId = 0;
      if ( hWnd )
      {
        GetWindowThreadProcessId(hWnd, &dwProcessId);
        Ptr_high = dwProcessId;
        v3 = hWnd;
      }
      else
      {
        v10 = v11;
        Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
        dwProcessId = Ptr_high;
      }
      v4 = *(_QWORD *)(a1 + 8);
      v6 = v10;
      v7 = v3;
    }
    else
    {
      v6 = 0LL;
      v7 = 0LL;
      Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
    }
    CRotationManagerSync::_SetAutoRotationConfiguration((CRotationManagerSync *)v4, Ptr_high, v7, v6);
  }
  return 0LL;
}
