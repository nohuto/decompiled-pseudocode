/*
 * XREFs of ndisCmSetThreadState @ 0x140029890
 * Callers:
 *     ?ndisNsiSetAllThreadInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400C8150 (-ndisNsiSetAllThreadInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     NdisSetThreadObjectCompartmentScope @ 0x140162110 (NdisSetThreadObjectCompartmentScope.c)
 *     NdisSetThreadObjectCompartmentId @ 0x140166F40 (NdisSetThreadObjectCompartmentId.c)
 * Callees:
 *     ndisCmGetThreadState @ 0x140029430 (ndisCmGetThreadState.c)
 *     ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x140029A90 (-ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x140029B30 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x140029B90 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400CAF20 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 */

__int64 __fastcall ndisCmSetThreadState(PETHREAD Thread, int *a2, _DWORD *a3)
{
  int StateObject; // ebx
  void *v4; // rbp
  char v7; // r12
  char v8; // r14
  int v11; // r13d
  PVOID Object; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

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
      v13 = 0;
      ndisCmGetThreadState(Thread, &v13, &v14);
      v4 = ndisCmValidateCompartmentChange(v13, v11);
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
