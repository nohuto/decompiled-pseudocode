/*
 * XREFs of PspQueryJobHierarchyAccountingInformation @ 0x14085CE84
 * Callers:
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1404694D4 (KeQuerySchedulingGroupReadyTime.c)
 *     PsAddProcessEnergyValues @ 0x1404E5EF8 (PsAddProcessEnergyValues.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspLockRootJobShared @ 0x14085D1C0 (PspLockRootJobShared.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 */

__int64 __fastcall PspQueryJobHierarchyAccountingInformation(char *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // esi
  int i; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _OWORD *v11; // rbx
  __int64 v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  char *v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23[13]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-58h]
  __int64 v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  __int64 v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  __int64 v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  __int64 v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  __int64 v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  __int64 v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  __int64 v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  __int64 v41; // [rsp+130h] [rbp+30h]
  int v42; // [rsp+138h] [rbp+38h]
  _QWORD v43[58]; // [rsp+140h] [rbp+40h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v22 = 0LL;
  memset_0(v23, 0, 0x2C8uLL);
  PspLockRootJobShared(Object, CurrentThread, &v22);
  for ( i = 0; !i; i = 1 )
  {
    if ( Object == v22 )
      goto LABEL_6;
  }
  ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
LABEL_6:
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v23, 1);
  v7 = v25;
  *(_QWORD *)a2 = v25 + *((_QWORD *)Object + 20);
  *(_QWORD *)(a2 + 16) = *((_QWORD *)Object + 23) + v7;
  v8 = v24;
  *(_QWORD *)(a2 + 8) = v24 + *((_QWORD *)Object + 21);
  *(_QWORD *)(a2 + 24) = *((_QWORD *)Object + 24) + v8;
  *(_DWORD *)(a2 + 32) = v42 + *((_DWORD *)Object + 52);
  *(_DWORD *)(a2 + 36) = *((_DWORD *)Object + 53);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)Object + 54);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)Object + 55);
  *(_QWORD *)(a2 + 48) = v29 + *((_QWORD *)Object + 73);
  *(_QWORD *)(a2 + 56) = v30 + *((_QWORD *)Object + 74);
  *(_QWORD *)(a2 + 64) = v31 + *((_QWORD *)Object + 75);
  *(_QWORD *)(a2 + 72) = v32 + *((_QWORD *)Object + 76);
  *(_QWORD *)(a2 + 80) = v33 + *((_QWORD *)Object + 77);
  *(_QWORD *)(a2 + 88) = v34 + *((_QWORD *)Object + 78);
  *(_QWORD *)(a2 + 96) = v37 + *((_QWORD *)Object + 79);
  *(_QWORD *)(a2 + 104) = v38 + *((_QWORD *)Object + 80);
  *(_QWORD *)(a2 + 112) = v39 + *((_QWORD *)Object + 81);
  *(_QWORD *)(a2 + 120) = v40 + *((_QWORD *)Object + 82);
  *(_QWORD *)(a2 + 128) = v41 + *((_QWORD *)Object + 83);
  *(_QWORD *)(a2 + 136) = v28 + *((_QWORD *)Object + 25);
  *(_QWORD *)(a2 + 144) = v27 + *((_QWORD *)Object + 22);
  *(_QWORD *)(a2 + 152) = v26 + *((_QWORD *)Object + 157);
  *(_QWORD *)(a2 + 432) = v35 + *((_QWORD *)Object + 227);
  *(_QWORD *)(a2 + 440) = v36 + *((_QWORD *)Object + 228);
  *(_QWORD *)(a2 + 448) = v43[55] + *((_QWORD *)Object + 84);
  *(_QWORD *)(a2 + 456) = v43[56] + *((_QWORD *)Object + 85);
  v9 = *((_QWORD *)Object + 155);
  if ( v9 )
    *(_QWORD *)(a2 + 152) += KeQuerySchedulingGroupReadyTime(v9 + 128);
  v10 = *((_QWORD *)Object + 195);
  v11 = (_OWORD *)(a2 + 160);
  if ( v10 )
  {
    PsAddProcessEnergyValues(v43, v10);
    v12 = 2LL;
    v13 = v43;
    do
    {
      v14 = v13[1];
      *v11 = *v13;
      v15 = v13[2];
      v11[1] = v14;
      v16 = v13[3];
      v11[2] = v15;
      v17 = v13[4];
      v11[3] = v16;
      v18 = v13[5];
      v11[4] = v17;
      v19 = v13[6];
      v11[5] = v18;
      v20 = v13[7];
      v13 += 8;
      v11[6] = v19;
      v11 += 8;
      *(v11 - 1) = v20;
      --v12;
    }
    while ( v12 );
    *v11 = *v13;
  }
  else
  {
    memset_0(v11, 0, 0x110uLL);
  }
  while ( !v5 )
  {
    if ( Object == v22 )
      return PspUnlockJob(v22, CurrentThread);
    v5 = 1;
  }
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  return PspUnlockJob(v22, CurrentThread);
}
