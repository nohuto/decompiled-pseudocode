/*
 * XREFs of NtGdiDdDDIDestroyDCFromMemory @ 0x1401BD800
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4 (--0SURFREF@@QEAA@XZ.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiDdDDIDestroyDCFromMemory(ULONG64 a1)
{
  const void *v1; // rdx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  v1 = (const void *)a1;
  v6 = 0LL;
  if ( a1 >= MmUserProbeAddress )
    v1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v6, v1, 0x10uLL);
  if ( !*((_QWORD *)&v6 + 1) || !(_QWORD)v6 )
    return 3221225485LL;
  v2 = -1073741811;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v9);
  SURFREF::SURFREF((SURFREF *)v7);
  LOBYTE(v3) = 5;
  v4 = HmgShareLockCheckIgnoreStockBit(*((_QWORD *)&v6 + 1), v3);
  v8 = v4;
  if ( v4 && *(_QWORD *)(v4 + 224) )
    v2 = 0;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v7);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v9);
  if ( v2 >= 0 )
  {
    if ( !(unsigned int)GrepDeleteDC(v6, 0x1000000LL) )
      v2 = -1073741811;
    if ( v2 >= 0 && !(unsigned int)bDeleteSurface(*((_QWORD *)&v6 + 1)) )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
