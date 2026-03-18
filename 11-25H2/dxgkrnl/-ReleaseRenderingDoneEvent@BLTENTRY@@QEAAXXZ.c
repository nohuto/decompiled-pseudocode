/*
 * XREFs of ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x140305DB0
 * Callers:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x140185084 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140304A00 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030635C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall BLTENTRY::ReleaseRenderingDoneEvent(BLTENTRY *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+28h] [rbp-10h]

  v3 = *((_QWORD *)this + 3);
  if ( v3 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v6 = *((_DWORD *)this + 15);
    v5 = *(_DWORD *)(v3 + 260);
    McTemplateK0pqq_EtwWriteTransfer(
      (__int64)this,
      (__int64)&BltQueueDisplayOnlyWarpRenderComplete,
      a3,
      *(_QWORD *)(v3 + 248),
      v5,
      v6);
  }
  ObfDereferenceObject(*((PVOID *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
}
