/*
 * XREFs of ?_AnalyzeProxyShellNotification@CApplicationManager@@AEAAXPEAUHSHELL_DATA@1@@Z @ 0x18016D30C
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180032494 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1802D4F08 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D4F70 (_Init_thread_header.c)
 */

void __fastcall CApplicationManager::_AnalyzeProxyShellNotification(
        CApplicationManager *this,
        struct CApplicationManager::HSHELL_DATA *a2)
{
  HWND v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  _DWORD v6[4]; // [rsp+20h] [rbp-28h]

  v3 = (HWND)*((_QWORD *)a2 + 1);
  if ( dword_1808CCDE0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1808CCDE0);
    if ( dword_1808CCDE0 == -1 )
    {
      word_1808CCDE4 = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_1808CCDE0);
    }
  }
  if ( (unsigned __int16)GetClassLongW(v3, -32) == word_1808CCDE4 )
  {
    if ( ((*(_QWORD *)a2 - 17LL) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    {
      v5 = *((_QWORD *)a2 + 1);
      *((_QWORD *)a2 + 5) = v5;
      *((_QWORD *)a2 + 1) = HungWindowFromGhostWindow(v5);
    }
    else
    {
      *((_QWORD *)a2 + 1) = 0LL;
    }
  }
  if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
  {
    v6[0] = 20;
    v4 = 0LL;
    v6[1] = 19;
    v6[2] = 23;
    v6[3] = 32;
    while ( v4 < 4 )
    {
      if ( *(_QWORD *)a2 == v6[v4] )
        return;
      ++v4;
    }
    *((_QWORD *)a2 + 1) = 0LL;
  }
}
