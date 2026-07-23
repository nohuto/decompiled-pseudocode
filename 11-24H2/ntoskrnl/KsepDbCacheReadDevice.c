/*
 * XREFs of KsepDbCacheReadDevice @ 0x140943C38
 * Callers:
 *     KseQueryDeviceDataList @ 0x1409424A0 (KseQueryDeviceDataList.c)
 *     KseQueryDeviceData @ 0x140944120 (KseQueryDeviceData.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14049AA70 (KsepPoolAllocatePaged.c)
 *     KseShimDatabaseClose @ 0x140943D3C (KseShimDatabaseClose.c)
 *     KsepCacheDeviceFree @ 0x140943E70 (KsepCacheDeviceFree.c)
 *     KseShimDatabaseOpen @ 0x140943EEC (KseShimDatabaseOpen.c)
 *     KsepStringDuplicate @ 0x1409445C4 (KsepStringDuplicate.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1409448E4 (KsepDbCacheReadDeviceInternal.c)
 */

__int64 __fastcall KsepDbCacheReadDevice(__int64 a1, _QWORD *a2)
{
  char *Paged; // rax
  char *v5; // rdi
  _QWORD *v6; // rax
  int DeviceInternal; // ebx
  int v8; // eax
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  int v12; // eax
  _QWORD *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  *a2 = 0LL;
  Paged = (char *)KsepPoolAllocatePaged(0x48uLL);
  v5 = Paged;
  if ( !Paged )
    return (unsigned int)-1073741801;
  v6 = Paged + 56;
  v6[1] = v6;
  *v6 = v6;
  DeviceInternal = KsepStringDuplicate(v5 + 40, a1);
  if ( DeviceInternal < 0 )
    goto LABEL_10;
  v8 = KseShimDatabaseOpen(&v13);
  v9 = v13;
  DeviceInternal = v8;
  if ( v8 < 0 )
    goto LABEL_7;
  DeviceInternal = KsepDbCacheReadDeviceInternal(*v13, &KsepMatchMachineInfo, a1, v5);
  if ( (int)(DeviceInternal + 0x80000000) >= 0 && DeviceInternal != -1073741275 )
    goto LABEL_7;
  v10 = v9[7];
  if ( !v10 )
    goto LABEL_6;
  v12 = KsepDbCacheReadDeviceInternal(v10, &KsepMatchMachineInfo, a1, v5);
  if ( v12 >= 0 )
  {
    DeviceInternal = 0;
LABEL_17:
    *a2 = v5;
    v5 = 0LL;
    goto LABEL_7;
  }
  if ( DeviceInternal != -1073741275 )
  {
LABEL_6:
    if ( DeviceInternal < 0 )
      goto LABEL_7;
    goto LABEL_17;
  }
  DeviceInternal = v12;
LABEL_7:
  if ( v9 )
    KseShimDatabaseClose(v9);
  if ( v5 )
LABEL_10:
    KsepCacheDeviceFree(v5);
  return (unsigned int)DeviceInternal;
}
