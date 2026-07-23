/*
 * XREFs of PiDmObjectGetCachedObjectReference @ 0x1408B7070
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDD40 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140A58968 (PiDmGetReferencedObjectFromProperty.c)
 * Callees:
 *     PiDmGetCachedKeyIndex @ 0x1408B7F40 (PiDmGetCachedKeyIndex.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectReference(unsigned int a1, __int64 a2, void *a3, __int64 a4, _QWORD *a5)
{
  _DWORD *v5; // rbx
  char v6; // si
  unsigned int Object; // edi
  unsigned int v10; // r8d
  DEVPROPKEY **v11; // rcx
  __int64 v12; // rdx
  unsigned int CachedKeyIndex; // eax
  __int64 v14; // r14
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // rcx
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = a3;
  v5 = a3;
  v6 = 0;
  Object = -1073741802;
  v10 = a1 - 1;
  switch ( a1 )
  {
    case 1u:
      v11 = &PiDmCachedDeviceKeys;
      v12 = v10 + 10;
      break;
    case 3u:
      v11 = &PiDmCachedDeviceInterfaceKeys;
      v12 = 1LL;
      break;
    case 5u:
      v11 = &PiDmCachedDeviceContainerKeys;
      v12 = 3LL;
      break;
    default:
      return Object;
  }
  CachedKeyIndex = PiDmGetCachedKeyIndex(v11, v12, a4);
  v14 = CachedKeyIndex;
  if ( CachedKeyIndex < v15 )
  {
    if ( !v5 )
    {
      Object = PiDmGetObject(a1, a2, &P);
      if ( (Object & 0x80000000) != 0 )
        return Object;
      v5 = P;
      v6 = 1;
    }
    PiDmObjectAcquireSharedLock(v5);
    v16 = v5[6 * v14 + 28];
    if ( v16 == 6 )
    {
      v17 = *(_QWORD *)&v5[6 * v14 + 32];
      *a5 = v17;
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      v5 = P;
      Object = 0;
    }
    else if ( v16 == 2 )
    {
      Object = -1073741275;
    }
    else
    {
      Object = -1073741802;
    }
    PiDmObjectReleaseLock((ULONG_PTR)v5);
    if ( v6 )
      PiDmObjectRelease(v5);
  }
  return Object;
}
