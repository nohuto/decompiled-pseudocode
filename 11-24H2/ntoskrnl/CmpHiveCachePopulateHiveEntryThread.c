/*
 * XREFs of CmpHiveCachePopulateHiveEntryThread @ 0x1407E5F40
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmSiAllocateMemory @ 0x14048071C (CmSiAllocateMemory.c)
 *     CmSiSetEvent @ 0x140669D84 (CmSiSetEvent.c)
 *     CmSiWaitForMultipleEvents @ 0x140669DA4 (CmSiWaitForMultipleEvents.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpHiveCacheSubscribePnpNotifications @ 0x1407D939C (CmpHiveCacheSubscribePnpNotifications.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x1407E57CC (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407E5AA8 (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCacheEntryLockAcquire @ 0x1407E5C48 (CmpHiveCacheEntryLockAcquire.c)
 *     CmpHiveCacheEntryLockRelease @ 0x1407E5CAC (CmpHiveCacheEntryLockRelease.c)
 *     CmpRequestOplockOnHiveFile @ 0x1407E6358 (CmpRequestOplockOnHiveFile.c)
 *     CmpOpenHiveFiles @ 0x1409312F0 (CmpOpenHiveFiles.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     PsTerminateSystemThread @ 0x1409D16F0 (PsTerminateSystemThread.c)
 */

