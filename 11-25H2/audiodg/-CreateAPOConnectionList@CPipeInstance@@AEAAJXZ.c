/*
 * XREFs of ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140004930
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140004878 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?AddTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x140002EB4 (-AddTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x140002EEC (-AddHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x140002FB8 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 *     ?AddHead@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@AEBQEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@@Z @ 0x140005258 (-AddHead@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14000EC98 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@W4AUDIO_DIRECTION@@PEAVCProcessNode@@3@Z @ 0x140026EA8 (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@W4AUDIO_DIRECTION.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140026F00 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x140027400 (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTI.c)
 *     ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14002DFA8 (-GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14002F78C (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z @ 0x140058064 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14005A1E0 (_CxxThrowException_0.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::CreateAPOConnectionList(CPipeInstance *this)
{
  __int64 v2; // rax
  __int64 **v3; // rcx
  __int64 *v4; // r13
  __int64 *v5; // r14
  int v6; // eax
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 *v10; // rcx
  __int64 v11; // rax
  char *v12; // r12
  __int64 **v13; // rcx
  __int64 *v14; // rax
  __int64 **v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 **v22; // rax
  __int64 *v23; // r12
  CConnectionInstance *v24; // rdi
  int v25; // eax
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 **v28; // rax
  __int64 **v29; // r14
  __int64 *v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // r12
  __int64 *v33; // rcx
  __int64 v34; // rax
  int v35; // ecx
  CConnectionInstance *v36; // rax
  __int64 v37; // rdx
  __int64 **v38; // rax
  __int64 **v39; // rdi
  __int64 **v40; // rax
  __int64 v41; // rdx
  CConnectionInstance *v42; // rsi
  __int64 *v43; // r14
  __int64 *v44; // rcx
  __int64 *v45; // rax
  __int64 **v46; // rax
  unsigned int v47; // r12d
  __int64 result; // rax
  CPipeInstance *v49; // rcx
  const struct CConnectionInstance *LoopbackConnection; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 *v53; // rcx
  __int64 *v54; // rax
  __int64 *v55; // rdi
  __int64 v56; // r14
  __int64 v57; // rdx
  __int64 *v58; // rcx
  __int64 v59; // [rsp+0h] [rbp-C8h] BYREF
  int v60; // [rsp+40h] [rbp-88h] BYREF
  int v61; // [rsp+44h] [rbp-84h] BYREF
  int v62; // [rsp+48h] [rbp-80h] BYREF
  int v63; // [rsp+4Ch] [rbp-7Ch] BYREF
  int v64; // [rsp+50h] [rbp-78h] BYREF
  int v65; // [rsp+54h] [rbp-74h] BYREF
  int v66; // [rsp+58h] [rbp-70h] BYREF
  int v67; // [rsp+5Ch] [rbp-6Ch] BYREF
  int v68; // [rsp+60h] [rbp-68h] BYREF
  int v69; // [rsp+64h] [rbp-64h] BYREF
  int pExceptionObject; // [rsp+68h] [rbp-60h] BYREF
  int v71; // [rsp+6Ch] [rbp-5Ch] BYREF
  __int64 v72; // [rsp+70h] [rbp-58h]
  long *v73; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v74; // [rsp+80h] [rbp-48h] BYREF
  int v75; // [rsp+D0h] [rbp+8h]
  CConnectionInstance *v76; // [rsp+D8h] [rbp+10h] BYREF
  __int64 **v77; // [rsp+E0h] [rbp+18h] BYREF
  __int64 *v78; // [rsp+E8h] [rbp+20h] BYREF

  try
  {
    v72 = 0LL;
    v76 = 0LL;
    v2 = *((_QWORD *)this + 3);
    if ( !v2 )
    {
      v60 = -2005139408;
      throw (long *)&v60;
    }
    v3 = *(__int64 ***)(v2 + 8);
    v77 = v3;
    v4 = *(__int64 **)(v2 + 16);
    if ( *(_QWORD *)this )
    {
      v49 = *(CPipeInstance **)this;
      if ( *((_DWORD *)this + 30) )
        LoopbackConnection = CPipeInstance::GetLoopbackConnection(v49, 0);
      else
        LoopbackConnection = (const struct CConnectionInstance *)CPipeInstance::GetMixSplitConnection_Internal(v49, 0LL);
      v51 = *((_QWORD *)LoopbackConnection + 1);
      v53 = (__int64 *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v78 = v53;
      if ( !v53
        || (v76 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                           v53,
                                           v52,
                                           *((_QWORD *)this + 30),
                                           v51,
                                           *((_DWORD *)v4 + 6),
                                           v4)) == 0LL )
      {
        v63 = -2147024882;
        throw (long *)&v63;
      }
      v54 = (__int64 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v55 = v54;
      if ( !v54 )
      {
        v62 = -2147024882;
        throw (long *)&v62;
      }
      *v54 = 0LL;
      v54[1] = 0LL;
      v54[2] = 0LL;
      v54[3] = 0LL;
      v54[4] = 0LL;
      *((_DWORD *)v54 + 10) = 10;
      v78 = v54;
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v54, &v76);
      ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
        (char *)this + 64,
        &v78);
      v76 = 0LL;
      if ( *((_DWORD *)this + 3) || !*((_BYTE *)this + 316) )
        goto LABEL_33;
      v56 = *((_QWORD *)CPipeInstance::GetSecondaryLoopbackConnection(*(CPipeInstance **)this) + 1);
      v58 = (__int64 *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v78 = v58;
      if ( !v58
        || (v76 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                           v58,
                                           v57,
                                           *((_QWORD *)this + 30),
                                           v56,
                                           *((_DWORD *)v4 + 6),
                                           v4)) == 0LL )
      {
        v61 = -2147024882;
        throw (long *)&v61;
      }
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v55, (__int64)&v76);
    }
    else
    {
      if ( !*((_DWORD *)this + 2) )
        goto LABEL_20;
      v5 = (__int64 *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v78 = v5;
      if ( !v5 )
      {
        v66 = -2147024882;
        throw (long *)&v66;
      }
      v6 = *((_DWORD *)v4 + 6);
      v7 = *((_QWORD *)this + 30);
      v5[6] = 0LL;
      v5[7] = 0LL;
      v5[8] = 0LL;
      *v5 = 0LL;
      v5[1] = -1LL;
      *((_DWORD *)v5 + 4) = v6;
      v5[3] = (__int64)v4;
      v5[4] = 0LL;
      *((_DWORD *)v5 + 10) = 0;
      ATL::CComPtr<IDeviceGraphObjectCache>::operator=(v5 + 6, v7);
      v5[8] = -1LL;
      v76 = (CConnectionInstance *)v5;
      v8 = (__int64 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = v8;
      if ( !v8 )
      {
        v65 = -2147024882;
        throw (long *)&v65;
      }
      *v8 = 0LL;
      v8[1] = 0LL;
      v8[2] = 0LL;
      v8[3] = 0LL;
      v8[4] = 0LL;
      *((_DWORD *)v8 + 10) = 10;
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)v8);
      v10 = (__int64 *)v9[4];
      v11 = *v10;
      v10[2] = (__int64)v5;
      v9[4] = v11;
      v10[1] = 0LL;
      *v10 = 0LL;
      ++v9[2];
      if ( *v9 )
        *(_QWORD *)(*v9 + 8) = v10;
      else
        v9[1] = (__int64)v10;
      *v9 = (__int64)v10;
      v12 = (char *)this + 64;
      v78 = (__int64 *)*((_QWORD *)this + 8);
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)this + 64);
      v13 = (__int64 **)*((_QWORD *)this + 12);
      v14 = *v13;
      v13[2] = v9;
      *((_QWORD *)this + 12) = v14;
      v13[1] = 0LL;
      *v13 = v78;
      ++*((_QWORD *)this + 10);
      if ( *((_QWORD *)this + 8) )
        *(_QWORD *)(*(_QWORD *)v12 + 8LL) = v13;
      else
        *((_QWORD *)this + 9) = v13;
      *(_QWORD *)v12 = v13;
      v78 = (__int64 *)*((_QWORD *)this + 31);
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)this + 248);
      v15 = (__int64 **)*((_QWORD *)this + 35);
      v16 = *v15;
      v15[2] = v5;
      *((_QWORD *)this + 35) = v16;
      v15[1] = 0LL;
      *v15 = v78;
      ++*((_QWORD *)this + 33);
      if ( *((_QWORD *)this + 31) )
        *(_QWORD *)(*((_QWORD *)this + 31) + 8LL) = v15;
      else
        *((_QWORD *)this + 32) = v15;
      *((_QWORD *)this + 31) = v15;
      v76 = 0LL;
      if ( *((_DWORD *)this + 3) || !*((_BYTE *)this + 316) )
      {
LABEL_33:
        while ( 1 )
        {
          v3 = v77;
LABEL_20:
          if ( !v3 )
            break;
          v23 = (__int64)v3[2];
          v77 = (__int64 **)v3[1];
          v78 = (__int64 *)v23;
          v24 = (CConnectionInstance *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
          v76 = v24;
          if ( !v24 )
          {
            v76 = 0LL;
            v68 = -2147024882;
            throw (long *)&v68;
          }
          v25 = *(_DWORD *)(v23 + 24);
          v26 = *((_QWORD *)this + 30);
          *((_QWORD *)v24 + 6) = 0LL;
          *((_QWORD *)v24 + 7) = 0LL;
          *((_QWORD *)v24 + 8) = 0LL;
          *(_QWORD *)v24 = 1LL;
          *((_QWORD *)v24 + 1) = 0LL;
          *((_DWORD *)v24 + 4) = v25;
          *((_QWORD *)v24 + 3) = v23;
          *((_QWORD *)v24 + 4) = v4;
          *((_DWORD *)v24 + 10) = 0;
          if ( v26 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
            v27 = *((_QWORD *)v24 + 6);
            if ( v27 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            *((_QWORD *)v24 + 6) = v26;
          }
          v76 = v24;
          v28 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
          v29 = v28;
          if ( !v28 )
          {
            v67 = -2147024882;
            throw (long *)&v67;
          }
          *v28 = 0LL;
          v28[1] = 0LL;
          v28[2] = 0LL;
          v28[3] = 0LL;
          v28[4] = 0LL;
          *((_DWORD *)v28 + 10) = 10;
          ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)v28);
          v30 = v29[4];
          v31 = (__int64 *)*v30;
          v30[2] = (__int64)v24;
          v29[4] = v31;
          v30[1] = 0LL;
          *v30 = 0LL;
          v29[2] = (__int64 *)((char *)v29[2] + 1);
          if ( *v29 )
            (*v29)[1] = (__int64)v30;
          else
            v29[1] = v30;
          *v29 = v30;
          v32 = *((_QWORD *)this + 8);
          ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)this + 64);
          v33 = (__int64 *)*((_QWORD *)this + 12);
          v34 = *v33;
          v33[2] = (__int64)v29;
          *((_QWORD *)this + 12) = v34;
          v33[1] = 0LL;
          *v33 = v32;
          ++*((_QWORD *)this + 10);
          if ( *((_QWORD *)this + 8) )
            *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) = v33;
          else
            *((_QWORD *)this + 9) = v33;
          *((_QWORD *)this + 8) = v33;
          v76 = 0LL;
          v4 = v78;
        }
        v35 = *((_DWORD *)this + 28);
        if ( ((v35 - 1) & 0xFFFFFFFC) == 0 && v35 != 2 )
        {
          v36 = (CConnectionInstance *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
          v76 = v36;
          if ( v36 )
          {
            v76 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                           v36,
                                           v37,
                                           *((_QWORD *)this + 30),
                                           *((unsigned int *)v4 + 6),
                                           0LL,
                                           v4);
            if ( v76 )
            {
              v38 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
              v39 = v38;
              if ( !v38 )
              {
                pExceptionObject = -2147024882;
                throw (long *)&pExceptionObject;
              }
              *v38 = 0LL;
              v38[1] = 0LL;
              v38[2] = 0LL;
              v38[3] = 0LL;
              v38[4] = 0LL;
              *((_DWORD *)v38 + 10) = 10;
              v77 = v38;
              ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v38, &v76);
              ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
                (char *)this + 64,
                &v77);
              v76 = 0LL;
              if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 317) )
              {
                v40 = (__int64 **)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
                v77 = v40;
                if ( !v40
                  || (v42 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                                     v40,
                                                     v41,
                                                     *((_QWORD *)this + 30),
                                                     *((unsigned int *)v4 + 6),
                                                     0LL,
                                                     v4),
                      (v76 = v42) == 0LL) )
                {
                  v69 = -2147024882;
                  throw (long *)&v69;
                }
                v43 = v39[1];
                ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)v39);
                v44 = v39[4];
                v45 = (__int64 *)*v44;
                v44[2] = (__int64)v42;
                v39[4] = v45;
                v44[1] = (__int64)v43;
                *v44 = 0LL;
                v39[2] = (__int64 *)((char *)v39[2] + 1);
                v46 = (__int64 **)v39[1];
                if ( v46 )
                  *v46 = v44;
                else
                  *v39 = v44;
                v39[1] = v44;
                v76 = 0LL;
              }
              goto LABEL_90;
            }
          }
          else
          {
            v76 = 0LL;
          }
          v71 = -2147024882;
          throw (long *)&v71;
        }
        goto LABEL_90;
      }
      v17 = (__int64 *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v78 = v17;
      if ( !v17 )
      {
        v64 = -2147024882;
        throw (long *)&v64;
      }
      v18 = *((_DWORD *)v4 + 6);
      v19 = *((_QWORD *)this + 30);
      v17[6] = 0LL;
      v17[7] = 0LL;
      v17[8] = 0LL;
      *v17 = 0LL;
      v17[1] = -2LL;
      *((_DWORD *)v17 + 4) = v18;
      v17[3] = (__int64)v4;
      v17[4] = 0LL;
      *((_DWORD *)v17 + 10) = 0;
      ATL::CComPtr<IDeviceGraphObjectCache>::operator=(v17 + 6, v19);
      v17[8] = -2LL;
      v76 = (CConnectionInstance *)v17;
      v78 = (__int64 *)v9[1];
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((__int64)v9);
      v20 = (__int64 *)v9[4];
      v21 = *v20;
      v20[2] = (__int64)v17;
      v9[4] = v21;
      v20[1] = (__int64)v78;
      *v20 = 0LL;
      ++v9[2];
      v22 = (__int64 **)v9[1];
      if ( v22 )
        *v22 = v20;
      else
        *v9 = (__int64)v20;
      v9[1] = (__int64)v20;
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(
        (_QWORD *)this + 31,
        &v76);
    }
    v76 = 0LL;
    goto LABEL_33;
  }
  catch ( ATL::CAtlException *v74 )
  {
    v75 = *(_DWORD *)v74;
    goto LABEL_65;
  }
  catch ( long *v73 )
  {
    v75 = *(_DWORD *)v73;
LABEL_65:
    v47 = v75;
    if ( v75 < 0 )
    {
      if ( v76 )
        CConnectionInstance::`scalar deleting destructor'(v76, (unsigned int)&v59);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::CreateAPOConnectionList", 0xAC4u, v75);
    }
LABEL_47:
    result = v47;
  }
LABEL_90:
  v47 = 0;
  goto LABEL_47;
}
