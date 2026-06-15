/*
 * XREFs of ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x180043C54
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Do_call @ 0x180037B50 (std--_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_--_Do_call.c)
 * Callees:
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180002250 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180004230 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18001F420 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 */

void __fastcall CApplicationManager::OnProcessCategoryDowngraded(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v2; // rsi
  CApplication *v4; // rdi

  v2 = g_ApplicationManager;
  v4 = (CApplication *)*((_QWORD *)a2 + 28);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      &WPP_8e49902f2f48314f779c54ea050b6728_Traceguids,
      *((_DWORD *)a2 + 40));
  }
  if ( *((_DWORD *)a2 + 119) == 3 )
  {
    *((_DWORD *)a2 + 119) = 0;
    *((_DWORD *)a2 + 120) = 0;
    *((_DWORD *)a2 + 121) = 4;
  }
  CProcess::DeleteInactivityTimer((struct _RTL_CRITICAL_SECTION *)a2);
  if ( v4 )
  {
    CApplication::RemoveAudioPlaybackRestriction(v4);
    CApplicationManager::ApplyPBMPolicy(v2, v4, 0xD1u, 0);
  }
}
