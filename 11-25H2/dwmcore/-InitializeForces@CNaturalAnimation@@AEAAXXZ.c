/*
 * XREFs of ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1802A9EB4
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801CC94C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333333333333333333333@Z @ 0x180004278 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800331B0 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1800FAE6C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18015F2F8 (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801CCB10 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CFrictionAccelerator@@QEAA@M@Z @ 0x1802A99DC (--0CFrictionAccelerator@@QEAA@M@Z.c)
 *     ??0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z @ 0x1802A9AF0 (--0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CNaturalAnimation::InitializeForces(CNaturalAnimation *this)
{
  int v1; // eax
  char *v3; // rbx
  int v4; // xmm0_4
  int v5; // xmm0_4
  unsigned int v6; // xmm0_4
  unsigned int v7; // xmm1_4
  float v8; // xmm0_4
  const struct D2DMatrix *v9; // r8
  CFrictionAccelerator *v10; // rax
  CFrictionAccelerator *v11; // rax
  struct IAccelerator *v12; // r14
  CFrictionAccelerator *v13; // rax
  CFrictionAccelerator *v14; // rax
  struct IAccelerator *v15; // rsi
  CVector3Force *v16; // rax
  __int64 v17; // rax
  int v18; // r8d
  float v19; // r9d
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rcx
  unsigned __int64 v24; // [rsp+120h] [rbp-80h] BYREF
  float v25; // [rsp+128h] [rbp-78h]
  __int64 v26; // [rsp+130h] [rbp-70h] BYREF
  int v27; // [rsp+138h] [rbp-68h]
  int v28; // [rsp+140h] [rbp-60h]
  int v29; // [rsp+144h] [rbp-5Ch]
  int v30; // [rsp+148h] [rbp-58h]
  int v31; // [rsp+14Ch] [rbp-54h]
  int v32; // [rsp+150h] [rbp-50h]
  int v33; // [rsp+154h] [rbp-4Ch]
  int v34; // [rsp+158h] [rbp-48h]
  int v35; // [rsp+15Ch] [rbp-44h]
  int v36; // [rsp+160h] [rbp-40h]
  int v37; // [rsp+164h] [rbp-3Ch]
  int v38; // [rsp+168h] [rbp-38h]
  int v39; // [rsp+16Ch] [rbp-34h]
  int v40; // [rsp+170h] [rbp-30h]
  int v41; // [rsp+174h] [rbp-2Ch]
  int v42; // [rsp+178h] [rbp-28h]
  int v43; // [rsp+17Ch] [rbp-24h]
  int v44; // [rsp+180h] [rbp-20h]
  int v45; // [rsp+184h] [rbp-1Ch]
  int v46; // [rsp+188h] [rbp-18h]
  int v47; // [rsp+18Ch] [rbp-14h]
  int v48; // [rsp+190h] [rbp-10h]
  int v49; // [rsp+194h] [rbp-Ch]
  int v50; // [rsp+198h] [rbp-8h]
  int v51; // [rsp+19Ch] [rbp-4h]
  int v52; // [rsp+1A0h] [rbp+0h]
  int v53; // [rsp+1A4h] [rbp+4h]
  int v54; // [rsp+1A8h] [rbp+8h]
  int TracingCookie; // [rsp+1ACh] [rbp+Ch]
  void *retaddr; // [rsp+1D8h] [rbp+38h]

  v1 = *((_DWORD *)this + 40);
  if ( v1 == 18 )
  {
    v3 = (char *)this + 356;
    v4 = *((_DWORD *)this + 82);
    *((_DWORD *)this + 86) = *((_DWORD *)this + 86);
    *((_DWORD *)this + 87) = *((_DWORD *)this + 81);
    *((_DWORD *)this + 88) = v4;
    *(_QWORD *)((char *)this + 356) = *((unsigned int *)this + 89);
    *((_DWORD *)this + 91) = 0;
    goto LABEL_8;
  }
  if ( v1 == 35 )
  {
    v3 = (char *)this + 356;
LABEL_8:
    v5 = *((_DWORD *)this + 82);
    *((_DWORD *)this + 86) = *((_DWORD *)this + 86);
    *((_DWORD *)this + 87) = *((_DWORD *)this + 87);
    *((_DWORD *)this + 88) = v5;
    *((_DWORD *)v3 + 1) = *((_DWORD *)this + 90);
    *((_DWORD *)v3 + 2) = 0;
    goto LABEL_9;
  }
  if ( v1 != 52 )
    ModuleFailFastForHRESULT(0x80004005, retaddr);
  v3 = (char *)this + 356;
LABEL_9:
  CNaturalAnimation::GenerateVector3Basis(this);
  *(float *)&v6 = *((float *)this + 80) - *((float *)this + 86);
  *(float *)&v7 = *((float *)this + 81) - *((float *)this + 87);
  v26 = 0LL;
  v24 = __PAIR64__(v7, v6);
  v8 = *((float *)this + 82) - *((float *)this + 88);
  v27 = 0;
  v25 = v8;
  D3DXVec3TransformNormal(
    (struct D2DVector3 *)&v26,
    (const struct D2DVector3 *)&v24,
    (CNaturalAnimation *)((char *)this + 444));
  v24 = 0LL;
  v25 = 0.0;
  D3DXVec3TransformNormal((struct D2DVector3 *)&v24, (const struct D2DVector3 *)v3, v9);
  v10 = (CFrictionAccelerator *)operator new(0x18uLL);
  if ( v10 )
  {
    v11 = CFrictionAccelerator::CFrictionAccelerator(v10, -0.5);
    v12 = v11;
    if ( v11 )
      (**(void (__fastcall ***)(CFrictionAccelerator *))v11)(v11);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = (CFrictionAccelerator *)operator new(0x18uLL);
  if ( v13 )
  {
    v14 = CFrictionAccelerator::CFrictionAccelerator(v13, -0.5);
    v15 = v14;
    if ( v14 )
      (**(void (__fastcall ***)(CFrictionAccelerator *))v14)(v14);
  }
  else
  {
    v15 = 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 32LL))(*((_QWORD *)this + 54));
  v16 = (CVector3Force *)operator new(0x168uLL);
  if ( v16 )
    v16 = CVector3Force::CVector3Force(v16, v12, v15, *((struct IAccelerator **)this + 54));
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=((_QWORD *)this + 53, (void (__fastcall ***)(_QWORD))v16);
  v17 = *((_QWORD *)this + 53);
  v18 = v27;
  v19 = v25;
  *(_QWORD *)(v17 + 316) = v26;
  *(_QWORD *)(v17 + 328) = v24;
  *(float *)(v17 + 336) = v19;
  *(_DWORD *)(v17 + 324) = v18;
  *(_OWORD *)(v17 + 220) = *(_OWORD *)((char *)this + 444);
  *(_OWORD *)(v17 + 236) = *(_OWORD *)((char *)this + 460);
  *(_OWORD *)(v17 + 252) = *(_OWORD *)((char *)this + 476);
  *(_OWORD *)(v17 + 268) = *(_OWORD *)((char *)this + 492);
  *(_DWORD *)(v17 + 312) = 0;
  v20 = *((_QWORD *)this + 53);
  *(_QWORD *)(v20 + 340) = *((_QWORD *)this + 43);
  LODWORD(v17) = *((_DWORD *)this + 88);
  *(_BYTE *)(v20 + 352) |= 2u;
  *(_DWORD *)(v20 + 348) = v17;
  if ( (*(_DWORD *)(*((_QWORD *)this + 39) + 4LL) & 0x40000000) != 0
    && (unsigned int)dword_180404D18 > 4
    && tlgKeywordOn((__int64)&dword_180404D18, 4LL) )
  {
    v28 = *((_DWORD *)this + 122);
    v29 = *((_DWORD *)this + 121);
    v30 = *((_DWORD *)this + 120);
    v31 = *((_DWORD *)this + 119);
    v32 = *((_DWORD *)this + 118);
    v33 = *((_DWORD *)this + 117);
    v34 = *((_DWORD *)this + 116);
    v35 = *((_DWORD *)this + 115);
    v36 = *((_DWORD *)this + 114);
    v37 = *((_DWORD *)this + 113);
    v38 = *((_DWORD *)this + 112);
    v39 = *((_DWORD *)this + 111);
    v41 = HIDWORD(v26);
    v42 = v26;
    v44 = HIDWORD(v24);
    v45 = v24;
    v46 = *((_DWORD *)this + 88);
    v47 = *((_DWORD *)this + 87);
    v48 = *((_DWORD *)this + 86);
    v49 = *((_DWORD *)this + 82);
    v50 = *((_DWORD *)this + 81);
    v51 = *((_DWORD *)this + 80);
    v52 = *((_DWORD *)this + 91);
    v53 = *((_DWORD *)this + 90);
    v54 = *((_DWORD *)this + 89);
    v40 = v21;
    v43 = v22;
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v23,
      (__int64)&unk_1803D9681);
  }
  if ( v15 )
    (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v15 + 8LL))(v15);
  if ( v12 )
    (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v12 + 8LL))(v12);
}
