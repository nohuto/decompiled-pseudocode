/*
 * XREFs of ?StopCapturesForWindow@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x180065560
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2920 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::StopCapturesForWindow(struct _RTL_GENERIC_TABLE *this, HWND a2)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  HWND *v6; // rax
  HWND v7; // rax
  unsigned int v8; // r8d
  int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  int v13; // r14d
  unsigned int v15; // [rsp+20h] [rbp-30h]
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  unsigned int v19; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  PVOID RestartKey; // [rsp+90h] [rbp+40h] BYREF
  HWND v22; // [rsp+A0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+A8h] [rbp+58h] BYREF

  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v4 = 0;
  v5 = 0;
  v19 = 0;
  while ( 1 )
  {
    v6 = (HWND *)RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
    if ( !v6 )
      break;
    if ( v6[2] == a2 )
    {
      v7 = *v6;
      v22 = v7;
      v8 = v5 + 1;
      if ( v5 + 1 < v5 )
      {
        v9 = -2147024362;
        v10 = 181;
        goto LABEL_11;
      }
      if ( v8 > v4 )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v17, 8, 1, &v22);
        if ( v9 < 0 )
        {
          v10 = 192;
LABEL_11:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v10, 0LL);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x441,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)v9,
            v16);
          goto LABEL_16;
        }
        v5 = v19;
        v4 = HIDWORD(v18);
      }
      else
      {
        *(_QWORD *)(v17 + 8LL * v5++) = v7;
        v19 = v8;
      }
    }
  }
  v11 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v22 = *(HWND *)(v17 + 8LL * v11);
      v12 = CProjectionBorderManager::StopWindowCapture(
              (CProjectionBorderManager *)this,
              (const struct DWM_CAPTURE_TOKEN *)&v22);
      v13 = v12;
      if ( v12 < 0 )
        break;
      if ( ++v11 >= v5 )
        goto LABEL_15;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x447,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v12,
      v15);
    v9 = v13;
  }
  else
  {
LABEL_15:
    v9 = 0;
  }
LABEL_16:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v17);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return (unsigned int)v9;
}
