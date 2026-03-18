/*
 * XREFs of ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1403E3F70
 * Callers:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402822D0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1402F9998 (-Cleanup@BLTENTRY@@QEAAXE@Z.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140430240 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
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
