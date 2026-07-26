/*
 * XREFs of ?ndisAddPortToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_BLOCK@@@Z @ 0x1400AFDE4
 * Callers:
 *     NdisMAllocatePort @ 0x140080BE0 (NdisMAllocatePort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAddPortToList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PORT_BLOCK *a2)
{
  _LIST_ENTRY *p_PortList; // r11
  _LIST_ENTRY *Flink; // rax
  unsigned int v5; // r8d
  unsigned int Blink_high; // ecx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v8; // rax

  p_PortList = &a1->PortList;
  Flink = a1->PortList.Flink;
  v5 = 0;
  while ( Flink != p_PortList )
  {
    Blink_high = HIDWORD(Flink[1].Blink);
    if ( Blink_high == a2->PortCharacteristics.PortNumber )
      return (unsigned int)-1073741270;
    if ( Blink_high > a2->PortCharacteristics.PortNumber )
      break;
    Flink = Flink->Flink;
  }
  Blink = Flink->Blink;
  v8 = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    __fastfail(3u);
  a2->Link.Flink = v8;
  a2->Link.Blink = Blink;
  v8->Blink = &a2->Link;
  Blink->Flink = &a2->Link;
  ++a1->NumberOfPorts;
  return v5;
}
