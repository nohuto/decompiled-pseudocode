/*
 * XREFs of ?Create@CCpuClipAntialiasSink@@SAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180211580
 * Callers:
 *     ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800AB100 (-PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18016CE28 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ??0CCpuClipAntialiasSink@@AEAA@XZ @ 0x180211684 (--0CCpuClipAntialiasSink@@AEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSink::Create(
        unsigned __int16 a1,
        __int64 a2,
        const struct CShape *a3,
        CMILMatrix *a4,
        CMILRefCountImpl **a5)
{
  CCpuClipAntialiasSink *v9; // rax
  CCpuClipAntialiasSink *v10; // rax
  CMILRefCountImpl *v11; // rbx
  __int64 (__fastcall *v12)(CMILRefCountImpl *); // rax
  int v13; // eax
  unsigned int v14; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = (CCpuClipAntialiasSink *)operator new(0x40uLL);
  if ( v9 )
  {
    v10 = CCpuClipAntialiasSink::CCpuClipAntialiasSink(v9);
    v11 = v10;
    if ( v10 )
    {
      v12 = **(__int64 (__fastcall ***)(CMILRefCountImpl *))v10;
      if ( v12 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v11);
      else
        v12(v11);
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)a3 + 16LL))(a3)
    || (v13 = CCpuClipAntialiasSink::Initialize((__int64)v11, a1, a2, a3, a4), v14 = v13, v13 >= 0) )
  {
    *a5 = v11;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassink.cpp",
      (const char *)(unsigned int)v13);
    if ( v11 )
      (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v11 + 8LL))(v11);
    return v14;
  }
}
