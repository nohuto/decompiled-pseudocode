/*
 * XREFs of ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x14000B144
 * Callers:
 *     ?GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x14000597C (-GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x140010FF4 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z @ 0x140013ECC (-ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x14000ABA0 (-TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1400131C4 (-TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 */

__int64 __fastcall CSidebandDevice::GetNodesInPath(
        struct _KSFILTER_DESCRIPTOR *a1,
        const KSTOPOLOGY_CONNECTION *a2,
        unsigned int a3,
        struct _LIST_ENTRY *a4)
{
  unsigned int v5; // r12d
  int v6; // r15d
  int v8; // esi
  char v9; // bl
  ULONG i; // edi
  int v11; // eax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v13; // rdx
  struct _LIST_ENTRY *Blink; // rax
  void *v15; // r8

  v5 = a3;
  v6 = (int)a2;
  v8 = -1073741275;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  for ( i = 0; i < a1->ConnectionsCount; ++i )
  {
    a2 = &a1->Connections[i];
    if ( a2->ToNode == -1 && a2->ToNodePin == v6 )
    {
      v11 = CSidebandDevice::TraverseBackward(a1, a2, v5, a4);
    }
    else
    {
      if ( a2->FromNode != -1 || a2->FromNodePin != v6 )
        goto LABEL_19;
      v11 = CSidebandDevice::TraverseForward(a1, a2, v5, a4);
    }
    v8 = v11;
LABEL_19:
    if ( v8 >= 0 )
      goto LABEL_26;
  }
  while ( 1 )
  {
    Flink = a4->Flink;
    if ( a4->Flink == a4 )
      break;
    v13 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
      __fastfail(3u);
    Blink->Flink = v13;
    v13->Blink = Blink;
    ExFreePool(Flink);
  }
LABEL_26:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( (_BYTE)a2 || v9 )
  {
    v15 = &WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids;
    LOBYTE(v15) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v15,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v8;
}
