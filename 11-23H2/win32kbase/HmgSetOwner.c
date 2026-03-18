/*
 * XREFs of HmgSetOwner @ 0x1C003E5F0
 * Callers:
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00350B8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     GreSetBitmapOwner @ 0x1C003AA60 (GreSetBitmapOwner.c)
 *     GreSetRegionOwner @ 0x1C003E590 (GreSetRegionOwner.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C003EDB0 (SetOrCreateRectRgnIndirectPublic.c)
 *     CreateEmptyRgnPublic @ 0x1C005CAC0 (CreateEmptyRgnPublic.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C005EB50 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005F74C (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMakeBitmapNonStock @ 0x1C0060A30 (GreMakeBitmapNonStock.c)
 *     GreSetBitmapOwnerEx @ 0x1C0062058 (GreSetBitmapOwnerEx.c)
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 *     GreSetPaletteOwner @ 0x1C016CE70 (GreSetPaletteOwner.c)
 *     bInitPALOBJ @ 0x1C02DBCC4 (bInitPALOBJ.c)
 *     bInitICM @ 0x1C02DDB24 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C02DE010 (bInitBMOBJ.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C003F938 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C0040440 (HmgIncProcessHandleCountEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00443E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0046E44 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgIsGarbageCollectibleType @ 0x1C0159298 (HmgIsGarbageCollectibleType.c)
 */

__int64 __fastcall HmgSetOwner(unsigned int a1, int a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v6; // ebp
  int v7; // r14d
  __int64 v8; // rsi
  struct OBJECT *v9; // rdi
  __int64 CurrentThread; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+38h] [rbp-30h]

  LODWORD(v4) = a2;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  GreAcquireHmgrSemaphore();
  v22 = 0LL;
  v23 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v22, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v23 )
  {
    v8 = v22;
    if ( *(_BYTE *)(v22 + 14) == a3 && *(_WORD *)(v22 + 12) == HIWORD(a1) )
    {
      v9 = HANDLELOCK::pObj((HANDLELOCK *)&v22);
      CurrentThread = W32GetCurrentThread();
      if ( CurrentThread )
      {
        v11 = *(_QWORD *)(CurrentThread + 72);
        if ( v11 && (_DWORD)v4 )
          v7 = 1;
      }
      else
      {
        v11 = 0LL;
      }
      if ( !*((_WORD *)v9 + 6) )
        goto LABEL_15;
      if ( *((struct _KTHREAD **)v9 + 2) == KeGetCurrentThread() || v7 )
      {
        v8 = v22;
LABEL_15:
        v6 = 1;
        v12 = *(_DWORD *)(v8 + 8) & 0xFFFFFFFE;
        if ( v7 )
          LODWORD(v4) = *(_DWORD *)(v11 + 8);
        if ( v12 != (_DWORD)v4 )
        {
          v6 = HmgIncProcessHandleCountEx(v4);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v12);
            HANDLELOCK::Pid((HANDLELOCK *)&v22, v4);
            if ( (_DWORD)v4 )
            {
              if ( (_DWORD)v4 != -2147483630 )
              {
                LOBYTE(v14) = a3;
                if ( (unsigned int)HmgIsGarbageCollectibleType(v14, v13, v15) )
                {
                  if ( *((_WORD *)v9 + 6) || *((_DWORD *)v9 + 2) )
                  {
                    v16 = *((_WORD *)v9 + 7);
                    if ( (v16 & 0x4000) == 0 )
                      *((_WORD *)v9 + 7) = v16 | 0x4000;
                  }
                }
              }
            }
          }
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v22);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v22);
  GreReleaseHmgrSemaphore(v18, v17, v19, v20);
  return v6;
}
