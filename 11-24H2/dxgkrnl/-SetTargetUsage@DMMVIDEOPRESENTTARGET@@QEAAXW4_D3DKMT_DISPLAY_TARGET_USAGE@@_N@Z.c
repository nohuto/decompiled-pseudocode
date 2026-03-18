/*
 * XREFs of ?SetTargetUsage@DMMVIDEOPRESENTTARGET@@QEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x14008F19C
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x14025ABEC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x14025F6D4 (-ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::SetTargetUsage(__int64 a1, int a2, char a3)
{
  int v6; // r9d
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 92) != a2 )
  {
    DMMVIDEOPRESENTTARGET::ReleaseDisplayManagerObject((DMMVIDEOPRESENTTARGET *)a1);
    v6 = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
    *(_DWORD *)(a1 + 132) = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
    result = (unsigned int)(v6 + 1);
    `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId = v6 + 1;
  }
  *(_BYTE *)(a1 + 96) = a3;
  *(_DWORD *)(a1 + 92) = a2;
  return result;
}
