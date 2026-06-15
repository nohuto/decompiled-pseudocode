/*
 * XREFs of _lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator() @ 0x18000BAE4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call @ 0x18001E4C0 (std--_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_--_Do_call.c)
 * Callees:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800032E0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000BDB0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x180017D78 (-UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     WPP_SF_Sis @ 0x18003C848 (WPP_SF_Sis.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator()(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  unsigned int v5; // r13d
  unsigned __int64 v6; // r12
  const unsigned __int16 *v7; // rbx
  int v8; // r8d
  CApplicationManager *v9; // r14
  const char *v10; // rax
  int v11; // edi
  struct CApplication *v12; // rbp
  int Application; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v15; // [rsp+90h] [rbp+8h] BYREF
  int v16; // [rsp+98h] [rbp+10h] BYREF
  CApplication *v17; // [rsp+A0h] [rbp+18h] BYREF
  char *v18; // [rsp+A8h] [rbp+20h]

  v4 = *((_DWORD *)a1 + 7);
  v5 = *((_DWORD *)a1 + 6);
  v6 = a1[2];
  v7 = (const unsigned __int16 *)*a1;
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(*a1, a2, a3, a4) )
    v7 = *(const unsigned __int16 **)v7;
  v9 = g_ApplicationManager;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v10 = "HAC_INTERACTIVE";
    if ( !v4 )
      v10 = "HAC_NON_INTERACTIVE";
    WPP_SF_Sis(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (unsigned int)"HAC_NON_INTERACTIVE",
      v8,
      (_DWORD)v7,
      v6,
      (__int64)v10);
  }
  v11 = 0;
  v12 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v9 + 32));
  v18 = (char *)v9 + 32;
  v17 = 0LL;
  v15 = 0;
  v16 = 0;
  Application = CApplicationManager::GetApplication(v9, v7, v6, v5, &v17, 1, &v15);
  if ( Application >= 0 )
  {
    Application = CApplication::UpdateHostedAppState(v17, v4, &v16);
    if ( Application >= 0 )
    {
      if ( v15 || v16 )
        v11 = 1;
      v12 = v17;
    }
  }
  if ( v9 != (CApplicationManager *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v9 + 32));
  if ( Application >= 0 )
  {
    if ( v11 )
      CApplicationManager::OnApplicationInteractivityChanged(v9, v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA8,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)Application);
  }
}
