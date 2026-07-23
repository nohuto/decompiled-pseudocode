/*
 * XREFs of CcRegisterExternalCache @ 0x140577D30
 * Callers:
 *     <none>
 * Callees:
 *     CcCreatePrivateVolumeCacheMap @ 0x14042FE00 (CcCreatePrivateVolumeCacheMap.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcAddExternalCacheInternal @ 0x1405774A4 (CcAddExternalCacheInternal.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcRegisterExternalCache(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi
  bool v7; // zf
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( !CcInitializationComplete )
    KeBugCheckEx(0x34u, 0x1E89uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x40uLL, 0x43456343u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = CcEnablePerVolumeLazyWriter == 0;
    *PoolWithTag = a1;
    if ( v7 )
    {
      v8 = &CcExternalCacheList;
    }
    else
    {
      v11 = 0LL;
      v2 = CcCreatePrivateVolumeCacheMap(*((_QWORD *)PspSystemPartition + 1), 0LL, &v11);
      if ( v2 < 0 )
      {
        ExFreePoolWithTag(v6, 0x43456343u);
        return (unsigned int)v2;
      }
      v9 = v11;
      v6[7] = v11;
      v8 = (__int64 *)(v9 + 1248);
    }
    CcAddExternalCacheInternal((__int64)v6, (__int64)v8);
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v2;
}
