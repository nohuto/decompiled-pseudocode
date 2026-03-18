/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x1408B4894
 * Callers:
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406FAFD4 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x140726E80 (PiDmListInitEnumCallback.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B523C (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1408B5260 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B5444 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmLookupObject @ 0x1408B5470 (PiDmLookupObject.c)
 *     PiDmObjectRelease @ 0x1408D0A30 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(__int64 a1, __int64 a2, void *a3)
{
  unsigned int v4; // edi
  RTL_AVL_TABLE *ObjectManagerForObjectType; // rsi
  _DWORD *v6; // rax
  PVOID Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v4 = 0;
  ObjectManagerForObjectType = (RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(a1);
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
