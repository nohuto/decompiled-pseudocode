/*
 * XREFs of WmipDisableCollectionForRemovedGuid @ 0x1409CFA88
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x1409CB3C4 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x1409D1534 (WmipUpdateDataSource.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     WmipFindGEByGuid @ 0x1409CD8B0 (WmipFindGEByGuid.c)
 *     WmipSendWmiIrp @ 0x1409CD990 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1409CE1D4 (WmipUnreferenceEntry.c)
 *     WmipDoDisableRequest @ 0x1409D11DC (WmipDoDisableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1409D12AC (WmipSendEnableDisableRequest.c)
 *     WmipDeliverWnodeToDS @ 0x140A962E8 (WmipDeliverWnodeToDS.c)
 *     WmipReleaseCollectionEnabled @ 0x140ABCEF8 (WmipReleaseCollectionEnabled.c)
 */

int __fastcall WmipDisableCollectionForRemovedGuid(_QWORD *a1, __int64 a2)
{
  _QWORD *GEByGuid; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int128 v15; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v16[2]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v17[2]; // [rsp+50h] [rbp-30h] BYREF

  *(_OWORD *)&v16[0].LowPart = 0LL;
  memset(v17, 0, sizeof(v17));
  GEByGuid = WmipFindGEByGuid(a1, 0);
  v5 = GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( *((_DWORD *)v5 + 22) && (*(_DWORD *)(a2 + 16) & 0x82000) == 0x2000 )
    {
      *(_DWORD *)(a2 + 16) &= ~0x2000u;
      *((_DWORD *)v5 + 4) |= 2u;
      KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
      v6 = *(_QWORD *)(a2 + 64);
      *(_OWORD *)((char *)v17 + 8) = *(_OWORD *)a1;
      v16[0].LowPart = 48;
      LOBYTE(v7) = 5;
      WmipSendWmiIrp(v7, *(unsigned int *)(v6 + 56), (__int64)v17 + 8, 48, (__int64)v16, &v15);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      while ( !*((_DWORD *)v5 + 22) )
      {
        LOBYTE(v9) = 1;
        LOBYTE(v8) = 5;
        WmipSendEnableDisableRequest(v8, v5, v9);
        if ( !*((_DWORD *)v5 + 22) )
          break;
        LOBYTE(v11) = 1;
        LOBYTE(v10) = 4;
        WmipSendEnableDisableRequest(v10, v5, v11);
      }
      *((_DWORD *)v5 + 4) &= ~2u;
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4000) != 0 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) &= ~0x4000u;
      KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
      v12 = *(_QWORD *)(a2 + 64);
      *(_OWORD *)&v16[0].LowPart = 0LL;
      LOBYTE(v13) = 7;
      v16[0].LowPart = 48;
      memset(v17, 0, sizeof(v17));
      *(_OWORD *)((char *)v17 + 8) = *(_OWORD *)a1;
      WmipDeliverWnodeToDS(v13, v12, v16, 48LL);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 23) )
      {
        *((_DWORD *)v5 + 4) &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0LL, 4LL);
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  }
  return (int)GEByGuid;
}
