/*
 * XREFs of _lambda_55bbdd01f859b2b681de89e14de0bd19_::operator() @ 0x180003ADC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call @ 0x18001EA60 (std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Do_call.c)
 * Callees:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180003C10 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B348 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?MarkAsPendingTermination@CApplication@@QEAAXXZ @ 0x180032E98 (-MarkAsPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180033FE4 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180038194 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     WPP_SF_Ss @ 0x18003A0F0 (WPP_SF_Ss.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_55bbdd01f859b2b681de89e14de0bd19_::operator()(_QWORD *a1)
{
  int v1; // edi
  unsigned int v2; // r14d
  unsigned __int64 v3; // r15
  const unsigned __int16 *v4; // rsi
  CApplicationManager *v5; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // r8d
  const char *v8; // rax
  CApplication *v9; // rdi
  CApplication *v10; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+78h] [rbp+10h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *((_DWORD *)a1 + 6);
  v3 = a1[2];
  v4 = (const unsigned __int16 *)*a1;
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(*a1) )
    v4 = *(const unsigned __int16 **)v4;
  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v11 = v6;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = "LAUNCHED";
    if ( v1 )
      v8 = "PENDING_TERMINATION";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), (unsigned int)"PENDING_TERMINATION", v7, (_DWORD)v4, (__int64)v8);
  }
  v10 = 0LL;
  if ( (int)CApplicationManager::GetApplication(v5, v4, v3, v2, &v10, 0, 0LL) >= 0 )
  {
    if ( v1 )
    {
      if ( v1 == 1 )
      {
        v9 = v10;
        if ( *((_DWORD *)v10 + 52) )
          CApplicationManager::OnApplicationClosed(v5, v4, *((_QWORD *)v10 + 87), v2);
        CApplication::MarkAsPendingTermination(v9);
      }
    }
    else
    {
      CApplication::ReviveProcessesPendingTermination(v10);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
}
