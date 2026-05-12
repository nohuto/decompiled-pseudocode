/*
 * XREFs of RaDriverPowerIrp @ 0x140006C80
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitPowerIrp @ 0x14000606C (RaUnitPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x140006D90 (RaidAdapterPowerIrp.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     NvmeAdapterPowerIrp @ 0x1400D54F4 (NvmeAdapterPowerIrp.c)
 *     NvmeNamespacePowerIrp @ 0x140106734 (NvmeNamespacePowerIrp.c)
 */

__int64 __fastcall RaDriverPowerIrp(__int64 a1, __int64 a2)
{
  int *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 28LL, &WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(a1 + 64);
  v5 = *v4;
  if ( *v4 == 1094997074 )
  {
    v6 = RaidAdapterPowerIrp(v4, a2);
  }
  else
  {
    switch ( v5 )
    {
      case 1431193940:
        v6 = RaUnitPowerIrp((__int64)v4, a2);
        break;
      case 1314275652:
        v6 = NvmeAdapterPowerIrp(v4, a2);
        break;
      case 1314278989:
        v6 = NvmeNamespacePowerIrp(v4, a2);
        break;
      default:
        v7 = -1073741823;
        goto LABEL_6;
    }
  }
  v7 = v6;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 29LL, &WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids, a1, a2, v7);
  }
  return v7;
}
