/*
 * XREFs of RaDriverDeviceControlIrp @ 0x14002B290
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     RaidDriverDeviceControlIrp @ 0x14006CC64 (RaidDriverDeviceControlIrp.c)
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 */

__int64 __fastcall RaDriverDeviceControlIrp(__int64 a1, __int64 a2)
{
  int *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // esi

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(a1 + 64);
  v5 = *v4;
  if ( *v4 == 1094997074 )
  {
    v6 = RaidAdapterDeviceControlIrp(v4, a2);
  }
  else
  {
    switch ( v5 )
    {
      case 1431193940:
        v6 = RaUnitDeviceControlIrp(v4, a2);
        break;
      case 1146246738:
        v6 = RaidDriverDeviceControlIrp(v4, a2);
        break;
      case 1314275652:
        v6 = NvmeAdapterDeviceControlIrp(v4, a2);
        break;
      case 1314278989:
        v6 = NvmeNamespaceDeviceControlIrp(v4, (PIRP)a2);
        break;
      default:
        v7 = -1073741823;
        goto LABEL_6;
    }
  }
  v7 = v6;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 17LL, &WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids, a1, a2, v7);
  }
  return v7;
}
