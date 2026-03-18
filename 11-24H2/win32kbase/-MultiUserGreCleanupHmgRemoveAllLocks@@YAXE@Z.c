/*
 * XREFs of ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140014D00
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x140089AA0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1400BF0C0 (UserIsProcessImmersiveAppContainer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x140159DB8 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x14019DF94 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

void __fastcall MultiUserGreCleanupHmgRemoveAllLocks(char a1)
{
  __int64 CurrentProcess; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v7; // r15d
  unsigned int v8; // r13d
  GdiHandleManager *v9; // rbx
  int v10; // r8d
  unsigned int NextEntryIndex; // r12d
  struct _ENTRY *v12; // rdi
  struct OBJECT *EntryObject; // rbx
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  HSEMAPHORE v19; // rbx
  struct _GRETHREAD *v20; // rax
  bool v21; // zf
  int v22; // esi
  struct OBJECT *v23; // rax
  struct OBJECT *v24; // rbx
  unsigned int v25; // eax
  char v26; // al
  HSEMAPHORE v27; // rbx
  struct _GRETHREAD *v28; // rax
  struct _ENTRY *v29; // [rsp+30h] [rbp-58h] BYREF
  HSEMAPHORE v30; // [rsp+38h] [rbp-50h] BYREF
  HSEMAPHORE v31[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v32; // [rsp+98h] [rbp+10h]
  unsigned int v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v29 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  v34 = CurrentProcess;
  v5 = *(_QWORD *)(W32GetSessionState(v4, v3) + 88);
  if ( !*(_DWORD *)(v5 + 3032) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && !*(_DWORD *)(CurrentProcessWin32Process + 64)
        && (a1 != 5 || !(unsigned int)UserIsProcessImmersiveAppContainer(CurrentProcess)) )
      {
        return;
      }
    }
  }
  SEMOBJ<20>::SEMOBJ<20>(v31);
  v33 = 0;
  v7 = 0;
  v32 = 0;
  v8 = 0;
  v9 = *(GdiHandleManager **)(v5 + 5672);
  NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v9, 0, &v29);
  if ( !NextEntryIndex )
    goto LABEL_51;
  do
  {
    v12 = v29;
    if ( *(_DWORD *)(v5 + 3032) )
      goto LABEL_26;
    if ( a1 == 5 && *((_BYTE *)v29 + 14) == 5 && *((char *)v29 + 15) < 0 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(v9, NextEntryIndex);
      v14 = (_QWORD *)*((_QWORD *)EntryObject + 80);
      v15 = v14 ? *v14 : 0LL;
      if ( v15 == CurrentProcess )
      {
        SEMOBJ<20>::SEMOBJ<20>(&v30);
        v16 = HmgPentryFromPobj(EntryObject);
        *(_BYTE *)(v16 + 15) &= ~0x80u;
        *((_QWORD *)EntryObject + 80) = 0LL;
        v19 = v30;
        if ( v30 )
        {
          if ( WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            McTemplateK0pz_EtwWriteTransfer(v17, (unsigned int)&LockRelease, v18, (_DWORD)v30, (__int64)L"Hmgr");
          v20 = GreGetCurrentThreadCrossSessionCheck();
          if ( v20 )
          {
            v21 = (*((_BYTE *)v20 + 28))-- == 1;
            if ( v21 )
              *(_QWORD *)v20 &= ~0x100000uLL;
          }
          GreReleaseSemaphoreSharedInternal(v19);
          v30 = 0LL;
        }
      }
    }
    if ( *(_DWORD *)(v5 + 3032)
      || ((*((_DWORD *)v12 + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
    {
LABEL_26:
      v22 = *((unsigned __int8 *)v12 + 14);
      if ( a1 != (_BYTE)v22 && (a1 || (unsigned __int8)(v22 - 1) > 0x1Du) )
        goto LABEL_47;
      v23 = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v5 + 5672), NextEntryIndex);
      v24 = v23;
      if ( *(_DWORD *)(v5 + 3032) )
        goto LABEL_44;
      if ( *((_DWORD *)v23 + 2) && (v22 == 5 || v22 == 7 || v22 == 8 || v22 == 9 || v22 == 16) )
        *((_WORD *)v23 + 7) |= 0x40u;
      if ( *(_DWORD *)(v5 + 3032) )
        goto LABEL_44;
      if ( !*((_DWORD *)v23 + 2) && (*((_BYTE *)v23 + 14) & 0x40) == 0 )
      {
        v25 = *((unsigned __int16 *)v23 + 6);
        if ( (_WORD)v25 )
        {
          if ( !v7 )
          {
            v33 = v25;
            v32 = *((_BYTE *)v12 + 14);
          }
          v8 |= 1 << *((_BYTE *)v12 + 14);
          ++v7;
        }
LABEL_44:
        *((_DWORD *)v24 + 2) = 0;
        *((_WORD *)v24 + 6) = 0;
        *((_QWORD *)v24 + 2) = 0LL;
        *((_BYTE *)v12 + 6) = 0;
        v26 = *((_BYTE *)v12 + 15) & 0xFE;
        *((_BYTE *)v12 + 15) = v26;
        if ( (v26 & 0x20) != 0 )
          *((_QWORD *)v12 + 2) = 0LL;
        *((_BYTE *)v12 + 15) &= ~0x20u;
LABEL_47:
        CurrentProcess = v34;
        goto LABEL_48;
      }
      if ( !(unsigned int)HmgSetOwner(*(_QWORD *)v23, 2147483666LL, *((unsigned __int8 *)v12 + 14)) )
        goto LABEL_47;
      CurrentProcess = v34;
      if ( (*((_BYTE *)v24 + 14) & 0x40) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 1756));
    }
LABEL_48:
    v9 = *(GdiHandleManager **)(v5 + 5672);
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v9, NextEntryIndex, &v29);
  }
  while ( NextEntryIndex );
  if ( v7 )
    TraceLoggingWriteUnsupportedGdiUsage(NextEntryIndex + 26, v7, v8, v33, v32);
LABEL_51:
  v27 = v31[0];
  if ( v31[0] )
  {
    if ( WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer((unsigned int)L"Hmgr", (unsigned int)&LockRelease, v10, v31[0], (__int64)L"Hmgr");
    v28 = GreGetCurrentThreadCrossSessionCheck();
    if ( v28 )
    {
      v21 = (*((_BYTE *)v28 + 28))-- == 1;
      if ( v21 )
        *(_QWORD *)v28 &= ~0x100000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v27);
  }
}
