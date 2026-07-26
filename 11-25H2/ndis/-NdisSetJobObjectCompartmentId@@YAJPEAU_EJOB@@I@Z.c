/*
 * XREFs of ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x140152150
 * Callers:
 *     ?ndisNsiSetAllJobInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400CF210 (-ndisNsiSetAllJobInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x14004D290 (-ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x14004D330 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x14004D390 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     NdisGetJobObjectCompartmentId @ 0x14004D670 (NdisGetJobObjectCompartmentId.c)
 *     ndisIfSetCompartmentJobObject @ 0x1400CF0B4 (ndisIfSetCompartmentJobObject.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1400D45C4 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 */

__int64 __fastcall NdisSetJobObjectCompartmentId(struct _EJOB *a1, unsigned int a2)
{
  _QWORD *JobProperty; // rdi
  _DWORD *v3; // rsi
  unsigned int JobObjectCompartmentId; // eax
  int StateObject; // ebx
  __int64 v8; // rcx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  JobProperty = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    JobObjectCompartmentId = NdisGetJobObjectCompartmentId((__int64)a1);
    v3 = ndisCmValidateCompartmentChange(JobObjectCompartmentId, a2);
    if ( !v3 )
    {
      StateObject = -1073741275;
      goto LABEL_17;
    }
    StateObject = ndisCmCreateStateObject((struct _NDIS_CM_STATE **)&Object);
    if ( StateObject < 0 )
      goto LABEL_16;
    *(_DWORD *)Object = a2;
    ndisCmAssignCompartmentHandleToCmState((struct _NDIS_CM_STATE *)Object, v3);
  }
  JobProperty = (_QWORD *)PsGetJobProperty(a1, 1833133134LL);
  do
  {
    StateObject = PsSetJobProperty(a1, 1833133134LL, Object);
    if ( StateObject != -1073741771 )
      break;
    StateObject = PsSetJobProperty(a1, 1833133134LL, 0LL);
  }
  while ( StateObject == -1073741771 );
  if ( StateObject < 0 )
  {
    if ( !v3 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( JobProperty )
  {
    v8 = JobProperty[1];
    if ( v8 )
      StateObject = ndisIfSetCompartmentJobObject(v8, a1, 1);
  }
  if ( v3 )
  {
    StateObject = ndisIfSetCompartmentJobObject((__int64)v3, a1, 0);
LABEL_16:
    ndisCmDereferenceCompartment(v3);
  }
LABEL_17:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( JobProperty )
    ObfDereferenceObject(JobProperty);
  return (unsigned int)StateObject;
}
