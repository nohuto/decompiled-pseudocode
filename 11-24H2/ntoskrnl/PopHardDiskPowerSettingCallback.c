/*
 * XREFs of PopHardDiskPowerSettingCallback @ 0x140A9A900
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopApplyPolicy @ 0x14099EC20 (PopApplyPolicy.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1409A0E90 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopHardDiskPowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // ebx
  int v28; // eax
  __int64 v29; // rcx
  _OWORD v31[13]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v32; // [rsp+F0h] [rbp-28h]
  __int64 v33; // [rsp+100h] [rbp-18h]

  memset_0(v31, 0, 0xE8uLL);
  v8 = *a1;
  v9 = *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v9 = *(_QWORD *)GUID_DISK_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( v9 )
  {
    v29 = *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 - v8;
    if ( *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 == v8 )
      v29 = *(_QWORD *)GUID_DISK_BURST_IGNORE_THRESHOLD.Data4 - a1[1];
    if ( !v29 && a3 == 4 && a2 )
    {
      dword_140F0B3A4 = *a2;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock(v7, v6);
  v10 = *((_OWORD *)PopPolicy + 1);
  v31[0] = *(_OWORD *)PopPolicy;
  v11 = *((_OWORD *)PopPolicy + 2);
  v31[1] = v10;
  v12 = *((_OWORD *)PopPolicy + 3);
  v31[2] = v11;
  v13 = *((_OWORD *)PopPolicy + 4);
  v31[3] = v12;
  v14 = *((_OWORD *)PopPolicy + 5);
  v31[4] = v13;
  v15 = *((_OWORD *)PopPolicy + 6);
  v31[5] = v14;
  v31[6] = v15;
  v31[7] = *((_OWORD *)PopPolicy + 7);
  v16 = *((_OWORD *)PopPolicy + 9);
  v31[8] = *((_OWORD *)PopPolicy + 8);
  v17 = *((_OWORD *)PopPolicy + 10);
  v31[9] = v16;
  v18 = *((_OWORD *)PopPolicy + 11);
  v31[10] = v17;
  v19 = *((_OWORD *)PopPolicy + 12);
  v31[11] = v18;
  v20 = *((_OWORD *)PopPolicy + 13);
  v21 = *((_QWORD *)PopPolicy + 28);
  v31[12] = v19;
  v32 = v20;
  v33 = v21;
  DWORD1(v32) = *a2;
  v22 = PopApplyPolicy(1, 0, v31, 0xE8u);
  v26 = 0xFFFFFFFFLL;
  v27 = v22;
  v28 = 1000 * *a2;
  if ( !v28 )
    v28 = -1;
  if ( v28 != PopDiskIdleTimeout )
  {
    PopDiskIdleTimeout = v28;
    PopUpdateDiskIdleTimeoutSetting();
  }
  PopReleasePolicyLock(v26, v23, v24, v25, *(_QWORD *)&v31[0]);
  if ( v27 >= 0 )
    return 0;
  return (unsigned int)v27;
}
