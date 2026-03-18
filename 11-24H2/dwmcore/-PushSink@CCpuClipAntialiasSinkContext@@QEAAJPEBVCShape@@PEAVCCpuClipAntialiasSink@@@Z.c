/*
 * XREFs of ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800792E0
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x180079130 (--1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAntialiasSinkContext@@0@Z @ 0x180148B10 (--$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAnt.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?Create@CCpuClipAntialiasSink@@SAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180204F00 (-Create@CCpuClipAntialiasSink@@SAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialia.c)
 *     ??$move_backward@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1802478CC (--$move_backward@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_a.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180247988 (--$uninitialized_move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$chec.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z @ 0x180286810 (--0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::PushSink(
        CCpuClipAntialiasSinkContext *this,
        const struct CShape *a2,
        unsigned int (__fastcall ***a3)(CMILRefCountImpl *__hidden this))
{
  signed __int64 v6; // rbx
  unsigned int (__fastcall *v7)(CMILRefCountImpl *__hidden); // rax
  detail::liberal_expansion_policy *v8; // rcx
  struct CCpuClipAntialiasSink *v9; // r13
  __int64 v10; // r9
  __int64 v11; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  bool v16; // zf
  void **v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  void **v21; // rbx
  void **i; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v28; // rdi
  void *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  void *v32; // rbx
  CCpuClipAntialiasSinkContext *v33; // rcx
  char *v34; // r9
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int128 v41; // [rsp+40h] [rbp-39h] BYREF
  __int64 v42; // [rsp+50h] [rbp-29h]
  __int128 v43; // [rsp+60h] [rbp-19h] BYREF
  signed __int64 v44; // [rsp+70h] [rbp-9h]
  _BYTE v45[16]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v46; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  struct CCpuClipAntialiasSink *v48; // [rsp+F0h] [rbp+77h] BYREF
  unsigned __int64 v49; // [rsp+F8h] [rbp+7Fh]

  v6 = 0x84BDA12F684BDA13uLL;
  if ( a3 )
  {
    v7 = **a3;
    if ( v7 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)a3);
    else
      ((void (__fastcall *)(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden), const struct CShape *, const struct CShape *))v7)(
        a3,
        a2,
        a2);
  }
  else
  {
    v34 = (char *)this + 904;
    v48 = 0LL;
    v35 = 0x84BDA12F684BDA13uLL * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4);
    if ( v35 )
      v36 = *(_QWORD *)(*((_QWORD *)this + 3) - 432LL) + 16LL;
    else
      v36 = 0LL;
    v37 = CCpuClipAntialiasSink::Create(v35, v36, a2, v34, &v48);
    v38 = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
        (const char *)(unsigned int)v37);
      wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v48);
      return v38;
    }
    a3 = (unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v48;
    v6 = 0x84BDA12F684BDA13uLL;
  }
  v9 = (struct CCpuClipAntialiasSink *)*((_QWORD *)this + 3);
  v10 = 1LL;
  v11 = *((_QWORD *)this + 2);
  v12 = 0x84BDA12F684BDA13uLL * (((__int64)v9 - v11) >> 4);
  if ( 0x84BDA12F684BDA13uLL * ((__int64)(*((_QWORD *)this + 4) - (_QWORD)v9) >> 4) )
  {
LABEL_5:
    *((_QWORD *)&v43 + 1) = 1LL;
    v13 = 0LL;
    v6 = 0x84BDA12F684BDA13uLL * (((__int64)v9 - v11) >> 4);
    v44 = 0LL;
    v14 = v6 - v12;
    v46 = 0LL;
    v15 = 16 * (((__int64)v9 - v11) >> 4);
    v49 = v6 - v12;
    v16 = v11 + v15 == 0;
    v17 = (void **)(v11 + v15);
    *(_QWORD *)&v43 = v17;
    if ( v16 )
      goto LABEL_13;
    v46 = 1LL;
    v18 = 0x84BDA12F684BDA13uLL * (((__int64)v9 - v11) >> 4) - v12;
    if ( v14 > 1 )
      v18 = 1LL;
    v41 = v43;
    v19 = 432 * v18;
    v42 = 1LL;
    v20 = (__int64)v9 - v19;
    v48 = (struct CCpuClipAntialiasSink *)((char *)v9 - v19);
    if ( v9 == (struct CCpuClipAntialiasSink *)((char *)v9 - v19) )
      goto LABEL_9;
    goto LABEL_36;
  }
  if ( v12 + 1 >= v12 )
  {
    v28 = detail::liberal_expansion_policy::expand(
            v8,
            0x84BDA12F684BDA13uLL * ((*((_QWORD *)this + 4) - v11) >> 4),
            v12 + 1);
    v29 = operator new[](saturated_mul(v28, 0x1B0uLL));
    v30 = *((_QWORD *)this + 3);
    v31 = *((_QWORD *)this + 2);
    *(_QWORD *)&v43 = v29;
    *((_QWORD *)&v43 + 1) = 0x84BDA12F684BDA13uLL * (((__int64)v9 - v11) >> 4);
    v32 = v29;
    v44 = 0LL;
    v41 = v43;
    v42 = 0LL;
    std::uninitialized_move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
      v45,
      v31,
      v30,
      &v41);
    detail::destruct_range<CCpuClipAntialiasSinkContext::SinkEntry>(*((_QWORD *)this + 2), *((_QWORD *)this + 3));
    v33 = (CCpuClipAntialiasSinkContext *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v32;
    if ( v33 == (CCpuClipAntialiasSinkContext *)((char *)this + 40) )
      v33 = 0LL;
    operator delete(v33);
    v11 = *((_QWORD *)this + 2);
    v10 = 1LL;
    v9 = (struct CCpuClipAntialiasSink *)(v11 + 432 * v12);
    *((_QWORD *)this + 3) = v9;
    *((_QWORD *)this + 4) = v11 + 432 * v28;
    goto LABEL_5;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_36:
  v39 = v42;
  v40 = v10;
  while ( 1 )
  {
    v9 = (struct CCpuClipAntialiasSink *)((char *)v9 - 432);
    if ( (_QWORD)v41 == v13 )
      goto LABEL_13;
    if ( !v40 )
      goto LABEL_13;
    v40 = v39 - 1;
    if ( (unsigned __int64)(v39 - 1) >= *((_QWORD *)&v41 + 1) )
      goto LABEL_13;
    CCpuClipAntialiasSinkContext::SinkEntry::SinkEntry(v41 + 432 * v40, v9);
    if ( v9 == v48 )
      break;
    v39 = v40;
    v13 = 0LL;
  }
  v14 = v49;
  v17 = (void **)v43;
LABEL_9:
  if ( v14 > 1 )
  {
    if ( !v6 || v11 && v6 >= 0 )
    {
      *(_QWORD *)&v43 = v11;
      *((_QWORD *)&v43 + 1) = v6;
      v44 = v6;
      std::move_backward<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
        v45,
        v11 + 432 * v12,
        v11 + 432 * v6 - 432,
        &v43);
      goto LABEL_10;
    }
LABEL_13:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_10:
  v21 = (void **)(v11 + 432 * (v12 + 1));
  if ( v17 < v21 )
    v21 = v17;
  for ( i = (void **)(v11 + 432 * v12); i != v21; i += 54 )
    CCpuClipAntialiasSinkContext::SinkEntry::~SinkEntry(i, v20, v13);
  *((_QWORD *)this + 3) += 432LL;
  v23 = 432 * v12;
  memset_0((void *)(v11 + 432 * v12 + 16), 0, 0x1A0uLL);
  v24 = v11 + 432 * v12 + 32;
  *(_QWORD *)(v23 + v11) = 0LL;
  *(_QWORD *)(v23 + v11 + 8) = v24;
  *(_QWORD *)(v23 + v11 + 16) = v24;
  *(_QWORD *)(v23 + v11 + 24) = v11 + v23 + 432;
  v25 = *((_QWORD *)this + 3);
  v26 = *(_QWORD *)(v25 - 432);
  *(_QWORD *)(v25 - 432) = a3;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  return 0LL;
}
