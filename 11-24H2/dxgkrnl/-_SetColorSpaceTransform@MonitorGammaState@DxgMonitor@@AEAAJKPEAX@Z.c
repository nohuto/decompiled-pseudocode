/*
 * XREFs of ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042F770
 * Callers:
 *     ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14042F6B0 (-OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140022020 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1400223F0 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ColorSpaceTransformConvert @ 0x140039740 (ColorSpaceTransformConvert.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14004F6B0 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x140054964 (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E134 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402DEC30 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1402DF6AC (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 *     ?_IsWireFormatMatch@MonitorGammaState@DxgMonitor@@AEAA_NAEBU_OUTPUT_WIRE_FORMAT@@@Z @ 0x1403C49B0 (-_IsWireFormatMatch@MonitorGammaState@DxgMonitor@@AEAA_NAEBU_OUTPUT_WIRE_FORMAT@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_SetColorSpaceTransform(
        ReferenceCounted **this,
        unsigned int a2,
        int *a3)
{
  int MostCapableColorSpaceTransform; // eax
  unsigned int v7; // edi
  int v8; // eax
  enum _D3DDDI_GAMMARAMP_TYPE v9; // r15d
  enum _D3DDDI_GAMMARAMP_TYPE v10; // eax
  __int64 v11; // rax
  void **v12; // rdi
  int v13; // r15d
  enum _D3DDDI_GAMMARAMP_TYPE v14; // r13d
  char *v15; // r12
  _DWORD *v16; // r14
  __int64 v17; // rax
  ReferenceCounted *v18; // rdx
  ReferenceCounted *v19; // rdx
  struct DXGK_GAMMA_RAMP **v20; // rax
  int v21; // r14d
  float v22; // xmm1_4
  __int64 v23; // rax
  int v24; // esi
  DXGK_GAMMA_RAMP *v26; // [rsp+20h] [rbp-50h] BYREF
  int v27; // [rsp+28h] [rbp-48h]
  char v28; // [rsp+2Ch] [rbp-44h]
  _BYTE v29[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v30[8]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v31[8]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v32[8]; // [rsp+48h] [rbp-28h] BYREF
  struct _D3DKMDT_GAMMA_RAMP v33; // [rsp+50h] [rbp-20h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v34; // [rsp+C0h] [rbp+50h] BYREF
  ReferenceCounted *v35; // [rsp+C8h] [rbp+58h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 481;
  }
  v34 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v26 = 0LL;
  v35 = 0LL;
  MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(
                                     (DxgMonitor::MonitorGammaState *)this,
                                     &v34);
  v7 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    WdLogSingleEntry1(3LL, MostCapableColorSpaceTransform);
    WdLogGlobalForLineNumber = 490;
    goto LABEL_55;
  }
  if ( a2 < 0x18040 )
  {
    v7 = -1073741789;
    goto LABEL_55;
  }
  if ( (*(unsigned int (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 112LL))(*this) != *a3 )
  {
    v8 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 112LL))(*this);
    WdLogSingleEntry2(3LL, *a3, v8);
    WdLogGlobalForLineNumber = 508;
LABEL_9:
    v7 = -1073741811;
    goto LABEL_55;
  }
  if ( !DxgMonitor::MonitorGammaState::_IsWireFormatMatch(
          (DxgMonitor::MonitorGammaState *)this,
          (const struct _OUTPUT_WIRE_FORMAT *)(a3 + 1)) )
  {
    WdLogSingleEntry2(3LL, a3[1], (unsigned int)a3[2]);
    WdLogGlobalForLineNumber = 519;
    goto LABEL_9;
  }
  v9 = v34;
  v10 = a3[3];
  if ( v34 < D3DDDI_GAMMARAMP_MATRIX_3x4 && v10 != v34 && (v34 == D3DDDI_GAMMARAMP_DXGI_1 || v10 > v34) )
  {
    WdLogSingleEntry2(3LL, a3[3], v34);
    WdLogGlobalForLineNumber = 527;
    goto LABEL_9;
  }
  v11 = operator new(0x30uLL, 0x4D677844u, 256LL);
  if ( v11 )
  {
    *(_WORD *)(v11 + 40) = 0;
    *(_QWORD *)v11 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v11 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v11 + 8) = 1;
    *(_DWORD *)(v11 + 16) = 1;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v26, (ReferenceCounted *)v11);
  v12 = (void **)v26;
  if ( !v26 )
  {
    WdLogSingleEntry1(6LL, a3);
    WdLogGlobalForLineNumber = 535;
    v7 = -1073741801;
    goto LABEL_55;
  }
  v13 = DXGK_GAMMA_RAMP::Initialize(v26, v9, 0LL);
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(3LL, a3);
    WdLogGlobalForLineNumber = 542;
LABEL_24:
    v7 = v13;
    goto LABEL_55;
  }
  v14 = a3[3];
  *(_QWORD *)&v33.Type = (unsigned int)v14;
  v33.DataSize = GetSizeFromGammaRampType(v14);
  v15 = (char *)(a3 + 4);
  v33.Data.pRgb256x3x16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)(a3 + 4);
  v27 = 0;
  v16 = v12 + 2;
  v28 = 1;
  v13 = ColorSpaceTransformConvert(
          &v33,
          (struct _D3DKMDT_GAMMA_RAMP *)((unsigned __int64)(v12 + 2) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)));
  if ( v13 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 561;
    goto LABEL_24;
  }
  v17 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 32LL))(*this);
  if ( (*(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17) & 0x400000) != 0 && *v16 == 2 )
  {
    *((_WORD *)v12[4] + 255) ^= *((_BYTE *)this + 204) == 0;
    *((_BYTE *)this + 204) = *((_BYTE *)this + 204) == 0;
  }
  if ( *v16 == 4 && v14 == (D3DDDI_GAMMARAMP_MATRIX_3x4|D3DDDI_GAMMARAMP_DEFAULT) )
  {
    if ( !*((_DWORD *)v15 + 12289) )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v29, (struct DXGFASTMUTEX *)(this + 12));
      v18 = this[18];
      if ( v18 && *((_DWORD *)v18 + 4) == 4 )
      {
        memmove(v12[4], *((const void **)v18 + 4), 0x30uLL);
        *((_DWORD *)v12[4] + 12) = *(_DWORD *)(*((_QWORD *)this[18] + 4) + 48LL);
      }
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v29);
    }
    if ( !*((_DWORD *)v15 + 12299) )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v30, (struct DXGFASTMUTEX *)(this + 12));
      v19 = this[18];
      if ( v19 && *((_DWORD *)v19 + 4) == 4 )
        memmove((char *)v12[4] + 52, (const void *)(*((_QWORD *)v19 + 4) + 52LL), 0xC000uLL);
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v30);
    }
  }
  v20 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v35);
  v21 = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(
          (DxgMonitor::MonitorGammaState *)this,
          (const struct DXGK_GAMMA_RAMP *)v12,
          v20);
  if ( v21 >= 0 )
  {
    if ( !v35 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 619;
    }
    if ( (unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline()
      && *((_DWORD *)v35 + 4) == 4 )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v31, (struct DXGFASTMUTEX *)(this + 19));
      v22 = *((float *)this + 50);
      if ( v22 >= *((float *)this + 21) && *((float *)this + 22) >= v22 )
        *(float *)(*((_QWORD *)v35 + 4) + 48LL) = v22;
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v31);
    }
    v23 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 24LL))(*this);
    v24 = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v23 + 96LL))(v23, v35);
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v32, (struct DXGFASTMUTEX *)(this + 12));
    if ( v24 >= 0 )
    {
      v26 = 0LL;
      auto_rc<DXGK_GAMMA_RAMP>::reset(this + 18, (ReferenceCounted *)v12);
    }
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v32);
    v7 = v24;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 614;
    v7 = v21;
  }
LABEL_55:
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v35, 0LL);
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v26, 0LL);
  return v7;
}
