/*
 * XREFs of ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x140027360
 * Callers:
 *     ?AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x140027170 (-AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x14003E690 (-AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 * Callees:
 *     ?FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z @ 0x140008F8C (-FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEBQEAVCConnectionNode@@@Z @ 0x14000C788 (-AddHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEB.c)
 *     ??2CConnectionNode@@SAPEAX_K@Z @ 0x14000CCD0 (--2CConnectionNode@@SAPEAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E320 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?ValidateConnectionFormatMatchesEndpoint@CAudioProcessor@@AEAAJAEBVCConnectionNode@@PEAUIAudioEndpoint@@@Z @ 0x1400275CC (-ValidateConnectionFormatMatchesEndpoint@CAudioProcessor@@AEAAJAEBVCConnectionNode@@PEAUIAudioEn.c)
 *     ??0CConnectionNode@@QEAA@AEAV0@@Z @ 0x140027744 (--0CConnectionNode@@QEAA@AEAV0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioProcessor::AttachEndpointToConnection(
        CAudioProcessor *this,
        __int64 a2,
        struct IUnknown *a3,
        _QWORD *a4,
        CConnectionNode **a5)
{
  __int64 v9; // rax
  _QWORD *v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  struct CConnectionNode *ConnectionInObjectCache; // rax
  const struct CConnectionNode *v16; // r14
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  CAudioProcessor *v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // edi
  char *v25; // rax
  CConnectionNode *v26; // rdi
  char *v27; // rax
  __int64 v29; // rdx
  ATL::CAtlException *v30; // rbx
  CConnectionNode *v31; // [rsp+20h] [rbp-38h]
  ATL::CAtlException *v32; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v34; // [rsp+60h] [rbp+8h] BYREF

  v9 = *((_QWORD *)this + 96);
  v10 = *(_QWORD **)(*(_QWORD *)v9 + 48LL);
  v11 = 0;
  do
  {
    if ( !v10 )
      goto LABEL_5;
    v12 = v10[2];
    v10 = (_QWORD *)*v10;
  }
  while ( *(struct IUnknown **)(v12 + 112) != a3 );
  if ( v12 )
    goto LABEL_32;
LABEL_5:
  v13 = *(_QWORD **)(*(_QWORD *)v9 + 96LL);
  do
  {
    if ( !v13 )
      goto LABEL_9;
    v14 = v13[2];
    v13 = (_QWORD *)*v13;
  }
  while ( *(struct IUnknown **)(v14 + 112) != a3 );
  if ( v14 )
  {
LABEL_32:
    v29 = 2825LL;
LABEL_33:
    v11 = -2005139416;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v11);
    return v11;
  }
LABEL_9:
  ConnectionInObjectCache = CAudioProcessor::FindConnectionInObjectCache(this, a2);
  v16 = ConnectionInObjectCache;
  if ( !ConnectionInObjectCache )
  {
    v11 = -2005139430;
    v29 = 2829LL;
    goto LABEL_34;
  }
  v17 = *((_QWORD *)ConnectionInObjectCache + 2);
  v18 = *((_QWORD *)this + 96);
  v19 = *(_QWORD **)(*(_QWORD *)v18 + 48LL);
  do
  {
    if ( !v19 )
      goto LABEL_14;
    v20 = v19[2];
    v19 = (_QWORD *)*v19;
  }
  while ( *(_QWORD *)(v20 + 16) != v17 );
  if ( v20 )
  {
LABEL_37:
    v29 = 2833LL;
    goto LABEL_33;
  }
LABEL_14:
  v21 = *(CAudioProcessor **)(*(_QWORD *)v18 + 96LL);
  while ( v21 )
  {
    v22 = *((_QWORD *)v21 + 2);
    v21 = *(CAudioProcessor **)v21;
    if ( *(_QWORD *)(v22 + 16) == v17 )
    {
      if ( v22 )
        goto LABEL_37;
      break;
    }
  }
  v23 = CAudioProcessor::ValidateConnectionFormatMatchesEndpoint(v21, v16, (struct IAudioEndpoint *)a3);
  v24 = v23;
  if ( v23 >= 0 )
  {
    v25 = (char *)CConnectionNode::operator new();
    v34 = v25;
    if ( v25 )
      v26 = CConnectionNode::CConnectionNode((CConnectionNode *)v25, v16);
    else
      v26 = 0LL;
    v31 = v26;
    if ( v26 )
    {
      if ( *((struct IUnknown **)v26 + 14) != a3 )
        ATL::AtlComPtrAssign((struct IUnknown **)v26 + 14, a3);
      v27 = 0LL;
      v34 = 0LL;
      if ( a3 )
      {
        ((void (__fastcall *)(struct IUnknown *, GUID *, char **))a3->lpVtbl->QueryInterface)(
          a3,
          &GUID_497dee26_e484_456d_9349_60b89142d65e,
          &v34);
        v27 = v34;
      }
      v34 = 0LL;
      *((_QWORD *)v26 + 17) = v27;
      if ( v34 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v34 + 16LL))(v34);
      try
      {
        v34 = (char *)v26;
        ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::AddHead(a4, &v34);
      }
      catch ( ATL::CAtlException *v32 )
      {
        v30 = v32;
        if ( *(_DWORD *)v32 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v34) = *(_DWORD *)v30;
        v24 = (unsigned int)v34;
        v11 = 0;
        if ( (int)v34 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB28,
            (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
            (const char *)(unsigned int)v34);
          (**(void (__fastcall ***)(CConnectionNode *, __int64))v31)(v31, 1LL);
          return v24;
        }
        v26 = v31;
      }
      *a5 = v26;
      return v11;
    }
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1A,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x8007000ELL);
    return v11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB14,
    (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)(unsigned int)v23);
  return v24;
}
