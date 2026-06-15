/*
 * XREFs of _lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator() @ 0x18000413C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call @ 0x18001E320 (std--_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_--_Do_call.c)
 * Callees:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180003C10 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x180017EA8 (-UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B348 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     WPP_SF_Sis @ 0x18003A02C (WPP_SF_Sis.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator()(_QWORD *a1)
{
  int v1; // r15d
  int v2; // r13d
  __int64 v3; // r12
  const unsigned __int16 *v4; // rbx
  int v5; // r8d
  CApplicationManager *v6; // r14
  const char *v7; // rax
  int v8; // edi
  struct CApplication *v9; // rbp
  int Application; // ebx
  int v11; // [rsp+20h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v13; // [rsp+90h] [rbp+8h] BYREF
  int v14; // [rsp+98h] [rbp+10h] BYREF
  CApplication *v15; // [rsp+A0h] [rbp+18h] BYREF
  char *v16; // [rsp+A8h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *((_DWORD *)a1 + 6);
  v3 = a1[2];
  v4 = (const unsigned __int16 *)*a1;
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(*a1) )
    v4 = *(const unsigned __int16 **)v4;
  v6 = g_ApplicationManager;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = "HAC_INTERACTIVE";
    if ( !v1 )
      v7 = "HAC_NON_INTERACTIVE";
    WPP_SF_Sis(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (unsigned int)"HAC_NON_INTERACTIVE",
      v5,
      (_DWORD)v4,
      v3,
      (__int64)v7);
  }
  v8 = 0;
  v9 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 32));
  v16 = (char *)v6 + 32;
  v15 = 0LL;
  v13 = 0;
  v14 = 0;
  Application = CApplicationManager::GetApplication(v6, v4, v3, v2, &v15, 1, &v13);
  if ( Application >= 0 )
  {
    Application = CApplication::UpdateHostedAppState(v15, v1, &v14);
    if ( Application >= 0 )
    {
      if ( v13 || v14 )
        v8 = 1;
      v9 = v15;
    }
  }
  if ( v6 != (CApplicationManager *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 32));
  if ( Application >= 0 )
  {
    if ( v8 )
      CApplicationManager::OnApplicationInteractivityChanged(v6, v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4B,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)Application,
      v11);
  }
}
