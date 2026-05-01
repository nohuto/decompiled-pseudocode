/*
 * XREFs of ?RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804740E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x1800E1D0C (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     ?InternalAddRef@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1802C5680 (-InternalAddRef@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z @ 0x1802C5B74 (--0-$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CE054 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::RetryGettingInputAppIdTimerCallback(__int64 a1)
{
  __int64 v2; // rax
  int DefautInputAppIdAndContinue; // eax
  _BYTE v5[72]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF

  v7 = a1;
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalAddRef(&v7);
  if ( a1 )
  {
    v2 = std::function<long (unsigned short const *)>::function<long (unsigned short const *)>((__int64)v5, a1 + 864);
    DefautInputAppIdAndContinue = TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue(a1, v2);
    if ( DefautInputAppIdAndContinue < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x495,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)DefautInputAppIdAndContinue);
  }
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(&v7);
  return 0LL;
}
