/*
 * XREFs of LdrpUnloadNode @ 0x180049460
 * Callers:
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180049230 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 * Callees:
 *     LdrpUnmapModule @ 0x1800331C8 (LdrpUnmapModule.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x1800493D0 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlRbRemoveNode @ 0x180067980 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1800773E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18008D6B0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpSendDllNotifications @ 0x18008DBC4 (LdrpSendDllNotifications.c)
 *     LdrpProcessDetachNode @ 0x1800DE6E4 (LdrpProcessDetachNode.c)
 *     LdrpRemoveDataTableEntry @ 0x1800EBD38 (LdrpRemoveDataTableEntry.c)
 *     AVrfDllUnloadNotification @ 0x180113F70 (AVrfDllUnloadNotification.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  LODWORD(v3) = *(_DWORD *)(a1 + 56);
  v4 = 0LL;
  v19 = 0;
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
    LdrpLogInternal("minkernel\\ldr\\ldrsnap.c", 4078, (__int64)"LdrpUnloadNode", 2, "Unmapping DLL \"%wZ\"\n", v6 + 9);
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
    LdrpDecrementNodeLoadCountLockHeld(v10, 0, &v19);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v19 )
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
        LdrpUnmapModule(v17);
      LODWORD(v3) = LdrpDereferenceModule((char *)v17);
      v15 = v16;
    }
    while ( v16 != (_QWORD *)a1 );
  }
  return (int)v3;
}
