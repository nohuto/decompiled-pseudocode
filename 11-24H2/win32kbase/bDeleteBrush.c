/*
 * XREFs of bDeleteBrush @ 0x140014820
 * Callers:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14000D550 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1400147BC (-vCleanupBrushes@@YAXK@Z.c)
 *     NtGdiDeleteObjectApp @ 0x14002B3A0 (NtGdiDeleteObjectApp.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C4C40 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CDF18 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x14000D050 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     bPEBCacheHandle @ 0x14002DDC0 (bPEBCacheHandle.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x140031C10 (HmgRemoveObject.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     bDeleteSurface @ 0x1400365C0 (bDeleteSurface.c)
 *     HmgFreeObjectAttr @ 0x140039540 (HmgFreeObjectAttr.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x14003CBE0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1400407C8 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140085760 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140085B74 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1400B6DF0 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ??0HANDLELOCK@@QEAA@XZ @ 0x1400CAF14 (--0HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400D0C38 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x14019B948 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x14019D294 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2, int a3)
{
  ULONG_PTR v5; // rbx
  unsigned int v6; // r13d
  int v7; // esi
  _DWORD *v8; // r12
  unsigned int *v9; // r12
  void *v10; // rax
  int v11; // edx
  int v12; // eax
  void *v13; // rcx
  __int64 v14; // rcx
  int v15; // r8d
  volatile signed __int32 *v16; // rcx
  int v17; // r8d
  unsigned int *v19; // [rsp+40h] [rbp-98h] BYREF
  int v20; // [rsp+48h] [rbp-90h]
  char v21; // [rsp+4Dh] [rbp-8Bh]
  __int64 v22; // [rsp+50h] [rbp-88h]
  _DWORD *v23; // [rsp+60h] [rbp-78h]
  struct OBJECT *EntryObject; // [rsp+68h] [rbp-70h]
  _QWORD v25[13]; // [rsp+70h] [rbp-68h] BYREF

  v5 = 0LL;
  v6 = 1;
  v7 = 1;
  v8 = 0LL;
  if ( !a2 )
  {
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v19);
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v19, a1, 0x10u);
    if ( !v20 )
    {
LABEL_9:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v19);
      goto LABEL_10;
    }
    v9 = v19;
    EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v22 + 5672), *v19);
    v8 = (_DWORD *)GreDecodeUserModePointer(*((void **)v9 + 2));
    v23 = v8;
    if ( HANDLELOCK::ShareCount((HANDLELOCK *)&v19) )
    {
      **((_DWORD **)EntryObject + 6) = 2;
      v21 = 1;
    }
    else
    {
      if ( !v8 )
        goto LABEL_6;
      if ( (*v8 & 1) == 0 )
      {
        v11 = *((_DWORD *)EntryObject + 10) & 0x400;
        if ( (*((_DWORD *)EntryObject + 10) & 0x10) != 0
          && (!v11 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
          && (unsigned int)bPEBCacheHandle(v11 != 0, (_DWORD)v8, (_DWORD)v19, (unsigned int)&v19, 0LL) )
        {
          v7 = 0;
        }
        v6 = v7;
        goto LABEL_6;
      }
    }
    v7 = 0;
LABEL_6:
    if ( v6 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v19);
    v6 = 1;
    goto LABEL_9;
  }
LABEL_10:
  if ( !v7 )
    return v6;
  if ( a3 )
  {
    if ( a3 != 1 )
      goto LABEL_24;
    v10 = HmgRemoveObjectImpl(a1, 0, 1, 2u, 16, 0LL);
  }
  else
  {
    v10 = (void *)HmgRemoveObject((_DWORD)a1, 0, 0, 0, 16, 0LL);
  }
  v5 = (ULONG_PTR)v10;
LABEL_24:
  if ( v5 )
  {
    v12 = *(_DWORD *)(v5 + 40);
    if ( (v12 & 0x400) != 0 )
    {
      v13 = *(void **)(v5 + 152);
      if ( v13 )
      {
        if ( (v12 & 0x4000) == 0 )
          GreDeleteFastMutex(v13);
      }
    }
    v14 = *(_QWORD *)(v5 + 24);
    if ( v14 )
      bDeleteSurface(v14);
    if ( *(_DWORD *)(v5 + 100) != -1 )
    {
      v15 = *(_DWORD *)(v5 + 40);
      if ( v15 >= 0 )
      {
        v16 = *(volatile signed __int32 **)(v5 + 120);
        v17 = v15 & 0x40000000;
        if ( _InterlockedExchangeAdd(v16, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v16, v17 != 0);
        *(_QWORD *)(v5 + 120) = 0LL;
      }
    }
    if ( (*(_DWORD *)(v5 + 40) & 0x80u) != 0 )
      BRUSH::vDeleteIcmDIBs((BRUSH *)v5);
    if ( *(_QWORD *)(v5 + 136) )
      ReleaseReferenceCountedObjectHandle(2LL);
    FreeBrushMemory(v5);
    if ( !a2 && v8 )
      HmgFreeObjectAttr(v8);
  }
  else
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v25, (HBRUSH)a1);
    if ( !v25[0] || (*(_DWORD *)(v25[0] + 40LL) & 0x200) == 0 )
      v6 = 0;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v25);
  }
  return v6;
}
