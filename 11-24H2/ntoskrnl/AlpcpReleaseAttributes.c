/*
 * XREFs of AlpcpReleaseAttributes @ 0x140899E50
 * Callers:
 *     AlpcMessageCleanupProcedure @ 0x1408982A0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x140899420 (AlpcpCaptureAttributes.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     Feature_2866505016__private_IsEnabledDeviceUsageNoInline @ 0x1405C9A08 (Feature_2866505016__private_IsEnabledDeviceUsageNoInline.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReleaseViewAttribute @ 0x140A44954 (AlpcpReleaseViewAttribute.c)
 */

void __fastcall AlpcpReleaseAttributes(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rcx
  unsigned __int64 v7; // rcx

  v2 = a2[4];
  if ( v2 )
  {
    AlpcpDereferenceBlobEx(v2);
    a2[4] = 0LL;
  }
  if ( a2[5] )
  {
    if ( (unsigned int)Feature_2866505016__private_IsEnabledDeviceUsageNoInline() )
    {
      AlpcpReleaseViewAttribute(a2[5]);
    }
    else
    {
      v4 = a2[5];
      AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v4 + 16));
      v5 = *(_QWORD *)(v4 + 16);
      --*(_DWORD *)(v4 + 76);
      AlpcpUnlockBlob(v5);
      AlpcpDereferenceBlobEx(v4);
    }
    a2[5] = 0LL;
  }
  v6 = a2[6];
  if ( v6 )
  {
    AlpcpDereferenceBlobEx(v6);
    a2[6] = 0LL;
  }
  v7 = a2[7];
  if ( (v7 & 1) != 0 )
  {
    if ( v7 >= 4 && (v7 & 2) != 0 )
      ObfDereferenceObject((PVOID)(v7 & 0xFFFFFFFFFFFFFFFCuLL));
    a2[7] = 0LL;
  }
}
