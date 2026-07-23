/*
 * XREFs of PopFxDestroyDeviceDpm @ 0x1404D27A8
 * Callers:
 *     PoFxUnregisterDevice @ 0x140A6EB70 (PoFxUnregisterDevice.c)
 *     PopFxUnregisterDevice @ 0x140A6EED4 (PopFxUnregisterDevice.c)
 * Callees:
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PopFxDestroyDeviceCommon @ 0x1404F7FA0 (PopFxDestroyDeviceCommon.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxDestroyDeviceDpm(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  __int64 i; // rsi
  __int64 v9; // rbp
  void *v10; // rcx

  v4 = *(void **)(a2 + 104);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x78466F50u);
  v5 = *(void **)(a2 + 96);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x78466F50u);
  if ( a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x78466F50u);
  v6 = *(IRP **)(a2 + 16);
  if ( v6 )
    IoFreeIrp(v6);
  v7 = *(void **)(a2 + 1240);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4D584650u);
  if ( *(_QWORD *)(a2 + 872) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 868); i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 872) + 8 * i);
      v10 = *(void **)(v9 + 424);
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0x4D584650u);
        *(_QWORD *)(v9 + 424) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a2 + 872), 0x4D584650u);
    *(_QWORD *)(a2 + 872) = 0LL;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  if ( a1 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFBF);
  return PopFxDestroyDeviceCommon((PVOID)a2);
}
