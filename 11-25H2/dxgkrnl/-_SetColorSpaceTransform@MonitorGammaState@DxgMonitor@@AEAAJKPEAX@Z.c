/*
 * XREFs of ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042D880
 * Callers:
 *     ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14042D7C0 (-OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140012B90 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x140012F60 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002F83C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034DA0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ColorSpaceTransformConvert @ 0x14003B180 (ColorSpaceTransformConvert.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14004FC30 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x140054D14 (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E2E0 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Enable3x4StagingControls__private_IsEnabledDeviceUsageNoInline @ 0x140090368 (Feature_Enable3x4StagingControls__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1402D89D0 (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402D8A30 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?_IsWireFormatMatch@MonitorGammaState@DxgMonitor@@AEAA_NAEBU_OUTPUT_WIRE_FORMAT@@@Z @ 0x1403D0E2C (-_IsWireFormatMatch@MonitorGammaState@DxgMonitor@@AEAA_NAEBU_OUTPUT_WIRE_FORMAT@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_SetColorSpaceTransform(
        ReferenceCounted **this,
        unsigned int a2,
        int *a3)
{
  int MostCapableColorSpaceTransform; // eax
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // r9
  enum _D3DDDI_GAMMARAMP_TYPE v10; // r15d
  enum _D3DDDI_GAMMARAMP_TYPE v11; // eax
  __int64 v12; // rax
  void **v13; // rdi
  int v14; // r15d
  enum _D3DDDI_GAMMARAMP_TYPE v15; // r13d
  char *v16; // r12
  _DWORD *v17; // r14
  __int64 v18; // rax
  ReferenceCounted *v19; // rdx
  ReferenceCounted *v20; // rdx
  struct DXGK_GAMMA_RAMP **v21; // rax
  int v22; // r14d
  float v23; // xmm1_4
  __int64 v24; // rax
  int v25; // esi
  DXGK_GAMMA_RAMP *v27; // [rsp+20h] [rbp-50h] BYREF
  int v28; // [rsp+28h] [rbp-48h]
  char v29; // [rsp+2Ch] [rbp-44h]
  _BYTE v30[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v31[8]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v32[8]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v33[8]; // [rsp+48h] [rbp-28h] BYREF
  struct _D3DKMDT_GAMMA_RAMP v34; // [rsp+50h] [rbp-20h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v35; // [rsp+C0h] [rbp+50h] BYREF
  ReferenceCounted *v36; // [rsp+C8h] [rbp+58h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 481;
  }
  v35 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v27 = 0LL;
  v36 = 0LL;
  MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(
                                     (DxgMonitor::MonitorGammaState *)this,
                                     &v35);
  v7 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    WdLogSingleEntry1(3LL, MostCapableColorSpaceTransform);
    WdLogGlobalForLineNumber = 490;
    goto LABEL_56;
  }
  if ( a2 < 0x18040 )
  {
    v7 = -1073741789;
    goto LABEL_56;
  }
  if ( (*(unsigned int (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 112LL))(*this) != *a3 )
  {
    v8 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 112LL))(*this);
    WdLogSingleEntry2(3LL, *a3, v8);
    WdLogGlobalForLineNumber = 508;
LABEL_9:
    v7 = -1073741811;
    goto LABEL_56;
  }
  if ( !DxgMonitor::MonitorGammaState::_IsWireFormatMatch(
          (DxgMonitor::MonitorGammaState *)this,
          (const struct _OUTPUT_WIRE_FORMAT *)(a3 + 1)) )
  {
    WdLogSingleEntry2(3LL, a3[1], (unsigned int)a3[2]);
    WdLogGlobalForLineNumber = 519;
    goto LABEL_9;
  }
  v10 = v35;
  v11 = a3[3];
  if ( v35 < D3DDDI_GAMMARAMP_MATRIX_3x4 && v11 != v35 && (v35 == D3DDDI_GAMMARAMP_DXGI_1 || v11 > v35) )
  {
    WdLogSingleEntry2(3LL, a3[3], v35);
    WdLogGlobalForLineNumber = 527;
    goto LABEL_9;
  }
  v12 = operator new(0x30uLL, 0x4D677844u, 256LL, v9);
  if ( v12 )
  {
    *(_WORD *)(v12 + 40) = 0;
    *(_QWORD *)v12 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v12 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v12 + 8) = 1;
    *(_DWORD *)(v12 + 16) = 1;
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 32) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v27, (ReferenceCounted *)v12);
  v13 = (void **)v27;
  if ( !v27 )
  {
    WdLogSingleEntry1(6LL, a3);
    WdLogGlobalForLineNumber = 535;
    v7 = -1073741801;
    goto LABEL_56;
  }
  v14 = DXGK_GAMMA_RAMP::Initialize(v27, v10, 0LL);
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(3LL, a3);
    WdLogGlobalForLineNumber = 542;
LABEL_24:
    v7 = v14;
    goto LABEL_56;
  }
  v15 = a3[3];
  *(_QWORD *)&v34.Type = (unsigned int)v15;
  v34.DataSize = GetSizeFromGammaRampType(v15);
  v16 = (char *)(a3 + 4);
  v34.Data.pRgb256x3x16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)(a3 + 4);
  v28 = 0;
  v17 = v13 + 2;
  v29 = 1;
  v14 = ColorSpaceTransformConvert(
          &v34,
          (struct _D3DKMDT_GAMMA_RAMP *)((unsigned __int64)(v13 + 2) & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64)));
  if ( v14 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 561;
    goto LABEL_24;
  }
  v18 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 32LL))(*this);
  if ( (*(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18) & 0x400000) != 0 && *v17 == 2 )
  {
    *((_WORD *)v13[4] + 255) ^= *((_BYTE *)this + 204) == 0;
    *((_BYTE *)this + 204) = *((_BYTE *)this + 204) == 0;
  }
  if ( (unsigned int)Feature_Enable3x4StagingControls__private_IsEnabledDeviceUsageNoInline()
    && *v17 == 4
    && v15 == (D3DDDI_GAMMARAMP_MATRIX_3x4|D3DDDI_GAMMARAMP_DEFAULT) )
  {
    if ( !*((_DWORD *)v16 + 12289) )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v30, (struct DXGFASTMUTEX *)(this + 12));
      v19 = this[18];
      if ( v19 && *((_DWORD *)v19 + 4) == 4 )
      {
        memmove(v13[4], *((const void **)v19 + 4), 0x30uLL);
        *((_DWORD *)v13[4] + 12) = *(_DWORD *)(*((_QWORD *)this[18] + 4) + 48LL);
      }
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v30);
    }
    if ( !*((_DWORD *)v16 + 12299) )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v31, (struct DXGFASTMUTEX *)(this + 12));
      v20 = this[18];
      if ( v20 && *((_DWORD *)v20 + 4) == 4 )
        memmove((char *)v13[4] + 52, (const void *)(*((_QWORD *)v20 + 4) + 52LL), 0xC000uLL);
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v31);
    }
  }
  v21 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v36);
  v22 = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(
          (DxgMonitor::MonitorGammaState *)this,
          (const struct DXGK_GAMMA_RAMP *)v13,
          v21);
  if ( v22 >= 0 )
  {
    if ( !v36 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 622;
    }
    if ( (unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline()
      && *((_DWORD *)v36 + 4) == 4 )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v32, (struct DXGFASTMUTEX *)(this + 19));
      v23 = *((float *)this + 50);
      if ( v23 >= *((float *)this + 21) && *((float *)this + 22) >= v23 )
        *(float *)(*((_QWORD *)v36 + 4) + 48LL) = v23;
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v32);
    }
    v24 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 24LL))(*this);
    v25 = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v24 + 96LL))(v24, v36);
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v33, (struct DXGFASTMUTEX *)(this + 12));
    if ( v25 >= 0 )
    {
      v27 = 0LL;
      auto_rc<DXGK_GAMMA_RAMP>::reset(this + 18, (ReferenceCounted *)v13);
    }
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v33);
    v7 = v25;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 617;
    v7 = v22;
  }
LABEL_56:
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v36, 0LL);
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v27, 0LL);
  return v7;
}
