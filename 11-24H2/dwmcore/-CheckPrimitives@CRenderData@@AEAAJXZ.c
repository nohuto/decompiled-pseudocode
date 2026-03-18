/*
 * XREFs of ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1801315F0
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x180131774 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180039A04 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x180130D30 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$_Emplace_reallocate@AEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAV23@@Z @ 0x18018D664 (--$_Emplace_reallocate@AEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@-$vector.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEBX0@Z @ 0x1801D4D7C (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEBX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEBX0@Z @ 0x1801D729C (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEBX0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRenderData::CheckPrimitives(CRenderData *this)
{
  unsigned int v1; // ebx
  struct _LIST_ENTRY *v3; // rax
  int i; // eax
  CVisual *v6; // rbx
  int VisualTree; // eax
  unsigned int v8; // ebx
  _QWORD v9[4]; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+28h] BYREF
  struct CVisualTree *v14; // [rsp+80h] [rbp+30h] BYREF
  void *v15; // [rsp+88h] [rbp+38h] BYREF

  v1 = 0;
  v10 = 0;
  v3 = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 72));
  memset(&v9[1], 0, 24);
  v12 = 0;
  v15 = 0LL;
  v13 = 0;
  v9[0] = v3;
  for ( i = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v9, &v12, (const void **)&v15, &v13);
        ;
        i = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v9, &v12, (const void **)&v15, &v13) )
  {
    if ( i )
    {
      *((_BYTE *)this + 297) = v1 <= 1;
      return 0LL;
    }
    if ( v12 <= 0x1B2 )
    {
      if ( v12 != 434 && v12 != 428 && v12 != 429 && v12 != 431 && v12 - 432 > 1 )
LABEL_22:
        ModuleFailFastForHRESULT(-2003303421, retaddr);
LABEL_8:
      ++v1;
      continue;
    }
    if ( v12 == 435 )
      goto LABEL_8;
    if ( v12 == 436 )
      break;
    if ( v12 - 437 > 1 )
      goto LABEL_22;
LABEL_9:
    ;
  }
  v14 = 0LL;
  v6 = *(CVisual **)(*((_QWORD *)this + 17) + 8LL * *((unsigned int *)v15 + 1));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v14);
  VisualTree = CVisual::GetVisualTree(v6, &v14);
  v8 = VisualTree;
  if ( VisualTree >= 0 )
  {
    if ( *((_QWORD *)this + 22) == *((_QWORD *)this + 23) )
    {
      std::vector<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> &>(
        (char *)this + 168,
        *((_QWORD *)this + 22),
        &v14);
    }
    else
    {
      wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
        *((_QWORD **)this + 22),
        (__int64)v14);
      *((_QWORD *)this + 22) += 8LL;
    }
    v1 = 2;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    (wil::details::in1diag3 *)retaddr,
    (void *)0x191,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\renderdata.cpp",
    (const char *)(unsigned int)VisualTree);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v8;
}
