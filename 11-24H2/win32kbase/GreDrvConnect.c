/*
 * XREFs of GreDrvConnect @ 0x1401CE420
 * Callers:
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140012DEC (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001397C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F2CC (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140021264 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002322C (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140088F80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014273C (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014DB74 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDrvConnect(_QWORD *a1)
{
  struct _ERESOURCE **v2; // rbx
  int v3; // r8d
  struct _ERESOURCE *i; // rbx
  unsigned int v5; // edi
  unsigned int (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _ERESOURCE *v7; // rbx
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  struct _ERESOURCE *v10; // rbx
  struct _GRETHREAD *v11; // rax
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  struct _ERESOURCE *v16; // [rsp+78h] [rbp+28h] BYREF
  HSEMAPHORE v17; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v18; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  SEMOBJ<1>::SEMOBJ<1>(&v15, v2);
  SEMOBJ<2>::SEMOBJ<2>(&v14, v2);
  SEMOBJ<3>::SEMOBJ<3>(&v13, v2);
  SEMOBJ<6>::SEMOBJ<6>(&v18, v2);
  SEMOBJ<10>::SEMOBJ<10>(&v17, v2);
  SEMOBJ<19>::SEMOBJ<19>(&v16, v2);
  for ( i = v2[216]; ; i = (struct _ERESOURCE *)i->SystemResourcesList.Flink )
  {
    v5 = 0;
    if ( !i )
      break;
    if ( i->OwnerTable )
    {
      if ( LODWORD(i->SharedWaiters) == 1 )
      {
        v6 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)&i[8].NumberOfSharedWaiters
                                                                           + 616LL);
        if ( v6 )
        {
          if ( !v6(a1[3], a1[2], a1[1], a1[4]) )
          {
            i->ContentionCount = 4;
            v5 = -2143354875;
            break;
          }
          i->ContentionCount = 1;
        }
      }
    }
  }
  if ( v16 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v16);
  v7 = (struct _ERESOURCE *)v17;
  if ( v17 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v17, v3);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      v9 = (*((_BYTE *)v8 + 18))-- == 1;
      if ( v9 )
        *(_QWORD *)v8 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v7);
  }
  v10 = (struct _ERESOURCE *)v18;
  if ( v18 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v18, v3);
    v11 = GreGetCurrentThreadCrossSessionCheck();
    if ( v11 )
    {
      v9 = (*((_BYTE *)v11 + 14))-- == 1;
      if ( v9 )
        *(_QWORD *)v11 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v10);
  }
  if ( v13 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v13,
      v3);
  if ( v14 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v14);
  if ( v15 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v15);
  return v5;
}
