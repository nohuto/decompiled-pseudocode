/*
 * XREFs of HvlpLogIommuInitStatus @ 0x140588774
 * Callers:
 *     HvlPhase2Initialize @ 0x14057FF00 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HvlpWriteEventLog @ 0x140588A34 (HvlpWriteEventLog.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 HvlpLogIommuInitStatus()
{
  _QWORD *v0; // rbx
  __int128 *v1; // rdi
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-E0h] BYREF
  int v4; // [rsp+24h] [rbp-DCh] BYREF
  __int128 v5; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v6; // [rsp+38h] [rbp-C8h]
  __int64 v7; // [rsp+40h] [rbp-C0h]
  __int128 v8; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+58h] [rbp-A8h]
  __int64 v10; // [rsp+60h] [rbp-A0h]
  __int128 v11; // [rsp+68h] [rbp-98h] BYREF
  __int128 v12; // [rsp+78h] [rbp-88h] BYREF
  __int128 v13; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  int *v15; // [rsp+B0h] [rbp-50h]
  __int64 v16; // [rsp+B8h] [rbp-48h]
  char *v17; // [rsp+C0h] [rbp-40h]
  __int64 v18; // [rsp+C8h] [rbp-38h]
  __int128 *v19; // [rsp+D0h] [rbp-30h]
  __int64 v20; // [rsp+D8h] [rbp-28h]
  char *v21; // [rsp+E0h] [rbp-20h]
  __int64 v22; // [rsp+E8h] [rbp-18h]
  __int128 *v23; // [rsp+F0h] [rbp-10h]
  __int64 v24; // [rsp+F8h] [rbp-8h]
  char *v25; // [rsp+100h] [rbp+0h]
  __int64 v26; // [rsp+108h] [rbp+8h]
  _BYTE v27[32]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v28[2064]; // [rsp+130h] [rbp+30h] BYREF

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v5 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v0 = HvlpAcquireHypercallPage((__int64)&v8, 1, (__int64)v27, 16LL);
  v1 = (__int128 *)HvlpAcquireHypercallPage((__int64)&v5, 2, (__int64)v28, 1032LL);
  *(_DWORD *)v0 = 5;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
  {
    v11 = *v1;
    v12 = v1[1];
    v13 = v1[2];
  }
  HvlpReleaseHypercallPage((unsigned int *)&v5);
  HvlpReleaseHypercallPage((unsigned int *)&v8);
  v3 = (unsigned __int8)v11;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v3;
  v4 = BYTE1(v11);
  v15 = &v4;
  v17 = (char *)&v11 + 8;
  v19 = &v12;
  v21 = (char *)&v12 + 8;
  v23 = &v13;
  v25 = (char *)&v13 + 8;
  v16 = 4LL;
  v18 = 8LL;
  v20 = 8LL;
  v22 = 8LL;
  v24 = 8LL;
  v26 = 8LL;
  HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT, 7u, &UserData);
  result = v13;
  if ( (_DWORD)v13 )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (ULONGLONG)&v13;
    HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT_ERROR, 1u, &UserData);
    result = v13;
  }
  if ( BYTE1(v11) && *((_QWORD *)&v11 + 1) == 1LL )
  {
    if ( result )
      return HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT_POLICY_ENABLE, 0, 0LL);
  }
  return result;
}
