/*
 * XREFs of ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x140013BF4
 * Callers:
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x14000B154 (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z @ 0x1400077F8 (-AddConnectionToTravelStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@PEBUKSTOPOLOGY_CONNECTION@@@Z.c)
 *     ?AddNodeListToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@@Z @ 0x14000AE88 (-AddNodeListToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?AddNodeToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@K@Z @ 0x14000AEF4 (-AddNodeToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@K@Z.c)
 *     ?DeleteTopListFromNodeListStack@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@@Z @ 0x14000AF74 (-DeleteTopListFromNodeListStack@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@@Z.c)
 *     _scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit @ 0x14000B868 (_scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____--_2_--scope_exit--_scope_exit.c)
 *     _scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit @ 0x14000F2C4 (_scope_exit__lambda_a16b11757b8cb69a258309176305b33d____--_2_--scope_exit--_scope_exit.c)
 *     _scope_exit__lambda_41624085b4e50989a736788818b50e03____::_2_::scope_exit::_scope_exit @ 0x14000F318 (_scope_exit__lambda_41624085b4e50989a736788818b50e03____--_2_--scope_exit--_scope_exit.c)
 *     ?MoveNodesFromNodesListStackToList@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@0@Z @ 0x1400134A0 (-MoveNodesFromNodesListStackToList@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@0@Z.c)
 */

__int64 __fastcall CSidebandDevice::TraverseBackward(
        struct _KSFILTER_DESCRIPTOR *a1,
        const struct KSTOPOLOGY_CONNECTION *a2,
        int a3,
        struct _LIST_ENTRY *a4)
{
  struct _KSFILTER_DESCRIPTOR *v4; // rsi
  unsigned int v5; // r12d
  int v6; // r14d
  char v7; // bl
  int v8; // edx
  int v9; // edi
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v15; // rcx
  int v16; // edx
  int v17; // edx
  int v18; // r8d
  const KSTOPOLOGY_CONNECTION *Connections; // r13
  unsigned int v20; // r14d
  ULONG ConnectionsCount; // r15d
  ULONG i; // esi
  const struct KSTOPOLOGY_CONNECTION *v23; // rdx
  unsigned int j; // esi
  PDEVICE_OBJECT v25; // r10
  struct _LIST_ENTRY *v26; // [rsp+58h] [rbp-39h] BYREF
  struct _LIST_ENTRY v27; // [rsp+60h] [rbp-31h] BYREF
  struct _LIST_ENTRY v28; // [rsp+70h] [rbp-21h] BYREF
  struct _LIST_ENTRY **v29; // [rsp+80h] [rbp-11h] BYREF
  char v30; // [rsp+88h] [rbp-9h]
  struct _LIST_ENTRY *v31; // [rsp+90h] [rbp-1h] BYREF
  char v32; // [rsp+98h] [rbp+7h]
  struct _LIST_ENTRY *v33; // [rsp+A0h] [rbp+Fh] BYREF
  char v34; // [rsp+A8h] [rbp+17h]

  v4 = a1;
  v27.Blink = &v27;
  v5 = 0;
  v27.Flink = &v27;
  v6 = a3;
  v31 = &v27;
  v7 = 1;
  v32 = 1;
  v9 = CSidebandDevice::AddConnectionToTravelStack(&v27, a2);
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = v7;
      LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v8, v10, WPP_GLOBAL_Control->DeviceExtension);
    }
    goto LABEL_18;
  }
  v34 = 1;
  v28.Blink = &v28;
  v28.Flink = &v28;
  v33 = &v28;
  v9 = CSidebandDevice::AddNodeListToNodeListStack(&v28);
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = v7;
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v11, v12, WPP_GLOBAL_Control->DeviceExtension);
    }
    goto LABEL_17;
  }
  while ( 1 )
  {
LABEL_19:
    Flink = v27.Flink;
    if ( v27.Flink == &v27 || v5 >= 0x3E8 )
      goto LABEL_17;
    ++v5;
    if ( v27.Flink->Blink != &v27 || (v15 = v27.Flink->Flink, v27.Flink->Flink->Blink != v27.Flink) )
      __fastfail(3u);
    v27.Flink = v27.Flink->Flink;
    v15->Blink = &v27;
    v26 = Flink;
    v16 = (int)Flink[1].Flink;
    v29 = &v26;
    v30 = 1;
    if ( v16 != -1 )
      break;
    if ( HIDWORD(Flink[1].Flink) == v6 )
    {
      CSidebandDevice::MoveNodesFromNodesListStackToList(&v28, a4);
      v9 = 0;
      goto LABEL_40;
    }
    CSidebandDevice::DeleteTopListFromNodeListStack(&v28);
    v9 = -1073741275;
    scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v29);
  }
  v9 = CSidebandDevice::AddNodeToNodeListStack(&v28, v16);
  if ( v9 < 0 )
  {
    v25 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      goto LABEL_47;
    goto LABEL_40;
  }
  Connections = v4->Connections;
  v20 = 0;
  ConnectionsCount = v4->ConnectionsCount;
  for ( i = 0; ; ++i )
  {
    if ( i >= ConnectionsCount )
    {
      if ( v20 > 1 )
      {
        for ( j = 0; j < v20; ++j )
        {
          v9 = CSidebandDevice::AddNodeListToNodeListStack(&v28);
          if ( v9 < 0 )
          {
            v25 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
            {
              v7 = 0;
            }
            LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              goto LABEL_40;
            goto LABEL_47;
          }
        }
      }
      scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v29);
      v4 = a1;
      v6 = a3;
      goto LABEL_19;
    }
    v23 = &Connections[i];
    if ( v23->ToNode == LODWORD(v26[1].Flink) )
      break;
LABEL_32:
    ;
  }
  v9 = CSidebandDevice::AddConnectionToTravelStack(&v27, v23);
  if ( v9 >= 0 )
  {
    ++v20;
    goto LABEL_32;
  }
  v25 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v7 = 0;
  }
  LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_40;
LABEL_47:
  LOBYTE(v17) = v7;
  WPP_RECORDER_AND_TRACE_SF_d(v25->AttachedDevice, v17, v18, v25->DeviceExtension);
LABEL_40:
  scope_exit__lambda_e1a03c7d470e441fd7c9b607c19800fd____::_2_::scope_exit::_scope_exit((__int64)&v29);
LABEL_17:
  scope_exit__lambda_41624085b4e50989a736788818b50e03____::_2_::scope_exit::_scope_exit((__int64)&v33);
LABEL_18:
  scope_exit__lambda_a16b11757b8cb69a258309176305b33d____::_2_::scope_exit::_scope_exit((__int64)&v31);
  return (unsigned int)v9;
}
