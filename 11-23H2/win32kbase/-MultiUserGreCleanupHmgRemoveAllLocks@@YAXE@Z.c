/*
 * XREFs of ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00350B8
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C0035E00 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C003FAA0 (UserIsProcessImmersiveAppContainer.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C003FAF4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C00441D0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00A4C60 (HmgIsProcessCleanupRequired.c)
 *     HmgIsGarbageCollectibleType @ 0x1C0159298 (HmgIsGarbageCollectibleType.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0159C24 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

void __fastcall MultiUserGreCleanupHmgRemoveAllLocks(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r12
  __int64 CurrentProcess; // rbp
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 CurrentProcessWin32Process; // rax
  GdiHandleManager *v9; // rdi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int NextEntryIndex; // r13d
  struct _ENTRY *v17; // rbx
  struct OBJECT *EntryObject; // rax
  int v19; // ebp
  char v20; // r14
  struct OBJECT *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct OBJECT *v25; // rdi
  char v26; // al
  unsigned int v27; // eax
  struct _ENTRY *v28; // [rsp+30h] [rbp-48h] BYREF
  __int64 v29; // [rsp+38h] [rbp-40h]
  unsigned __int8 v30; // [rsp+88h] [rbp+10h]
  unsigned int v31; // [rsp+90h] [rbp+18h]
  unsigned int v32; // [rsp+98h] [rbp+20h]

  v3 = a1;
  v28 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  v29 = CurrentProcess;
  v7 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
  if ( !*(_DWORD *)(v7 + 3192) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( !(unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process)
      && (v3 != 5 || !(unsigned int)UserIsProcessImmersiveAppContainer(CurrentProcess)) )
    {
      return;
    }
  }
  GreAcquireHmgrSemaphore();
  v9 = *(GdiHandleManager **)(v7 + 8008);
  v31 = 0;
  v32 = 0;
  v10 = 0;
  v30 = 0;
  v11 = 0;
  NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v9, 0, &v28);
  if ( !NextEntryIndex )
    goto LABEL_42;
  do
  {
    v17 = v28;
    if ( !*(_DWORD *)(v7 + 3192) && v3 == 5 && *((_BYTE *)v28 + 14) == 5 && *((char *)v28 + 15) < 0 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(v9, NextEntryIndex);
      if ( *((_QWORD *)EntryObject + 80) == CurrentProcess )
        SURFACE::vAppContainerOwner(EntryObject, 0LL);
    }
    v19 = *(_DWORD *)(v7 + 3192);
    if ( !v19 )
    {
      if ( ((*((_DWORD *)v17 + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) != 0 )
        goto LABEL_39;
      v19 = *(_DWORD *)(v7 + 3192);
    }
    v20 = *((_BYTE *)v17 + 14);
    if ( v3 != v20 && (v3 || (unsigned __int8)(v20 - 1) > 0x1Du) )
    {
LABEL_38:
      v11 = v31;
      goto LABEL_39;
    }
    v21 = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v7 + 8008), NextEntryIndex);
    v24 = 0LL;
    v25 = v21;
    if ( !v19 )
    {
      if ( *((_DWORD *)v21 + 2) )
      {
        LOBYTE(v23) = v20;
        if ( (unsigned int)HmgIsGarbageCollectibleType(v23, v22, 0LL) )
          *((_WORD *)v25 + 7) |= 0x4000u;
      }
    }
    if ( *(_DWORD *)(v7 + 3192) != (_DWORD)v24 )
      goto LABEL_34;
    if ( *((_DWORD *)v25 + 2) == (_DWORD)v24 && (*((_WORD *)v25 + 7) & 0x4000) == 0 )
    {
      if ( *((_WORD *)v25 + 6) )
      {
        if ( !v10 )
        {
          v32 = *((unsigned __int16 *)v25 + 6);
          v30 = *((_BYTE *)v17 + 14);
        }
        v11 = (1 << *((_BYTE *)v17 + 14)) | v31;
        v31 = v11;
        ++v10;
      }
      else
      {
LABEL_34:
        v11 = v31;
      }
      *((_DWORD *)v25 + 2) = v24;
      *((_WORD *)v25 + 6) = v24;
      *((_QWORD *)v25 + 2) = v24;
      *((_DWORD *)v17 + 2) &= ~1u;
      v26 = *((_BYTE *)v17 + 15) & 0xFE;
      *((_BYTE *)v17 + 15) = v26;
      if ( (v26 & 0x20) != 0 )
        *((_QWORD *)v17 + 2) = v24;
      *((_BYTE *)v17 + 15) &= ~0x20u;
      goto LABEL_39;
    }
    LOBYTE(v24) = *((_BYTE *)v17 + 14);
    if ( !(unsigned int)HmgSetOwner(*(_QWORD *)v25, 2147483666LL, v24) )
      goto LABEL_38;
    v11 = v31;
    if ( (*((_WORD *)v25 + 7) & 0x4000) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 1908));
LABEL_39:
    v9 = *(GdiHandleManager **)(v7 + 8008);
    v27 = GdiHandleManager::GetNextEntryIndex(v9, NextEntryIndex, &v28);
    CurrentProcess = v29;
    v13 = 0LL;
    NextEntryIndex = v27;
  }
  while ( v27 );
  if ( v10 )
    TraceLoggingWriteUnsupportedGdiUsage(26LL, v10, v11, v32, v30);
LABEL_42:
  GreReleaseHmgrSemaphore(v13, v12, v14, v15);
}
