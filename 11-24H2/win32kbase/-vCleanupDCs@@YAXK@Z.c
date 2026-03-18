/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1400150B4
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     MultiUserCleanupDCs @ 0x140089910 (MultiUserCleanupDCs.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x14000D610 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x140015F3C (-GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x14001F960 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x14001FED0 (GreAcquireHmgrSemaphore.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400348A0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1400349F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x140035220 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgSafeNextObjt @ 0x140086CD0 (HmgSafeNextObjt.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1400A3F70 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1400B8540 (--0XDCOBJ@@QEAA@XZ.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1400F2DAC (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     HmgSetLock @ 0x1401268B8 (HmgSetLock.c)
 *     HmgMarkUnXferable @ 0x14013F370 (HmgMarkUnXferable.c)
 *     HmgCheckDCForPrivateReferences @ 0x14017571C (HmgCheckDCForPrivateReferences.c)
 */

void __fastcall vCleanupDCs(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 i; // rcx
  struct OBJECT *EntryObject; // rbx
  HDC v7; // rsi
  ENTRYOBJ *EntryFromObject; // rax
  ENTRYOBJ *v9; // rdi
  ENTRYOBJ *v10; // rcx
  __int64 v11; // rdx
  GdiHandleManager *v12; // rdi
  struct _ENTRY *EntryFromIndex; // rax
  unsigned int v14; // ebp
  _QWORD v15[6]; // [rsp+50h] [rbp-58h] BYREF
  struct OBJECT *v16; // [rsp+B8h] [rbp+10h] BYREF

  v2 = (unsigned int)a1;
  v16 = 0LL;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 88);
  if ( (unsigned int)HmgIsProcessCleanupRequiredByW32Pid((unsigned int)v2) )
  {
    GreAcquireHmgrSemaphore();
    for ( i = 0LL; ; i = v14 )
    {
      LOBYTE(v4) = 1;
      v14 = HmgSafeNextObjt(i, v4, &v16);
      if ( !v14 )
        break;
      EntryObject = v16;
      v7 = *(HDC *)v16;
      EntryFromObject = GdiHandleManager::GetEntryFromObject(*(GdiHandleManager **)(v3 + 5672), v16);
      v9 = EntryFromObject;
      if ( EntryFromObject )
      {
        if ( (unsigned int)ENTRYOBJ::bOwnedBy(EntryFromObject, v2) )
        {
          GreReleaseHmgrSemaphore();
          if ( (*((_BYTE *)v9 + 15) & 0x20) != 0 || *((_DWORD *)EntryObject + 528) )
          {
            LOBYTE(v11) = 1;
            *((_DWORD *)EntryObject + 528) = 0;
            HmgMarkUnXferable(v7, v11);
            while ( *((_WORD *)EntryObject + 6) )
              KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v3 + 2192));
          }
          HmgSetLock(v7);
          GrepDeleteDC(v7);
          GreAcquireHmgrSemaphore();
        }
        else if ( (unsigned int)ENTRYOBJ::bOwnedBy(v10, 0) )
        {
          XDCOBJ::XDCOBJ((XDCOBJ *)v15);
          while ( 1 )
          {
            XDCOBJ::vLock((XDCOBJ *)v15, v7);
            if ( v15[0] )
              break;
            GreReleaseHmgrSemaphore();
            KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v3 + 2192));
            GreAcquireHmgrSemaphore();
            v12 = *(GdiHandleManager **)(v3 + 5672);
            EntryFromIndex = GdiHandleManager::GetEntryFromIndex(
                               v12,
                               (unsigned __int16)v7 | ((unsigned int)v7 >> 8) & 0xFF0000);
            if ( !EntryFromIndex
              || *((_BYTE *)EntryFromIndex + 14) != 1
              || !(unsigned int)ENTRYOBJ::bOwnedBy(EntryFromIndex, 0) )
            {
              goto LABEL_21;
            }
            EntryObject = GdiHandleManager::GetEntryObject(
                            v12,
                            (unsigned __int16)v7 | ((unsigned int)v7 >> 8) & 0xFF0000);
            v16 = EntryObject;
          }
          if ( (unsigned int)HmgCheckDCForPrivateReferences(EntryObject) )
          {
            GreReleaseHmgrSemaphore();
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, v15[0], v2, 0LL, 0LL, 0LL, 0);
            XDCOBJ::bCleanDC((XDCOBJ *)v15, 0);
            GreAcquireHmgrSemaphore();
          }
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v15);
        }
      }
LABEL_21:
      ;
    }
    GreReleaseHmgrSemaphore();
  }
}
