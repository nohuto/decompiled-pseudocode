/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C0035FD4
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     MultiUserCleanupDCs @ 0x1C00A08D4 (MultiUserCleanupDCs.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C0035C80 (HmgSafeNextObjt.c)
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C00441D0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgSetLock @ 0x1C008A3C0 (HmgSetLock.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0098D6C (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00A4C10 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C0159028 (HmgCheckDCForPrivateReferences.c)
 *     HmgMarkUnXferable @ 0x1C01592D0 (HmgMarkUnXferable.c)
 */

void __fastcall vCleanupDCs(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r13
  __int64 i; // rcx
  struct OBJECT *v4; // rbx
  HDC v5; // rsi
  ENTRYOBJ *EntryFromObject; // rax
  ENTRYOBJ *v7; // rdi
  __int64 v8; // rdx
  ENTRYOBJ *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  GdiHandleEntryDirectory **v17; // rdi
  unsigned int v18; // eax
  struct _ENTRY *Entry; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // r14d
  _QWORD v29[6]; // [rsp+50h] [rbp-30h] BYREF
  struct OBJECT *EntryObject; // [rsp+B8h] [rbp+38h] BYREF

  v1 = (unsigned int)a1;
  EntryObject = 0LL;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( (unsigned int)HmgIsProcessCleanupRequiredByW32Pid((unsigned int)v1) )
  {
    GreAcquireHmgrSemaphore();
    for ( i = 0LL; ; i = v28 )
    {
      v28 = HmgSafeNextObjt(i, 1, &EntryObject);
      if ( !v28 )
        break;
      v4 = EntryObject;
      v5 = *(HDC *)EntryObject;
      EntryFromObject = GdiHandleManager::GetEntryFromObject(*(GdiHandleManager **)(v2 + 8008), EntryObject);
      v7 = EntryFromObject;
      if ( EntryFromObject )
      {
        if ( (unsigned int)ENTRYOBJ::bOwnedBy(EntryFromObject, v1) )
        {
          GreReleaseHmgrSemaphore(v9, v8, v10, v11);
          if ( (*((_BYTE *)v7 + 15) & 0x20) != 0 || *((_DWORD *)v4 + 528) )
          {
            LOBYTE(v12) = 1;
            *((_DWORD *)v4 + 528) = 0;
            HmgMarkUnXferable(v5, v12);
            while ( *((_WORD *)v4 + 6) )
              KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v2 + 2352));
          }
          HmgSetLock(v5);
          GrepDeleteDC(v5);
          GreAcquireHmgrSemaphore();
        }
        else if ( (unsigned int)ENTRYOBJ::bOwnedBy(v9, 0) )
        {
          while ( 1 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v29, v5);
            if ( v29[0] )
              break;
            GreReleaseHmgrSemaphore(v14, v13, v15, v16);
            KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v2 + 2352));
            GreAcquireHmgrSemaphore();
            v17 = *(GdiHandleEntryDirectory ***)(v2 + 8008);
            v18 = GdiHandleManager::DecodeIndex(
                    (GdiHandleManager *)v17,
                    (unsigned __int16)v5 | ((unsigned int)v5 >> 8) & 0xFF0000);
            Entry = GdiHandleEntryDirectory::GetEntry(v17[2], v18, 0);
            if ( !Entry || *((_BYTE *)Entry + 14) != 1 || !(unsigned int)ENTRYOBJ::bOwnedBy(Entry, 0) )
              goto LABEL_19;
            EntryObject = GdiHandleManager::GetEntryObject(
                            (GdiHandleManager *)v17,
                            (unsigned __int16)v5 | ((unsigned int)v5 >> 8) & 0xFF0000);
            v4 = EntryObject;
            DCOBJ::~DCOBJ((DCOBJ *)v29);
          }
          if ( (unsigned int)HmgCheckDCForPrivateReferences(v4, v1) )
          {
            GreReleaseHmgrSemaphore(v21, v20, v22, v23);
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, v29[0], v1, 0LL, 0LL, 0LL, 0);
            XDCOBJ::bCleanDC((XDCOBJ *)v29, 0);
            GreAcquireHmgrSemaphore();
          }
LABEL_19:
          DCOBJ::~DCOBJ((DCOBJ *)v29);
        }
      }
    }
    GreReleaseHmgrSemaphore(v25, v24, v26, v27);
  }
}
