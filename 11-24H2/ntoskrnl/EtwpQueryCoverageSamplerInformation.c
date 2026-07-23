/*
 * XREFs of EtwpQueryCoverageSamplerInformation @ 0x140946A88
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwpCoverageSamplerQueryStatusInformation @ 0x1407B2FA8 (EtwpCoverageSamplerQueryStatusInformation.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     EtwpCoverageSamplerQuery @ 0x1409454F0 (EtwpCoverageSamplerQuery.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409470EC (ExCheckFullProcessInformationAccess.c)
 */

__int64 __fastcall EtwpQueryCoverageSamplerInformation(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3, _DWORD *a4)
{
  PVOID v8; // rdi
  __int64 v9; // rcx
  int StatusInformation; // ebx
  __int64 v12; // rcx
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h]

  v8 = 0LL;
  Object = 0LL;
  if ( a2 < 0x10 )
  {
    StatusInformation = -1073741820;
    goto LABEL_9;
  }
  v14 = *(_OWORD *)a1;
  if ( BYTE5(v14) != 0xCF )
    goto LABEL_13;
  v9 = (unsigned int)BYTE4(v14) - 1;
  if ( BYTE4(v14) == 1 )
  {
    if ( a3 )
    {
      LOBYTE(v9) = a3;
      StatusInformation = ExCheckFullProcessInformationAccess(v9);
      if ( StatusInformation >= 0 )
      {
        Object = 0LL;
        StatusInformation = ObReferenceObjectByHandle(*((HANDLE *)&v14 + 1), 1u, ObjectType, a3, &Object, 0LL);
        v8 = Object;
        if ( StatusInformation >= 0 )
        {
          StatusInformation = EtwpCoverageSamplerQuery((ULONG_PTR)Object, a1, a2, a4);
          if ( StatusInformation >= 0 )
            StatusInformation = 0;
        }
      }
      goto LABEL_9;
    }
LABEL_13:
    StatusInformation = -1073741637;
    goto LABEL_9;
  }
  v12 = (unsigned int)BYTE4(v14) - 3;
  if ( BYTE4(v14) == 3 )
    goto LABEL_13;
  if ( BYTE4(v14) != 4 )
  {
    StatusInformation = -1073741821;
    goto LABEL_9;
  }
  if ( !a3 )
    goto LABEL_13;
  LOBYTE(v12) = a3;
  StatusInformation = ExCheckFullProcessInformationAccess(v12);
  if ( StatusInformation >= 0 )
  {
    *a4 = 24;
    if ( a2 >= 0x18 )
      StatusInformation = EtwpCoverageSamplerQueryStatusInformation((bool *)(a1 + 16));
    else
      StatusInformation = -1073741789;
  }
LABEL_9:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)StatusInformation;
}
