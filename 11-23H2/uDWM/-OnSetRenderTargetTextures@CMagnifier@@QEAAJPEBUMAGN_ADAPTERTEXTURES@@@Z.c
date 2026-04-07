/*
 * XREFs of ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800CA4F0
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800CAE58 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800C9E00 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800CA2B8 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z @ 0x1800CC758 (-SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z.c)
 *     ?SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z @ 0x1800CC79C (-SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z.c)
 */

__int64 __fastcall CMagnifier::OnSetRenderTargetTextures(CMagnifier *this, const struct MAGN_ADAPTERTEXTURES *a2)
{
  unsigned int v2; // eax
  int v5; // eax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  int v14; // eax
  CBaseObject *v15; // rcx
  int v16; // ecx
  unsigned int v17; // edx
  __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-98h]
  _OWORD v25[6]; // [rsp+30h] [rbp-88h] BYREF
  int v26; // [rsp+90h] [rbp-28h]

  v2 = *((_DWORD *)this + 42);
  if ( *(_DWORD *)a2 <= v2 )
  {
    v19 = 6;
    if ( *(_DWORD *)a2 <= 6u )
      v19 = *(_DWORD *)a2;
    *((_DWORD *)this + 42) = v19;
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 43) = *((_DWORD *)a2 + 2);
    v20 = *((_DWORD *)a2 + 3);
    v21 = 0;
    for ( *((_DWORD *)this + 44) = v20;
          v21 < *((_DWORD *)this + 42);
          *(_OWORD *)((char *)this + v22 + 200) = *(_OWORD *)((char *)a2 + v22 + 32) )
    {
      v22 = v21++;
      v22 *= 32LL;
      *(_OWORD *)((char *)this + v22 + 184) = *(_OWORD *)((char *)a2 + v22 + 16);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL)
                                                                                         + 616LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL),
            a2);
    v12 = v14;
    if ( v14 < 0 )
    {
      v24 = 400;
      goto LABEL_27;
    }
  }
  else
  {
    if ( v2 )
    {
      v5 = *((_DWORD *)this + 41);
      v6 = *(_OWORD *)((char *)this + 84);
      v25[0] = *(_OWORD *)((char *)this + 68);
      v7 = *(_OWORD *)((char *)this + 100);
      v25[1] = v6;
      v8 = *(_OWORD *)((char *)this + 116);
      v25[2] = v7;
      v9 = *(_OWORD *)((char *)this + 132);
      v25[3] = v8;
      v10 = *(_OWORD *)((char *)this + 148);
      v25[4] = v9;
      v25[5] = v10;
      v26 = v5;
      v11 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)&g_MilColorTransfIdentity);
      v12 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x15Eu);
        return v12;
      }
      v13 = CMagnifierRenderTargetProxy::SetTransform(*((CMagnifierRenderTargetProxy **)this + 3), 0LL);
      v12 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x160u);
        return v12;
      }
      v14 = CMagnifierRenderTargetProxy::SetColorTransform(*((CMagnifierRenderTargetProxy **)this + 3), 0LL);
      v12 = v14;
      if ( v14 < 0 )
      {
        v24 = 354;
LABEL_27:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, v24);
        return v12;
      }
      v15 = (CBaseObject *)*((_QWORD *)this + 3);
      if ( v15 )
      {
        CBaseObject::Release(v15);
        *((_QWORD *)this + 3) = 0LL;
      }
      *((_DWORD *)this + 42) = 0;
      v14 = CMagnifier::Initialize((CBaseObject **)this);
      v12 = v14;
      if ( v14 < 0 )
      {
        v24 = 359;
        goto LABEL_27;
      }
      v14 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)v25);
      v12 = v14;
      if ( v14 < 0 )
      {
        v24 = 360;
        goto LABEL_27;
      }
    }
    v16 = 6;
    if ( *(_DWORD *)a2 <= 6u )
      v16 = *(_DWORD *)a2;
    *((_DWORD *)this + 42) = v16;
    v17 = 0;
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 43) = *((_DWORD *)a2 + 2);
    for ( *((_DWORD *)this + 44) = *((_DWORD *)a2 + 3);
          v17 < *((_DWORD *)this + 42);
          *(_OWORD *)((char *)this + v18 + 200) = *(_OWORD *)((char *)a2 + v18 + 32) )
    {
      v18 = v17++;
      v18 *= 32LL;
      *(_OWORD *)((char *)this + v18 + 184) = *(_OWORD *)((char *)a2 + v18 + 16);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL)
                                                                                                 + 592LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL),
            *((_QWORD *)this + 7),
            a2);
    v12 = v14;
    if ( v14 < 0 )
    {
      v24 = 378;
      goto LABEL_27;
    }
  }
  return v12;
}
