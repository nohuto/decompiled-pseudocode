/*
 * XREFs of ?EmitBindData@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140237E70
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::EmitBindData(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 60;
    *(_OWORD *)(v3 + 4) = 0LL;
    *(_OWORD *)(v3 + 20) = 0LL;
    *(_OWORD *)(v3 + 36) = 0LL;
    *(_QWORD *)(v3 + 52) = 0LL;
    *((_DWORD *)v3 + 1) = 383;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v3 + 12) = *((_QWORD *)this + 25);
    *(_OWORD *)(v3 + 20) = *(_OWORD *)((char *)this + 168);
    v3[36] = *((_BYTE *)this + 212);
    *((_DWORD *)v3 + 10) = *((_DWORD *)this + 52);
    *(_OWORD *)(v3 + 44) = *(_OWORD *)((char *)this + 184);
    *((_DWORD *)this + 4) &= 0xFFF9FFFF;
    return 1;
  }
  return 0;
}
