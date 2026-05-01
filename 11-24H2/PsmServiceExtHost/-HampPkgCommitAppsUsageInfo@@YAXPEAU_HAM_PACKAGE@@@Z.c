/*
 * XREFs of ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180016560
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015DA0 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180016950 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180043160 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x1800594F0 (-HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppComputeUsageInfo@@YAKPEAU_HAM_APPLICATION@@PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18005A8E4 (-HampAppComputeUsageInfo@@YAKPEAU_HAM_APPLICATION@@PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 *     ?HampUtilIsOverlappingInterval@@YAK_K000@Z @ 0x18005AB68 (-HampUtilIsOverlappingInterval@@YAK_K000@Z.c)
 *     ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18005ADB0 (-HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampPkgCommitAppsUsageInfo(struct _HAM_PACKAGE *a1)
{
  int v2; // edi
  struct _HAM_APPLICATION *First; // r14
  unsigned int v4; // r15d
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  _DWORD v13[2]; // [rsp+38h] [rbp-D0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR v15; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v16; // [rsp+60h] [rbp-A8h]
  __int128 v17; // [rsp+70h] [rbp-98h]
  __m128i si128; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v19[2]; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v21[2]; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-48h] BYREF
  void *v23; // [rsp+D0h] [rbp-38h]
  int v24; // [rsp+D8h] [rbp-30h]
  int v25; // [rsp+DCh] [rbp-2Ch]
  _OWORD String1[8]; // [rsp+E8h] [rbp-20h] BYREF
  __int16 v27; // [rsp+168h] [rbp+60h]
  _OWORD String2[8]; // [rsp+178h] [rbp+70h] BYREF
  __int16 v29; // [rsp+1F8h] [rbp+F0h]

  v20 = 0LL;
  *(_OWORD *)v21 = 0LL;
  if ( (unsigned int)dword_1800E82B0 > 5 )
  {
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v23 = &unk_1800D6C49;
    UserData.Reserved = 2;
    v24 = 31;
    v25 = 1;
    v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v2 = 0;
  memset_0(String1, 0, 0x82uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(__m128i *)v19 = si128;
  First = HamRcNodeGetFirst(a1, 1u);
  if ( First )
  {
    do
    {
      v13[0] = 130;
      PsmGetApplicationNameFromKey((char *)First + 96, String2, v13);
      if ( _wcsicmp((const wchar_t *)String1, (const wchar_t *)String2) )
      {
        if ( v2 )
          HampUsageInfoRegistrySaveForApp(
            (const unsigned __int16 *)a1 + 48,
            (char *)a1 + 228,
            (const unsigned __int16 *)String1,
            (struct _HAM_APPLICATION_USAGE_INFO *)&si128);
        si128 = (__m128i)0xFFFFFFFFFFFFFFFFuLL;
        v19[0] = -1LL;
        v19[1] = 0LL;
        v2 = 0;
      }
      v4 = HampAppComputeUsageInfo(First, (struct _HAM_APPLICATION_USAGE_INFO *)&v20);
      if ( HampUtilIsOverlappingInterval(
             v20.Ptr,
             *(unsigned __int64 *)&v20.Size,
             si128.m128i_u64[0],
             si128.m128i_u64[1]) )
      {
        if ( v5 < v6 )
          v6 = v5;
      }
      else if ( (__int64)v5 > v6 )
      {
        v6 = v5;
      }
      v16.m128i_i64[0] = v6;
      if ( HampUtilIsOverlappingInterval(v21[0], v21[1], v19[0], v19[1]) )
      {
        if ( v8 < v9 )
          v9 = v8;
      }
      else if ( (__int64)v8 > (__int64)v9 )
      {
        v9 = v8;
      }
      *(_QWORD *)&v17 = v9;
      if ( v12 > v11 )
        v11 = v12;
      v16.m128i_i64[1] = v11;
      if ( v7 > v10 )
        v10 = v7;
      v2 |= v4;
      *((_QWORD *)&v17 + 1) = v10;
      si128 = v16;
      *(_OWORD *)v19 = v17;
      String1[0] = String2[0];
      String1[1] = String2[1];
      String1[2] = String2[2];
      String1[3] = String2[3];
      String1[4] = String2[4];
      String1[5] = String2[5];
      String1[6] = String2[6];
      String1[7] = String2[7];
      v27 = v29;
      First = HamRcNodeGetSuccessor(a1, First);
    }
    while ( First );
    if ( v2 )
    {
      HampUsageInfoRegistrySaveForApp(
        (const unsigned __int16 *)a1 + 48,
        (char *)a1 + 228,
        (const unsigned __int16 *)String1,
        (struct _HAM_APPLICATION_USAGE_INFO *)&si128);
      if ( si128.m128i_i64[0] != -1 )
        HampUsageInfoRegistrySaveAppLaunched(a1);
    }
  }
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    *(_DWORD *)&v15.Level = 516;
    v20.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&v15.Id = 184549376;
    v15.Keyword = 64LL;
    v20.Size = *(unsigned __int16 *)off_1800E82B8;
    v21[0] = (unsigned __int64)&unk_1800D6C74;
    v20.Reserved = 2;
    v21[1] = 0x10000001FLL;
    v13[0] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v15, 0LL, 0LL, 2u, &v20);
  }
}
