/*
 * XREFs of ?StopCapturesForWindow@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x1800CD230
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180076840 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::StopCapturesForWindow(struct _RTL_GENERIC_TABLE *this, HWND a2)
{
  _QWORD *v4; // r15
  unsigned int v5; // edi
  HWND *v6; // rax
  HWND v7; // rax
  unsigned int v8; // edx
  int v9; // edi
  unsigned int v10; // eax
  unsigned int i; // esi
  int v12; // eax
  int v13; // r14d
  void *v15[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-Ch]
  unsigned int v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  PVOID RestartKey; // [rsp+90h] [rbp+40h] BYREF
  HWND v20; // [rsp+A0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+A8h] [rbp+58h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v15, 0LL, 0);
LABEL_2:
  v4 = v15[0];
  v5 = v17;
  while ( 1 )
  {
    v6 = (HWND *)RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
    if ( !v6 )
      break;
    if ( v6[2] == a2 )
    {
      v7 = *v6;
      v20 = v7;
      v8 = v5 + 1;
      if ( v5 + 1 < v5 )
      {
        v9 = -2147024362;
        v10 = 179;
LABEL_11:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v10, 0LL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A5,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_18;
      }
      if ( v8 > v16 )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15, 8, 1, &v20);
        if ( v9 >= 0 )
          goto LABEL_2;
        v10 = 190;
        goto LABEL_11;
      }
      v4[v5++] = v7;
      v17 = v8;
    }
  }
  for ( i = 0; i < v5; ++i )
  {
    v20 = (HWND)v4[i];
    v12 = CProjectionBorderManager::StopWindowCapture(this, (const struct DWM_CAPTURE_TOKEN *)&v20);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4AB,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v12);
      v9 = v13;
      goto LABEL_18;
    }
  }
  v9 = 0;
LABEL_18:
  DynArrayImpl<0>::~DynArrayImpl<0>(v15);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)v9;
}
