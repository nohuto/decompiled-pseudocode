/*
 * XREFs of ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x18020DB3C
 * Callers:
 *     ?Thunk_UpdateManipulation_113@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180262130 (-Thunk_UpdateManipulation_113@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x18029582C (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444444@Z @ 0x18020DFE4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_18020DFE4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::Update(CManipulation *this, struct ManipulationData *a2, __int64 a3, int a4)
{
  char *v4; // r8
  int v5; // edi
  __m128 v6; // xmm5
  __m128 v8; // xmm3
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm8_4
  float v12; // xmm9_4
  float v13; // xmm10_4
  char *v14; // rcx
  __int128 v15; // xmm0
  char *v16; // rdx
  int v17; // eax
  CManipulation *v18; // r8
  __int64 v19; // rdx
  unsigned __int8 v21; // cl
  int v22; // [rsp+118h] [rbp-80h] BYREF
  int v23; // [rsp+11Ch] [rbp-7Ch] BYREF
  int v24; // [rsp+120h] [rbp-78h] BYREF
  int v25; // [rsp+124h] [rbp-74h] BYREF
  int v26; // [rsp+128h] [rbp-70h] BYREF
  int v27; // [rsp+12Ch] [rbp-6Ch] BYREF
  int v28; // [rsp+130h] [rbp-68h] BYREF
  int v29; // [rsp+134h] [rbp-64h] BYREF
  int v30; // [rsp+138h] [rbp-60h] BYREF
  int v31; // [rsp+13Ch] [rbp-5Ch] BYREF
  int v32; // [rsp+140h] [rbp-58h] BYREF
  int v33; // [rsp+144h] [rbp-54h] BYREF
  int v34; // [rsp+148h] [rbp-50h] BYREF
  int v35; // [rsp+14Ch] [rbp-4Ch] BYREF
  int v36; // [rsp+150h] [rbp-48h] BYREF
  int v37; // [rsp+154h] [rbp-44h] BYREF
  int v38; // [rsp+158h] [rbp-40h] BYREF
  int v39; // [rsp+15Ch] [rbp-3Ch] BYREF
  int v40; // [rsp+160h] [rbp-38h] BYREF
  int v41; // [rsp+164h] [rbp-34h] BYREF
  int v42; // [rsp+168h] [rbp-30h] BYREF
  int v43; // [rsp+16Ch] [rbp-2Ch] BYREF
  int v44; // [rsp+170h] [rbp-28h] BYREF
  int v45; // [rsp+174h] [rbp-24h] BYREF
  int v46; // [rsp+178h] [rbp-20h] BYREF
  CManipulation *v47; // [rsp+180h] [rbp-18h] BYREF
  int v48; // [rsp+1F8h] [rbp+60h] BYREF
  int v49; // [rsp+200h] [rbp+68h] BYREF
  int v50; // [rsp+208h] [rbp+70h] BYREF
  int v51; // [rsp+210h] [rbp+78h] BYREF

  v4 = (char *)this + 272;
  v5 = *((_DWORD *)this + 107);
  v6 = (__m128)*((unsigned int *)a2 + 9);
  v8 = (__m128)*((unsigned int *)a2 + 10);
  v9 = *((float *)this + 73);
  v6.m128_f32[0] = v6.m128_f32[0] * *((float *)this + 77);
  v8.m128_f32[0] = v8.m128_f32[0] * *((float *)this + 78);
  v10 = *((float *)a2 + 11) * *((float *)this + 79);
  v11 = *((float *)this + 71) + *((float *)a2 + 3);
  v12 = *((float *)this + 72) + *((float *)a2 + 4);
  v13 = *((float *)a2 + 5);
  *((_OWORD *)this + 17) = *(_OWORD *)a2;
  v14 = (char *)this + 400;
  *((_OWORD *)v4 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v4 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v4 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v4 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v4 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v4 + 6) = *((_OWORD *)a2 + 6);
  v15 = *((_OWORD *)a2 + 7);
  v16 = (char *)a2 + 128;
  *((_OWORD *)v14 - 1) = v15;
  *(_OWORD *)v14 = *(_OWORD *)v16;
  *((_OWORD *)v14 + 1) = *((_OWORD *)v16 + 1);
  *((_OWORD *)v14 + 2) = *((_OWORD *)v16 + 2);
  *((_QWORD *)v14 + 6) = *((_QWORD *)v16 + 6);
  *((float *)this + 71) = v11;
  *((float *)this + 72) = v12;
  *((float *)this + 73) = v13 + v9;
  *(_QWORD *)((char *)this + 308) = _mm_unpacklo_ps(v6, v8).m128_u64[0];
  *((float *)this + 79) = v10;
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v21 = *((_BYTE *)this + 452);
    v47 = this;
    v48 = (v21 >> 1) & 1;
    v50 = *((_DWORD *)this + 112);
    v51 = *((_DWORD *)this + 111);
    v22 = *((_DWORD *)this + 110);
    v23 = *((_DWORD *)this + 107);
    v24 = *((_DWORD *)this + 105);
    v25 = *((_DWORD *)this + 104);
    v26 = *((_DWORD *)this + 103);
    v27 = *((_DWORD *)this + 102);
    v28 = *((_DWORD *)this + 101);
    v29 = *((_DWORD *)this + 100);
    v30 = *((_DWORD *)this + 106);
    v31 = *((_DWORD *)this + 80);
    v32 = *((_DWORD *)this + 83);
    v33 = *((_DWORD *)this + 82);
    v34 = *((_DWORD *)this + 81);
    v35 = *((_DWORD *)this + 79);
    v36 = *((_DWORD *)this + 78);
    v37 = *((_DWORD *)this + 77);
    v38 = *((_DWORD *)this + 76);
    v39 = *((_DWORD *)this + 75);
    v40 = *((_DWORD *)this + 74);
    v41 = *((_DWORD *)this + 73);
    v42 = *((_DWORD *)this + 72);
    v43 = *((_DWORD *)this + 71);
    v44 = *((_DWORD *)this + 70);
    v45 = *((_DWORD *)this + 69);
    v46 = *(_DWORD *)v4;
    v49 = v21 & 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v49,
      (unsigned int)&unk_1803D7E8F,
      (_DWORD)v4,
      a4,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48);
  }
  v17 = *((_DWORD *)this + 107);
  if ( v17 == v5 )
  {
    if ( v17 || v5 )
    {
      v18 = 0LL;
      v19 = 0LL;
    }
    else
    {
      v18 = this;
      v19 = 10LL;
    }
  }
  else
  {
    v18 = this;
    v19 = 7LL;
  }
  (*(void (__fastcall **)(CManipulation *, __int64, CManipulation *))(*(_QWORD *)this + 80LL))(this, v19, v18);
  CResource::InvalidateAnimationSources(this, 0LL);
  CResource::InvalidateAnimationSources(this, 1LL);
  CResource::InvalidateAnimationSources(this, 2LL);
  CResource::InvalidateAnimationSources(this, 3LL);
  CResource::InvalidateAnimationSources(this, 4LL);
  CResource::InvalidateAnimationSources(this, 5LL);
  CResource::InvalidateAnimationSources(this, 6LL);
  CResource::InvalidateAnimationSources(this, 7LL);
  return 0LL;
}
