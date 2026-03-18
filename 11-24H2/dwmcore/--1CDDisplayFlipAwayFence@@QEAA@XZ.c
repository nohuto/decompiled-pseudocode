/*
 * XREFs of ??1CDDisplayFlipAwayFence@@QEAA@XZ @ 0x1802BE588
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802BDE9C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@s.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802BE558 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIVCDDisplayFlipAwayFence@@@st.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDDisplayFlipAwayFence::~CDDisplayFlipAwayFence(CDDisplayFlipAwayFence *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  CFlipAwayFence::~CFlipAwayFence(this);
}
