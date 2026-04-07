/*
 * XREFs of ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800EB9F8
 * Callers:
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010CD38 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x1800AC3D8 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJPEFBUTransitionBitmap@CTransitionVisualController@@I@Z @ 0x1800EA180 (-AddMultipleAndSet@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJPEFBUTra.c)
 */

__int64 __fastcall CTransitionVisualController::RegisterTransitionBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        _OWORD *a5,
        __int128 *a6,
        void *a7,
        unsigned __int64 a8)
{
  signed int v8; // r10d
  int v11; // edx
  __int64 v13; // rax
  CBaseObject *v14; // rbx
  signed int v15; // edx
  __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  int v19; // edi
  unsigned int v20; // eax
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rbx
  __int128 v23; // xmm1
  int v24; // eax
  CBaseObject *v26; // rcx
  CBaseObject *v27; // [rsp+30h] [rbp-51h] BYREF
  _OWORD v28[3]; // [rsp+38h] [rbp-49h] BYREF
  CBaseObject *v29; // [rsp+68h] [rbp-19h]

  v8 = a4[2] - *a4;
  v11 = a4[3];
  v29 = 0LL;
  v13 = (unsigned int)v8;
  v14 = 0LL;
  if ( v8 < 0 )
    v13 = 0LL;
  v27 = 0LL;
  v15 = v11 - a4[1];
  v16 = (unsigned int)v15;
  if ( v15 < 0 )
    v16 = 0LL;
  v17 = v13 * v16;
  memset(v28, 0, sizeof(v28));
  if ( v17 > 0xFFFFFFFF || (v18 = 4LL * (unsigned int)v17, v18 > 0xFFFFFFFF) || a8 < (unsigned int)v18 )
  {
    v19 = -2147024809;
    v20 = 3156;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v19,
      v20);
    if ( a3 == 22 )
    {
      v26 = *(CBaseObject **)(a1 + 184);
      if ( v26 )
      {
        CBaseObject::Release(v26);
        *(_QWORD *)(a1 + 184) = 0LL;
      }
      goto LABEL_25;
    }
LABEL_23:
    if ( v29 )
      CBaseObject::Release(v29);
    goto LABEL_25;
  }
  if ( v8 < 0 )
    v8 = 0;
  if ( v15 < 0 )
    v15 = 0;
  v19 = CBitmapSource::Create(v8, v15, v8, v15, a7, &v27);
  if ( v19 < 0 )
  {
    v14 = v27;
    v20 = 3137;
    goto LABEL_29;
  }
  if ( a3 != 22 )
  {
    v14 = v27;
    *(_QWORD *)&v28[0] = a2;
    DWORD2(v28[0]) = a3;
    v29 = v27;
    v23 = *a6;
    *(_OWORD *)((char *)v28 + 12) = *a5;
    *(_OWORD *)((char *)&v28[1] + 12) = v23;
    if ( v27 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v27 + 2);
      v14 = v27;
    }
    v24 = DynArray<CTransitionVisualController::TransitionBitmap,0>::AddMultipleAndSet(a1 + 152, (__int64)v28);
    v19 = v24;
    if ( v24 >= 0 )
      goto LABEL_25;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v24,
      0xC4Fu);
    goto LABEL_23;
  }
  v21 = *(CBaseObject **)(a1 + 184);
  if ( v21 )
    CBaseObject::Release(v21);
  v22 = v27;
  *(_QWORD *)(a1 + 184) = v27;
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v22 + 2);
    v14 = v27;
LABEL_25:
    if ( v14 )
      CBaseObject::Release(v14);
  }
  return (unsigned int)v19;
}
