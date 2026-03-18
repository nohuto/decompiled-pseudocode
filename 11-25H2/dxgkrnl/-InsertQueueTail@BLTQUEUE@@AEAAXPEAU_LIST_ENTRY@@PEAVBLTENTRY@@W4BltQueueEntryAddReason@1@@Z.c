/*
 * XREFs of ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403074A4
 * Callers:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x140185084 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x14027BECC (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030635C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     McTemplateK0xqdtqi_EtwWriteTransfer @ 0x140060220 (McTemplateK0xqdtqi_EtwWriteTransfer.c)
 */

LONG __fastcall BLTQUEUE::InsertQueueTail(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KMUTANT *v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]

  v3 = (struct _KMUTANT *)(a1 + 160);
  KeWaitForSingleObject((PVOID)(a1 + 160), Executive, 0, 0, 0LL);
  if ( a2 == a1 + 216 && a3 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v14 = *(_DWORD *)(a3 + 60);
    LODWORD(v13) = *(_DWORD *)(a1 + 260);
    McTemplateK0xqdtqi_EtwWriteTransfer(v8, v7, v9, *(_QWORD *)(a1 + 248), v13, v14);
  }
  v10 = *(_QWORD **)(a2 + 8);
  v11 = (_QWORD *)(a3 + 8);
  if ( *v10 != a2 )
    __fastfail(3u);
  *(_QWORD *)(a3 + 16) = v10;
  *v11 = a2;
  *v10 = v11;
  *(_QWORD *)(a2 + 8) = v11;
  return KeReleaseMutex(v3, 0);
}
