/*
 * XREFs of RaDriverCreateIrp @ 0x1401B4FA0
 * Callers:
 *     <none>
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x14002A9C0 (RaidHandleCreateCloseIrp.c)
 *     RaUnitCreateIrp @ 0x14002AF80 (RaUnitCreateIrp.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 */

__int64 __fastcall RaDriverCreateIrp(__int64 a1, __int64 a2)
{
  int *v4; // rcx
  int v5; // eax
  int v6; // ecx
  unsigned int Irp; // eax
  unsigned int v8; // esi

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xCu,
      (__int64)&WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids,
      a1,
      a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(a1 + 64);
  v5 = *v4;
  if ( *v4 == 1094997074 )
  {
    v6 = v4[22];
  }
  else
  {
    switch ( v5 )
    {
      case 1431193940:
        Irp = RaUnitCreateIrp((__int64)v4, a2);
        goto LABEL_6;
      case 1314275652:
        v6 = v4[21];
        break;
      case 1314278989:
        v6 = v4[24];
        break;
      default:
        v8 = -1073741823;
        goto LABEL_7;
    }
  }
  Irp = RaidHandleCreateCloseIrp(v6, a2);
LABEL_6:
  v8 = Irp;
LABEL_7:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xDu,
      (__int64)&WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids,
      a1,
      a2,
      v8);
  }
  return v8;
}
