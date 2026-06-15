/*
 * XREFs of ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000A020
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000ABEC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000B170 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x14000B2A8 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z @ 0x14000C220 (-GrowBuffer@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x14000C538 (-RemoveAt@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTI.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027718 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@PEAUIAudioProcessingObject@@AEAPEAU__POSITION@@@Z @ 0x140034BD0 (-FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140038F74 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioProcessor::AddAPOOutputConnection(
        CAudioProcessor *this,
        __int64 a2,
        struct IAudioProcessingObject *a3,
        __int64 a4)
{
  CAudioProcessor *v7; // rsi
  __int64 v8; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  _DWORD *v16; // rax
  _QWORD *v17; // r14
  unsigned __int64 v18; // r15
  _QWORD *v19; // r14
  unsigned __int64 v20; // r15
  unsigned int v21; // edi
  __int64 v22; // rdx
  unsigned __int64 j; // rdx
  __int64 v24; // rdx
  void *v25; // rcx
  bool v26; // zf
  void *v27; // rcx
  __int64 v28; // rdx
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rcx
  struct IAudioProcessingObject **v33; // rax
  unsigned int v34; // ebx
  __int64 v35; // rdx
  int v36; // eax
  void *v37; // rcx
  ATL::CAtlException *v38; // rbx
  ATL::CAtlException *v39; // rbx
  int v40; // [rsp+20h] [rbp-D8h]
  int v41; // [rsp+20h] [rbp-D8h]
  LPVOID pv; // [rsp+30h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION v43; // [rsp+38h] [rbp-C0h] BYREF
  __int64 APOInList; // [rsp+40h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION p_pv; // [rsp+48h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION_DEBUG *v46; // [rsp+50h] [rbp-A8h] BYREF
  char v47; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v48; // [rsp+60h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 v50; // [rsp+70h] [rbp-88h] BYREF
  _QWORD *v51; // [rsp+78h] [rbp-80h] BYREF
  _QWORD *v52; // [rsp+80h] [rbp-78h] BYREF
  __int64 v53; // [rsp+88h] [rbp-70h]
  ATL::CAtlException *v54; // [rsp+90h] [rbp-68h] BYREF
  ATL::CAtlException *v55[3]; // [rsp+98h] [rbp-60h] BYREF
  char v56; // [rsp+B0h] [rbp-48h]
  __int64 *v57; // [rsp+B8h] [rbp-40h]
  __int64 *v58; // [rsp+C0h] [rbp-38h]
  char v59; // [rsp+C8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  char *v62; // [rsp+110h] [rbp+18h] BYREF

  v7 = this;
  if ( !a3 )
  {
    v21 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1B,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070057LL,
      v40);
    return v21;
  }
  if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 2588LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL,
      v40);
    return 2147942406LL;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 2589LL;
    goto LABEL_4;
  }
  pv = 0LL;
  lpVtbl = a3->lpVtbl;
  p_pv = (LPCRITICAL_SECTION)&pv;
  v46 = 0LL;
  v47 = 1;
  v21 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct _RTL_CRITICAL_SECTION_DEBUG **))lpVtbl->GetRegistrationProperties)(
          a3,
          &v46);
  if ( v47 )
  {
    DebugInfo = p_pv->DebugInfo;
    p_pv->DebugInfo = v46;
    if ( DebugInfo )
      CoTaskMemFree(DebugInfo);
  }
  if ( (v21 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA20,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v21,
      v40);
    goto LABEL_83;
  }
  p_pv = (LPCRITICAL_SECTION)((char *)v7 + 88);
  LOBYTE(v46) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&p_pv);
  v31 = *((_QWORD *)v7 + 96);
  if ( !v31 )
  {
    v34 = -2147024890;
    v35 = 1908LL;
    goto LABEL_82;
  }
  if ( a2 != *(_QWORD *)(v31 + 16) )
  {
    v34 = -2147024890;
    v35 = 1911LL;
    goto LABEL_82;
  }
  if ( *((_BYTE *)v7 + 777) )
  {
    v34 = -2005139407;
    v35 = 1914LL;
LABEL_82:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v34,
      v40);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA25,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v34,
      v41);
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&p_pv);
    v21 = v34;
LABEL_83:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pv,
      0LL);
    return v21;
  }
  if ( *((_BYTE *)v7 + 778) )
  {
    v34 = -2005139406;
    v35 = 1915LL;
    goto LABEL_82;
  }
  v51 = 0LL;
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD **, _QWORD))(**((_QWORD **)v7 + 99) + 24LL))(
    *((_QWORD *)v7 + 99),
    &v43,
    &v51,
    0LL);
  v32 = (_QWORD *)*v51;
  while ( v32 )
  {
    v33 = (struct IAudioProcessingObject **)v32[2];
    v32 = (_QWORD *)*v32;
    if ( *v33 == a3 )
      goto LABEL_5;
  }
  v33 = 0LL;
LABEL_5:
  APOInList = (__int64)v33;
  v10 = (__int64)v33;
  if ( v33
    || (v62 = 0LL, APOInList = CAudioProcessor::FindAPOInList(v32, (char *)v7 + 176, a3, &v62), (v10 = APOInList) != 0) )
  {
    if ( *(_QWORD *)(v10 + 160) == *((_DWORD *)pv + 266) )
    {
      v21 = -2005139429;
      v22 = 2614LL;
      goto LABEL_33;
    }
    v52 = 0LL;
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD, _QWORD **))(**((_QWORD **)v7 + 99) + 24LL))(
      *((_QWORD *)v7 + 99),
      &lpCriticalSection,
      0LL,
      &v52);
    v11 = (_QWORD *)*v52;
    while ( v11 )
    {
      v12 = v11[2];
      v11 = (_QWORD *)*v11;
      if ( *(_QWORD *)(v12 + 16) == a4 )
      {
        if ( lpCriticalSection )
        {
          LeaveCriticalSection(lpCriticalSection);
          lpCriticalSection = 0LL;
        }
        if ( v12 )
        {
          for ( i = 0LL; i < *(_QWORD *)(APOInList + 160); ++i )
          {
            if ( *(_QWORD *)(*(_QWORD *)(APOInList + 152) + 8 * i) == v12 )
            {
              v21 = -2147024809;
              v22 = 2622LL;
              goto LABEL_33;
            }
          }
          v14 = *(_QWORD *)(APOInList + 128);
          if ( !v14 )
          {
            v16 = pv;
            goto LABEL_23;
          }
          v15 = **(_QWORD **)(APOInList + 120);
          v16 = pv;
          if ( (*((_BYTE *)pv + 16) & 2) != 0 && *(_DWORD *)(v12 + 40) != *(_DWORD *)(v15 + 40) )
          {
            v21 = -2005139426;
            v28 = 2262LL;
          }
          else if ( (*((_BYTE *)pv + 16) & 8) == 0
                 || *(_DWORD *)(v12 + 48) == *(_DWORD *)(v15 + 48) && *(_DWORD *)(v12 + 44) == *(_DWORD *)(v15 + 44) )
          {
            if ( (*((_BYTE *)pv + 16) & 4) == 0 || *(float *)(v12 + 52) == *(float *)(v15 + 52) )
            {
LABEL_23:
              if ( (v16[4] & 1) == 0 && v14 )
              {
                for ( j = 0LL; j < v14; ++j )
                {
                  if ( *(_QWORD *)(v12 + 72) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(APOInList + 120) + 8 * j) + 72LL) )
                  {
                    v21 = -2005139425;
                    v28 = 2285LL;
                    goto LABEL_64;
                  }
                }
              }
              v53 = v12;
              v48 = 0LL;
              v17 = (_QWORD *)(APOInList + 152);
              v18 = *(_QWORD *)(APOInList + 160);
              if ( v18 < *(_QWORD *)(APOInList + 168) )
                goto LABEL_25;
              try
              {
                if ( !(unsigned __int8)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::GrowBuffer(
                                         APOInList + 152,
                                         v18 + 1) )
                  ATL::AtlThrowImpl(-2147024882);
              }
              catch ( ATL::CAtlException *v54 )
              {
                v38 = v54;
                if ( *(_DWORD *)v54 == -1073741571 )
                  _o__resetstkoflw();
                LODWORD(v62) = *(_DWORD *)v38;
                v21 = (unsigned int)v62;
                if ( (int)v62 >= 0 )
                {
                  v7 = this;
                  v12 = v53;
LABEL_26:
                  v55[1] = (ATL::CAtlException *)&APOInList;
                  v55[2] = (ATL::CAtlException *)&v48;
                  v56 = 1;
                  v50 = 0LL;
                  v19 = (_QWORD *)(APOInList + 280);
                  v20 = *(_QWORD *)(APOInList + 288);
                  if ( v20 >= *(_QWORD *)(APOInList + 296) )
                  {
                    try
                    {
                      if ( !(unsigned __int8)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::GrowBuffer(
                                               APOInList + 280,
                                               v20 + 1) )
                        ATL::AtlThrowImpl(-2147024882);
                    }
                    catch ( ATL::CAtlException *v55 )
                    {
                      v39 = v55[0];
                      if ( *(_DWORD *)v55[0] == -1073741571 )
                        _o__resetstkoflw();
                      LODWORD(v62) = *(_DWORD *)v39;
                      v21 = (unsigned int)v62;
                      if ( (int)v62 < 0 )
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0xA4E,
                          (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
                          (const char *)(unsigned int)v62,
                          v40);
                        ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(APOInList + 152, v48);
                        goto LABEL_54;
                      }
                      v7 = this;
                      v12 = v53;
LABEL_90:
                      v57 = &APOInList;
                      v58 = (__int64 *)&v50;
                      v59 = 1;
                      ++*(_DWORD *)(v12 + 12);
                      *(_QWORD *)(v12 + 152) = v7;
                      v36 = CAudioProcessor::EvaluateConnectionOwnership(v7, (struct CConnectionNode *)v12);
                      v21 = v36;
                      if ( v36 >= 0 )
                      {
                        if ( v43 )
                          LeaveCriticalSection(v43);
                        if ( (_BYTE)v46 )
                          LeaveCriticalSection(p_pv);
                        v37 = pv;
                        pv = 0LL;
                        if ( v37 )
                          CoTaskMemFree(v37);
                        return 0LL;
                      }
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0xA52,
                        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
                        (const char *)(unsigned int)v36,
                        v40);
                      ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::RemoveAt(
                        APOInList + 280,
                        v50);
                      ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(APOInList + 152, v48);
                      goto LABEL_54;
                    }
                  }
                  *(_QWORD *)(*v19 + 8 * v20) = *(_QWORD *)(v12 + 104);
                  ++v19[1];
                  v50 = v20;
                  goto LABEL_90;
                }
                v22 = 2632LL;
LABEL_33:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v22,
                  (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
                  (const char *)v21,
                  v40);
LABEL_54:
                if ( v43 )
                {
                  LeaveCriticalSection(v43);
                  v43 = 0LL;
                }
                if ( (_BYTE)v46 )
                  LeaveCriticalSection(p_pv);
                v27 = pv;
                pv = 0LL;
                if ( v27 )
                  CoTaskMemFree(v27);
                return v21;
              }
LABEL_25:
              *(_QWORD *)(*v17 + 8 * v18) = v12;
              ++v17[1];
              v48 = v18;
              goto LABEL_26;
            }
            v21 = -2005139426;
            v28 = 2269LL;
          }
          else
          {
            v21 = -2005139426;
            v28 = 2266LL;
          }
LABEL_64:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v28,
            (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
            (const char *)v21,
            v40);
          v22 = 2626LL;
          goto LABEL_33;
        }
LABEL_45:
        v24 = 2618LL;
        goto LABEL_46;
      }
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_45;
  }
  v24 = 2610LL;
LABEL_46:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)0x887C001ALL,
    v40);
  if ( v43 )
  {
    LeaveCriticalSection(v43);
    v43 = 0LL;
  }
  if ( (_BYTE)v46 )
    LeaveCriticalSection(p_pv);
  v25 = pv;
  v26 = pv == 0LL;
  pv = 0LL;
  if ( !v26 )
    CoTaskMemFree(v25);
  return 2289827866LL;
}
