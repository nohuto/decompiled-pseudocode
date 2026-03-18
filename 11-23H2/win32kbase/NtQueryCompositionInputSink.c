/*
 * XREFs of NtQueryCompositionInputSink @ 0x1C00A7190
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0099700 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C00A7360 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSink(void *a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  int v5; // esi
  __int64 v6; // r8
  int InputQueueTypes; // ebx
  int *v8; // rax
  ULONG64 v9; // rax
  ULONG64 v10; // rax
  __int128 v11; // xmm0
  __int128 v13; // [rsp+28h] [rbp-40h]
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  v3 = a2;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v5 = 0;
  LODWORD(Object) = 0;
  InputQueueTypes = 0;
  if ( !UserIsCurrentProcessDwm((__int64)a1, a2, a3) )
    InputQueueTypes = -1073741790;
  if ( InputQueueTypes < 0 )
    goto LABEL_28;
  v8 = (int *)v3;
  if ( v3 >= MmUserProbeAddress )
    v8 = (int *)MmUserProbeAddress;
  v5 = *v8;
  LODWORD(Object) = v5;
  if ( v5 == 20 )
  {
    v10 = v3;
    if ( v3 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    v13 = *(_OWORD *)v10;
    v14 = *(_OWORD *)v10;
    v15 = *(unsigned int *)(v10 + 16);
  }
  else if ( v5 == 24 )
  {
    v9 = v3;
    if ( v3 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    v13 = *(_OWORD *)v9;
    v14 = *(_OWORD *)v9;
    v15 = *(_QWORD *)(v9 + 16);
  }
  else
  {
    InputQueueTypes = -1073741811;
  }
  if ( InputQueueTypes < 0
    || (Object = 0LL,
        LOBYTE(v6) = 1,
        InputQueueTypes = CompositionInputObject::ResolveHandle(a1, 1LL, v6, (struct CompositionInputObject **)&Object),
        InputQueueTypes < 0) )
  {
LABEL_28:
    v11 = v13;
  }
  else
  {
    InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(
                        (CompositionInputObject *)Object,
                        (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v14);
    ObfDereferenceObject(Object);
    v11 = v14;
  }
  if ( InputQueueTypes >= 0 )
  {
    if ( v5 == 20 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = v11;
      *(_DWORD *)(v3 + 16) = v15;
    }
    else if ( v5 == 24 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = v11;
      *(_QWORD *)(v3 + 16) = v15;
    }
  }
  return (unsigned int)InputQueueTypes;
}
