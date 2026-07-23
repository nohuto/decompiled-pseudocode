/*
 * XREFs of CmpBuildMachineHiveCache @ 0x1407D91E4
 * Callers:
 *     CmInitSystem2 @ 0x140C61648 (CmInitSystem2.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     CmSiEventTupleInitialize @ 0x1404853A8 (CmSiEventTupleInitialize.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x1407D94F8 (CmpMachineHiveCachePopulateEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x1407E59D8 (CmpHiveCacheCreateHiveEntry.c)
 *     IoCreateDriver @ 0x140AACC00 (IoCreateDriver.c)
 */

void CmpBuildMachineHiveCache()
{
  int Driver; // eax
  unsigned int v1; // ebx
  __int64 v2; // rsi
  int v3; // ebp
  _DWORD *v4; // rdi
  _OWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbp
  int HiveEntry; // eax
  int v10; // edi
  char *v11; // rbx
  wchar_t **v12; // rdi
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  Driver = IoCreateDriver(CmHiveCacheDriverName, CmHiveCacheDriverSetup);
  if ( Driver < 0 )
    KeBugCheckEx(0x51u, 0x30uLL, Driver, 0LL, 0LL);
  v1 = 0;
  v2 = 7LL;
  while ( v1 < 7 )
  {
    v3 = 0;
    if ( !v1 || v1 == 3 )
      v3 = 1;
    v4 = (_DWORD *)((char *)&CmpMachineHiveCacheList + 832 * v1);
    memset_0(v4 + 97, 0, 0x1BCuLL);
    memset_0(v4, 0, 0x180uLL);
    v5 = v4 + 52;
    v4[94] = 1;
    do
    {
      CmSiEventTupleInitialize(v5);
      v5 = (_OWORD *)(v6 + 16);
    }
    while ( v7 != 1 );
    v4[84] = v3;
    v4[96] = v1;
    v14 = 0LL;
    v15 = 0LL;
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&v14);
    v8 = (__int64)(v4 + 98);
    HiveEntry = CmpHiveCacheCreateHiveEntry(v4, v4 + 98);
    v10 = HiveEntry;
    if ( HiveEntry < 0 )
      SetFailureLocation(v8, 0, 50, HiveEntry, 48);
    CmpCleanupThreadInfo((_KAFFINITY_EX **)&v14);
    if ( v10 < 0 )
      KeBugCheckEx(0x51u, 0x29uLL, v1, 0LL, 0LL);
    ++v1;
  }
  v11 = (char *)&unk_140EF59A8;
  v12 = CmpMachineHiveList;
  do
  {
    v13 = CmpMachineHiveCachePopulateEntry(v11 - 392, v12);
    if ( v13 < 0 )
      SetFailureLocation((__int64)v11, 0, 53, v13, 16);
    v12 += 23;
    v11 += 832;
    --v2;
  }
  while ( v2 );
}
