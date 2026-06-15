/*
 * XREFs of ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140023EA8
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005FB0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EC54 (-RemoveAll@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140022FF0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140023D58 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140025D1C (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140025DE0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140025FD8 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026760 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140026A74 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140026C00 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140038FA4 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14005A0F0 (_CxxThrowException_0.c)
 *     CreateAudioMediaType @ 0x14005B104 (CreateAudioMediaType.c)
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CreateBridgeSinkProcessNode@CBridgeSinkProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVCStreamProcessNode@@@Z @ 0x14006C45C (-CreateBridgeSinkProcessNode@CBridgeSinkProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAP.c)
 *     ?CreateBridgeSourceProcessNode@CBridgeSourceProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVCStreamProcessNode@@@Z @ 0x14006C5A0 (-CreateBridgeSourceProcessNode@CBridgeSourceProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CPipeInstance::CreateStreamPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct CPipeInstance *a3,
        struct tWAVEFORMATEX *a4,
        struct SYSTEM_AUDIO_STREAM *a5,
        struct CPipeInstance **a6)
{
  int v8; // r12d
  float v9; // xmm7_4
  int FxPropertyStore; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int16 *v13; // rcx
  int v14; // r8d
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // rdx
  struct CStreamProcessNode *v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  GUID v22; // xmm1
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r13d
  unsigned int v27; // r15d
  struct IPropertyStore *v28; // rdi
  __int64 v29; // rsi
  int v30; // eax
  GUID v31; // xmm6
  int v32; // eax
  __int64 v33; // rdx
  int v34; // r8d
  int v35; // r13d
  WAVEFORMATEX *v36; // r13
  HRESULT v37; // eax
  int v38; // eax
  unsigned int v39; // r15d
  int v40; // eax
  WAVEFORMATEX *v41; // rdi
  __int64 v42; // rax
  int v43; // eax
  WAVEFORMATEX *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  CPipeInstance *v47; // rdi
  int v48; // eax
  unsigned int v49; // esi
  __int64 v50; // rcx
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rdx
  int v54; // eax
  int v55; // eax
  int v57; // ecx
  int DummyProcessNode; // eax
  __int64 v59; // rax
  int v60; // eax
  unsigned __int16 v61; // dx
  WORD nChannels; // cx
  WORD wBitsPerSample; // dx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // eax
  int v69; // eax
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rax
  int v73; // eax
  struct CStreamProcessNode *v74; // [rsp+40h] [rbp-1A8h] BYREF
  int v75[2]; // [rsp+48h] [rbp-1A0h] BYREF
  BOOL v76; // [rsp+50h] [rbp-198h]
  WAVEFORMATEX *pAudioFormat; // [rsp+58h] [rbp-190h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+60h] [rbp-188h] BYREF
  struct CStreamProcessNode *v79; // [rsp+68h] [rbp-180h] BYREF
  WAVEFORMATEX *v80; // [rsp+70h] [rbp-178h] BYREF
  int v81; // [rsp+78h] [rbp-170h] BYREF
  int v82; // [rsp+7Ch] [rbp-16Ch] BYREF
  HRESULT v83; // [rsp+80h] [rbp-168h] BYREF
  int v84; // [rsp+84h] [rbp-164h] BYREF
  int v85; // [rsp+88h] [rbp-160h] BYREF
  int v86; // [rsp+8Ch] [rbp-15Ch] BYREF
  int v87; // [rsp+90h] [rbp-158h] BYREF
  int v88; // [rsp+94h] [rbp-154h] BYREF
  int v89; // [rsp+98h] [rbp-150h] BYREF
  int v90; // [rsp+9Ch] [rbp-14Ch] BYREF
  int pExceptionObject; // [rsp+A0h] [rbp-148h] BYREF
  int v92; // [rsp+A4h] [rbp-144h] BYREF
  int v93; // [rsp+A8h] [rbp-140h] BYREF
  int v94; // [rsp+ACh] [rbp-13Ch] BYREF
  struct IPropertyStore *v95; // [rsp+B0h] [rbp-138h] BYREF
  int v96; // [rsp+B8h] [rbp-130h] BYREF
  int v97; // [rsp+BCh] [rbp-12Ch] BYREF
  __int128 v98; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v99; // [rsp+D0h] [rbp-118h]
  __int128 v100; // [rsp+D8h] [rbp-110h]
  int v101; // [rsp+E8h] [rbp-100h]
  GUID v102; // [rsp+F0h] [rbp-F8h] BYREF
  struct IDeviceGraphObjectCache *v103; // [rsp+100h] [rbp-E8h]
  struct CPipeInstance **v104; // [rsp+108h] [rbp-E0h]
  GUID v105; // [rsp+110h] [rbp-D8h] BYREF
  long *v106; // [rsp+120h] [rbp-C8h] BYREF
  ATL::CAtlException *v107; // [rsp+128h] [rbp-C0h] BYREF
  _BYTE v108[40]; // [rsp+130h] [rbp-B8h] BYREF
  __int128 v109; // [rsp+158h] [rbp-90h]
  _BYTE v110[24]; // [rsp+168h] [rbp-80h]

  try
  {
    pAudioFormat = a4;
    v103 = a1;
    v104 = a6;
    v8 = 0;
    v75[0] = 0;
    v76 = *(_DWORD *)a2 != 0;
    v98 = 0LL;
    v99 = 0LL;
    v100 = 0LL;
    v101 = 10;
    if ( *((_DWORD *)a2 + 2) == 1 )
      v9 = FLOAT_1_0;
    else
      v9 = FLOAT_1_1;
    *a6 = 0LL;
    v95 = 0LL;
    FxPropertyStore = TryGetFxPropertyStore(*((const unsigned __int16 **)a2 + 18), &v95);
    if ( FxPropertyStore < 0 )
    {
      v92 = FxPropertyStore;
      throw (long *)&v92;
    }
    v79 = 0LL;
    v11 = *((_DWORD *)a2 + 74);
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v68 = CBridgeSourceProcessNode::CreateBridgeSourceProcessNode(a2, &v79);
        if ( v68 < 0 )
        {
          v94 = v68;
          throw (long *)&v94;
        }
      }
      else if ( v11 == 2 )
      {
        v69 = CBridgeSinkProcessNode::CreateBridgeSinkProcessNode(a2, &v79);
        if ( v69 < 0 )
        {
          v96 = v69;
          throw (long *)&v96;
        }
      }
    }
    else
    {
      v12 = CStreamProcessNode::CreateStreamProcessNode((const WAVEFORMATEX **)a2, &v79);
      if ( v12 < 0 )
      {
        v93 = v12;
        throw (long *)&v93;
      }
    }
    v74 = v79;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v98, &v74);
    v79 = 0LL;
    v74 = 0LL;
    v109 = 0LL;
    *(_OWORD *)v110 = 0LL;
    v13 = (unsigned __int16 *)*((_QWORD *)a2 + 16);
    v14 = 0;
    if ( !v13 )
      goto LABEL_90;
    if ( *v13 != 0xFFFE )
    {
      v20 = 65533LL;
      if ( !v13[8] || ((*v13 - 1) & 0xFFFD) == 0 )
      {
        v61 = v13[1];
        if ( (unsigned __int16)(v61 - 1) <= 1u && ((v13[7] - 8) & 0xFFE7) == 0 )
        {
          v109 = *(_OWORD *)v13;
          v22 = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(GUID *)&v110[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v110[8] = *v13;
          v21 = 4 - (v61 != 1);
          v19 = *(struct CStreamProcessNode **)GUID_00000000_0000_0010_8000_00aa00389b71.Data4;
          v74 = *(struct CStreamProcessNode **)GUID_00000000_0000_0010_8000_00aa00389b71.Data4;
          v16 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
          v15 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
          v18 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
LABEL_15:
          v75[0] = v21;
          v23 = *(_QWORD *)&v110[8];
          v24 = v15 - *(_QWORD *)&v110[8];
          if ( v15 == *(_QWORD *)&v110[8] )
            v24 = v16 - (_QWORD)v19;
          if ( v24 )
          {
            v25 = v17 - *(_QWORD *)&v110[8];
            if ( v17 == *(_QWORD *)&v110[8] )
              v25 = v18 - (_QWORD)v19;
            if ( v25 )
            {
              v26 = v76;
              goto LABEL_22;
            }
          }
          memset(v108, 0, sizeof(v108));
          v57 = 0;
          if ( a4 )
          {
            if ( a4->wFormatTag == 0xFFFE )
            {
              if ( a4->cbSize == 22 )
                goto LABEL_65;
              v66 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2) - v15;
              if ( !v66 )
                v66 = *(_QWORD *)&a4[1].wBitsPerSample - v16;
              if ( !v66 )
                goto LABEL_65;
              v67 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2) - v17;
              if ( !v67 )
                v67 = *(_QWORD *)&a4[1].wBitsPerSample - v18;
              if ( !v67 )
              {
LABEL_65:
                *(_OWORD *)v108 = *(_OWORD *)&a4->wFormatTag;
                *(_OWORD *)&v108[16] = *(_OWORD *)&a4->cbSize;
                *(_QWORD *)&v108[32] = *(_QWORD *)&a4[1].wBitsPerSample;
                *(_WORD *)&v108[16] = 22;
                v57 = 1;
              }
              if ( v57 )
                goto LABEL_67;
            }
            else if ( !a4->cbSize || ((a4->wFormatTag - 1) & 0xFFFD) == 0 )
            {
              nChannels = a4->nChannels;
              if ( (unsigned __int16)(nChannels - 1) <= 1u )
              {
                wBitsPerSample = a4->wBitsPerSample;
                if ( ((wBitsPerSample - 8) & 0xFFE7) == 0 )
                {
                  *(_OWORD *)v108 = *(_OWORD *)&a4->wFormatTag;
                  *(_WORD *)v108 = -2;
                  *(_WORD *)&v108[16] = 22;
                  *(_WORD *)&v108[18] = wBitsPerSample;
                  *(GUID *)&v108[24] = v22;
                  *(_DWORD *)&v108[24] = a4->wFormatTag;
                  *(_DWORD *)&v108[20] = 4 - (nChannels != 1);
LABEL_67:
                  if ( *((_DWORD *)a2 + 38) && *(_WORD *)&v108[2] != WORD1(v109) )
                  {
                    *(_WORD *)&v108[2] = WORD1(v109);
                    *(_DWORD *)&v108[20] = v75[0];
                    *(_WORD *)&v108[12] = WORD1(v109) * (*(_WORD *)&v108[14] >> 3);
                    *(_DWORD *)&v108[8] = *(_DWORD *)&v108[4] * *(unsigned __int16 *)&v108[12];
                  }
                  *(_QWORD *)v75 = 0LL;
                  v26 = v76;
                  DummyProcessNode = CProcessNode::CreateDummyProcessNode(v76, v108, v75);
                  if ( DummyProcessNode < 0 )
                  {
                    v97 = DummyProcessNode;
                    throw (long *)&v97;
                  }
                  v80 = *(WAVEFORMATEX **)v75;
                  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v98, &v80);
                  *(_QWORD *)v75 = 0LL;
                  v59 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - v23;
                  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == v23 )
                    v59 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - (_QWORD)v74;
                  if ( !v59 && (*((_DWORD *)a2 + 34) & 0x800000) == 0 )
                  {
                    v74 = 0LL;
                    v102 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
                    v60 = CAPOProcessNode::CreateAPOProcessNode(
                            &GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec,
                            0LL,
                            v26,
                            1,
                            0,
                            &v102,
                            &v74);
                    if ( v60 < 0 )
                    {
                      v81 = v60;
                      throw (long *)&v81;
                    }
                    v80 = (WAVEFORMATEX *)v74;
                    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v98, &v80);
                  }
LABEL_22:
                  v27 = 0;
                  v28 = (struct IPropertyStore *)v80;
                  v29 = *(_QWORD *)&v102.Data1;
                  while ( v27 < *((_DWORD *)a2 + 79) )
                  {
                    v74 = 0LL;
                    v30 = *((_DWORD *)a2 + 38);
                    if ( _bittest(&v30, v27) )
                    {
                      v31 = *(GUID *)((char *)a2 + 156);
                      v28 = v95;
                      v80 = (WAVEFORMATEX *)v95;
                      if ( v95 )
                        ((void (__fastcall *)(struct IPropertyStore *, __int64, __int64))v95->lpVtbl->AddRef)(
                          v95,
                          v18,
                          v20);
                      v32 = 1;
                      v8 |= 1u;
                      v33 = (__int64)v28;
                      v34 = v26;
                    }
                    else
                    {
                      v31 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
                      v34 = v26;
                      v29 = 0LL;
                      *(_QWORD *)&v102.Data1 = 0LL;
                      v8 |= 2u;
                      v33 = 0LL;
                      v32 = 0;
                    }
                    v75[0] = v8;
                    v105 = v31;
                    v35 = CAPOProcessNode::CreateAPOProcessNode(
                            (const struct _GUID *)a2 + v27 + 20,
                            v33,
                            v34,
                            0,
                            v32,
                            &v105,
                            &v74);
                    if ( (v8 & 2) != 0 )
                    {
                      v8 &= ~2u;
                      v75[0] = v8;
                      if ( v29 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                    }
                    if ( (v8 & 1) != 0 )
                    {
                      v8 &= ~1u;
                      if ( v28 )
                        ((void (__fastcall *)(struct IPropertyStore *))v28->lpVtbl->Release)(v28);
                    }
                    if ( v35 < 0 )
                    {
                      v82 = v35;
                      throw (long *)&v82;
                    }
                    *(_QWORD *)v75 = v74;
                    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v98, v75);
                    ++v27;
                    v26 = v76;
                  }
                  ppIAudioMediaType = 0LL;
                  v36 = pAudioFormat;
                  v37 = CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, &ppIAudioMediaType);
                  if ( v37 < 0 )
                  {
                    v83 = v37;
                    throw (long *)&v83;
                  }
                  v38 = *(_DWORD *)a2;
                  if ( !*(_DWORD *)a2 )
                  {
                    v74 = 0LL;
                    v105 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
                    v39 = v76;
                    v40 = CAPOProcessNode::CreateAPOProcessNode(
                            &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
                            0LL,
                            v76,
                            1,
                            0,
                            &v105,
                            &v74);
                    if ( v40 < 0 )
                    {
                      v84 = v40;
                      throw (long *)&v84;
                    }
                    v41 = (WAVEFORMATEX *)v74;
                    (*(void (__fastcall **)(struct CStreamProcessNode *, IAudioMediaType *))(*(_QWORD *)v74 + 24LL))(
                      v74,
                      ppIAudioMediaType);
                    (*(void (__fastcall **)(WAVEFORMATEX *, IAudioMediaType *))(*(_QWORD *)&v41->wFormatTag + 32LL))(
                      v41,
                      ppIAudioMediaType);
                    pAudioFormat = v41;
                    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v98, &pAudioFormat);
                    v74 = 0LL;
                    *(_QWORD *)v75 = 0LL;
                    v42 = ((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
                    v43 = CProcessNode::CreateDummyProcessNode(v39, v42, v75);
                    if ( v43 < 0 )
                    {
                      v85 = v43;
                      throw (long *)&v85;
                    }
                    pAudioFormat = *(WAVEFORMATEX **)v75;
                    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v98, &pAudioFormat);
                    goto LABEL_39;
                  }
                  if ( v38 == 1 )
                  {
                    v74 = 0LL;
                    v70 = ((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
                    v39 = v76;
                    v71 = CProcessNode::CreateDummyProcessNode(v76, v70, &v74);
                    if ( v71 < 0 )
                    {
                      v86 = v71;
                      throw (long *)&v86;
                    }
                  }
                  else
                  {
                    if ( (unsigned int)(v38 - 2) > 1 )
                    {
                      v39 = v76;
                      goto LABEL_39;
                    }
                    v74 = 0LL;
                    v72 = ((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
                    v39 = v76;
                    v73 = CProcessNode::CreateDummyProcessNode(v76, v72, &v74);
                    if ( v73 < 0 )
                    {
                      v87 = v73;
                      throw (long *)&v87;
                    }
                  }
                  pAudioFormat = (WAVEFORMATEX *)v74;
                  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v98, &pAudioFormat);
LABEL_39:
                  v44 = (WAVEFORMATEX *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
                  pAudioFormat = v44;
                  if ( v44 )
                    v47 = CPipeInstance::CPipeInstance((CPipeInstance *)v44, WRITE_DATA_PIPE);
                  else
                    v47 = 0LL;
                  pAudioFormat = (WAVEFORMATEX *)v47;
                  if ( !v47 )
                  {
                    v88 = -2147024882;
                    throw (long *)&v88;
                  }
                  v48 = _AllocString<CTCoAllocPolicy>(v46, v45, *((_QWORD *)a2 + 18), (char *)v47 + 192);
                  v49 = v48;
                  if ( v48 < 0 )
                  {
                    v89 = v48;
                    throw (long *)&v89;
                  }
                  *((_DWORD *)v47 + 30) = (unsigned int)(*(_DWORD *)a2 - 2) <= 1;
                  *((_DWORD *)v47 + 33) = *(_DWORD *)a2;
                  *((_DWORD *)v47 + 3) = v39;
                  *((_DWORD *)v47 + 34) = *((_DWORD *)a2 + 38) != 0;
                  *((_DWORD *)v47 + 31) = *((_DWORD *)a2 + 2) == 1;
                  v50 = *((_QWORD *)v47 + 19);
                  if ( v50 )
                  {
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
                    *((_QWORD *)v47 + 19) = 0LL;
                  }
                  ATL::CComPtr<IDeviceGraphObjectCache>::operator=((char *)v47 + 240, v103);
                  *(_QWORD *)v47 = 0LL;
                  *((_DWORD *)v47 + 2) = 1;
                  *((_BYTE *)v47 + 316) = *((_DWORD *)a2 + 47) != 0;
                  v51 = *((_QWORD *)&v98 + 1);
                  while ( v51 )
                  {
                    v52 = v51;
                    v51 = *(_QWORD *)(v51 + 8);
                    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead(
                      (char *)v47 + 16,
                      v52 + 16);
                  }
                  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll((__int64)&v98);
                  v54 = *((_DWORD *)a2 + 69);
                  if ( !v54 )
                  {
                    v53 = v36->nAvgBytesPerSec % v36->nBlockAlign;
                    v54 = (int)(float)((float)(int)((double)(int)(v36->nAvgBytesPerSec / v36->nBlockAlign)
                                                  * (double)(int)*((_QWORD *)a2 + 4)
                                                  / 10000000.0
                                                  + 0.5)
                                     * v9);
                  }
                  *((_DWORD *)v47 + 37) = v54;
                  v55 = 1;
                  if ( *((_DWORD *)a2 + 1) )
                    v55 = 7;
                  *((_DWORD *)v47 + 35) = v55;
                  *((_DWORD *)v47 + 53) = 0;
                  if ( (*((_DWORD *)a2 + 34) & 0x100000) != 0 )
                  {
                    *((_DWORD *)v47 + 35) = v55 | 0xA;
                    *((_DWORD *)v47 + 50) = 1056964608;
                    *((_DWORD *)v47 + 51) = 1065353216;
                  }
                  if ( (*((_DWORD *)a2 + 34) & 0x8000000) != 0 )
                    *((_DWORD *)v47 + 52) = 3;
                  *v104 = v47;
                  if ( ppIAudioMediaType )
                    ((void (__fastcall *)(IAudioMediaType *, __int64))ppIAudioMediaType->lpVtbl->Release)(
                      ppIAudioMediaType,
                      v53);
                  if ( v95 )
                    ((void (__fastcall *)(struct IPropertyStore *, __int64))v95->lpVtbl->Release)(v95, v53);
                  goto LABEL_139;
                }
              }
            }
          }
          v90 = -2005139404;
          throw (long *)&v90;
        }
      }
LABEL_90:
      pExceptionObject = -2005139404;
      throw (long *)&pExceptionObject;
    }
    v15 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    v16 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v13[8] == 22 )
    {
      v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    }
    else
    {
      v64 = *((_QWORD *)v13 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v64 )
        v64 = *((_QWORD *)v13 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( v64 )
      {
        v65 = *((_QWORD *)v13 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
        v18 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
        if ( !v65 )
          v65 = *((_QWORD *)v13 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
        if ( v65 )
        {
          v19 = v74;
LABEL_13:
          if ( v14 )
          {
            v20 = 65533LL;
            v21 = *(_DWORD *)&v110[4];
            v22 = GUID_00000000_0000_0010_8000_00aa00389b71;
            goto LABEL_15;
          }
          goto LABEL_90;
        }
LABEL_12:
        v109 = *(_OWORD *)v13;
        *(_OWORD *)v110 = *((_OWORD *)v13 + 1);
        *(_QWORD *)&v110[16] = *((_QWORD *)v13 + 4);
        v14 = 1;
        v19 = *(struct CStreamProcessNode **)&v110[16];
        v74 = *(struct CStreamProcessNode **)&v110[16];
        goto LABEL_13;
      }
    }
    v18 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    goto LABEL_12;
  }
  catch ( long *v106 )
  {
    v75[0] = *(_DWORD *)v106;
    goto LABEL_108;
  }
  catch ( ATL::CAtlException *v107 )
  {
    v75[0] = *(_DWORD *)v107;
LABEL_108:
    v49 = v75[0];
    if ( v75[0] < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamPipeInstance", 0x373u, v49);
    }
  }
LABEL_139:
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll((__int64)&v98);
  return v49;
}
