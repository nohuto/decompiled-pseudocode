/*
 * XREFs of ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x140029B90
 * Callers:
 *     ndisCmSetThreadState @ 0x140029890 (ndisCmSetThreadState.c)
 *     NdisSetSessionCompartmentId @ 0x1400C8450 (NdisSetSessionCompartmentId.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x140147490 (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     NdisGetProcessObjectCompartmentId @ 0x140029CC0 (NdisGetProcessObjectCompartmentId.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x140029D10 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400CAF20 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z @ 0x1400CB208 (-ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void *__fastcall ndisCmValidateCompartmentChange(unsigned int a1, unsigned int a2)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessObjectCompartmentId; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  void *v9; // rbx
  __int64 v10; // rax
  void *v11; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v12; // [rsp+28h] [rbp-30h] BYREF
  struct _GUID v13; // [rsp+38h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ProcessObjectCompartmentId = NdisGetProcessObjectCompartmentId(CurrentProcess);
  v6 = ProcessObjectCompartmentId;
  if ( ProcessObjectCompartmentId != a1 && ProcessObjectCompartmentId != 1 )
  {
    if ( (int)ndisIfGetCompartmentNamespaceGuid(ProcessObjectCompartmentId, &v12) < 0
      || (int)ndisIfGetCompartmentNamespaceGuid(a1, &v13) < 0 )
    {
      return 0LL;
    }
    v7 = *(_QWORD *)&v12.Data1 - *(_QWORD *)&v13.Data1;
    if ( *(_QWORD *)&v12.Data1 == *(_QWORD *)&v13.Data1 )
      v7 = *(_QWORD *)v12.Data4 - *(_QWORD *)v13.Data4;
    if ( v7 )
      return 0LL;
  }
  v11 = 0LL;
  ndisIfReferenceCompartmentForUser(0LL, a2, &v11);
  v9 = v11;
  if ( v11 && v6 != a2 && v6 != 1 )
  {
    if ( (int)ndisIfGetCompartmentNamespaceGuid(v6, &v12) < 0 || (int)ndisIfGetCompartmentNamespaceGuid(a2, &v13) < 0 )
      goto LABEL_17;
    v10 = *(_QWORD *)&v12.Data1 - *(_QWORD *)&v13.Data1;
    if ( *(_QWORD *)&v12.Data1 == *(_QWORD *)&v13.Data1 )
      v10 = *(_QWORD *)v12.Data4 - *(_QWORD *)v13.Data4;
    if ( v10 )
    {
LABEL_17:
      ndisIfDereferenceCompartmentForUser(v9);
      return 0LL;
    }
  }
  return v9;
}
