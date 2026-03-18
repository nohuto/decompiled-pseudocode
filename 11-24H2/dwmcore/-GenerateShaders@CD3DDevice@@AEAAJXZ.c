/*
 * XREFs of ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x1801927D0
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1801BD550 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18010EFA0 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 *     ??R?$default_delete@VCSurfaceShaderComposer@@@std@@QEBAXPEAVCSurfaceShaderComposer@@@Z @ 0x180186E9C (--R-$default_delete@VCSurfaceShaderComposer@@@std@@QEBAXPEAVCSurfaceShaderComposer@@@Z.c)
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x180186F5C (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ?Add@?$CMap@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@V?$CMapEqualHelper@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@@@@QEAAHAEBIAEBV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180192DE0 (-Add@-$CMap@IV-$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@V-$CMapEqualHel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::GenerateShaders(CD3DDevice *this)
{
  bool v2; // r13
  unsigned int v3; // ebx
  CCommonRenderingShaderCache *v4; // rcx
  char v5; // al
  unsigned int v6; // edx
  __m128i v7; // xmm6
  __int64 v8; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // esi
  unsigned int i; // eax
  int CommonRenderingShaderInternalNoRef; // eax
  unsigned int v15; // esi
  __int16 *v16; // r9
  unsigned int v17; // eax
  __int64 v18; // r8
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __m128i v23; // xmm6
  __int64 v24; // r14
  __int64 *v25; // r15
  __m128i v26; // xmm7
  __int64 v27; // rax
  __int64 *v28; // rbx
  __int64 v29; // rcx
  __int64 (__fastcall *v30)(__int64 *, unsigned __int64, __int64, unsigned __int64, __int64, char *); // r12
  unsigned int v31; // esi
  unsigned int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // rdx
  unsigned int v35; // r14d
  __int64 v36; // r15
  __int64 (__fastcall *v37)(__int64, char *, char *, __int16 *); // r12
  char *v38; // rbx
  __int64 v39; // rcx
  unsigned int v40; // esi
  int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // rdx
  unsigned int v44; // r14d
  __int64 v45; // r15
  __int64 (__fastcall *v46)(__int64, char *, char *); // r12
  char *v47; // rbx
  __int64 v48; // rcx
  unsigned int v49; // esi
  unsigned int v50; // eax
  unsigned int v51; // ecx
  __int64 v52; // rdx
  unsigned int v53; // r14d
  __int64 v54; // r15
  __int64 (__fastcall *v55)(__int64, char *, char *, __int16 *); // r12
  char *v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // rcx
  CSurfaceShaderComposer *v59; // rdx
  unsigned int v61; // [rsp+20h] [rbp-60h]
  __int64 v62; // [rsp+40h] [rbp-40h] BYREF
  struct CSurfaceShaderComposer *v63; // [rsp+48h] [rbp-38h] BYREF
  int v64; // [rsp+50h] [rbp-30h]
  int v65; // [rsp+58h] [rbp-28h]
  int v66; // [rsp+5Ch] [rbp-24h]
  __int64 v67; // [rsp+C0h] [rbp+40h] BYREF
  int v68; // [rsp+C8h] [rbp+48h]
  struct ID3D11PixelShader *v69; // [rsp+D0h] [rbp+50h] BYREF

  v68 = *((_DWORD *)this + 154);
  v2 = v68 >= 37632;
  v3 = 0;
  LODWORD(v67) = 0;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  while ( (unsigned int)v4 < 0x10 )
  {
    if ( (unsigned __int8)v2 >= (unsigned __int8)((v5 & 4) != 0) )
    {
      v7 = *((__m128i *)&unk_180302430 + v6);
      v8 = *((_QWORD *)&unk_180302430 + 2 * v6);
      if ( v8 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0t_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_D3DSHADER_CREATE_Start,
            0LL);
        v9 = (__int64 *)*((_QWORD *)this + 69);
        v10 = *v9;
        v69 = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64, _QWORD, struct ID3D11PixelShader **))(v10 + 96))(
                v9,
                _mm_srli_si128(v7, 8).m128i_u64[0],
                v8,
                0LL,
                &v69);
        v3 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x205u, 0LL);
          if ( v69 )
            ((void (__fastcall *)(struct ID3D11PixelShader *))v69->lpVtbl->Release)(v69);
          return v3;
        }
        CMap<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>,CMapEqualHelper<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>>>::Add(
          (char *)this + 1512,
          &v67,
          &v69);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0t_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_D3DSHADER_CREATE_Stop,
            0LL);
        if ( v69 )
          ((void (__fastcall *)(struct ID3D11PixelShader *))v69->lpVtbl->Release)(v69);
      }
    }
    v4 = (CCommonRenderingShaderCache *)(unsigned int)(v67 + 1);
    LODWORD(v67) = (_DWORD)v4;
    v5 = (char)v4;
    v6 = (unsigned int)v4;
  }
  v12 = 0;
  for ( i = 0; i < 4; i = v12 )
  {
    v65 = -1;
    v64 = 0;
    v62 = v12;
    v63 = (struct CSurfaceShaderComposer *)"NoOp";
    LODWORD(v67) = 0;
    v66 = 0;
    v69 = 0LL;
    CommonRenderingShaderInternalNoRef = CCommonRenderingShaderCache::GetCommonRenderingShaderInternalNoRef(
                                           v4,
                                           this,
                                           (const struct CommonRenderingShaderDesc *)&v62,
                                           (unsigned int *)&v67,
                                           (struct ID3D10BlobVtbl **)&v69);
    v3 = CommonRenderingShaderInternalNoRef;
    if ( CommonRenderingShaderInternalNoRef < 0 )
    {
      v61 = 537;
      goto LABEL_60;
    }
    if ( (v62 & 1) != 0 )
    {
      LODWORD(v62) = v62 | 4;
      CommonRenderingShaderInternalNoRef = CCommonRenderingShaderCache::GetCommonRenderingShaderInternalNoRef(
                                             v4,
                                             this,
                                             (const struct CommonRenderingShaderDesc *)&v62,
                                             (unsigned int *)&v67,
                                             (struct ID3D10BlobVtbl **)&v69);
      v3 = CommonRenderingShaderInternalNoRef;
      if ( CommonRenderingShaderInternalNoRef < 0 )
      {
        v61 = 547;
LABEL_60:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CommonRenderingShaderInternalNoRef, v61, 0LL);
        return v3;
      }
    }
    ++v12;
  }
  v15 = 0;
  v16 = &_ImageBase;
  v17 = 0;
  v18 = 0LL;
  while ( v17 < 4 )
  {
    v67 = 0LL;
    v19 = 4;
    if ( (unsigned int)(v18 - 2) > 1 )
      v19 = 0;
    v20 = 0;
    if ( (((_DWORD)v18 - 1) & 0xFFFFFFFD) == 0 )
      v20 = 2;
    if ( BYTE1(v67) )
      v19 |= 8u;
    v21 = v19 | 2;
    v22 = v21 | 1;
    if ( v20 != 2 )
      v22 = v21;
    if ( (unsigned __int8)v2 >= (unsigned __int8)((v22 & 4) != 0) )
    {
      v23 = *((__m128i *)&unk_180302430 + (unsigned int)v22);
      v24 = *((_QWORD *)&unk_180302430 + 2 * (unsigned int)v22);
      if ( v24 )
      {
        v25 = (__int64 *)*((_QWORD *)this + 69);
        v26 = *((__m128i *)&unk_1803029C0 + (int)v18);
        v27 = *v25;
        v28 = (__int64 *)((char *)this + 8 * v15 + 1544);
        v29 = *v28;
        *v28 = 0LL;
        v30 = *(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64, unsigned __int64, __int64, char *))(v27 + 88);
        if ( v29 )
          (*(void (__fastcall **)(__int64, __int64, __int64, __int16 *))(*(_QWORD *)v29 + 16LL))(
            v29,
            v22,
            v18,
            &_ImageBase);
        CommonRenderingShaderInternalNoRef = v30(
                                               v25,
                                               _mm_srli_si128(v26, 8).m128i_u64[0],
                                               v26.m128i_i64[0],
                                               _mm_srli_si128(v23, 8).m128i_u64[0],
                                               v24,
                                               (char *)this + 8 * v15 + 1544);
        v3 = CommonRenderingShaderInternalNoRef;
        if ( CommonRenderingShaderInternalNoRef < 0 )
        {
          v61 = 568;
          goto LABEL_60;
        }
        v16 = &_ImageBase;
      }
    }
    v17 = ++v15;
    v18 = v15;
  }
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0LL;
  v35 = 0;
  while ( v32 < 0x18 )
  {
    v36 = *((_QWORD *)this + 69);
    v37 = *(__int64 (__fastcall **)(__int64, char *, char *, __int16 *))(*(_QWORD *)v36 + 160LL);
    v38 = (char *)this + 8 * v33;
    v39 = *((_QWORD *)v38 + 197);
    *((_QWORD *)v38 + 197) = 0LL;
    if ( v39 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, __int16 *))(*(_QWORD *)v39 + 16LL))(v39, v34, v18, v16);
      LODWORD(v34) = v35;
    }
    CommonRenderingShaderInternalNoRef = v37(v36, &byte_18032DED0[264 * (int)v34], v38 + 1576, v16);
    v3 = CommonRenderingShaderInternalNoRef;
    if ( CommonRenderingShaderInternalNoRef < 0 )
    {
      v61 = 576;
      goto LABEL_60;
    }
    v32 = ++v31;
    v33 = v31;
    v34 = v31;
    v35 = v31;
  }
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0LL;
  v44 = 0;
  while ( !v41 )
  {
    v45 = *((_QWORD *)this + 69);
    v46 = *(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v45 + 176LL);
    v47 = (char *)this + 8 * v42;
    v48 = *((_QWORD *)v47 + 269);
    *((_QWORD *)v47 + 269) = 0LL;
    if ( v48 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, __int16 *))(*(_QWORD *)v48 + 16LL))(v48, v43, v18, v16);
      LODWORD(v43) = v44;
    }
    CommonRenderingShaderInternalNoRef = v46(v45, &byte_180384140[40 * (int)v43], v47 + 2152);
    v3 = CommonRenderingShaderInternalNoRef;
    if ( CommonRenderingShaderInternalNoRef < 0 )
    {
      v61 = 582;
      goto LABEL_60;
    }
    v41 = ++v40;
    v42 = v40;
    v43 = v40;
    v44 = v40;
  }
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0LL;
  v53 = 0;
  while ( v50 < 4 )
  {
    v54 = *((_QWORD *)this + 69);
    v55 = *(__int64 (__fastcall **)(__int64, char *, char *, __int16 *))(*(_QWORD *)v54 + 168LL);
    v56 = (char *)this + 8 * v51;
    v57 = *((_QWORD *)v56 + 270);
    *((_QWORD *)v56 + 270) = 0LL;
    if ( v57 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, __int16 *))(*(_QWORD *)v57 + 16LL))(v57, v52, v18, v16);
      LODWORD(v52) = v53;
    }
    CommonRenderingShaderInternalNoRef = v55(v54, &byte_18032F790[52 * (int)v52], v56 + 2160, v16);
    v3 = CommonRenderingShaderInternalNoRef;
    if ( CommonRenderingShaderInternalNoRef < 0 )
    {
      v61 = 588;
      goto LABEL_60;
    }
    v50 = ++v49;
    v51 = v49;
    v52 = v49;
    v53 = v49;
  }
  if ( v68 >= 37632 )
  {
    v63 = 0LL;
    v62 = (__int64)this + 1536;
    LOBYTE(v64) = 1;
    v3 = CSurfaceShaderComposer::Create(this, &v63);
    if ( (_BYTE)v64 )
    {
      v58 = v62;
      v59 = *(CSurfaceShaderComposer **)v62;
      *(_QWORD *)v62 = v63;
      if ( v59 )
        std::default_delete<CSurfaceShaderComposer>::operator()(v58, v59);
    }
    if ( (v3 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x253u, 0LL);
  }
  return v3;
}
