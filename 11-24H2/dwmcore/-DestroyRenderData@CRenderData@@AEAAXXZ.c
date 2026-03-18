/*
 * XREFs of ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18013260C
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x180131774 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 *     ??1CRenderData@@MEAA@XZ @ 0x1801319FC (--1CRenderData@@MEAA@XZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x1801326B0 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CRenderData::DestroyRenderData(CRenderData *this)
{
  unsigned int v1; // eax
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 *v7; // rdx

  v1 = *((_DWORD *)this + 40);
  if ( v1 )
  {
    v3 = 0LL;
    v4 = v1;
    do
    {
      v5 = *((_QWORD *)this + 17);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v3 + v5));
      *(_QWORD *)(v3 + v5) = 0LL;
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  *((_DWORD *)this + 40) = 0;
  CDataStreamWriter::Reset((CRenderData *)((char *)this + 72));
  *((_BYTE *)this + 297) = 1;
  v6 = (__int64 *)*((_QWORD *)this + 21);
  v7 = (__int64 *)*((_QWORD *)this + 22);
  if ( v6 != v7 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v6,
      v7);
    *((_QWORD *)this + 22) = *((_QWORD *)this + 21);
  }
}
