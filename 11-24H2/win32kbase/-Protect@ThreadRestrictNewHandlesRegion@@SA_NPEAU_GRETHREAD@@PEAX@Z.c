/*
 * XREFs of ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401C1DD0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x1400D1108 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     ?MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ @ 0x1400E2118 (-MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ.c)
 *     ??0HANDLELOCK@@QEAA@IW4HandleLockOptions@@@Z @ 0x1400E6750 (--0HANDLELOCK@@QEAA@IW4HandleLockOptions@@@Z.c)
 */

char __fastcall ThreadRestrictNewHandlesRegion::Protect(struct _GRETHREAD *a1, void *a2)
{
  char v2; // bl
  ThreadRestrictNewHandlesRegion *v3; // r14
  unsigned int v4; // ebp
  ThreadRestrictNewHandlesRegion *v5; // rcx
  char result; // al
  __int64 v7; // rdi
  unsigned int *v8; // rbx
  GdiHandleManager *v9; // rdi
  unsigned int v10; // ebx
  struct OBJECT *EntryObject; // rsi
  unsigned int *v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v3 = 0LL;
  v4 = (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000;
  if ( a1 )
    v3 = (ThreadRestrictNewHandlesRegion *)*((_QWORD *)a1 + 42);
  if ( ThreadRestrictNewHandlesRegion::InRegion(v3, v4) )
    return 1;
  result = ThreadRestrictNewHandlesRegion::MakeRoom(v5);
  if ( result )
  {
    HANDLELOCK::HANDLELOCK((__int64)&v12, v4, 1);
    if ( v13 )
    {
      v7 = v14;
      v8 = v12;
      if ( (*((_BYTE *)GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v14 + 5672), *v12) + 14) & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v9 = *(GdiHandleManager **)(v7 + 5672);
      v10 = *v8;
      EntryObject = GdiHandleManager::GetEntryObject(v9, v10);
      *((_WORD *)EntryObject + 7) = *((_WORD *)GdiHandleManager::GetEntryObject(v9, v10) + 7) | 0x20;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v12);
      v2 = 1;
      *(_DWORD *)(*((_QWORD *)v3 + 5) + 4LL * (*((_QWORD *)v3 + 3))++) = v4;
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v12);
    return v2;
  }
  return result;
}
