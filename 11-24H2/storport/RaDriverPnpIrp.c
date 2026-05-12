/*
 * XREFs of RaDriverPnpIrp @ 0x140015600
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPnpIrp @ 0x140015724 (RaidAdapterPnpIrp.c)
 *     RaUnitPnpIrp @ 0x140015D70 (RaUnitPnpIrp.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     NvmeAdapterPnpIrp @ 0x1400D4884 (NvmeAdapterPnpIrp.c)
 *     NvmeNamespacePnpIrp @ 0x140105C68 (NvmeNamespacePnpIrp.c)
 */

__int64 __fastcall RaDriverPnpIrp(__int64 a1, __int64 a2)
{
  int *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      26LL,
      &WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids,
      a1,
      a2,
      *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL));
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(a1 + 64);
  v5 = *v4;
  if ( *v4 == 1094997074 )
  {
    v6 = RaidAdapterPnpIrp(v4, a2);
  }
  else
  {
    switch ( v5 )
    {
      case 1431193940:
        v6 = RaUnitPnpIrp(v4, a2);
        break;
      case 1314275652:
        v6 = NvmeAdapterPnpIrp(v4, (PIRP)a2);
        break;
      case 1314278989:
        v6 = NvmeNamespacePnpIrp(v4, (PIRP)a2);
        break;
      default:
        v7 = -1073741823;
        goto LABEL_6;
    }
  }
  v7 = v6;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 27LL, &WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids, a1, a2, v7);
  }
  return v7;
}
