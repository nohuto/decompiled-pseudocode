/*
 * XREFs of ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x180089FF8
 * Callers:
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x180014F08 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x18002FFB0 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x18006D0A0 (-SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 * Callees:
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800154AC (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800158C4 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800159E0 (--1-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180015AA8 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x180015B14 (--0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z.c)
 *     ?at@?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAAAEAUContactData@PointerInputMediator@@AEBI@Z @ 0x180030C78 (-at@-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18004F640 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ??$emplace_back@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAA?A_TAEAI@Z @ 0x180066C38 (--$emplace_back@AEAI@-$vector@IV-$allocator@I@std@@@std@@QEAA-A_TAEAI@Z.c)
 *     ??$_Emplace_reallocate@AEAI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEAI@Z @ 0x180066D78 (--$_Emplace_reallocate@AEAI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEAI@Z.c)
 *     ?RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x18006AD4C (-RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x180070A7C (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18008A99C (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_PointerInputMediator::PointerFrame_______lambda_b7bb5d1243db4af2adae27fbd398c724___ @ 0x18008AA70 (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_PointerInputMediator-.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F1618 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?_Growmap@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX_K@Z @ 0x1800F167C (-_Growmap@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall PointerInputMediator::RoutePointers(
        int a1,
        void *a2,
        unsigned int a3,
        void *a4,
        _OWORD *a5,
        char a6,
        int a7)
{
  _DWORD *v7; // rcx
  bool v8; // r10
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 i; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rsi
  int *v19; // r15
  int *v20; // rax
  int v21; // r12d
  __int64 v22; // r14
  bool v23; // zf
  __int64 v24; // rcx
  _OWORD *v25; // rax
  __int64 v26; // rax
  int *v27; // r13
  unsigned int v28; // esi
  int *v29; // r14
  int *v30; // r12
  HANDLE v31; // r15
  __int64 v32; // r9
  int v33; // esi
  _DWORD *m; // rdi
  __int64 v35; // rcx
  const char *v36; // r9
  _DWORD *n; // rax
  bool v38; // al
  wil::details::in1diag3 *v39; // rcx
  _BYTE *v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 ii; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdi
  int v57; // r14d
  unsigned int v58; // eax
  unsigned int v59; // ebx
  __int64 v60; // rax
  char *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rbx
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 *v75; // rbx
  const char *dwDesiredAccess; // [rsp+20h] [rbp-E0h]
  int v77; // [rsp+40h] [rbp-C0h] BYREF
  int v78; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v79; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE TargetHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE hSourceHandle; // [rsp+58h] [rbp-A8h]
  __int64 v82; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v83; // [rsp+68h] [rbp-98h]
  __int64 v84; // [rsp+70h] [rbp-90h]
  __int64 v85; // [rsp+78h] [rbp-88h] BYREF
  __int64 v86; // [rsp+80h] [rbp-80h]
  __int64 v87; // [rsp+88h] [rbp-78h]
  void *v88; // [rsp+90h] [rbp-70h] BYREF
  char v89; // [rsp+98h] [rbp-68h]
  int *k; // [rsp+A0h] [rbp-60h]
  __int64 j; // [rsp+A8h] [rbp-58h]
  __int64 v92; // [rsp+B0h] [rbp-50h]
  __int64 v93[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v94; // [rsp+C8h] [rbp-38h]
  unsigned int v95; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v96; // [rsp+D4h] [rbp-2Ch]
  char v97[152]; // [rsp+D8h] [rbp-28h] BYREF
  char v98[24]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v99[3]; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v100[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]
  int v102; // [rsp+230h] [rbp+130h] BYREF

  v102 = a1;
  TargetHandle = a4;
  v79 = a3;
  hSourceHandle = a2;
  v88 = &PointerInputMediator::s_frameQueueLock;
  std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
  v8 = 1;
  v89 = 1;
  v9 = qword_180246E78;
  v10 = qword_180246E80;
  v11 = (__int64 *)PointerInputMediator::s_frameQueue;
  if ( PointerInputMediator::s_frameQueue )
    v12 = *(_QWORD *)PointerInputMediator::s_frameQueue;
  else
    v12 = 0LL;
  for ( i = qword_180246E78; i != qword_180246E78 + qword_180246E80; ++i )
  {
    v7 = *(_DWORD **)(*(_QWORD *)(v12 + 8) + 8 * (i & (*(_QWORD *)(v12 + 16) - 1LL)));
    if ( *v7 == v102 )
      goto LABEL_9;
  }
  v78 = 131076;
  MicrosoftTelemetryAssertTriggeredArgs(v7, 131076LL, 100LL);
  v10 = qword_180246E80;
  v9 = qword_180246E78;
  v8 = 1;
LABEL_9:
  if ( i == v9 + v10 )
    return std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)&v88);
  if ( v11 )
    v15 = *v11;
  else
    v15 = 0LL;
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * (i & (*(_QWORD *)(v15 + 16) - 1LL)));
  v92 = *(_QWORD *)(v16 + 152);
  v17 = v9 + v10;
  for ( j = v9 + v10; v9 != v17; v17 = j )
  {
    v17 = v9 & (qword_180246E70 - 1);
    v18 = *(_QWORD *)(qword_180246E68 + 8 * v17);
    if ( *(_DWORD *)v18 == v102 )
      break;
    if ( *(_QWORD *)(v18 + 152) == *(_QWORD *)(v16 + 152)
      && (__int64)(*(_QWORD *)(v18 + 192) - *(_QWORD *)(v18 + 184)) >> 2 != *(_DWORD *)(v18 + 4) )
    {
      v19 = *(int **)(v18 + 160);
      v20 = *(int **)(v18 + 168);
      for ( k = v20; v19 != v20; v20 = k )
      {
        v21 = *v19;
        v77 = *v19;
        v22 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at((_QWORD *)(v18 + 208), &v77);
        if ( a7 )
        {
          if ( a7 != 1 )
            wil::details::in1diag3::FailFast_UnexpectedMsg(
              retaddr,
              (void *)0xB9,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\"
                            "pointerinputmediator.cpp",
              "Unknown routing source",
              dwDesiredAccess);
          v23 = *(_BYTE *)(v22 + 1) == 0;
        }
        else
        {
          if ( *(_BYTE *)(v22 + 1) )
            goto LABEL_28;
          v23 = *(_BYTE *)v22 == 0;
        }
        if ( v23 )
        {
          v78 = 65540;
          v24 = a7 == 0 ? 0x10000 : 0;
          MicrosoftTelemetryAssertTriggeredArgs(
            v24,
            65540LL,
            (unsigned __int16)v21 | (unsigned int)v24 | (*(_BYTE *)v22 != 0 ? 0x20000 : 0));
          std::vector<unsigned int>::emplace_back<unsigned int &>(v18 + 184, &v77);
          v8 = 1;
          *(_BYTE *)(v22 + 1) = 1;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_WORD *)(v22 + 24) = 256;
          goto LABEL_29;
        }
LABEL_28:
        v8 = 1;
LABEL_29:
        ++v19;
      }
    }
    ++v9;
  }
  v25 = a5;
  *(_OWORD *)(v16 + 8) = *a5;
  *(_OWORD *)(v16 + 24) = v25[1];
  *(_OWORD *)(v16 + 40) = v25[2];
  *(_OWORD *)(v16 + 56) = v25[3];
  *(_OWORD *)(v16 + 72) = v25[4];
  *(_OWORD *)(v16 + 88) = v25[5];
  *(_OWORD *)(v16 + 104) = v25[6];
  *(_OWORD *)(v16 + 120) = v25[7];
  *(_OWORD *)(v16 + 136) = v25[8];
  v26 = v79;
  v27 = (int *)TargetHandle;
  v28 = 0;
  if ( !TargetHandle && v79 )
  {
    v26 = _o_terminate(v17);
    __debugbreak();
  }
  v29 = v27;
  v30 = &v27[v26];
  v31 = hSourceHandle;
  if ( v27 != v30 )
  {
    v32 = 4LL;
    do
    {
      v33 = *v29;
      v78 = *v29;
      for ( m = *(_DWORD **)(v16 + 184); m != *(_DWORD **)(v16 + 192); ++m )
      {
        if ( *m == v33 )
        {
          if ( !*(_BYTE *)(std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(
                             (_QWORD *)(v16 + 208),
                             &v78)
                         + 25) )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xE4,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\"
                            "pointerinputmediator.cpp",
              v36);
          v77 = 131076;
          MicrosoftTelemetryAssertTriggeredArgs(v35, 131076LL, 235LL);
          memmove_0(m, m + 1, *(_QWORD *)(v16 + 192) - (_QWORD)(m + 1));
          *(_QWORD *)(v16 + 192) -= 4LL;
          v31 = hSourceHandle;
          v8 = 1;
          v32 = 4LL;
          break;
        }
      }
      for ( n = *(_DWORD **)(v16 + 160); n != *(_DWORD **)(v16 + 168); ++n )
      {
        if ( *n == v33 )
        {
          v38 = 0;
          goto LABEL_50;
        }
      }
      v38 = v8;
LABEL_50:
      v39 = retaddr;
      if ( v38 )
        goto LABEL_67;
      v40 = *(_BYTE **)(v16 + 192);
      if ( v40 == *(_BYTE **)(v16 + 200) )
      {
        std::vector<unsigned int>::_Emplace_reallocate<unsigned int &>((const void **)(v16 + 184), v40, &v78, 4LL);
        v33 = v78;
        v32 = 4LL;
      }
      else
      {
        *(_DWORD *)v40 = v33;
        *(_QWORD *)(v16 + 192) += 4LL;
      }
      v41 = 0xCBF29CE484222325uLL;
      v42 = 0LL;
      v8 = 1;
      do
        v41 = 0x100000001B3LL * (*((unsigned __int8 *)&v78 + v42++) ^ (unsigned __int64)v41);
      while ( v42 < 4 );
      v43 = 2 * (v41 & *(_QWORD *)(v16 + 256));
      v44 = *(_QWORD *)(v16 + 232);
      v45 = *(_QWORD *)(v44 + 8 * v43 + 8);
      if ( v45 == *(_QWORD *)(v16 + 216) )
        goto LABEL_66;
      while ( v33 != *(_DWORD *)(v45 + 16) )
      {
        if ( v45 == *(_QWORD *)(v44 + 8 * v43) )
          goto LABEL_66;
        v45 = *(_QWORD *)(v45 + 8);
      }
      v28 = 0;
      if ( !v45 )
      {
LABEL_66:
        std::_Xout_of_range("invalid unordered_map<K, T> key");
        __debugbreak();
LABEL_67:
        wil::details::in1diag3::_FailFast_Unexpected(
          v39,
          (void *)0xF3,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\poin"
                        "terinputmediator.cpp",
          (const char *)v32);
      }
      *(_BYTE *)(v45 + 25) = 1;
      *(_QWORD *)(v45 + 32) = v31;
      *(_BYTE *)(v45 + 48) = a6;
      *(_BYTE *)(v45 + 49) = 0;
      ++v29;
    }
    while ( v29 != v30 );
    v27 = (int *)TargetHandle;
  }
  if ( (__int64)(*(_QWORD *)(v16 + 192) - *(_QWORD *)(v16 + 184)) >> 2 > (unsigned __int64)*(unsigned int *)(v16 + 4) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFC,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointeri"
                    "nputmediator.cpp",
      (const char *)retaddr);
  if ( PointerInputMediator::s_routingFrames )
  {
    v48 = qword_180246E80;
    v46 = qword_180246E78;
    v47 = PointerInputMediator::s_frameQueue;
  }
  else
  {
    PointerInputMediator::s_routingFrames = v8;
    while ( 1 )
    {
      v46 = qword_180246E78;
      v47 = PointerInputMediator::s_frameQueue;
      v48 = qword_180246E80;
      if ( !qword_180246E80 )
        break;
      v49 = PointerInputMediator::s_frameQueue ? *(_QWORD *)PointerInputMediator::s_frameQueue : 0LL;
      for ( ii = qword_180246E78;
            ii != qword_180246E78 + qword_180246E80
         && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 8) + 8 * (ii & (*(_QWORD *)(v49 + 16) - 1LL))) + 152LL) != v92;
            ++ii )
      {
        ;
      }
      if ( ii == qword_180246E78 + qword_180246E80 )
        break;
      v51 = PointerInputMediator::s_frameQueue ? *(_QWORD *)PointerInputMediator::s_frameQueue : 0LL;
      v52 = *(_QWORD *)(*(_QWORD *)(v51 + 8) + 8 * (ii & (*(_QWORD *)(v51 + 16) - 1LL)));
      v53 = PointerInputMediator::s_frameQueue ? *(_QWORD *)PointerInputMediator::s_frameQueue : 0LL;
      if ( (__int64)(*(_QWORD *)(v52 + 192) - *(_QWORD *)(v52 + 184)) >> 2 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) + 8 * (ii & (*(_QWORD *)(v53 + 16) - 1LL)))
                                                                                        + 4LL) )
        break;
      if ( PointerInputMediator::s_frameQueue )
        v54 = *(_QWORD *)PointerInputMediator::s_frameQueue;
      else
        v54 = 0LL;
      PointerInputMediator::PointerFrame::PointerFrame(
        (__int64)&v95,
        *(_QWORD *)(*(_QWORD *)(v54 + 8) + 8 * (ii & (*(_QWORD *)(v54 + 16) - 1LL))));
      v83 = 0LL;
      v82 = v47;
      v84 = ii + 1;
      v86 = 0LL;
      v85 = v47;
      v87 = ii;
      std::deque<PointerInputMediator::PointerFrame>::erase(v55, v93, (__int64)&v85, (__int64)&v82);
      _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
      v89 = 0;
      if ( v96 )
      {
        do
        {
          v79 = *(_DWORD *)(v99[0] + 4LL * v28);
          v56 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v100, &v79);
          v57 = 0;
          v58 = v28 + 1;
          if ( v28 + 1 < v96 )
          {
            v59 = v28 + 1;
            do
            {
              v79 = *(_DWORD *)(v99[0] + 4LL * v58);
              v60 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v100, &v79);
              if ( *(_QWORD *)(v60 + 8) != *(_QWORD *)(v56 + 8) )
                break;
              if ( *(_BYTE *)(v60 + 24) != *(_BYTE *)(v56 + 24) )
                break;
              if ( ((*(_QWORD *)(v60 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                break;
              ++v57;
              v58 = ++v59;
            }
            while ( v59 < v96 );
          }
          v61 = *(char **)(v56 + 16);
          if ( (unsigned __int64)(v61 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            v61 = *(char **)(v56 + 8);
          PointerInputMediator::RouteInput(
            v95,
            v61,
            (unsigned int)(v57 + 1),
            (unsigned int *)(v99[0] + 4LL * v28),
            (struct tagTELEMETRY_POINTER_FRAME_TIMES *)v97,
            *(unsigned __int8 *)(v56 + 24));
          v28 += v57 + 1;
        }
        while ( v28 < v96 );
      }
      std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
      v89 = 1;
      v62 = qword_180246E38;
      if ( (unsigned __int64)qword_180246E38 >= 0x40 )
      {
        v28 = 0;
      }
      else
      {
        v63 = qword_180246E28;
        if ( qword_180246E28 <= (unsigned __int64)(qword_180246E38 + 1) )
        {
          std::deque<PointerInputMediator::PointerFrame>::_Growmap(&PointerInputMediator::s_frameLookaside);
          v62 = qword_180246E38;
          v63 = qword_180246E28;
        }
        v64 = v63 - 1;
        qword_180246E30 &= v64;
        v65 = (v62 + qword_180246E30) & v64;
        v66 = qword_180246E20;
        v28 = 0;
        if ( !*(_QWORD *)(qword_180246E20 + 8 * v65) )
        {
          *(_QWORD *)(qword_180246E20 + 8 * v65) = operator new(0x110uLL);
          v66 = qword_180246E20;
        }
        PointerInputMediator::PointerFrame::PointerFrame(*(_QWORD *)(v66 + 8 * v65), (__int64)&v95);
        ++qword_180246E38;
      }
      std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::~_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>((__int64)v100);
      std::vector<Windows::UI::Color>::_Tidy((__int64)v99);
      std::vector<Windows::UI::Color>::_Tidy((__int64)v98);
    }
    PointerInputMediator::s_routingFrames = 0;
    v27 = (int *)TargetHandle;
  }
  if ( v31 )
  {
    v67 = v46 + v48;
    v86 = 0LL;
    v87 = v46 + v48;
    v85 = v47;
    v83 = 0LL;
    v84 = v46;
    v82 = v47;
    std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_PointerInputMediator::PointerFrame_______lambda_b7bb5d1243db4af2adae27fbd398c724___(
      v93,
      &v82,
      &v85,
      &v102);
    if ( v94 != v67 )
    {
      if ( v93[0] )
        v68 = *(_QWORD *)v93[0];
      else
        v68 = 0LL;
      v69 = *(_QWORD *)(*(_QWORD *)(v68 + 8) + 8 * (v94 & (*(_QWORD *)(v68 + 16) - 1LL)));
      TargetHandle = 0LL;
      CurrentProcess = GetCurrentProcess();
      v71 = GetCurrentProcess();
      DuplicateHandle(v71, v31, CurrentProcess, &TargetHandle, 0, 0, 2u);
      if ( !TargetHandle )
      {
        v77 = 131077;
        MicrosoftTelemetryAssertTriggeredArgs(v72, 131077LL, 374LL);
      }
      v73 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at((_QWORD *)(v69 + 208), v27);
      v75 = (__int64 *)(v73 + 16);
      if ( *(HANDLE *)(v73 + 8) != v31 || (unsigned __int64)(*v75 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v77 = 131077;
        MicrosoftTelemetryAssertTriggeredArgs(v74, 131077LL, 377LL);
      }
      wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
        v75,
        (__int64)TargetHandle);
    }
  }
  return _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
}
