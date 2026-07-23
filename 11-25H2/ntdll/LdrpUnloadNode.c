/*
 * XREFs of LdrpUnloadNode @ 0x1800465A0
 * Callers:
 *     LdrpDecrementModuleLoadCountEx @ 0x180046370 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18001D460 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpUnmapModule @ 0x180024A44 (LdrpUnmapModule.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x180046510 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800719D0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpSendDllNotifications @ 0x180071EE4 (LdrpSendDllNotifications.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpProcessDetachNode @ 0x1800DFDC4 (LdrpProcessDetachNode.c)
 *     LdrpRemoveDataTableEntry @ 0x1800F2C28 (LdrpRemoveDataTableEntry.c)
 *     AVrfDllUnloadNotification @ 0x18011BEB0 (AVrfDllUnloadNotification.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall LdrpUnloadNode(__int64 a1)
{
  struct _PEB *v1; // r14
  _QWORD *v3; // rax
  void (__fastcall *v4)(_QWORD *); // rdi
  _QWORD *i; // rsi
  _QWORD *v6; // rbp
  __int64 v7; // rdx
  _QWORD **v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  _QWORD *v11; // r8
  _QWORD **v12; // rdx
  _QWORD *v13; // rax
  _QWORD **v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v20; // [rsp+60h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  LODWORD(v3) = *(_DWORD *)(a1 + 56);
  v4 = 0LL;
  v20 = 0;
  if ( (_DWORD)v3 != -4 )
  {
    if ( (_DWORD)v3 == 7 )
      goto LABEL_3;
    if ( (_DWORD)v3 != 9 )
      goto LABEL_13;
  }
  *(_DWORD *)(a1 + 56) = -1;
  LdrpProcessDetachNode();
LABEL_3:
  if ( g_ShimsEnabled )
    v4 = (void (__fastcall *)(_QWORD *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                g_pfnSE_LdrEntryRemoved,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v6 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      LdrpSendDllNotifications(i - 20, 2LL);
      if ( v4 )
        v4(i - 20);
      SbUpdateSwitchContextBasedOnDll(i - 20, v7, 1LL);
      if ( (v1->NtGlobalFlag & 0x100) != 0 )
        AVrfDllUnloadNotification(i - 20);
    }
    LdrpLogInternal("minkernel\\ldr\\ldrsnap.c", 4078LL, "LdrpUnloadNode", 2LL, "Unmapping DLL \"%wZ\"\n", v6 + 9);
    LdrUnloadAlternateResourceModuleEx((PVOID)v6[6], 0);
  }
  LODWORD(v3) = RtlLeaveCriticalSection(&LdrpDllNotificationLock);
LABEL_13:
  while ( 1 )
  {
    v8 = *(_QWORD ***)(a1 + 40);
    if ( !v8 )
      break;
    v9 = *v8;
    if ( *v8 == v8 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      v3 = (_QWORD *)*v9;
      *v8 = (_QWORD *)*v9;
    }
    if ( !v9 )
      break;
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v10 = v9[1];
    v11 = v9 + 2;
    v12 = *(_QWORD ***)(v10 + 48);
    v13 = *v12;
    if ( *v12 != v9 + 2 )
    {
      do
      {
        v12 = (_QWORD **)v13;
        v13 = (_QWORD *)*v13;
      }
      while ( v13 != v11 );
    }
    *v12 = (_QWORD *)*v11;
    if ( *(_QWORD **)(v10 + 48) == v11 )
    {
      v14 = 0LL;
      if ( v12 != v11 )
        v14 = v12;
      *(_QWORD *)(v10 + 48) = v14;
    }
    LdrpDecrementNodeLoadCountLockHeld(v10, 0, &v20);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v20 )
      LdrpUnloadNode(v10);
    LODWORD(v3) = RtlFreeHeap(LdrpHeap, 0, v9);
  }
  v15 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v15 != (_QWORD *)a1 )
  {
    do
    {
      v16 = (_QWORD *)*v15;
      *((_DWORD *)v15 - 14) |= 2u;
      v17 = (__int64)(v15 - 20);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      LdrpRemoveDataTableEntry(v17);
      if ( *(char *)(v17 + 104) < 0 )
      {
        RtlRbRemoveNode(&LdrpMappingInfoIndex, (PRTL_BALANCED_NODE)(v17 + 224));
        RtlRbRemoveNode(&LdrpModuleBaseAddressIndex, (PRTL_BALANCED_NODE)(v17 + 200));
        *(_DWORD *)(v17 + 64) = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( LdrpIsSecureProcess )
        LdrpUnmapModule(v17, v18);
      LODWORD(v3) = LdrpDereferenceModule((PVOID)v17);
      v15 = v16;
    }
    while ( v16 != (_QWORD *)a1 );
  }
  return (int)v3;
}
