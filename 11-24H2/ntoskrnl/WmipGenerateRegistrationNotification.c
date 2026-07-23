/*
 * XREFs of WmipGenerateRegistrationNotification @ 0x1409B1AE4
 * Callers:
 *     WmipAddDataSource @ 0x1409B01A8 (WmipAddDataSource.c)
 *     WmipRemoveDS @ 0x140A9BBB4 (WmipRemoveDS.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     WmipSendGuidUpdateNotifications @ 0x1409B0A84 (WmipSendGuidUpdateNotifications.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B0E04 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B20EC (WmipEnableCollectionForNewGuid.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1409B4038 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipGenerateRegistrationNotification(ULONG_PTR a1, int a2)
{
  ULONG_PTR v3; // r15
  unsigned int v4; // r14d
  _QWORD *v5; // r13
  void *v6; // rbx
  _QWORD *v7; // rdi
  unsigned int v8; // r15d
  _QWORD *v9; // rsi
  _OWORD *v10; // rbp
  __int64 v11; // rax
  void *Pool2; // rax
  void *v15; // [rsp+78h] [rbp+20h]

  v3 = a1;
  WmipReferenceEntry(a1);
  v4 = 0;
  v5 = (_QWORD *)(v3 + 40);
  v6 = 0LL;
  v7 = *(_QWORD **)(v3 + 40);
  if ( v7 != (_QWORD *)(v3 + 40) )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = v7 - 5;
      if ( (*(_DWORD *)(v7 - 3) & 8) == 0 )
        break;
LABEL_8:
      v7 = (_QWORD *)*v7;
      if ( v7 == v5 )
      {
        v3 = a1;
        goto LABEL_10;
      }
    }
    v10 = (_OWORD *)(v9[7] + 72LL);
    if ( v4 == v8 )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL, 16LL * (v8 + 64), 0x70696D57u);
      v15 = Pool2;
      if ( !Pool2 )
      {
LABEL_6:
        if ( a2 == 1 )
        {
          WmipEnableCollectionForNewGuid(v10, v7 - 5);
        }
        else if ( a2 == 2 )
        {
          WmipDisableCollectionForRemovedGuid(v10, (__int64)(v7 - 5));
        }
        goto LABEL_8;
      }
      memmove(Pool2, v6, 16LL * v8);
      v8 += 64;
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      v6 = v15;
    }
    v11 = 2LL * v4++;
    *((_QWORD *)v6 + v11) = v10;
    *((_QWORD *)v6 + v11 + 1) = v9;
    goto LABEL_6;
  }
LABEL_10:
  WmipSendGuidUpdateNotifications(a2, v4, (_OWORD **)v6);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return WmipUnreferenceEntry(&WmipDSChunkInfo, v3);
}
