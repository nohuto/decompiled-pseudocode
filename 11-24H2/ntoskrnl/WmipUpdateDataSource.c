/*
 * XREFs of WmipUpdateDataSource @ 0x1409AF500
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x1409B008C (WmipProcessWmiRegInfo.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407A5BA8 (WmipGenerateBinaryMofNotification.c)
 *     WmipUpdateModifyGuid @ 0x1407A5FF8 (WmipUpdateModifyGuid.c)
 *     WmipSendGuidUpdateNotifications @ 0x1409B0A84 (WmipSendGuidUpdateNotifications.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B0E04 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B20EC (WmipEnableCollectionForNewGuid.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1409B4038 (WmipReferenceEntry.c)
 *     WmipCachePtrs @ 0x140A41C58 (WmipCachePtrs.c)
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x140A49B80 (WmipUnlinkInstanceSetFromGuidEntry.c)
 *     WmipFindISInDSByGuid @ 0x140AA3FE8 (WmipFindISInDSByGuid.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipUpdateDataSource(__int64 a1, __int64 a2, int a3)
{
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  _QWORD *v7; // rbx
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  int v11; // r12d
  __int64 v12; // rdx
  __int64 ISInDSByGuid; // rax
  __int64 v14; // r15
  PVOID *p_P; // rax
  int *v16; // r9
  int v17; // edx
  unsigned int *v18; // r8
  int updated; // eax
  unsigned int v20; // r14d
  _QWORD *v21; // rdx
  char *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rbx
  PVOID v25; // rdi
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  PVOID v28; // rsi
  __int64 *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rcx
  PVOID v32; // r14
  __int64 *v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rcx
  unsigned int v36; // [rsp+30h] [rbp-30h] BYREF
  int v37; // [rsp+34h] [rbp-2Ch] BYREF
  int v38; // [rsp+38h] [rbp-28h] BYREF
  int v39; // [rsp+3Ch] [rbp-24h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  __int64 v41; // [rsp+48h] [rbp-18h] BYREF
  PVOID v42; // [rsp+50h] [rbp-10h] BYREF
  PVOID v43; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp+40h] BYREF
  int v45; // [rsp+B0h] [rbp+50h]
  unsigned int v46; // [rsp+B8h] [rbp+58h] BYREF

  v45 = a3;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v41 = 0LL;
  if ( !v3 )
    return 3221225524LL;
  WmipReferenceEntry(v3);
  v7 = 0LL;
  v46 = 0;
  P = 0LL;
  v36 = 0;
  v44 = 0;
  v38 = 0;
  v8 = 0;
  v39 = 0;
  v9 = 0;
  v37 = 0;
  v10 = 0;
  v42 = 0LL;
  v43 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(a2 + 16) )
    goto LABEL_16;
  v11 = v45;
  do
  {
    v12 = a2 + 32LL * v4 + 24;
    if ( (*(_DWORD *)(v12 + 16) & 0x10000) != 0 )
    {
      ISInDSByGuid = WmipFindISInDSByGuid(v3, v12);
      v14 = ISInDSByGuid;
      if ( !ISInDSByGuid )
        goto LABEL_14;
      WmipUnreferenceEntry(&WmipISChunkInfo, ISInDSByGuid);
      p_P = &P;
      v41 = v14;
      v16 = &v37;
      v17 = v14;
      v18 = &v44;
    }
    else
    {
      updated = WmipUpdateModifyGuid(v3, v12, a2, v11, &v41);
      if ( updated == 1 )
      {
        p_P = &v43;
        v16 = &v38;
        v18 = &v46;
      }
      else
      {
        if ( updated != 2 )
          goto LABEL_14;
        p_P = &v42;
        v16 = &v39;
        v18 = &v36;
      }
      v17 = v41;
    }
    WmipCachePtrs(a2 + 32 * v4 + 24, v17, (_DWORD)v18, (_DWORD)v16, (__int64)p_P);
LABEL_14:
    ++v4;
  }
  while ( v4 < *(_DWORD *)(a2 + 16) );
  v10 = v44;
  v8 = v46;
  v9 = v36;
  v7 = P;
LABEL_16:
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  WmipUnreferenceEntry(&WmipDSChunkInfo, v3);
  if ( v10 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = (_QWORD *)v7[2 * v20];
      v22 = (char *)&v7[2 * v20];
      v23 = *v21 - WmipBinaryMofGuid;
      if ( *v21 == WmipBinaryMofGuid )
        v23 = v21[1] - 0x102906C9A000F0B2LL;
      if ( !v23 )
        WmipGenerateBinaryMofNotification(*((_QWORD *)v22 + 1), &GUID_MOF_RESOURCE_REMOVED_NOTIFICATION);
      v24 = *((_QWORD *)v22 + 1);
      v25 = P;
      WmipDisableCollectionForRemovedGuid(*((_QWORD *)P + 2 * v20), v24);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *(_QWORD *)v24 )
        WmipUnlinkInstanceSetFromGuidEntry(v24);
      if ( (*(_DWORD *)(v24 + 16) & 8) == 0 )
        WmipUnreferenceEntry(&WmipGEChunkInfo, *(_QWORD *)(v24 + 56));
      *(_QWORD *)(v24 + 56) = 0LL;
      v26 = *(_QWORD *)(v24 + 40);
      if ( *(_QWORD *)(v26 + 8) != v24 + 40 || (v27 = *(_QWORD **)(v24 + 48), *v27 != v24 + 40) )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      WmipUnreferenceEntry(&WmipISChunkInfo, v24);
      KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
      if ( ++v20 >= v10 )
        break;
      v7 = P;
    }
    WmipSendGuidUpdateNotifications(2LL, v10, v25);
    ExFreePoolWithTag(v25, 0);
  }
  if ( v9 )
  {
    v28 = v42;
    v29 = (__int64 *)v42;
    v30 = v9;
    do
    {
      v31 = *(_QWORD *)*v29 - WmipBinaryMofGuid;
      if ( !v31 )
        v31 = *(_QWORD *)(*v29 + 8) - 0x102906C9A000F0B2LL;
      if ( !v31 )
        WmipGenerateBinaryMofNotification(v29[1], &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      v29 += 2;
      --v30;
    }
    while ( v30 );
    WmipSendGuidUpdateNotifications(4LL, v9, v28);
    ExFreePoolWithTag(v28, 0);
  }
  if ( v8 )
  {
    v32 = v43;
    v33 = (__int64 *)v43;
    v34 = v8;
    do
    {
      v35 = *(_QWORD *)*v33 - WmipBinaryMofGuid;
      if ( !v35 )
        v35 = *(_QWORD *)(*v33 + 8) - 0x102906C9A000F0B2LL;
      if ( !v35 )
        WmipGenerateBinaryMofNotification(v33[1], &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      WmipEnableCollectionForNewGuid(*v33, v33[1]);
      v33 += 2;
      --v34;
    }
    while ( v34 );
    WmipSendGuidUpdateNotifications(1LL, v8, v32);
    ExFreePoolWithTag(v32, 0);
  }
  return 0LL;
}
