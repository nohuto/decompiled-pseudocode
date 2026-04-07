/*
 * XREFs of ?StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z @ 0x1800B1870
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B1BF0 (-StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?push_back@?$vector@UDWM_CAPTURE_TOKEN@@V?$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAAX$$QEAUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B5740 (-push_back@-$vector@UDWM_CAPTURE_TOKEN@@V-$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAAX$$QEAU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::StopCapturesForWindow(CCaptureManager *this, __int64 *a2)
{
  __int64 ***v4; // rdi
  __int64 **i; // rbx
  struct DWM_CAPTURE_TOKEN *v6; // rbx
  const struct DWM_CAPTURE_TOKEN *v7; // rdi
  int v8; // eax
  unsigned int v9; // esi
  struct DWM_CAPTURE_TOKEN *v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 *v14; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  v4 = (__int64 ***)*((_QWORD *)this + 2);
  for ( i = *v4; i != (__int64 **)v4; i = (__int64 **)*i )
  {
    if ( i[5] == a2 )
    {
      v14 = i[3];
      std::vector<DWM_CAPTURE_TOKEN>::push_back(v11, &v14);
    }
  }
  v6 = v11[0];
  v7 = v11[0];
  if ( v11[0] == v11[1] )
  {
LABEL_9:
    if ( v6 )
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)((v12 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    v9 = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = CCaptureManager::StopWindowCapture(this, v7);
      v9 = v8;
      if ( v8 < 0 )
        break;
      v7 = (const struct DWM_CAPTURE_TOKEN *)((char *)v7 + 8);
      if ( v7 == v11[1] )
        goto LABEL_9;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x320,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v8);
    if ( v6 )
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)((v12 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v9;
}
