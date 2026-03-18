/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x1801841CC
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x180184180 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18003082C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CDataStreamWriter@@QEAA@XZ @ 0x180184258 (--1CDataStreamWriter@@QEAA@XZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x180184298 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1801843B0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CRenderData::~CRenderData(__int64 **this)
{
  __int64 *v2; // rcx

  *this = (__int64 *)&CRenderData::`vftable';
  CRenderData::DestroyRenderData((CRenderData *)this);
  v2 = this[21];
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v2,
      this[22]);
    std::_Deallocate<16,0>(this[21], ((char *)this[23] - (char *)this[21]) & 0xFFFFFFFFFFFFFFF8uLL);
    this[21] = 0LL;
    this[22] = 0LL;
    this[23] = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 17);
  CDataStreamWriter::~CDataStreamWriter((CDataStreamWriter *)(this + 9));
  CResource::~CResource((CResource *)this);
}
