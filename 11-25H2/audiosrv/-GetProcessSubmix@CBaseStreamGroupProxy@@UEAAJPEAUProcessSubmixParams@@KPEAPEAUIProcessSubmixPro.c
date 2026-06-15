/*
 * XREFs of ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180024E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180022D84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$_Construct_in_place@VWeakRef@WRL@Microsoft@@AEBV123@@std@@YAXAEAVWeakRef@WRL@Microsoft@@AEBV123@@Z @ 0x1800235A0 (--$_Construct_in_place@VWeakRef@WRL@Microsoft@@AEBV123@@std@@YAXAEAVWeakRef@WRL@Microsoft@@AEBV1.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180024BC0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x1800254A4 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 *     ??0CProcessSubmixProxy@@QEAA@XZ @ 0x18006CBAC (--0CProcessSubmixProxy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x18006CC74 (-RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DE.c)
 *     ??$AsWeak@UIProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAUIProcessSubmixProxy@@PEAVWeakRef@01@@Z @ 0x180071388 (--$AsWeak@UIProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAUIProcessSubmixProxy@@PEAVWeakRef@01@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CBaseStreamGroupProxy::GetProcessSubmix(
        CBaseStreamGroupProxy *this,
        struct ProcessSubmixParams *a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  struct ProcessSubmixParams *v4; // r14
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // r15
  const char *v8; // r9
  __int64 **i; // rsi
  __int64 *v10; // rbx
  int v11; // eax
  int (__fastcall *v12)(_QWORD, GUID *, __int64 *); // r14
  __int64 v13; // r14
  int v14; // r15d
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 result; // rax
  __int64 *v22; // rdx
  CProcessSubmixProxy *v23; // rax
  __int64 *v24; // rbx
  int v25; // esi
  __int64 *v26; // rax
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // [rsp+20h] [rbp-148h]
  int (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-138h] BYREF
  __int64 v38; // [rsp+38h] [rbp-130h] BYREF
  __int64 v39; // [rsp+40h] [rbp-128h] BYREF
  struct ProcessSubmixParams *v40; // [rsp+48h] [rbp-120h] BYREF
  __int64 *v41; // [rsp+50h] [rbp-118h] BYREF
  struct IProcessSubmixProxy **v42; // [rsp+58h] [rbp-110h]
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+60h] [rbp-108h]
  _DWORD v44[4]; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v45; // [rsp+80h] [rbp-E8h]
  int v46; // [rsp+88h] [rbp-E0h]
  __int64 v47; // [rsp+90h] [rbp-D8h]
  int v48; // [rsp+98h] [rbp-D0h]
  __int64 v49; // [rsp+A0h] [rbp-C8h]
  __int64 v50; // [rsp+A8h] [rbp-C0h]
  int v51; // [rsp+B0h] [rbp-B8h]
  __int128 v52; // [rsp+B4h] [rbp-B4h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v42 = a4;
  v4 = a2;
  v40 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v43 = v6;
  try
  {
    v7 = 0LL;
    if ( (*(unsigned __int8 (**)(void))(*(_QWORD *)this + 184LL))() )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C4,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x80070057LL);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 2147942487LL;
    }
    CBaseStreamGroupProxy::PruneStaleProcessSubmixes(this);
    v38 = 0LL;
    for ( i = (__int64 **)*((_QWORD *)this + 27); i != *((__int64 ***)this + 28); ++i )
    {
      v10 = *i;
      v41 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64 *))(*v10 + 8))(v10);
      v37 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v37);
      v37 = 0LL;
      if ( v10 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*v10 + 24))(
                v10,
                &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                (__int64 *)&v37);
        v7 = v37;
      }
      else
      {
        v11 = 0;
      }
      if ( v11 < 0 || !v7 )
      {
        if ( v7 )
        {
          v37 = 0LL;
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[2])(v7);
        }
        goto LABEL_44;
      }
      v39 = 0LL;
      v12 = **v7;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
      if ( v12(v7, &GUID_6fa8c0b3_a926_48af_a753_f702dad2b4f0, &v39) < 0 )
      {
        v30 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v31 = (__int64)v37;
        if ( !v37 )
          goto LABEL_44;
LABEL_43:
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        goto LABEL_44;
      }
      v13 = *(_QWORD *)v40;
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 128LL))(v39);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13) != v14 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v37);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v41);
        goto LABEL_46;
      }
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 144LL))(v39);
      v4 = v40;
      if ( *((_BYTE *)v40 + 8) == v15 )
      {
        v16 = v39;
        if ( v38 != v39 )
        {
          v17 = v39;
          if ( v39 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
            v16 = v39;
          }
          v18 = v38;
          v38 = v17;
          if ( v18 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            v16 = v39;
          }
        }
        if ( v16 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v19 = (__int64)v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
        break;
      }
      v33 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v31 = (__int64)v37;
      if ( v37 )
        goto LABEL_43;
LABEL_44:
      if ( v10 )
        (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
LABEL_46:
      v4 = v40;
      v7 = 0LL;
    }
    if ( v38 )
      goto LABEL_26;
    memset_0(v44, 0, 0xA8uLL);
    v22 = (__int64 *)*((_QWORD *)v4 + 2);
    v44[0] = *((_DWORD *)v22 + 2);
    v44[1] = 0;
    v47 = *v22;
    v44[2] = *(unsigned __int16 *)(v22[2] + 16) + 18;
    v45 = v22[2];
    v48 = *(unsigned __int16 *)(v22[2] + 16) + 18;
    v49 = v22[2];
    v50 = v22[3];
    v51 = 0;
    v52 = *((_OWORD *)v22 + 2);
    v46 = *((unsigned __int8 *)v22 + 50);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
    v38 = 0LL;
    v23 = (CProcessSubmixProxy *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
    v40 = v23;
    if ( v23 )
    {
      v24 = (__int64 *)CProcessSubmixProxy::CProcessSubmixProxy(v23);
      v41 = v24;
      v40 = 0LL;
      v25 = CProcessSubmixProxy::RuntimeClassInitialize(
              (CProcessSubmixProxy *)v24,
              v4,
              (struct PROCESS_SUBMIX_DESCRIPTOR *)v44,
              this,
              v36);
      if ( v25 < 0 )
      {
        if ( v24 )
          (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
        Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v40);
      }
      else
      {
        v25 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))*v24)(
                v24,
                &GUID_6fa8c0b3_a926_48af_a753_f702dad2b4f0,
                &v38);
        (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
        if ( v25 >= 0 )
        {
          v37 = 0LL;
          v41 = (__int64 *)&v37;
          v26 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v41);
          v27 = Microsoft::WRL::AsWeak<IProcessSubmixProxy>(v38, v26);
          v28 = v27;
          if ( v27 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1EE,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v27);
            v34 = (__int64)v37;
            if ( v37 )
            {
              v37 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
            }
            v35 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
            }
            if ( v6 )
              LeaveCriticalSection(v6);
            return v28;
          }
          else
          {
            if ( *((_QWORD *)this + 28) == *((_QWORD *)this + 29) )
            {
              std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
                (__int64 *)this + 27,
                *((__int64 **)this + 28),
                (__int64)&v37);
            }
            else
            {
              std::_Construct_in_place<Microsoft::WRL::WeakRef,Microsoft::WRL::WeakRef const &>(
                *((__int64 **)this + 28),
                (__int64 *)&v37);
              *((_QWORD *)this + 28) += 8LL;
            }
            v29 = (__int64)v37;
            if ( v37 )
            {
              v37 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            }
LABEL_26:
            v20 = v38;
            v38 = 0LL;
            *v42 = (struct IProcessSubmixProxy *)v20;
            if ( v6 )
              LeaveCriticalSection(v6);
            return 0LL;
          }
        }
      }
    }
    else
    {
      v25 = -2147024882;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v25);
    v32 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    result = (unsigned int)v25;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F5,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v8);
  }
  return result;
}
