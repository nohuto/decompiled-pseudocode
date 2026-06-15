/*
 * XREFs of _lambda_55bbdd01f859b2b681de89e14de0bd19_::operator() @ 0x18000BC74
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call @ 0x18001EC00 (std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Do_call.c)
 * Callees:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000BDB0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?MarkAsPendingTermination@CApplication@@QEAAXXZ @ 0x180035878 (-MarkAsPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800369C4 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003A724 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     WPP_SF_Ss @ 0x18003C90C (WPP_SF_Ss.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_55bbdd01f859b2b681de89e14de0bd19_::operator()(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned int v5; // r14d
  unsigned __int64 v6; // r15
  const unsigned __int16 *v7; // rsi
  CApplicationManager *v8; // rbp
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  int v10; // r8d
  const char *v11; // rax
  CApplication *v12; // rdi
  CApplication *v13; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+78h] [rbp+10h]

  v4 = *((_DWORD *)a1 + 7);
  v5 = *((_DWORD *)a1 + 6);
  v6 = a1[2];
  v7 = (const unsigned __int16 *)*a1;
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(*a1, a2, a3, a4) )
    v7 = *(const unsigned __int16 **)v7;
  v8 = g_ApplicationManager;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v14 = v9;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = "LAUNCHED";
    if ( v4 )
      v11 = "PENDING_TERMINATION";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), (unsigned int)"PENDING_TERMINATION", v10, (_DWORD)v7, (__int64)v11);
  }
  v13 = 0LL;
  if ( (int)CApplicationManager::GetApplication(v8, v7, v6, v5, &v13, 0, 0LL) >= 0 )
  {
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v12 = v13;
        if ( *((_DWORD *)v13 + 52) )
          CApplicationManager::OnApplicationClosed(v8, v7, *((_QWORD *)v13 + 87), v5);
        CApplication::MarkAsPendingTermination(v12);
      }
    }
    else
    {
      CApplication::ReviveProcessesPendingTermination(v13);
    }
  }
  if ( v9 )
    LeaveCriticalSection(v9);
}
