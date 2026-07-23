/*
 * XREFs of WmipEnableCollectionForNewGuid @ 0x1409B20EC
 * Callers:
 *     WmipUpdateDataSource @ 0x1409AF500 (WmipUpdateDataSource.c)
 *     WmipGenerateRegistrationNotification @ 0x1409B1AE4 (WmipGenerateRegistrationNotification.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WmipDoDisableRequest @ 0x1409AF864 (WmipDoDisableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1409AF934 (WmipSendEnableDisableRequest.c)
 *     WmipFindGEByGuid @ 0x1409B2884 (WmipFindGEByGuid.c)
 *     WmipSendWmiIrp @ 0x1409B2964 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipDeliverWnodeToDS @ 0x140A92B18 (WmipDeliverWnodeToDS.c)
 *     WmipReleaseCollectionEnabled @ 0x140AB7F64 (WmipReleaseCollectionEnabled.c)
 */

int __fastcall WmipEnableCollectionForNewGuid(_OWORD *a1, __int64 a2)
{
  __int64 GEByGuid; // rax
  _DWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE v12[16]; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v13[2]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v14[2]; // [rsp+50h] [rbp-30h] BYREF

  *(_OWORD *)&v13[0].LowPart = 0LL;
  memset(v14, 0, sizeof(v14));
  GEByGuid = WmipFindGEByGuid(a1, 0LL);
  v5 = (_DWORD *)GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( v5[22] )
    {
      v6 = *(_DWORD *)(a2 + 16);
      if ( (v6 & 0x82000) == 0 )
      {
        *(_DWORD *)(a2 + 16) = v6 | 0x2000;
        v5[4] |= 2u;
        KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
        v7 = *(_QWORD *)(a2 + 64);
        *(_OWORD *)((char *)v14 + 8) = *a1;
        v13[0].LowPart = 48;
        LOBYTE(v8) = 4;
        WmipSendWmiIrp(v8, *(unsigned int *)(v7 + 56), (char *)v14 + 8, 48LL, v13, v12);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        while ( !v5[22] )
        {
          WmipSendEnableDisableRequest(5, (__int64)v5, 1);
          if ( !v5[22] )
            break;
          WmipSendEnableDisableRequest(4, (__int64)v5, 1);
        }
        v5[4] &= ~2u;
      }
    }
    if ( v5[23] && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      v5[4] |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
      v9 = *(_QWORD *)(a2 + 64);
      *(_OWORD *)&v13[0].LowPart = 0LL;
      LOBYTE(v10) = 6;
      v13[0].LowPart = 48;
      memset(v14, 0, sizeof(v14));
      *(_OWORD *)((char *)v14 + 8) = *a1;
      WmipDeliverWnodeToDS(v10, v9, v13, 48LL);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( v5[23] )
      {
        v5[4] &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0, 4LL);
      }
    }
    WmipUnreferenceEntry(&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  }
  return GEByGuid;
}
