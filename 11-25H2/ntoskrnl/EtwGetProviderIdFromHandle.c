/*
 * XREFs of EtwGetProviderIdFromHandle @ 0x1404AD640
 * Callers:
 *     EtwWriteEndScenario @ 0x140A42A90 (EtwWriteEndScenario.c)
 *     WdiDispatchControl @ 0x140A435F0 (WdiDispatchControl.c)
 *     EtwWriteStartScenario @ 0x140A9A900 (EtwWriteStartScenario.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     EtwpReferenceGuidEntry @ 0x14089BAD0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwGetProviderIdFromHandle(PVOID *a1, char a2, _OWORD *a3)
{
  NTSTATUS v3; // edi
  PVOID v7; // rcx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 )
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v7 = Object;
      *a3 = *(_OWORD *)(*((_QWORD *)Object + 4) + 40LL);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    }
    return (unsigned int)v3;
  }
  if ( a1 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)a1[4]) )
  {
    *a3 = *(_OWORD *)((char *)a1[4] + 40);
    EtwpUnreferenceGuidEntry(a1[4]);
    return (unsigned int)v3;
  }
  return 3221225480LL;
}
