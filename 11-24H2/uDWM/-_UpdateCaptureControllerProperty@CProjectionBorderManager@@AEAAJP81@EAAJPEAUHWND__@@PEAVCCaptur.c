/*
 * XREFs of ?_UpdateCaptureControllerProperty@CProjectionBorderManager@@AEAAJP81@EAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z0@Z @ 0x1800CFCD8
 * Callers:
 *     ?_UpdateCaptureControllerSize@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800CFDAC (-_UpdateCaptureControllerSize@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_UpdateCaptureControllerTransform@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800CFDF0 (-_UpdateCaptureControllerTransform@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerProperty(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 (__fastcall *a2)(struct _RTL_GENERIC_TABLE *, __int64, _QWORD),
        __int64 a3)
{
  char v6; // bl
  _QWORD *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v6 = 0;
  while ( 1 )
  {
    v7 = RtlEnumerateGenericTableWithoutSplaying(a1 + 6, &RestartKey);
    if ( !v7 )
      break;
    if ( v7[2] == a3 )
    {
      v8 = a2(a1, a3, v7[1]);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = (unsigned int)v8;
        v11 = 2014LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)v10);
        goto LABEL_11;
      }
      v6 = 1;
    }
  }
  if ( !v6 )
  {
    v9 = -2147024809;
    v10 = 2147942487LL;
    v11 = 2019LL;
    goto LABEL_9;
  }
  v9 = 0;
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v9;
}
