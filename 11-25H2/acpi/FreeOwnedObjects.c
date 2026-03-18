/*
 * XREFs of FreeOwnedObjects @ 0x140005570
 * Callers:
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     AMLIAddNamespaceOverride @ 0x14006C0C4 (AMLIAddNamespaceOverride.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x14006D848 (AMLIRemoveNativeObjectsFromNamespace.c)
 *     ParseUnload @ 0x14006F0D0 (ParseUnload.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x140003200 (FreeNameSpaceObjects.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 */

void __fastcall FreeOwnedObjects(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  KIRQL v4; // al
  __int64 *v5; // rbx
  __int64 *v6; // rdi

  byte_140088F38 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  KeReleaseSpinLock(&gmutOwnerList, byte_140088F38);
  v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v5 = (__int64 *)a1[3];
  if ( v5 )
  {
    do
    {
      v6 = (__int64 *)v5[7];
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
      if ( (gdwfAMLI & 4) != 0 )
        AMLIDereferenceHandleEx(v5 + 15);
      else
        FreeNameSpaceObjects(v5);
      v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      v5 = v6;
    }
    while ( v6 );
  }
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
}
