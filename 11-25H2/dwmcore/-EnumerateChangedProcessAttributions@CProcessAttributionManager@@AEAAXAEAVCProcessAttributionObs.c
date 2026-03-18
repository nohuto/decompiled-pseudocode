/*
 * XREFs of ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x180180A90
 * Callers:
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x18018086C (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1801809F0 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 * Callees:
 *     _lambda_6fd6f184957a643251d7d3699d74716f_::operator() @ 0x180180ED4 (_lambda_6fd6f184957a643251d7d3699d74716f_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_b496c46762585f0fe68863cd1dbbffab__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x180181020 (std--_Func_impl_no_alloc__lambda_b496c46762585f0fe68863cd1dbbffab__void_void___unsigned_long_uns.c)
 *     std::_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1801812E0 (std--_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_uns.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x18021E140 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcessAttributionManager::EnumerateChangedProcessAttributions(
        void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  char *v8; // rbx
  __int64 result; // rax
  char *v10; // rsi
  __int64 v11; // rcx
  _DWORD *v12; // r12
  _DWORD *v13; // r15
  int v14; // r13d
  bool v15; // cl
  int v16; // r9d
  int v17; // ebp
  int v18; // r14d
  int v19; // r10d
  bool v20; // r8
  bool v21; // r9
  bool v22; // zf
  CProcessAttributionManager::Record *v23; // rcx
  _BYTE *v24; // r15
  _QWORD *v25; // rdx
  int v26; // r8d
  __int64 v27; // r10
  __int64 (__fastcall *v28)(int, int, int, int, int, __int64); // r11
  __int64 v29; // r14
  __int64 v30; // rcx
  int v31; // r13d
  int v32; // esi
  int v33; // ebp
  int v34; // r14d
  int v35; // r15d
  int v36; // eax
  int v37; // r12d
  void **v38; // r14
  char v39; // [rsp+40h] [rbp-138h]
  int v40; // [rsp+48h] [rbp-130h] BYREF
  int v41; // [rsp+50h] [rbp-128h] BYREF
  __int64 v42; // [rsp+58h] [rbp-120h] BYREF
  _QWORD *v43; // [rsp+60h] [rbp-118h] BYREF
  __int64 v44; // [rsp+68h] [rbp-110h] BYREF
  void *v45; // [rsp+70h] [rbp-108h]
  __int64 v46; // [rsp+78h] [rbp-100h]
  void *Src; // [rsp+80h] [rbp-F8h]
  __int64 v48; // [rsp+88h] [rbp-F0h]
  void *v49; // [rsp+90h] [rbp-E8h]
  _DWORD *v50; // [rsp+98h] [rbp-E0h]
  __int64 v51; // [rsp+A0h] [rbp-D8h]
  __int64 v52; // [rsp+A8h] [rbp-D0h]
  void **v53; // [rsp+B0h] [rbp-C8h]
  _BYTE v54[96]; // [rsp+C0h] [rbp-B8h] BYREF

  v4 = a2;
  v46 = a2;
  v52 = a3;
  v53 = a1;
  v48 = a4;
  memset_0(v54, 0, 0x54uLL);
  v7 = *(_QWORD **)(v4 + 16);
  v8 = (char *)*a1;
  result = (__int64)(v7 + 1);
  Src = v7 + 1;
  v10 = v8 + 8;
LABEL_2:
  v45 = v10;
  while ( v7 != *(_QWORD **)(v4 + 24) )
  {
    v11 = *(_QWORD *)v8;
    v12 = (_DWORD *)*v7;
    v49 = v12;
    result = *(_QWORD *)v11;
    v13 = *(_DWORD **)(v11 + 112);
    v50 = v13;
    v51 = result;
    if ( *(_QWORD *)v12 != result )
    {
      v8 += 8;
      v10 += 8;
      goto LABEL_2;
    }
    v14 = v12[2];
    LODWORD(v44) = *(_DWORD *)(v11 + 120);
    v41 = v14;
    v39 = 0;
    if ( v13 )
    {
      Src = (char *)Src + 8;
      ++v7;
      v6 = (unsigned int)v13[7];
      v15 = v14 != v13[6];
      v16 = v13[9];
      v17 = v12[5];
      LOBYTE(v6) = v12[3] != (_DWORD)v6;
      v18 = v12[6];
      v19 = v13[10];
      v20 = v12[4] != v13[8];
      *(_OWORD *)(v12 + 2) = *(_OWORD *)(v13 + 6);
      v21 = v17 != v16;
      v22 = v18 == v19;
      v12[6] = v13[10];
    }
    else
    {
      v31 = v12[3];
      v32 = *(_DWORD *)(v11 + 8);
      v33 = *(_DWORD *)(v11 + 12);
      v34 = *(_DWORD *)(v11 + 16);
      v35 = *(_DWORD *)(v11 + 20);
      v40 = v12[4];
      LODWORD(v42) = v12[5];
      v36 = v12[6];
      v37 = *(_DWORD *)(v11 + 24);
      LODWORD(v43) = v36;
      v39 = 1;
      operator delete(v49, 0x70uLL);
      memmove_0(v7, Src, *(_QWORD *)(v46 + 24) - (_QWORD)Src);
      *(_QWORD *)(v46 + 24) -= 8LL;
      --*(_DWORD *)(*(_QWORD *)v8 + 160LL);
      v15 = v41 != v32;
      LOBYTE(v6) = v31 != v33;
      v20 = v40 != v34;
      v22 = (_DWORD)v42 == v35;
      v13 = v50;
      v21 = !v22;
      v22 = (_DWORD)v43 == v37;
    }
    result = v15;
    if ( (_BYTE)v6 )
      result = (unsigned int)result | 2;
    if ( v20 )
      result = (unsigned int)result | 4;
    if ( v21 )
      result = (unsigned int)result | 8;
    if ( !v22 )
      result = (unsigned int)result | 0x10;
    if ( v39 )
      result = (unsigned int)result | 0x20;
    if ( (_DWORD)result )
    {
      if ( v13 )
        v24 = v13 + 11;
      else
        v24 = v54;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 144LL) )
      {
        v25 = (_QWORD *)(*(_QWORD *)v8 + 128LL);
        if ( *(_QWORD *)(*(_QWORD *)v8 + 152LL) > 7uLL )
          v25 = (_QWORD *)*v25;
      }
      else
      {
        v25 = 0LL;
      }
      v26 = v44;
      v43 = v25;
      v27 = *(_QWORD *)(v48 + 56);
      v40 = result;
      v42 = v51;
      v41 = v44;
      v44 = v52;
      if ( !v27 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        JUMPOUT(0x180180ECELL);
      }
      v28 = *(__int64 (__fastcall **)(int, int, int, int, int, __int64))(*(_QWORD *)v27 + 16LL);
      if ( v28 == std::_Func_impl_no_alloc__lambda_6fd6f184957a643251d7d3699d74716f__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Do_call )
      {
        result = lambda_6fd6f184957a643251d7d3699d74716f_::operator()((int)v27 + 8, v52, v26, v51, (_DWORD)v25, result);
      }
      else if ( v28 == std::_Func_impl_no_alloc__lambda_b496c46762585f0fe68863cd1dbbffab__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Do_call )
      {
        result = std::_Func_impl_no_alloc__lambda_b496c46762585f0fe68863cd1dbbffab__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Do_call(
                   v27,
                   (unsigned int)&v44,
                   (unsigned int)&v41,
                   (unsigned int)&v42,
                   (unsigned int)&v43,
                   (__int64)&v40);
      }
      else if ( (char *)v28 == (char *)std::_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Do_call )
      {
        result = std::_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Do_call(
                   v27,
                   (unsigned int)&v44,
                   (unsigned int)&v41,
                   (unsigned int)&v42,
                   (unsigned int)&v43,
                   (__int64)&v40,
                   (__int64)v24);
      }
      else
      {
        result = ((__int64 (__fastcall *)(__int64, __int64 *, int *, __int64 *, _QWORD **, int *, _BYTE *))v28)(
                   v27,
                   &v44,
                   &v41,
                   &v42,
                   &v43,
                   &v40,
                   v24);
      }
    }
    v23 = *(CProcessAttributionManager::Record **)v8;
    if ( *(_DWORD *)(*(_QWORD *)v8 + 160LL) )
    {
      v8 += 8;
      v4 = v46;
      v10 = (char *)v45 + 8;
      goto LABEL_2;
    }
    if ( v23 )
      CProcessAttributionManager::Record::`scalar deleting destructor'(v23, v6);
    v10 = (char *)v45;
    v38 = v53;
    result = (__int64)memmove_0(v8, v45, (_BYTE *)v53[1] - (_BYTE *)v45);
    v38[1] = (char *)v38[1] - 8;
    v4 = v46;
  }
  v29 = v48;
  v30 = *(_QWORD *)(v48 + 56);
  if ( v30 )
  {
    LOBYTE(v6) = v30 != v48;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 32LL))(v30, v6);
    *(_QWORD *)(v29 + 56) = 0LL;
  }
  return result;
}
