/*
 * XREFs of ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1401FD624
 * Callers:
 *     ?ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z @ 0x1401FD228 (-ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1401FE240 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1401FE590 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1401FEAC0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pqqqggggtqqqggggtqgggg_EtwWriteTransfer @ 0x1400794BC (McTemplateK0pqqqggggtqqqggggtqgggg_EtwWriteTransfer.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::ReportStats(DXGTRACKEDWORKLOAD *this)
{
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 && (qword_14015B4C0 & 0x10000000) != 0 )
    McTemplateK0pqqqggggtqqqggggtqgggg_EtwWriteTransfer(
      (__int64)this,
      *((unsigned __int8 *)this + 296),
      *((unsigned __int8 *)this + 184),
      (__int64)this,
      *((_DWORD *)this + 34),
      *((_DWORD *)this + 35),
      *((_DWORD *)this + 36),
      *(_OWORD *)((char *)this + 152),
      *((_QWORD *)this + 20),
      *(_OWORD *)((char *)this + 168),
      *((_QWORD *)this + 22),
      *((_BYTE *)this + 184),
      *((_DWORD *)this + 62),
      *((_DWORD *)this + 63),
      *((_DWORD *)this + 64),
      *(_OWORD *)((char *)this + 264),
      *((_QWORD *)this + 34),
      *(_OWORD *)((char *)this + 280),
      *((_QWORD *)this + 36),
      *((_BYTE *)this + 296),
      *((_DWORD *)this + 48),
      *(_OWORD *)((char *)this + 200),
      *((_QWORD *)this + 26),
      *(_OWORD *)((char *)this + 216),
      *((_QWORD *)this + 28));
  DXGGLOBAL::GetGlobal();
}
