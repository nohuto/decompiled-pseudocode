/*
 * XREFs of HmgSetOwner @ 0x14002DC20
 * Callers:
 *     CreateEmptyRgnPublic @ 0x140010E60 (CreateEmptyRgnPublic.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140014D00 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     GreMakeBitmapNonStock @ 0x140015630 (GreMakeBitmapNonStock.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14002C870 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRegionOwner @ 0x14002DBC0 (GreSetRegionOwner.c)
 *     GreSetBitmapOwner @ 0x140036530 (GreSetBitmapOwner.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140038400 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x14010BC10 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 *     GreSetPaletteOwner @ 0x1401C3A90 (GreSetPaletteOwner.c)
 *     bInitPALOBJ @ 0x1402E2008 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1402E2494 (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1402E409C (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402E4824 (bInitBrush.c)
 *     bInitICM @ 0x1402E4910 (bInitICM.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400306B0 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x140032EF8 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     HmgDecProcessHandleCount @ 0x140084620 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1400D9480 (HmgIncProcessHandleCountEx.c)
 *     UMPDGetThreadClientPID @ 0x140135174 (UMPDGetThreadClientPID.c)
 *     HmgIsGarbageCollectibleType @ 0x140173FA0 (HmgIsGarbageCollectibleType.c)
 */

__int64 __fastcall HmgSetOwner(__int64 a1, int a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v6; // r15d
  int v7; // r14d
  __int64 v8; // rsi
  struct OBJECT *EntryObject; // rdi
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int16 v15; // ax
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  int v18; // [rsp+28h] [rbp-18h]
  char v19; // [rsp+2Dh] [rbp-13h]
  __int64 v20; // [rsp+30h] [rbp-10h]
  HSEMAPHORE v21; // [rsp+88h] [rbp+48h] BYREF

  LODWORD(v4) = a2;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  SEMOBJ<20>::SEMOBJ<20>(&v21);
  HANDLELOCK::HANDLELOCK(&v17, a1, 1LL);
  if ( v18 )
  {
    v8 = v17;
    if ( *(_BYTE *)(v17 + 14) == a3 && *(_WORD *)(v17 + 12) == WORD1(a1) )
    {
      EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v20 + 5672), *(_DWORD *)v17);
      CurrentThread = GreGetCurrentThread();
      if ( CurrentThread && *((_QWORD *)CurrentThread + 8) && (_DWORD)v4 )
        v7 = 1;
      if ( !*((_WORD *)EntryObject + 6) )
        goto LABEL_14;
      if ( *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() || v7 )
      {
        v8 = v17;
LABEL_14:
        v6 = 1;
        v11 = *(_DWORD *)(v8 + 8) & 0xFFFFFFFE;
        if ( v7 )
          LODWORD(v4) = UMPDGetThreadClientPID(CurrentThread);
        if ( v11 != (_DWORD)v4 )
        {
          v6 = HmgIncProcessHandleCountEx((unsigned int)v4, 0LL);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v11, v12, v13);
            HANDLELOCK::Pid((HANDLELOCK *)&v17, v4);
            if ( (_DWORD)v4 )
            {
              if ( (_DWORD)v4 != -2147483630 )
              {
                LOBYTE(v14) = a3;
                if ( (unsigned int)HmgIsGarbageCollectibleType(v14) )
                {
                  if ( *((_WORD *)EntryObject + 6) || *((_DWORD *)EntryObject + 2) )
                  {
                    v15 = *((_WORD *)EntryObject + 7);
                    if ( (v15 & 0x40) == 0 )
                      *((_WORD *)EntryObject + 7) = v15 | 0x40;
                  }
                }
              }
            }
          }
        }
        goto LABEL_26;
      }
    }
    v19 = 1;
LABEL_26:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v17);
  SEMOBJ<20>::vUnlock(&v21);
  return v6;
}
