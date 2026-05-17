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

__int64 __fastcall LdrpUnloadNode(__int64 a1)
{
  struct _PEB *v1; // r14
  __int64 result; // rax
  void (__fastcall *v4)(_QWORD *); // rdi
  _QWORD *i; // rsi
  __int64 v6; // rdx
  __int64 **v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // r8
  _QWORD **v11; // rdx
  _QWORD *v12; // rax
  _QWORD **v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  result = *(unsigned int *)(a1 + 56);
  v4 = 0LL;
  v18 = 0;
  if ( (_DWORD)result != -4 )
  {
    if ( (_DWORD)result == 7 )
      goto LABEL_3;
    if ( (_DWORD)result != 9 )
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
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      LdrpSendDllNotifications(i - 20, 2LL);
      if ( v4 )
        v4(i - 20);
      SbUpdateSwitchContextBasedOnDll(i - 20, v6, 1LL);
      if ( (v1->NtGlobalFlag & 0x100) != 0 )
        AVrfDllUnloadNotification(i - 20);
    }
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      4078,
      (int)"LdrpUnloadNode",
      2,
      "Unmapping DLL \"%wZ\"\n",
      (_BYTE)i - 88);
    LdrUnloadAlternateResourceModuleEx(*(i - 14), 0);
  }
  result = RtlLeaveCriticalSection(&LdrpDllNotificationLock);
LABEL_13:
  while ( 1 )
  {
    v7 = *(__int64 ***)(a1 + 40);
    if ( !v7 )
      break;
    v8 = *v7;
    if ( *v7 == (__int64 *)v7 )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    else
    {
      result = *v8;
      *v7 = (__int64 *)*v8;
    }
    if ( !v8 )
      break;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
    v9 = v8[1];
    v10 = v8 + 2;
    v11 = *(_QWORD ***)(v9 + 48);
    v12 = *v11;
    if ( *v11 != v8 + 2 )
    {
      do
      {
        v11 = (_QWORD **)v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 != v10 );
    }
    *v11 = (_QWORD *)*v10;
    if ( *(_QWORD **)(v9 + 48) == v10 )
    {
      v13 = 0LL;
      if ( v11 != v10 )
        v13 = v11;
      *(_QWORD *)(v9 + 48) = v13;
    }
    LdrpDecrementNodeLoadCountLockHeld(v9, 0, &v18);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v18 )
      LdrpUnloadNode(v9);
    result = RtlFreeHeap(LdrpHeap, 0LL, v8);
  }
  v14 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v14 != (_QWORD *)a1 )
  {
    do
    {
      v15 = (_QWORD *)*v14;
      *((_DWORD *)v14 - 14) |= 2u;
      v16 = (__int64)(v14 - 20);
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
      LdrpRemoveDataTableEntry(v16);
      if ( *(char *)(v16 + 104) < 0 )
      {
        RtlRbRemoveNode((unsigned __int64)&LdrpMappingInfoIndex, (unsigned __int64 *)(v16 + 224));
        RtlRbRemoveNode((unsigned __int64)&LdrpModuleBaseAddressIndex, (unsigned __int64 *)(v16 + 200));
        *(_DWORD *)(v16 + 64) = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( LdrpIsSecureProcess )
        LdrpUnmapModule(v16, v17);
      result = LdrpDereferenceModule(v16);
      v14 = v15;
    }
    while ( v15 != (_QWORD *)a1 );
  }
  return result;
}
