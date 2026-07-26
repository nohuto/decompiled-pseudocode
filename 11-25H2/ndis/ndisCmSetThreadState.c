/*
 * XREFs of ndisCmSetThreadState @ 0x14004D090
 * Callers:
 *     ?ndisNsiSetAllThreadInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400CF2C0 (-ndisNsiSetAllThreadInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     NdisSetThreadObjectCompartmentScope @ 0x14016D7B0 (NdisSetThreadObjectCompartmentScope.c)
 *     NdisSetThreadObjectCompartmentId @ 0x140173530 (NdisSetThreadObjectCompartmentId.c)
 * Callees:
 *     ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x14004D290 (-ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x14004D330 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x14004D390 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ndisCmGetThreadState @ 0x14004D880 (ndisCmGetThreadState.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400D2368 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 */

__int64 __fastcall ndisCmSetThreadState(PETHREAD Thread, int *a2, _DWORD *a3)
{
  int StateObject; // ebx
  void *v4; // rbp
  char v7; // r12
  char v8; // r14
  int v11; // r13d
  PVOID Object; // [rsp+20h] [rbp-48h] BYREF

  StateObject = 0;
  v4 = 0LL;
  v7 = 0;
  v8 = 0;
  Object = 0LL;
  if ( a2 )
  {
    v11 = *a2;
    if ( *a2 )
    {
      ndisCmGetThreadState(Thread);
      v4 = ndisCmValidateCompartmentChange(0, v11);
      if ( !v4 )
      {
        StateObject = -1073741275;
        goto LABEL_23;
      }
      v8 = 1;
    }
  }
  if ( a3 )
  {
    if ( *a3 == -1 )
    {
      v8 = 1;
    }
    else if ( *a3 )
    {
      StateObject = -1073741811;
      goto LABEL_21;
    }
  }
  Object = PsGetThreadProperty(Thread, 0x6D43644EuLL, 1u);
  if ( Object )
  {
    if ( a2 )
    {
      *(_DWORD *)Object = *a2;
      ndisCmAssignCompartmentHandleToCmState((struct _NDIS_CM_STATE *)Object, v4);
    }
    if ( a3 )
      *((_DWORD *)Object + 1) = *a3;
    if ( !*(_DWORD *)Object && !*((_DWORD *)Object + 1) )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
      v7 = 1;
    }
    if ( !v7 )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( v8 )
  {
    StateObject = ndisCmCreateStateObject((struct _NDIS_CM_STATE **)&Object);
    if ( StateObject >= 0 )
    {
      if ( a2 )
      {
        *(_DWORD *)Object = *a2;
        ndisCmAssignCompartmentHandleToCmState((struct _NDIS_CM_STATE *)Object, v4);
      }
      if ( a3 )
        *((_DWORD *)Object + 1) = *a3;
LABEL_20:
      StateObject = PsSetThreadProperty(Thread, 1833133134LL, Object);
    }
  }
LABEL_21:
  if ( v4 )
    ndisIfDereferenceCompartmentForUser(v4);
LABEL_23:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)StateObject;
}
