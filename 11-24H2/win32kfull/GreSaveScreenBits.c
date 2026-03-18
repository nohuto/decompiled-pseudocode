/*
 * XREFs of GreSaveScreenBits @ 0x1403308B4
 * Callers:
 *     FreeSpb @ 0x1400979B0 (FreeSpb.c)
 *     CreateSpb @ 0x1400980B0 (CreateSpb.c)
 *     ?SpbApc@@YAXPEAX00@Z @ 0x1402AF390 (-SpbApc@@YAXPEAX00@Z.c)
 *     RestoreSpb @ 0x1402AF460 (RestoreSpb.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1402DD95C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140023F40 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF14 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSaveScreenBits(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4)
{
  __int64 v8; // rdi
  struct Gre::Base::SESSION_GLOBALS *v9; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, __int128 *); // rbp
  __int64 v11; // rax
  __int128 *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h] BYREF
  __int128 v20; // [rsp+48h] [rbp-50h] BYREF

  v20 = 0LL;
  v8 = 0LL;
  v9 = Gre::Base::Globals((Gre::Base *)a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v19, v9);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v18, v9);
  if ( (*(_DWORD *)(a1 + 40) & 0x400) == 0 )
  {
    SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v17, v9);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(a1 + 3000);
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 2544);
      v12 = &v20;
      if ( a2 != 2 )
        v12 = a4;
      v13 = 0LL;
      v14 = (v11 + 24) & -(__int64)(v11 != 0);
      if ( v14 )
      {
        v15 = *(_DWORD *)(((v11 + 24) & -(__int64)(v11 != 0)) + 0x58);
        if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
        {
          v13 = v14 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v14 - 24 + 48));
        }
      }
      v8 = v10(v14, a2, a3, v12);
      if ( v13 )
        GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
    }
    if ( v17 )
      GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v17);
  }
  if ( v18 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v18);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v19);
  return v8;
}
