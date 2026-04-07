/*
 * XREFs of ?_UpdateCaptureControllerProperty@CProjectionBorderManager@@AEAAJP81@EAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z0@Z @ 0x1800D5140
 * Callers:
 *     ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x18001C4F0 (-OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowTransformUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x18001E3A0 (-OnWindowTransformUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerProperty(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 (__fastcall *a2)(struct _RTL_GENERIC_TABLE *, __int64, _QWORD),
        __int64 a3)
{
  char v6; // bl
  _QWORD *v7; // rax
  int v8; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+58h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v6 = 0;
  v7 = RtlEnumerateGenericTableWithoutSplaying(a1 + 6, &RestartKey);
  if ( v7 )
  {
    do
    {
      if ( v7[2] == a3 )
      {
        v8 = a2(a1, a3, v7[1]);
        if ( v8 < 0 )
        {
          v10 = 1344LL;
          goto LABEL_10;
        }
        v6 = 1;
      }
      v7 = RtlEnumerateGenericTableWithoutSplaying(a1 + 6, &RestartKey);
    }
    while ( v7 );
    if ( !v6 )
      goto LABEL_9;
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
    return 0LL;
  }
  else
  {
LABEL_9:
    v8 = -2147024809;
    v10 = 1349LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v8);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
    return (unsigned int)v8;
  }
}
