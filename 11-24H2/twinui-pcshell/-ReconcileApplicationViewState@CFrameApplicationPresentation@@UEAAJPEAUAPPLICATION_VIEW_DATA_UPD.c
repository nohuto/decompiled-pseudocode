/*
 * XREFs of ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180032B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180031F14 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?StartActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18003293C (-StartActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180033268 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180033338 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x18030AFD0 (-_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA-AUtagRECT@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::ReconcileApplicationViewState(
        CFrameApplicationPresentation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  int Error; // ebx
  struct tagRECT v5; // xmm0
  HMONITOR v6; // rbx
  int v7; // r9d
  char v8; // dl
  char v9; // al
  char v10; // cl
  char v11; // al
  bool v13; // zf
  __m128i v14; // xmm7
  __m128i v15; // xmm6
  __int64 v16; // xmm2_8
  int v17; // [rsp+28h] [rbp-E0h] BYREF
  __m128i v18; // [rsp+30h] [rbp-D8h]
  __m128i v19; // [rsp+40h] [rbp-C8h]
  __int64 v20; // [rsp+50h] [rbp-B8h]
  __int64 v21; // [rsp+78h] [rbp-90h]
  struct tagRECT v22; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v23; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT Rect; // [rsp+A8h] [rbp-60h] BYREF
  struct tagRECT v25; // [rsp+B8h] [rbp-50h] BYREF
  tagRECT rc; // [rsp+C8h] [rbp-40h] BYREF
  void **v27; // [rsp+D8h] [rbp-30h] BYREF
  int v28; // [rsp+E0h] [rbp-28h] BYREF
  char v29; // [rsp+E4h] [rbp-24h]
  int v30; // [rsp+108h] [rbp+0h] BYREF
  const char *v31; // [rsp+110h] [rbp+8h]
  __int64 v32; // [rsp+118h] [rbp+10h]
  char v33; // [rsp+120h] [rbp+18h]
  int v34; // [rsp+128h] [rbp+20h]
  _BYTE v35[152]; // [rsp+130h] [rbp+28h] BYREF
  __int128 v36; // [rsp+1C8h] [rbp+C0h]
  int v37; // [rsp+1D8h] [rbp+D0h]
  __int64 v38; // [rsp+1E0h] [rbp+D8h]
  int *v39; // [rsp+1E8h] [rbp+E0h]
  __int64 v40; // [rsp+1F0h] [rbp+E8h]
  __int64 v41; // [rsp+1F8h] [rbp+F0h]
  void ***v42; // [rsp+200h] [rbp+F8h]
  __int64 v43; // [rsp+208h] [rbp+100h]
  int v44; // [rsp+210h] [rbp+108h]
  int *v45; // [rsp+218h] [rbp+110h]
  char v46; // [rsp+220h] [rbp+118h]
  tagMONITORINFO mi; // [rsp+228h] [rbp+120h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 10) = 0;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  v30 = 0;
  v31 = "ReconcileApplicationViewState";
  v32 = 0LL;
  v34 = 0;
  v36 = 0LL;
  memset_0(v35, 0, sizeof(v35));
  v37 = 1;
  v38 = 0LL;
  v39 = &v28;
  v40 = 0LL;
  v41 = 0LL;
  v42 = &v27;
  v43 = 0LL;
  v44 = 0;
  v45 = &v30;
  v46 = 0;
  v27 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  CFramePresentationTelemetry::ReconcileApplicationViewState::StartActivity(
    (CFramePresentationTelemetry::ReconcileApplicationViewState *)&v27,
    *((const unsigned __int16 **)this + 77));
  rc = 0LL;
  SetRectEmpty(&rc);
  if ( *((_DWORD *)this + 14) == 2 )
  {
    Error = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43B,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_42;
  }
  Rect = 0LL;
  if ( GetClientRect(*((HWND *)this + 16), &Rect) )
  {
    Error = 0;
LABEL_4:
    if ( *((_BYTE *)this + 53) )
    {
      v22 = Rect;
      Rect = *CFrameApplicationPresentation::_ComputePillarBoxedApplicationRect(this, &v23, &v22);
    }
    v25 = 0LL;
    (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 15) + 120LL))(*((_QWORD *)this + 15), &v25);
    Rect.left += v25.left;
    Rect.top += v25.top;
    Rect.right -= v25.right;
    Rect.bottom -= v25.bottom;
    v5 = Rect;
    rc = Rect;
    goto LABEL_7;
  }
  Error = ResultFromKnownLastError();
  if ( Error >= 0 )
    goto LABEL_4;
  v5 = rc;
LABEL_7:
  if ( Error >= 0 )
  {
    v21 = 0LL;
    Rect = v5;
    SetLastError(0);
    if ( MapWindowPoints(*((HWND *)this + 16), 0LL, (LPPOINT)&Rect, 2u)
      || !GetLastError()
      || (Error = ResultFromKnownLastError(), Error >= 0) )
    {
      v25 = 0LL;
      if ( GetWindowRect(*((HWND *)this + 16), &v25) || (Error = ResultFromKnownLastError(), Error >= 0) )
      {
        v6 = MonitorFromWindow(*((HWND *)this + 16), 1u);
        memset_0(&mi.rcMonitor, 0, 0x64uLL);
        mi.cbSize = 104;
        if ( GetMonitorInfoW(v6, &mi) || (Error = ResultFromKnownLastError(), Error >= 0) )
        {
          v17 = 0;
          Error = GetScaleFactorForWindow(**((_QWORD **)this + 14), &v17);
          if ( Error >= 0 )
          {
            v19 = 0uLL;
            LODWORD(v20) = 3;
            v7 = Rect.right - Rect.left;
            if ( Rect.right - Rect.left < (int)(float)((float)(320 * v17) / 100.0)
              || v7 >= (int)(float)((float)(500 * v17) / 100.0) )
            {
              if ( v7 < Rect.bottom - Rect.top )
              {
                v18.m128i_i32[0] = 3;
              }
              else
              {
                if ( v25.left > mi.rcWork.left || (v8 = 1, mi.rcWork.left > Rect.left) )
                  v8 = 0;
                if ( Rect.right > mi.rcWork.right || (v9 = 1, mi.rcWork.right > v25.right) )
                  v9 = 0;
                if ( !v8 || (v18.m128i_i32[0] = 0, !v9) )
                  v18.m128i_i32[0] = 1;
              }
            }
            else
            {
              v18.m128i_i32[0] = 2;
            }
            *(__int64 *)((char *)v18.m128i_i64 + 4) = v7 < Rect.bottom - Rect.top;
            if ( v25.left > mi.rcWork.left || (v10 = 1, mi.rcWork.left > Rect.left) )
              v10 = 0;
            if ( Rect.right > mi.rcWork.right || (v11 = 1, mi.rcWork.right > v25.right) )
              v11 = 0;
            if ( v10 )
            {
              if ( v11 )
                v18.m128i_i32[2] = 3;
              else
                v18.m128i_i32[2] = 1;
            }
            else if ( v11 )
            {
              v18.m128i_i32[2] = 2;
            }
            v18.m128i_i32[3] = 0;
            HIDWORD(v20) = 1;
            if ( *((_BYTE *)this + 608) )
            {
              if ( *((_BYTE *)this + 574) || (v13 = *((_BYTE *)this + 575) == 0, HIDWORD(v20) = 0, !v13) )
                HIDWORD(v20) = 2;
            }
            v14 = v18;
            v15 = v19;
            v16 = v20;
            v21 = v20;
            Error = 0;
            if ( (*((_QWORD *)this + 21) != __PAIR64__(v18.m128i_u32[1], _mm_cvtsi128_si32(v18))
               || *((_OWORD *)this + 11) != __PAIR128__(
                                              __PAIR64__(v19.m128i_u32[1], _mm_cvtsi128_si32(v19)),
                                              __PAIR64__(
                                                _mm_srli_si128(v18, 8).m128i_u32[1],
                                                _mm_cvtsi128_si32(_mm_srli_si128(v18, 8))))
               || *((_DWORD *)this + 48) != _mm_cvtsi128_si32(_mm_srli_si128(v19, 8))
               || *(_QWORD *)((char *)this + 196) != __PAIR64__(v20, _mm_srli_si128(v19, 8).m128i_u32[1])
               || *((_DWORD *)this + 51) != HIDWORD(v20))
              && rc.right - rc.left == *((_DWORD *)this + 36) - *((_DWORD *)this + 34)
              && rc.bottom - rc.top == *((_DWORD *)this + 37) - *((_DWORD *)this + 35) )
            {
              *((_DWORD *)a2 + 10) |= 1u;
            }
            *(__m128i *)((char *)this + 168) = v14;
            *(__m128i *)((char *)this + 184) = v15;
            *((_QWORD *)this + 25) = v16;
            *(tagRECT *)((char *)this + 136) = rc;
            *(__m128i *)a2 = v14;
            *((__m128i *)a2 + 1) = v15;
            *((_QWORD *)a2 + 4) = v16;
          }
        }
      }
    }
  }
LABEL_42:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v27, Error);
  v27 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v27);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(&v27);
  return (unsigned int)Error;
}
