/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000AB30
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x1800160A0 (PbmReportHostedAppStateChange.c)
 *     PbmReportHostedAppStateChange_2 @ 0x18003E030 (PbmReportHostedAppStateChange_2.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18000B440 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x18000C2E0 (-IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x18003CABC (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCPickerHostContext@@PEAV312@1@Z @ 0x18003CCA0 (-NewNode@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        PickerHostContextManager **a5)
{
  int v5; // r12d
  unsigned int v6; // r13d
  struct CPickerHostContext *v7; // rdx
  PickerHostContextManager **v8; // r15
  PickerHostContextManager *v9; // r14
  CPickerHostContext *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  CPickerHostContext *v13; // rdi
  __int64 v14; // rax
  int v15; // edi
  int *v17; // rbx
  __int64 *v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-98h] BYREF
  int v20; // [rsp+30h] [rbp-68h]
  PickerHostContextManager *v21; // [rsp+38h] [rbp-60h] BYREF
  CPickerHostContext *v22; // [rsp+40h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+48h] [rbp-50h]
  ATL::CAtlException *v24; // [rsp+50h] [rbp-48h] BYREF

  v5 = a4;
  v6 = a3;
  EnterCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  v23 = &PickerHostContextManager::s_csPickerHostContextList;
  v8 = a5;
  v9 = *a5;
  if ( *a5 && (unsigned int)PickerHostContextManager::IsValidPickerHostContext(*a5, v7) )
    goto LABEL_13;
  v10 = (CPickerHostContext *)operator new(0x30uLL);
  v13 = v10;
  if ( v10 )
  {
    try
    {
      *((_QWORD *)v10 + 5) = 10LL;
      *(_QWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 1) = 0LL;
      *((_QWORD *)v10 + 2) = 0LL;
      *((_QWORD *)v10 + 3) = 0LL;
      *((_QWORD *)v10 + 4) = 0LL;
      v22 = v10;
      v9 = v10;
      v21 = v10;
      v14 = ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::NewNode(
              v11,
              &v21,
              v12,
              PickerHostContextManager::s_PickerHostContextList);
      if ( PickerHostContextManager::s_PickerHostContextList )
        *(_QWORD *)(PickerHostContextManager::s_PickerHostContextList + 8) = v14;
      else
        qword_180066F00 = v14;
      PickerHostContextManager::s_PickerHostContextList = v14;
    }
    catch ( ATL::CAtlException *v24 )
    {
      v18 = &v19;
      v17 = (int *)v24;
      if ( *(_DWORD *)v24 == -1073741571 )
        _o__resetstkoflw();
      v20 = *v17;
      v15 = v20;
      if ( v20 < 0 )
      {
        CPickerHostContext::`scalar deleting destructor'(v22, (unsigned int)v18);
        goto LABEL_16;
      }
      v8 = a5;
      v5 = a4;
      v6 = a3;
      v9 = v21;
      v13 = v22;
    }
    *v8 = v13;
LABEL_13:
    v15 = CPickerHostContext::AddHostedAppInteractivityNotification(v9, a1, a2, v6, v5);
    if ( v15 >= 0 )
      goto LABEL_21;
    goto LABEL_16;
  }
  v15 = -2147024882;
LABEL_16:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
      (unsigned int)v15);
  }
  AudPolicyLogError("PickerHostContextManager::OnHostedAppStateChanged", 80, v15);
LABEL_21:
  LeaveCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  return (unsigned int)v15;
}
