/*
 * XREFs of ?OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z @ 0x180076480
 * Callers:
 *     <none>
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180076840 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CD3A0 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopFilteredDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CD510 (-StopFilteredDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::OnProcessDisconnected(struct _RTL_GENERIC_TABLE *this, int a2)
{
  _QWORD *v4; // r15
  unsigned int v5; // esi
  _DWORD *v6; // rax
  unsigned int i; // r14d
  _QWORD *v8; // r15
  unsigned int v9; // esi
  _DWORD *v10; // rax
  unsigned int j; // r14d
  _QWORD *v12; // r15
  unsigned int v13; // esi
  _DWORD *v14; // rax
  unsigned int k; // r14d
  int v16; // edi
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // eax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  unsigned __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-30h]
  void *v34[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-Ch]
  unsigned int v36; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  PVOID RestartKey; // [rsp+90h] [rbp+40h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+A8h] [rbp+58h] BYREF

  v40 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v34, 0LL, 0);
LABEL_2:
  v4 = v34[0];
  v5 = v36;
  while ( 1 )
  {
    v6 = RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
    if ( !v6 )
      break;
    if ( v6[1] == a2 )
    {
      v25 = *(_QWORD *)v6;
      v39 = v25;
      v26 = v5 + 1;
      if ( v5 + 1 < v5 )
      {
        v16 = -2147024362;
        v27 = 179;
LABEL_30:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v27, 0LL);
        v23 = (unsigned int)v16;
        v24 = 1129LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)v23,
          v33);
LABEL_17:
        DynArrayImpl<0>::~DynArrayImpl<0>(v34);
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        return (unsigned int)v16;
      }
      if ( v26 > v35 )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v34, 8, 1, &v39);
        if ( v16 >= 0 )
          goto LABEL_2;
        v27 = 190;
        goto LABEL_30;
      }
      v4[v5++] = v25;
      v36 = v26;
    }
  }
  for ( i = 0; i < v5; ++i )
  {
    v39 = v4[i];
    v28 = CProjectionBorderManager::StopWindowCapture(
            (CProjectionBorderManager *)this,
            (const struct DWM_CAPTURE_TOKEN *)&v39);
    v16 = v28;
    if ( v28 < 0 )
    {
      v23 = (unsigned int)v28;
      v24 = 1135LL;
      goto LABEL_33;
    }
  }
  RestartKey = 0LL;
  v36 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v34, 8u);
LABEL_7:
  v8 = v34[0];
  v9 = v36;
  while ( 1 )
  {
    v10 = RtlEnumerateGenericTableWithoutSplaying(this + 7, &RestartKey);
    if ( !v10 )
      break;
    if ( v10[1] == a2 )
    {
      v18 = *(_QWORD *)v10;
      v39 = v18;
      v19 = v9 + 1;
      if ( v9 + 1 < v9 )
      {
        v16 = -2147024362;
        v29 = 179;
LABEL_42:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v29, 0LL);
        v30 = (unsigned int)v16;
        v31 = 1146LL;
        goto LABEL_54;
      }
      if ( v19 > v35 )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v34, 8, 1, &v39);
        if ( v16 >= 0 )
          goto LABEL_7;
        v29 = 190;
        goto LABEL_42;
      }
      v8[v9++] = v18;
      v36 = v19;
    }
  }
  for ( j = 0; j < v9; ++j )
  {
    v39 = v8[j];
    v32 = CProjectionBorderManager::StopDisplayCapture(
            (CProjectionBorderManager *)this,
            (const struct DWM_CAPTURE_TOKEN *)&v39);
    v16 = v32;
    if ( v32 < 0 )
    {
      v31 = 1152LL;
      goto LABEL_53;
    }
  }
  RestartKey = 0LL;
  v36 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v34, 8u);
LABEL_12:
  v12 = v34[0];
  v13 = v36;
  while ( 1 )
  {
    v14 = RtlEnumerateGenericTableWithoutSplaying(this + 8, &RestartKey);
    if ( !v14 )
      break;
    if ( v14[1] == a2 )
    {
      v20 = *(_QWORD *)v14;
      v39 = v20;
      v21 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v16 = -2147024362;
        v22 = 179;
LABEL_26:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v22, 0LL);
        v23 = (unsigned int)v16;
        v24 = 1163LL;
        goto LABEL_33;
      }
      if ( v21 > v35 )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v34, 8, 1, &v39);
        if ( v16 < 0 )
        {
          v22 = 190;
          goto LABEL_26;
        }
        goto LABEL_12;
      }
      v12[v13++] = v20;
      v36 = v21;
    }
  }
  for ( k = 0; ; ++k )
  {
    if ( k >= v13 )
    {
      v16 = 0;
      goto LABEL_17;
    }
    v39 = v12[k];
    v32 = CProjectionBorderManager::StopFilteredDisplayCapture(
            (CProjectionBorderManager *)this,
            (const struct DWM_CAPTURE_TOKEN *)&v39);
    v16 = v32;
    if ( v32 < 0 )
      break;
  }
  v31 = 1169LL;
LABEL_53:
  v30 = (unsigned int)v32;
LABEL_54:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v31,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)v30,
    v33);
  DynArrayImpl<0>::~DynArrayImpl<0>(v34);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v40);
  return (unsigned int)v16;
}
