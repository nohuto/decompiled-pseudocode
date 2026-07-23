/*
 * XREFs of CcAddExternalCacheToVolumeEx @ 0x1405775CC
 * Callers:
 *     CcRegisterExternalCacheEx @ 0x140577E20 (CcRegisterExternalCacheEx.c)
 * Callees:
 *     CcCreatePrivateVolumeCacheMap @ 0x14042FE00 (CcCreatePrivateVolumeCacheMap.c)
 *     CcAddExternalCacheInternalEx @ 0x140577538 (CcAddExternalCacheInternalEx.c)
 */

__int64 __fastcall CcAddExternalCacheToVolumeEx(__int64 a1)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( !CcEnablePerVolumeLazyWriter )
    return 3221225659LL;
  v3 = CcCreatePrivateVolumeCacheMap(*((_QWORD *)PspSystemPartition + 1), 0LL, &v5);
  if ( v3 >= 0 )
  {
    v4 = v5;
    if ( *(_QWORD *)(v5 + 1248) == v5 + 1248 )
    {
      *(_QWORD *)(a1 + 72) = v5;
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(v4 + 32);
      *(_DWORD *)(v4 + 1616) |= 0x10u;
      CcAddExternalCacheInternalEx(a1, v4 + 1264);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v3;
}
