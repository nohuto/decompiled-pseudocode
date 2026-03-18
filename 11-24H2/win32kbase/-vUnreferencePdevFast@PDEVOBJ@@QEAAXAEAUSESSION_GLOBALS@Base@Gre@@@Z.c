/*
 * XREFs of ?vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0ED0
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002322C (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     vUnreferencePdevWorker @ 0x14003D4F0 (vUnreferencePdevWorker.c)
 *     ?RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z @ 0x140150AC4 (-RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z.c)
 *     ?TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C3AEC (-TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 */

void __fastcall PDEVOBJ::vUnreferencePdevFast(HDEV *this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  HDEV v4; // rbx
  bool v5; // zf
  int v6; // ebx
  HDEV v7; // rax
  HDEV v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]
  struct _ERESOURCE *v11; // [rsp+40h] [rbp+8h] BYREF

  SEMOBJ<19>::SEMOBJ<19>(&v11, (struct _ERESOURCE **)a2);
  v4 = *this;
  TrackObjectReferenceDecrementFast(a2, 1LL, *((_QWORD *)*this + 442));
  v5 = (*((_DWORD *)v4 + 2))-- == 1;
  v6 = *((_DWORD *)v4 + 2);
  if ( v5 )
    RemoveHDEVFromList((HDEV *)a2 + 481, *this);
  if ( v11 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v11);
  if ( !v6 )
  {
    v7 = *this;
    v10 = 0;
    v8 = v7;
    v9 = 1;
    vUnreferencePdevWorker((__int64)&v8);
  }
}
