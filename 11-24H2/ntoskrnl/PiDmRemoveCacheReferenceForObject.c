/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x1408B2184
 * Callers:
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406F8C14 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x140724A10 (PiDmListInitEnumCallback.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B2B2C (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1408B2B50 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B2D34 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmLookupObject @ 0x1408B2D60 (PiDmLookupObject.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(__int64 a1, __int64 a2, void *a3)
{
  unsigned int v4; // edi
  _RTL_AVL_TABLE *ObjectManagerForObjectType; // rsi
  _DWORD *v6; // rax
  PVOID Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v4 = 0;
  ObjectManagerForObjectType = (_RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(a1);
  PiDmObjectManagerAcquireExclusiveLock(ObjectManagerForObjectType);
  v6 = (_DWORD *)PiDmLookupObject(ObjectManagerForObjectType, a2);
  Buffer = v6;
  if ( v6 )
  {
    --v6[3];
    if ( !*((_DWORD *)Buffer + 3) )
    {
      RtlDeleteElementGenericTableAvl(ObjectManagerForObjectType + 1, &Buffer);
      PiDmObjectRelease(Buffer);
    }
  }
  else
  {
    v4 = -1073741772;
  }
  PiDmObjectManagerReleaseLock(ObjectManagerForObjectType);
  return v4;
}
