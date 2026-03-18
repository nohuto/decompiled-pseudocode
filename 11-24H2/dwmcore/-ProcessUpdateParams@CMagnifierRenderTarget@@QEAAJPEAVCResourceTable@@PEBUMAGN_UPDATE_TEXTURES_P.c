/*
 * XREFs of ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18018BC84
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18018BB38 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MATRIXTRANSFORM@@@Z @ 0x180204008 (-ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MATRIXTRANSFORM@@@Z.c)
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessUpdateParams(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a3)
{
  char *v4; // rbp
  unsigned int v6; // ebx
  __int64 v8; // rcx
  struct CResourceTable *v9; // rdx
  double v10; // xmm1_8
  CMatrixTransform *v11; // rcx
  float v12; // xmm0_4
  double v13; // xmm0_8
  int v14; // eax
  int v15; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+34h] [rbp-24h]
  __int64 v17; // [rsp+44h] [rbp-14h]
  int v18; // [rsp+4Ch] [rbp-Ch]

  v4 = (char *)this + 2944;
  v6 = 0;
  if ( memcmp_0((char *)this + 2944, a3, 0x28uLL) )
  {
    v8 = *((_QWORD *)this + 25);
    *(_OWORD *)v4 = *(_OWORD *)a3;
    *((_OWORD *)v4 + 1) = *((_OWORD *)a3 + 1);
    *((_QWORD *)v4 + 4) = *((_QWORD *)a3 + 4);
    *((float *)this + 52) = (float)*(int *)a3;
    *((float *)this + 53) = (float)*((int *)a3 + 1);
    if ( v8 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 64LL))(v8, 109LL) )
      {
        v10 = *((double *)a3 + 2);
        v11 = (CMatrixTransform *)*((_QWORD *)this + 25);
        v16 = 0LL;
        v15 = 461;
        v12 = *((double *)a3 + 1);
        v17 = 0LL;
        *(float *)&v10 = v10;
        *((float *)&v16 + 1) = v12;
        v13 = *((double *)a3 + 3);
        LODWORD(v17) = LODWORD(v10);
        *(float *)&v10 = *((double *)a3 + 4);
        *((float *)&v17 + 1) = v13;
        v18 = LODWORD(v10);
        v14 = CMatrixTransform::ProcessUpdate(v11, v9, (const struct tagMILCMD_MATRIXTRANSFORM *)&v15);
        v6 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xEFu, 0LL);
      }
      else
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xE5u, 0LL);
      }
    }
  }
  return v6;
}
