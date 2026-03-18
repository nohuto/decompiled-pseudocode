/*
 * XREFs of ?DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEAEAU_DISPLAYCONFIG_DISPLAYMUX_MUX_INFO@@@Z @ 0x1400605C8
 * Callers:
 *     ?DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ @ 0x140060578 (-DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ.c)
 *     ?LogMuxPairingStateTelemetry@DISPLAY_MUX_PAIRING@@AEBAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J_N@Z @ 0x14008575C (-LogMuxPairingStateTelemetry@DISPLAY_MUX_PAIRING@@AEBAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS.c)
 * Callees:
 *     <none>
 */

char __fastcall DISPLAY_MUX_MGR::DoesSystemSupportStaticMdmNow(
        DISPLAY_MUX_MGR *this,
        struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *a2)
{
  char v2; // bl
  unsigned int v4; // r8d

  v2 = 0;
  v4 = 4;
  if ( *((_DWORD *)this + 1) <= 4u )
    v4 = *((_DWORD *)this + 1);
  if ( v4 >= *(_DWORD *)a2 )
    v4 = *(_DWORD *)a2;
  if ( v4 >= *((_DWORD *)a2 + 89) )
    v4 = *((_DWORD *)a2 + 89);
  if ( v4 >= *((_DWORD *)a2 + 178) )
    v4 = *((_DWORD *)a2 + 178);
  if ( v4 == 4 )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2996;
  }
  else
  {
    if ( v4 == 1 || !*(_BYTE *)this )
    {
      WdLogSingleEntry1(4LL, (int)v4);
      WdLogGlobalForLineNumber = 3006;
      return v2;
    }
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 3001;
  }
  v2 = 1;
  if ( *((_DWORD *)a2 + 180) != 2 )
  {
    WdLogSingleEntry1(4LL, *((int *)a2 + 180));
    v2 = 0;
    WdLogGlobalForLineNumber = 3014;
  }
  return v2;
}
