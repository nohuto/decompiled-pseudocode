/*
 * XREFs of ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x180008B70
 * Callers:
 *     ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180008900 (-UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017660 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18001DBA4 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800435A8 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned int a2,
        char a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        int *a7)
{
  __int64 v9; // rsi
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  const char *v11; // r9
  int v12; // r15d
  int *v13; // r14
  __int64 v14; // rax
  _QWORD **v15; // rdi
  HANDLE ProcessHeap; // rax
  _DWORD *v17; // rax
  _DWORD *v18; // rsi
  int v19; // r13d
  __int64 v20; // rax
  __int64 result; // rax
  int v22; // r12d
  volatile signed __int32 *v23; // rbx
  HANDLE v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rbx
  signed __int32 j; // eax
  _DWORD *v28; // rdi
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  signed __int32 i; // eax
  _QWORD *v33; // rcx
  _QWORD *v34; // rbx
  _QWORD *v35; // rdi
  _QWORD *k; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // esi
  volatile signed __int32 *v40; // rbx
  HANDLE v41; // rax
  _QWORD *v42; // rdx
  __int64 v43; // rcx
  signed __int32 m; // eax
  _QWORD *v45; // rbx
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  _QWORD *v48; // rdi
  char *v49; // [rsp+28h] [rbp-F0h]
  __int64 v50; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-D0h] BYREF
  _DWORD *v52; // [rsp+50h] [rbp-C8h] BYREF
  volatile signed __int32 *v53; // [rsp+58h] [rbp-C0h]
  __int64 v54; // [rsp+60h] [rbp-B8h] BYREF
  volatile signed __int32 *v55; // [rsp+68h] [rbp-B0h]
  __int64 v56; // [rsp+70h] [rbp-A8h]
  void *v57; // [rsp+78h] [rbp-A0h] BYREF
  void **v58; // [rsp+80h] [rbp-98h]
  _QWORD **v59; // [rsp+88h] [rbp-90h]
  _QWORD *v60; // [rsp+90h] [rbp-88h] BYREF
  _QWORD *v61; // [rsp+98h] [rbp-80h]
  void *v62; // [rsp+A0h] [rbp-78h] BYREF
  void *v63; // [rsp+A8h] [rbp-70h] BYREF
  LPCRITICAL_SECTION v64; // [rsp+B0h] [rbp-68h]
  _DWORD *v65; // [rsp+B8h] [rbp-60h]
  _DWORD *v66; // [rsp+C0h] [rbp-58h]
  _QWORD *v67; // [rsp+D0h] [rbp-48h]
  _QWORD *v68; // [rsp+E0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  __int64 v71; // [rsp+150h] [rbp+38h]

  v9 = a2;
  v10 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v64 = v10;
  v12 = 0;
  v13 = a7;
  *a7 = 0;
  v14 = 232LL;
  if ( !a3 )
    v14 = 40LL;
  try
  {
    v15 = (_QWORD **)((char *)&v10->DebugInfo + 8 * v9 + v14);
    if ( a6 )
    {
      if ( a5 )
      {
        v71 = 0LL;
        v56 = (__int64)v10 + 8 * v9 + v14;
        v57 = 0LL;
        v58 = &v57;
        v29 = *v15;
        while ( v29 )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v29[1] + 56LL) + 32LL))(*(_QWORD *)(v29[1] + 56LL)) == a6 )
          {
            v30 = v71;
            v31 = v29[1];
            v71 = v31;
            if ( v31 )
            {
              for ( i = *(_DWORD *)(v31 + 52); i != 0x7FFFFFFF; i = *(_DWORD *)(v31 + 52) )
              {
                if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(v31 + 52), i + 1, i) )
                  break;
              }
            }
            if ( v30 )
              ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release)();
            v33 = *v15;
            v29 = (_QWORD *)**v15;
            *v33 = 0LL;
            *v15 = v29;
            *v58 = v33;
            v58 = (void **)v33;
          }
          else
          {
            v15 = (_QWORD **)v29;
            v29 = (_QWORD *)*v29;
          }
        }
        v34 = v57;
        if ( v57 )
        {
          do
          {
            v35 = (_QWORD *)*v34;
            if ( v34[1] )
              ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release)();
            operator delete(v34, (const struct std::nothrow_t *)0x10);
            v34 = v35;
          }
          while ( v35 );
        }
        if ( v71 )
        {
          if ( (***(float (__fastcall ****)(_QWORD))(v71 + 56))(*(_QWORD *)(v71 + 56)) != 0.0 )
            v12 = 1;
          *v13 = v12;
        }
        if ( v71 )
          ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release)();
      }
      else
      {
        ProcessHeap = GetProcessHeap();
        v17 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
        v18 = v17;
        v19 = 1;
        if ( v17 )
        {
          v17[2] = 1;
          v17[3] = 1;
          *(_QWORD *)v17 = &std::_Ref_count_obj2<DeactivatableDuckingDescriptor>::`vftable';
          *((_QWORD *)v17 + 2) = &DeactivatableDuckingDescriptor::`vftable';
          *((_QWORD *)v17 + 3) = 0LL;
          *((_QWORD *)v17 + 4) = 0LL;
          v20 = a4[1];
          if ( v20 )
            _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
          *((_QWORD *)v18 + 3) = *a4;
          *((_QWORD *)v18 + 4) = a4[1];
          *((_QWORD *)v18 + 5) = a6;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
        }
        else
        {
          v18 = 0LL;
        }
        v65 = v18 + 4;
        v66 = v18;
        if ( v18 == (_DWORD *)-16LL )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5C,
            (int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
            (const char *)0x8007000ELL);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)0xFFFFFFFFFFFFFFF8LL, 0xFFFFFFFF) == 1 )
          {
            ((void (__fastcall *)(__int64))*MEMORY[0xFFFFFFFFFFFFFFF0])(-16LL);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)0xFFFFFFFFFFFFFFFCLL, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(__int64))(MEMORY[0xFFFFFFFFFFFFFFF0] + 8LL))(-16LL);
          }
          if ( v10 )
            LeaveCriticalSection(v10);
          return 2147942414LL;
        }
        if ( v18 )
          _InterlockedIncrement(v18 + 2);
        v52 = v18 + 4;
        v53 = v18;
        v62 = &StreamClassVolumePolicyGuid;
        v50 = 0LL;
        v22 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
                &v50,
                &v62,
                &v52);
        if ( v53 )
        {
          if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
          {
            v23 = v53;
            (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
          }
        }
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5F,
            (int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
            (const char *)(unsigned int)v22);
          if ( v50 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v50);
          if ( v18 )
          {
            if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(_DWORD *))v18)(v18);
              if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
            }
          }
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          return (unsigned int)v22;
        }
        v24 = GetProcessHeap();
        v25 = HeapAlloc(v24, 0, 0x10uLL);
        v67 = v25;
        v26 = v50;
        v25[1] = v50;
        if ( v26 )
        {
          for ( j = *(_DWORD *)(v26 + 52); j != 0x7FFFFFFF; j = *(_DWORD *)(v26 + 52) )
          {
            if ( j == _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 52), j + 1, j) )
              break;
          }
          v26 = v50;
          v25 = v67;
        }
        *v25 = *v15;
        *v15 = v25;
        v28 = v65;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v65 + 3) + 24LL))(*((_QWORD *)v65 + 3))
          || *(float *)(*((_QWORD *)v28 + 1) + 8LL) == 0.0 )
        {
          v19 = 0;
        }
        *a7 = v19;
        if ( v26 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v26);
        if ( v18 )
        {
          if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(_DWORD *))v18)(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
          }
        }
      }
      goto LABEL_117;
    }
    for ( k = *v15; k && *a4 != *(_QWORD *)(k[1] + 56LL); k = (_QWORD *)*k )
      ;
    if ( a5 )
    {
      if ( k )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(k[1] + 36LL), 0xFFFFFFFF) == 1 )
        {
          v59 = v15;
          v45 = 0LL;
          v60 = 0LL;
          v61 = &v60;
          v46 = *v15;
          if ( *v15 )
          {
            do
            {
              if ( *a4 == *(_QWORD *)(v46[1] + 56LL) )
              {
                v47 = *v15;
                v46 = (_QWORD *)**v15;
                *v47 = 0LL;
                *v15 = v46;
                *v61 = v47;
                v61 = v47;
              }
              else
              {
                v15 = (_QWORD **)v46;
                v46 = (_QWORD *)*v46;
              }
            }
            while ( v46 );
            v45 = v60;
          }
          if ( v45 )
          {
            do
            {
              v48 = (_QWORD *)*v45;
              if ( v45[1] )
                ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release)();
              operator delete(v45, (const struct std::nothrow_t *)0x10);
              v45 = v48;
            }
            while ( v48 );
          }
          if ( *(float *)(*a4 + 8LL) != 0.0 )
            v12 = 1;
          *a7 = v12;
        }
      }
      else
      {
        LODWORD(v49) = v9;
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0xA7,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
          (const char *)0x8000FFFFLL,
          (int)"Category = %d, DescriptorGain = %f",
          v49,
          *(float *)(*a4 + 8LL));
      }
    }
    else if ( k )
    {
      _InterlockedIncrement((volatile signed __int32 *)(k[1] + 36LL));
    }
    else
    {
      v37 = *a4;
      v38 = a4[1];
      if ( v38 )
        _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
      v54 = v37;
      v55 = (volatile signed __int32 *)a4[1];
      v63 = &StreamClassVolumePolicyGuid;
      v51 = 0LL;
      v39 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
              &v51,
              &v63,
              &v54);
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          v40 = v55;
          (**(void (__fastcall ***)(volatile signed __int32 *))v55)(v55);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
          v10 = lpCriticalSection;
        }
        v13 = a7;
      }
      if ( v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8F,
          (int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
          (const char *)(unsigned int)v39);
        if ( v51 )
          ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release)();
        if ( v10 )
          LeaveCriticalSection(v10);
        return (unsigned int)v39;
      }
      v41 = GetProcessHeap();
      v42 = HeapAlloc(v41, 0, 0x10uLL);
      v68 = v42;
      v43 = v51;
      v42[1] = v51;
      if ( v43 )
      {
        for ( m = *(_DWORD *)(v43 + 52); m != 0x7FFFFFFF; m = *(_DWORD *)(v43 + 52) )
        {
          if ( m == _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 52), m + 1, m) )
            break;
        }
        v43 = v51;
        v42 = v68;
      }
      *v42 = *v15;
      *v15 = v42;
      if ( *(float *)(*a4 + 8LL) != 0.0 )
        v12 = 1;
      *v13 = v12;
      if ( v43 )
        ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release)();
    }
LABEL_117:
    if ( v64 )
      LeaveCriticalSection(v64);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAE,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
                           v11);
  }
  return result;
}
