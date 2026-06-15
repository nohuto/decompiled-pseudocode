/*
 * XREFs of ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180016D04
 * Callers:
 *     ?AcquirePowerReference@CVADServer@@QEAAXXZ @ 0x180015928 (-AcquirePowerReference@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV?$shared_ptr@VCSleepStudyPowerReference@@@std@@@Z @ 0x180015D2C (-CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV-$sha.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180017410 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ??$_Construct_in_place@VCPowerReference@@$$V@std@@YAXAEAVCPowerReference@@@Z @ 0x180017528 (--$_Construct_in_place@VCPowerReference@@$$V@std@@YAXAEAVCPowerReference@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x1800175D4 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18005DD98 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x1800750A0 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K_N0@Z.c)
 *     ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x180080520 (-QueryState@CVADServer@@QEAAJPEAH00@Z.c)
 *     ??4?$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180084CE8 (--4-$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Construct_in_place@V?$shared_ptr@VEffectPack@@@std@@AEAV12@@std@@YAXAEAV?$shared_ptr@VEffectPack@@@0@0@Z @ 0x1800F85AC (--$_Construct_in_place@V-$shared_ptr@VEffectPack@@@std@@AEAV12@@std@@YAXAEAV-$shared_ptr@VEffect.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@QEAV21@AEBV21@@Z @ 0x1800F85B8 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@-$vector@V-$shared_pt.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_CXvmPowerReferenceManager_________lambda_99dc9de587906d6f38e02b4d1e0ae12d___ @ 0x1801035B0 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_CXvmPower.c)
 *     ??$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA?AV?$shared_ptr@VCXvmPowerReferenceManager@@@0@$$QEBU_GUID@@0@Z @ 0x18010364C (--$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA-AV-$shared_ptr@VCXvmPower.c)
 *     ?AcquirePowerReference@CXvmPowerReferenceManager@@QEAA?AV?$shared_ptr@VCXvmPowerReference@@@std@@XZ @ 0x180103D94 (-AcquirePowerReference@CXvmPowerReferenceManager@@QEAA-AV-$shared_ptr@VCXvmPowerReference@@@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CPowerReferenceManager::AcquirePowerReferenceForStream(_QWORD *a1, _QWORD *a2, CVADServer *a3)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  HANDLE ProcessHeap; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  volatile signed __int32 *v8; // r15
  __int64 *v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  volatile signed __int32 *v13; // r15
  volatile signed __int32 *v14; // r15
  __int64 v15; // rcx
  const char *v16; // r9
  __int64 *v17; // rcx
  _QWORD *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  std::_Ref_count_base *v21; // rcx
  __m128i *v22; // rdx
  unsigned __int64 v23; // rax
  int PowerReferenceSubBlocker; // eax
  const char *v25; // r9
  __int64 *v27; // rcx
  _QWORD *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  std::_Ref_count_base *v31; // rcx
  __int64 *v32; // rcx
  _QWORD *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  std::_Ref_count_base *v36; // rcx
  _DWORD *v37; // rax
  _DWORD *v38; // rcx
  _QWORD *v39; // rdx
  std::_Ref_count_base *v40; // rax
  int v41; // r8d
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  struct _Mtx_internal_imp_t *v46; // rbx
  _QWORD *v47; // r15
  __int64 v48; // rcx
  const char *v49; // r9
  CXvmPowerReferenceManager *v50; // r12
  CXvmPowerReferenceManager *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  CXvmPowerReferenceManager *v54; // rcx
  __int64 v55; // rax
  int v56; // [rsp+20h] [rbp-248h]
  CVADServer *v57; // [rsp+30h] [rbp-238h] BYREF
  int v58; // [rsp+38h] [rbp-230h] BYREF
  int v59[2]; // [rsp+40h] [rbp-228h] BYREF
  CXvmPowerReferenceManager *v60[2]; // [rsp+48h] [rbp-220h] BYREF
  int v61; // [rsp+58h] [rbp-210h]
  _QWORD *v62; // [rsp+60h] [rbp-208h]
  struct _Mtx_internal_imp_t *v63; // [rsp+68h] [rbp-200h]
  std::_Ref_count_base *v64; // [rsp+70h] [rbp-1F8h]
  _QWORD *v65; // [rsp+78h] [rbp-1F0h]
  std::_Ref_count_base *v66; // [rsp+80h] [rbp-1E8h]
  _BYTE v67[8]; // [rsp+88h] [rbp-1E0h] BYREF
  std::_Ref_count_base *v68; // [rsp+90h] [rbp-1D8h]
  __int64 (__fastcall **v69)(); // [rsp+98h] [rbp-1D0h] BYREF
  int v70; // [rsp+A0h] [rbp-1C8h]
  __int64 v71; // [rsp+A8h] [rbp-1C0h]
  __int64 v72; // [rsp+B0h] [rbp-1B8h]
  _QWORD *v73; // [rsp+B8h] [rbp-1B0h]
  __int64 (__fastcall ***v74)(); // [rsp+D0h] [rbp-198h]
  _BYTE v75[8]; // [rsp+E0h] [rbp-188h] BYREF
  std::_Ref_count_base *v76; // [rsp+E8h] [rbp-180h]
  volatile signed __int32 *v77; // [rsp+F8h] [rbp-170h]
  std::_Ref_count_base *v78; // [rsp+108h] [rbp-160h]
  int v79; // [rsp+110h] [rbp-158h]
  __int128 v80; // [rsp+118h] [rbp-150h]
  _QWORD *v81; // [rsp+128h] [rbp-140h]
  __int128 v82; // [rsp+130h] [rbp-138h]
  __int128 v83; // [rsp+140h] [rbp-128h]
  __int128 v84; // [rsp+150h] [rbp-118h]
  __int128 v85; // [rsp+160h] [rbp-108h]
  __int128 v86; // [rsp+170h] [rbp-F8h]
  _OWORD v87[5]; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v88; // [rsp+1D0h] [rbp-98h]
  __int128 v89; // [rsp+1E0h] [rbp-88h]
  __int64 v90; // [rsp+1F0h] [rbp-78h]
  __int128 v91; // [rsp+200h] [rbp-68h] BYREF
  __int128 v92; // [rsp+210h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v3 = a2;
  v4 = a1;
  v65 = a1;
  v62 = a2;
  v57 = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v61 = 1;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 0x80uLL);
  try
  {
    v7 = v6;
    if ( v6 )
    {
      v6[2] = 1;
      v6[3] = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj2<CPowerReference>::`vftable';
      std::_Construct_in_place<CPowerReference,>(v6 + 4);
    }
    else
    {
      v7 = 0LL;
    }
    *v3 = v7 + 4;
    v8 = (volatile signed __int32 *)v3[1];
    v3[1] = v7;
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v82 = 0LL;
    if ( !g_ADGProcess || LODWORD(g_ADGProcess[2].OwningThread) != *((_DWORD *)v57 + 10) )
    {
      v58 = 0;
      v59[0] = 0;
      CVADServer::QueryState(v57, 0LL, &v58, v59);
      if ( !v58 || v59[0] )
      {
        v27 = (__int64 *)CPdcActivationClient::AcquirePdcTimerActivation(v4, v75, v57);
        v28 = (_QWORD *)*v3;
        v29 = *v27;
        v30 = v27[1];
        *v27 = 0LL;
        v27[1] = 0LL;
        *v28 = v29;
        v31 = (std::_Ref_count_base *)v28[1];
        v28[1] = v30;
        if ( v31 )
          std::_Ref_count_base::_Decref(v31);
        if ( v76 )
          std::_Ref_count_base::_Decref(v76);
      }
    }
    v9 = (__int64 *)CSebNotifier::AcquireSebReference((CSebNotifier *)(v4 + 8));
    v10 = (_QWORD *)*v3;
    v11 = *v9;
    v12 = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    v10[2] = v11;
    v13 = (volatile signed __int32 *)v10[3];
    v10[3] = v12;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    v14 = v77;
    if ( v77 )
    {
      if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    v15 = *((_QWORD *)v57 + 22);
    if ( v15 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v15 + 8) + 64LL))(v15 + 8) )
    {
      v22 = (__m128i *)v57;
      if ( !*((_BYTE *)v57 + 248) )
        goto LABEL_25;
      v83 = *((_OWORD *)v57 + 16);
      v84 = *((_OWORD *)v57 + 17);
      v85 = *((_OWORD *)v57 + 18);
      v86 = *((_OWORD *)v57 + 19);
      v87[0] = *((_OWORD *)v57 + 20);
      v87[1] = *((_OWORD *)v57 + 21);
      v87[2] = *((_OWORD *)v57 + 22);
      v87[3] = *((_OWORD *)v57 + 23);
      v87[4] = *((_OWORD *)v57 + 24);
      v88 = *((_OWORD *)v57 + 25);
      v89 = *((_OWORD *)v57 + 26);
      v90 = *((_QWORD *)v57 + 54);
      memset((char *)v87 + 8, 0, 56);
      v32 = (__int64 *)CCaptureNotifier::AcquireReference((std::_Mutex_base *)(v4 + 22), *((_QWORD *)&v88 + 1) > 0LL);
      v33 = (_QWORD *)*v3;
      v34 = *v32;
      v35 = v32[1];
      *v32 = 0LL;
      v32[1] = 0LL;
      v33[6] = v34;
      v36 = (std::_Ref_count_base *)v33[7];
      v33[7] = v35;
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
      if ( v78 )
        std::_Ref_count_base::_Decref(v78);
      v37 = operator new(0x18uLL);
      v38 = v37;
      if ( v37 )
      {
        v37[2] = 1;
        v37[3] = 1;
        *(_QWORD *)v37 = &std::_Ref_count_obj2<wil::com_ptr_t<Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession,wil::err_returncode_policy>>::`vftable';
        *((_QWORD *)v37 + 2) = 0LL;
      }
      else
      {
        v38 = 0LL;
      }
      v39 = (_QWORD *)*v3;
      v39[8] = v38 + 4;
      v40 = (std::_Ref_count_base *)v39[9];
      v39[9] = v38;
      if ( v40 )
        std::_Ref_count_base::_Decref(v40);
      v41 = *((_DWORD *)v57 + 10);
      v42 = (_QWORD *)*v3;
      v79 = v41;
      v43 = v42[9];
      if ( v43 )
        _InterlockedAdd((volatile signed __int32 *)(v43 + 8), 1u);
      v44 = v42[8];
      v45 = v42[9];
      v81 = v4;
      v69 = off_18016C6C8;
      v70 = v41;
      v71 = v44;
      v72 = v45;
      v80 = 0LL;
      v73 = v4;
      v74 = &v69;
      CSerialWorkQueue::QueueWorkItem(v4 + 32, &v69);
    }
    else
    {
      v17 = (__int64 *)CPlaybackNotifier::AcquireReference((std::_Mutex_base *)(v4 + 16));
      v18 = (_QWORD *)*v3;
      v19 = *v17;
      v20 = v17[1];
      *v17 = 0LL;
      v17[1] = 0LL;
      v18[4] = v19;
      v21 = (std::_Ref_count_base *)v18[5];
      v18[5] = v20;
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      if ( v64 )
        std::_Ref_count_base::_Decref(v64);
    }
    v22 = (__m128i *)v57;
LABEL_25:
    v23 = v22[17].m128i_i64[0] - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( !v23 )
      v23 = _mm_srli_si128(v22[17], 8).m128i_u64[0] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v23 )
    {
      v46 = (struct _Mtx_internal_imp_t *)(v4 + 54);
      v63 = (struct _Mtx_internal_imp_t *)(v4 + 54);
      std::_Mutex_base::lock((std::_Mutex_base *)(v4 + 54));
      v47 = v4 + 58;
      *(_QWORD *)v59 = v4 + 58;
      std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_CXvmPowerReferenceManager_________lambda_99dc9de587906d6f38e02b4d1e0ae12d___(
        v60,
        v4[58],
        v4[59],
        &v57);
      if ( v60[0] == (CXvmPowerReferenceManager *)v4[59] )
      {
        try
        {
          *(_OWORD *)v60 = 0LL;
          v91 = *((_OWORD *)v57 + 18);
          v92 = *((_OWORD *)v57 + 17);
          v48 = std::make_shared<CXvmPowerReferenceManager,_GUID const,_GUID const>(v67, &v92, &v91);
          v50 = *(CXvmPowerReferenceManager **)v48;
          v51 = *(CXvmPowerReferenceManager **)(v48 + 8);
          *(_QWORD *)v48 = 0LL;
          *(_QWORD *)(v48 + 8) = 0LL;
          v60[0] = v50;
          v60[1] = v51;
          if ( v68 )
            std::_Ref_count_base::_Decref(v68);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x84,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            v49);
          v46 = v63;
          v50 = v60[0];
          v47 = *(_QWORD **)v59;
          v3 = v62;
          v4 = v65;
        }
        if ( v50 )
        {
          v52 = v47[1];
          if ( v52 == v47[2] )
          {
            std::vector<std::shared_ptr<CXvmPowerReferenceManager>>::_Emplace_reallocate<std::shared_ptr<CXvmPowerReferenceManager> const &>(
              v47,
              v47[1],
              v60);
          }
          else
          {
            std::_Construct_in_place<std::shared_ptr<EffectPack>,std::shared_ptr<EffectPack> &>(v52, v60);
            v47[1] += 16LL;
          }
          v53 = CXvmPowerReferenceManager::AcquirePowerReference(v60[0]);
          std::shared_ptr<CXvmPowerReference>::operator=(*v3 + 80LL, v53);
          if ( v66 )
            std::_Ref_count_base::_Decref(v66);
        }
        v54 = v60[1];
      }
      else
      {
        v55 = CXvmPowerReferenceManager::AcquirePowerReference(*(CXvmPowerReferenceManager **)v60[0]);
        std::shared_ptr<CXvmPowerReference>::operator=(*v3 + 80LL, v55);
        v54 = v68;
      }
      if ( v54 )
        std::_Ref_count_base::_Decref(v54);
      _Mtx_unlock(v46);
      v22 = (__m128i *)v57;
    }
    PowerReferenceSubBlocker = CSleepStudyPowerReferenceManager::CreatePowerReferenceSubBlocker(
                                 v4 + 28,
                                 (__int64)v22,
                                 *v3 + 96LL,
                                 v16);
    if ( PowerReferenceSubBlocker < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x93,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
        (const char *)(unsigned int)PowerReferenceSubBlocker,
        v56);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x96,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v25);
    return v62;
  }
  return v3;
}
