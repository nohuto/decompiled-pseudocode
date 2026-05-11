/*
 * XREFs of ?TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x14000ABA0
 * Callers:
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x14000B144 (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x140007498 (-AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z.c)
 *     ?AddNodeListToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@@Z @ 0x14000AFD8 (-AddNodeListToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?AddNodeToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@K@Z @ 0x14000B044 (-AddNodeToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@K@Z.c)
 *     ?DeleteTopListFromNodeListStack@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@@Z @ 0x14000B0C4 (-DeleteTopListFromNodeListStack@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@@Z.c)
 *     _scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit @ 0x14000B858 (_scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____--_2_--scope_exit--_scope_exit.c)
 *     ?MoveNodesFromNodesListStackToList@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@0@Z @ 0x140012A6C (-MoveNodesFromNodesListStackToList@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@0@Z.c)
 */

__int64 __fastcall CSidebandDevice::TraverseForward(
        struct _KSFILTER_DESCRIPTOR *a1,
        const struct KSTOPOLOGY_CONNECTION *a2,
        int a3,
        struct _LIST_ENTRY *a4)
{
  struct _KSFILTER_DESCRIPTOR *v4; // rsi
  int v5; // r14d
  unsigned int v6; // r12d
  int v7; // edx
  int v8; // edi
  int v9; // r8d
  PDEVICE_OBJECT v10; // r10
  bool v11; // bl
  char v12; // bl
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v14; // rax
  unsigned int Blink; // edx
  int v16; // edx
  int v17; // r8d
  const KSTOPOLOGY_CONNECTION *Connections; // r13
  unsigned int v19; // r14d
  ULONG ConnectionsCount; // r15d
  ULONG i; // esi
  const struct KSTOPOLOGY_CONNECTION *v22; // rdx
  unsigned int j; // esi
  PDEVICE_OBJECT v24; // r10
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *v26; // rax
  PVOID P; // [rsp+58h] [rbp-19h] BYREF
  struct _LIST_ENTRY v29; // [rsp+60h] [rbp-11h] BYREF
  struct _LIST_ENTRY v30; // [rsp+70h] [rbp-1h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp+Fh] BYREF
  char v32; // [rsp+88h] [rbp+17h]

  v4 = a1;
  v29.Blink = &v29;
  v5 = a3;
  v29.Flink = &v29;
  v6 = 0;
  v30.Blink = &v30;
  v30.Flink = &v30;
  v8 = CSidebandDevice::AddConnectionToTravelStack(&v29, a2);
  if ( v8 < 0 )
  {
    v10 = WPP_GLOBAL_Control;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_63;
    goto LABEL_9;
  }
  v8 = CSidebandDevice::AddNodeListToNodeListStack(&v30);
  if ( v8 >= 0 )
  {
    P = 0LL;
    v12 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        Flink = v29.Flink;
        if ( v29.Flink == &v29 || v6 >= 0x3E8 )
          goto LABEL_63;
        ++v6;
        if ( v29.Flink->Blink != &v29 || (v14 = v29.Flink->Flink, v29.Flink->Flink->Blink != v29.Flink) )
LABEL_67:
          __fastfail(3u);
        v29.Flink = v29.Flink->Flink;
        v14->Blink = &v29;
        P = Flink;
        Blink = (unsigned int)Flink[1].Blink;
        p_P = &P;
        v32 = 1;
        if ( Blink != -1 )
          break;
        if ( HIDWORD(Flink[1].Blink) == v5 )
        {
          CSidebandDevice::MoveNodesFromNodesListStackToList(&v30, a4);
          v8 = 0;
          goto LABEL_62;
        }
        CSidebandDevice::DeleteTopListFromNodeListStack(&v30);
        v8 = -1073741275;
        scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit(&p_P);
      }
      v8 = CSidebandDevice::AddNodeToNodeListStack(&v30, Blink);
      if ( v8 < 0 )
        break;
      Connections = v4->Connections;
      v19 = 0;
      ConnectionsCount = v4->ConnectionsCount;
      for ( i = 0; i < ConnectionsCount; ++i )
      {
        v22 = &Connections[i];
        if ( v22->FromNode == *((_DWORD *)P + 6) )
        {
          v8 = CSidebandDevice::AddConnectionToTravelStack(&v29, v22);
          if ( v8 < 0 )
          {
            v24 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
            {
              v12 = 0;
            }
            LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              goto LABEL_61;
LABEL_62:
            scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit(&p_P);
            goto LABEL_63;
          }
          ++v19;
        }
      }
      if ( v19 > 1 )
      {
        for ( j = 0; ; ++j )
        {
          if ( j >= v19 )
            goto LABEL_39;
          v8 = CSidebandDevice::AddNodeListToNodeListStack(&v30);
          if ( v8 < 0 )
            break;
        }
        v24 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v12 = 0;
        }
        LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v12 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_62;
LABEL_61:
        LOBYTE(v16) = v12;
        WPP_RECORDER_AND_TRACE_SF_d(v24->AttachedDevice, v16, v17, v24->DeviceExtension);
        goto LABEL_62;
      }
LABEL_39:
      ExFreePool(P);
      v4 = a1;
      v5 = a3;
    }
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v12 = 0;
    }
    LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v12 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_62;
    goto LABEL_61;
  }
  v10 = WPP_GLOBAL_Control;
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
LABEL_9:
    LOBYTE(v7) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(v10->AttachedDevice, v7, v9, v10->DeviceExtension);
  }
LABEL_63:
  while ( 1 )
  {
    v25 = v29.Flink;
    if ( v29.Flink == &v29 )
      break;
    if ( v29.Flink->Blink != &v29 )
      goto LABEL_67;
    v26 = v29.Flink->Flink;
    if ( v29.Flink->Flink->Blink != v29.Flink )
      goto LABEL_67;
    v29.Flink = v29.Flink->Flink;
    v26->Blink = &v29;
    ExFreePool(v25);
  }
  while ( v30.Flink != &v30 )
    CSidebandDevice::DeleteTopListFromNodeListStack(&v30);
  return (unsigned int)v8;
}
