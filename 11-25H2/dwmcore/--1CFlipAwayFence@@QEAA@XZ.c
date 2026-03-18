/*
 * XREFs of ??1CFlipAwayFence@@QEAA@XZ @ 0x1802C13CC
 * Callers:
 *     ??1CDDisplayFlipAwayFence@@QEAA@XZ @ 0x1802C7918 (--1CDDisplayFlipAwayFence@@QEAA@XZ.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802D24D8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@std@@@-$_.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802D2BF4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800FFFEC (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x18020BF1C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 */

void __fastcall CFlipAwayFence::~CFlipAwayFence(CFlipAwayFence *this)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer((__int64)this, &FlipAwayFenceDestroy, *(_QWORD *)this);
  if ( qword_180406BC0 == qword_180406BC8 )
  {
    std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
      &CFlipAwayFence::s_fenceIdsToDestroy,
      (_BYTE *)qword_180406BC0,
      this);
  }
  else
  {
    *(_QWORD *)qword_180406BC0 = *(_QWORD *)this;
    qword_180406BC0 += 8LL;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 1);
}