__int64 __fastcall CmpHiveCachePopulateHiveEntryThread(PPRIVILEGE_SET Privileges)
{
  PPRIVILEGE_SET v1; // r12
  _DWORD *v2; // r15
  ULONG Attributes; // edi
  __int64 v4; // rbx
  __int64 v5; // rsi
  const void **Luid; // r14
  char *v7; // rax
  __int64 v8; // r9
  char v9; // r13
  NTSTATUS v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  ULONG v14; // r12d
  int Hive; // eax
  void *Memory; // rax
  char v17; // cl
  ULONG v18; // eax
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  int v21; // esi
  char v22; // r14
  char v24; // [rsp+78h] [rbp-19h] BYREF
  char v25[7]; // [rsp+79h] [rbp-18h] BYREF
  __int64 v26; // [rsp+80h] [rbp-11h] BYREF
  ULONG PrivilegeCount; // [rsp+88h] [rbp-9h]
  int v28; // [rsp+8Ch] [rbp-5h] BYREF
  PPRIVILEGE_SET v29; // [rsp+90h] [rbp-1h]
  ULONG v30; // [rsp+98h] [rbp+7h]
  __int64 v31; // [rsp+A0h] [rbp+Fh] BYREF
  __int128 v32; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+27h]

  v29 = Privileges;
  v28 = 0;
  v26 = 0LL;
  v1 = Privileges;
  v33 = 0LL;
  v25[0] = 0;
  v32 = 0LL;
  v2 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v32);
  Attributes = v1->Privilege[0].Attributes;
  v4 = *(_QWORD *)&v1->PrivilegeCount;
  v5 = *(_QWORD *)&v1[1].Privilege[0].Luid.HighPart;
  Luid = (const void **)v1->Privilege[0].Luid;
  PrivilegeCount = v1[1].PrivilegeCount;
  v7 = *(char **)&v1[1].Control;
  v30 = Attributes;
  v24 = *v7;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 376));
  v31 = v8;
  CmpHiveCacheEntryLockAcquire(v4);
  v9 = 1;
  if ( *(_DWORD *)(v4 + 168) != 1 )
  {
    v10 = -1073741431;
    SetFailureLocation(v5, 0, 41, -1073741431, 32);
    goto LABEL_28;
  }
  v11 = CmpOpenHiveFiles(
          (_DWORD)Luid,
          Attributes,
          PrivilegeCount | 0x10,
          (unsigned int)&v28,
          (__int64)&v24,
          v4 + 176,
          0LL,
          (__int64)&v31,
          v5);
  v10 = v11;
  if ( v11 < 0 )
  {
    SetFailureLocation(v5, 0, 41, v11, 64);
LABEL_5:
    v1 = v29;
    goto LABEL_28;
  }
  v12 = CmpRequestOplockOnHiveFile(v4 + 176, v4, v5);
  v10 = v12;
  if ( v12 != 259 )
  {
    SetFailureLocation(v5, 0, 41, v12, 80);
    goto LABEL_5;
  }
  v13 = CmpHiveCacheSubscribePnpNotifications((void **)(v4 + 176), v4, v5);
  v10 = v13;
  if ( v13 < 0 )
  {
    SetFailureLocation(v5, 0, 41, v13, 96);
    goto LABEL_5;
  }
  v14 = v30;
  Hive = CmpCreateHive(
           (unsigned int)&v26,
           v24 == 0 ? 5 : 0,
           v30,
           v28,
           0LL,
           v4 + 176,
           (__int64)Luid,
           PrivilegeCount,
           0LL,
           0LL,
           0LL,
           (__int64)v25,
           v5);
  v10 = Hive;
  if ( Hive < 0 )
  {
    SetFailureLocation(v5, 0, 41, Hive, 112);
    goto LABEL_5;
  }
  *(_DWORD *)(v26 + 188) = HIDWORD(v31);
  *(_QWORD *)(v26 + 1848) = CmSiAllocateMemory(*(unsigned __int16 *)Luid, 0x36394D43u);
  if ( *(_QWORD *)(v26 + 1848) )
  {
    *(_WORD *)(v26 + 1840) = *(_WORD *)Luid;
    *(_WORD *)(v26 + 1842) = *(_WORD *)Luid;
    memmove(*(void **)(v26 + 1848), Luid[1], *(unsigned __int16 *)Luid);
  }
  Memory = (void *)CmSiAllocateMemory(*(unsigned __int16 *)Luid, 0x37394D43u);
  *(_QWORD *)(v4 + 320) = Memory;
  if ( Memory )
  {
    *(_WORD *)(v4 + 312) = *(_WORD *)Luid;
    *(_WORD *)(v4 + 314) = *(_WORD *)Luid;
    memmove(Memory, Luid[1], *(unsigned __int16 *)Luid);
  }
  v17 = v24;
  *(_QWORD *)(v4 + 368) = v26;
  v26 = 0LL;
  v18 = PrivilegeCount;
  *(_DWORD *)(v4 + 328) = v14;
  v1 = v29;
  *(_DWORD *)(v4 + 168) = 2;
  *(_DWORD *)(v4 + 332) = v18;
  *(_BYTE *)(v4 + 380) = v25[0];
  **(_BYTE **)&v1[1].Control = v17;
  CmSiSetEvent(v4 + 272);
  CmpHiveCacheEntryLockRelease(v4);
  v9 = 0;
  v20 = CmSiWaitForMultipleEvents(v19, v4 + 208);
  v21 = v20;
  if ( (unsigned int)v20 <= 2 )
  {
    v22 = 1;
    v2 = (_DWORD *)(v4 + 56LL * v20);
  }
  else
  {
    if ( v20 == 3 )
    {
      v10 = 0;
      goto LABEL_28;
    }
    v22 = 0;
  }
  if ( *v2 == 534 )
  {
    SetFailureLocation(0LL, 0, 41, 534, 128);
  }
  else
  {
    v9 = 1;
    CmpHiveCacheEntryLockAcquire(v4);
    if ( *(_DWORD *)(v4 + 168) == 2 )
    {
      *(_DWORD *)(v4 + 168) = 3;
      CmpHiveCacheEntryLockRelease(v4);
      v9 = 0;
      if ( v22 )
        v10 = CmpHiveCacheAcknowledgeOplockBreak((_QWORD *)v4, v21);
      CmpHiveCacheEntryCleanup(v4, 4);
    }
    else
    {
      SetFailureLocation(0LL, 0, 41, -1073741431, 144);
    }
  }
LABEL_28:
  if ( v26 )
    CmpDestroyHive(v26);
  if ( v10 < 0 )
  {
    *(_DWORD *)(v4 + 168) = 3;
    CmSiSetEvent(v4 + 272);
  }
  if ( v9 )
    CmpHiveCacheEntryLockRelease(v4);
  if ( v10 < 0 )
    CmpHiveCacheEntryCleanup(v4, 1);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 376));
  CmSiSetEvent(v4 + 288);
  CmSiFreeMemory(v1);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v32);
  PsTerminateSystemThread(v10);
  return 0LL;
}
