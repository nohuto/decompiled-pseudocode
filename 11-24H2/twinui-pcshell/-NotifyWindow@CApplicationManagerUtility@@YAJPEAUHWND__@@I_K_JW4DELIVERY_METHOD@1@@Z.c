/*
 * XREFs of ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x18023031C
 * Callers:
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180069570 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___ @ 0x1803009AC (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_0758695e4094b81417177289bdc77534___.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     _Init_thread_footer @ 0x1802D4F08 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D4F70 (_Init_thread_header.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManagerUtility::NotifyWindow(HWND a1, unsigned int a2, __int64 a3, __int64 a4, BOOL a5)
{
  BOOL v9; // esi
  unsigned int v10; // edi
  PSRWLOCK v11; // rbx

  if ( dword_1808CCE38 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1808CCE38);
    if ( dword_1808CCE38 == -1 )
    {
      qword_1808C9350[0] = (__int64)PostMessageW;
      qword_1808C9358 = (__int64)SendNotifyMessageW;
      Init_thread_footer(&dword_1808CCE38);
    }
  }
  v9 = a5;
  v10 = 0;
  if ( a5 )
  {
    v11 = CApplicationManagerUtility::g_pIAMGlobals;
    v9 = GetWindowThreadProcessId(a1, 0LL) != LODWORD(v11[11].Ptr);
  }
  if ( !((unsigned int (__fastcall *)(HWND, _QWORD, __int64, __int64))qword_1808C9350[v9])(a1, a2, a3, a4) )
    return (unsigned int)ResultFromKnownLastError();
  return v10;
}
