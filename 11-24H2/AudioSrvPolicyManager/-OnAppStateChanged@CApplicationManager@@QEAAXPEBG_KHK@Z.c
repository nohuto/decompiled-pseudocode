/*
 * XREFs of ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x180003624
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call @ 0x180039AE0 (std--_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_--_Do_call.c)
 * Callees:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180003C10 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x180034AE8 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     WPP_SF_Sd @ 0x180035A98 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::OnAppStateChanged(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  CApplicationManager *v8; // r14
  int v9; // ebx
  struct CApplication *v10; // rdi
  int v11; // [rsp+40h] [rbp-48h] BYREF
  CApplication *v12[3]; // [rsp+48h] [rbp-40h] BYREF
  CApplicationManager *v13; // [rsp+90h] [rbp+8h] BYREF

  v13 = this;
  v8 = g_ApplicationManager;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12,
      (unsigned int)&WPP_8e49902f2f48314f779c54ea050b6728_Traceguids,
      (_DWORD)a2,
      a4);
  }
  v9 = 0;
  v10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v8 + 32));
  v12[1] = (CApplicationManager *)((char *)v8 + 32);
  v12[0] = 0LL;
  LODWORD(v13) = 0;
  v11 = 0;
  if ( (int)CApplicationManager::GetApplication(v8, a2, a3, a5, v12, 1, (int *)&v13) >= 0 )
  {
    v10 = v12[0];
    CApplication::UpdateAppState(v12[0], a4, &v11);
    if ( (_DWORD)v13 || v11 )
      v9 = 1;
  }
  if ( v8 != (CApplicationManager *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v8 + 32));
  if ( v9 )
    CApplicationManager::OnApplicationInteractivityChanged(v8, v10);
}
