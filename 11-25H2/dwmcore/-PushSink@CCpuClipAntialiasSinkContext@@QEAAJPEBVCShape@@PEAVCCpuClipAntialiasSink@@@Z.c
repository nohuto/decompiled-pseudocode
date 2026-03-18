/*
 * XREFs of ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800AB100
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAntialiasSinkContext@@0@Z @ 0x1800938B0 (--$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAnt.c)
 *     ??1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1800AAF50 (--1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?Create@CCpuClipAntialiasSink@@SAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180211580 (-Create@CCpuClipAntialiasSink@@SAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialia.c)
 *     ??$move_backward@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180252848 (--$move_backward@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_a.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180252904 (--$uninitialized_move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$chec.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z @ 0x180291DB0 (--0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  void **v20; // rbx
  void **i; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v27; // rdi
  void *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  void *v31; // rbx
  CCpuClipAntialiasSinkContext *v32; // rcx
  char *v33; // r9
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int128 v40; // [rsp+40h] [rbp-39h] BYREF
  __int64 v41; // [rsp+50h] [rbp-29h]
  __int128 v42; // [rsp+60h] [rbp-19h] BYREF
  signed __int64 v43; // [rsp+70h] [rbp-9h]
  _BYTE v44[16]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v45; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  struct CCpuClipAntialiasSink *v47; // [rsp+F0h] [rbp+77h] BYREF
  unsigned __int64 v48; // [rsp+F8h] [rbp+7Fh]

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
    v33 = (char *)this + 904;
    v47 = 0LL;
    v34 = 0x84BDA12F684BDA13uLL * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4);
    if ( v34 )
      v35 = *(_QWORD *)(*((_QWORD *)this + 3) - 432LL) + 16LL;
    else
      v35 = 0LL;
    v36 = CCpuClipAntialiasSink::Create(v34, v35, a2, v33);
    v37 = v36;
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
        (const char *)(unsigned int)v36,
        (int)&v47);
      wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v47);
      return v37;
    }
    a3 = (unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v47;
    v6 = 0x84BDA12F684BDA13uLL;
  }
  v9 = (struct CCpuClipAntialiasSink *)*((_QWORD *)this + 3);
  v10 = 1LL;
  v11 = *((_QWORD *)this + 2);
  v12 = 0x84BDA12F684BDA13uLL * (((__int64)v9 - v11) >> 4);
  if ( 0x84BDA12F684BDA13uLL * ((__int64)(*((_QWORD *)this + 4) - (_QWORD)v9) >> 4) )
  {
LABEL_5:
    *((_QWORD *)&v42 + 1) = 1LL;
    v13 = 0LL;
    v6 = 0x84BDA12F684BDA13uLL * (((__int64)v9 - v11) >> 4);
    v43 = 0LL;
    v14 = v6 - v12;
    v45 = 0LL;
    v15 = 16 * (((__int64)v9 - v11) >> 4);
    v48 = v6 - v12;
    v16 = v11 + v15 == 0;
    v17 = (void **)(v11 + v15);
    *(_QWORD *)&v42 = v17;
    if ( v16 )
      goto LABEL_13;
    v45 = 1LL;
    v18 = 0x84BDA12F684BDA13uLL * (((__int64)v9 - v11) >> 4) - v12;
    if ( v14 > 1 )
      v18 = 1LL;
    v40 = v42;
    v19 = 432 * v18;
    v41 = 1LL;
    v47 = (struct CCpuClipAntialiasSink *)((char *)v9 - v19);
    if ( v9 == (struct CCpuClipAntialiasSink *)((char *)v9 - v19) )
      goto LABEL_9;
    goto LABEL_36;
  }
  if ( v12 + 1 >= v12 )
  {
    v27 = detail::liberal_expansion_policy::expand(
            v8,
            0x84BDA12F684BDA13uLL * ((*((_QWORD *)this + 4) - v11) >> 4),
            v12 + 1);
    v28 = operator new[](saturated_mul(v27, 0x1B0uLL));
    v29 = *((_QWORD *)this + 3);
    v30 = *((_QWORD *)this + 2);
    *(_QWORD *)&v42 = v28;
    *((_QWORD *)&v42 + 1) = 0x84BDA12F684BDA13uLL * (((__int64)v9 - v11) >> 4);
    v31 = v28;
    v43 = 0LL;
    v40 = v42;
    v41 = 0LL;
    std::uninitialized_move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
      v44,
      v30,
      v29,
      &v40);
    detail::destruct_range<CCpuClipAntialiasSinkContext::SinkEntry>(*((void ***)this + 2), *((void ***)this + 3));
    v32 = (CCpuClipAntialiasSinkContext *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v31;
    if ( v32 == (CCpuClipAntialiasSinkContext *)((char *)this + 40) )
      v32 = 0LL;
    operator delete(v32);
    v11 = *((_QWORD *)this + 2);
    v10 = 1LL;
    v9 = (struct CCpuClipAntialiasSink *)(v11 + 432 * v12);
    *((_QWORD *)this + 3) = v9;
    *((_QWORD *)this + 4) = v11 + 432 * v27;
    goto LABEL_5;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_36:
  v38 = v41;
  v39 = v10;
  while ( 1 )
  {
    v9 = (struct CCpuClipAntialiasSink *)((char *)v9 - 432);
    if ( (_QWORD)v40 == v13 )
      goto LABEL_13;
    if ( !v39 )
      goto LABEL_13;
    v39 = v38 - 1;
    if ( (unsigned __int64)(v38 - 1) >= *((_QWORD *)&v40 + 1) )
      goto LABEL_13;
    CCpuClipAntialiasSinkContext::SinkEntry::SinkEntry(v40 + 432 * v39, v9);
    if ( v9 == v47 )
      break;
    v38 = v39;
    v13 = 0LL;
  }
  v14 = v48;
  v17 = (void **)v42;
LABEL_9:
  if ( v14 > 1 )
  {
    if ( !v6 || v11 && v6 >= 0 )
    {
      *(_QWORD *)&v42 = v11;
      *((_QWORD *)&v42 + 1) = v6;
      v43 = v6;
      std::move_backward<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
        v44,
        v11 + 432 * v12,
        v11 + 432 * v6 - 432,
        &v42);
      goto LABEL_10;
    }
LABEL_13:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_10:
  v20 = (void **)(v11 + 432 * (v12 + 1));
  if ( v17 < v20 )
    v20 = v17;
  for ( i = (void **)(v11 + 432 * v12); i != v20; i += 54 )
    CCpuClipAntialiasSinkContext::SinkEntry::~SinkEntry(i);
  *((_QWORD *)this + 3) += 432LL;
  v22 = 432 * v12;
  memset_0((void *)(v11 + 432 * v12 + 16), 0, 0x1A0uLL);
  v23 = v11 + 432 * v12 + 32;
  *(_QWORD *)(v22 + v11) = 0LL;
  *(_QWORD *)(v22 + v11 + 8) = v23;
  *(_QWORD *)(v22 + v11 + 16) = v23;
  *(_QWORD *)(v22 + v11 + 24) = v11 + v22 + 432;
  v24 = *((_QWORD *)this + 3);
  v25 = *(_QWORD *)(v24 - 432);
  *(_QWORD *)(v24 - 432) = a3;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  return 0LL;
}
