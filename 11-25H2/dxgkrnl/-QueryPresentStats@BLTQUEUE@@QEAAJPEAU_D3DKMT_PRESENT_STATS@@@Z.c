/*
 * XREFs of ?QueryPresentStats@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x14027BA3C
 * Callers:
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x140184F98 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 * Callees:
 *     McTemplateK0qxqddditiii_EtwWriteTransfer @ 0x1400921C8 (McTemplateK0qxqddditiii_EtwWriteTransfer.c)
 */

__int64 __fastcall BLTQUEUE::QueryPresentStats(BLTQUEUE *this, struct _D3DKMT_PRESENT_STATS *a2)
{
  struct _KMUTANT *v2; // rbx
  __int64 v5; // r8
  bool v6; // zf

  v2 = (struct _KMUTANT *)((char *)this + 264);
  KeWaitForSingleObject((char *)this + 264, Executive, 0, 0, 0LL);
  v6 = bTracingEnabled == 0;
  *a2 = *(struct _D3DKMT_PRESENT_STATS *)((_BYTE *)this + 10);
  if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qxqddditiii_EtwWriteTransfer(
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 45),
      v5,
      3,
      *((_QWORD *)this + 31),
      *((_DWORD *)this + 65),
      *((_DWORD *)this + 80),
      *((_DWORD *)this + 81),
      *((_DWORD *)this + 82),
      *((_QWORD *)this + 42),
      3,
      *((_QWORD *)this + 45),
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 46) - *((_QWORD *)this + 45));
  KeReleaseMutex(v2, 0);
  return 0LL;
}
