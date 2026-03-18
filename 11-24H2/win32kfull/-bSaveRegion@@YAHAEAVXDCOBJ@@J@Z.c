/*
 * XREFs of ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x14025C360
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140076B48 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140094688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1402595AC (--0DCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bSaveRegion(struct XDCOBJ *a1, int a2)
{
  __int64 v3; // kr00_8
  _QWORD *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-29h] BYREF
  __int64 v11; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v12[10]; // [rsp+30h] [rbp-19h] BYREF
  struct _RECTL v13; // [rsp+80h] [rbp+37h] BYREF

  if ( a2 == 1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
    v13.top = HIDWORD(v3);
    v13.right = v3;
    v13.left = 0;
    v13.bottom = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10);
    if ( v10 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) )
      {
        SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v11, *((_QWORD **)a1 + 2));
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v11);
      }
      RGNOBJ::vSet((RGNOBJ *)&v10, &v13);
      v5 = *(_QWORD **)a1;
      CPushLock::AcquireLockExclusive((CPushLock *)(*(_QWORD *)a1 + 1112LL));
      *(_QWORD *)(*(_QWORD *)a1 + 1136LL) = v10;
      CPushLock::ReleaseLock((CPushLock *)(v5 + 139));
      return 1LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v12, *(HDC *)(*(_QWORD *)a1 + 112LL), *((struct Gre::Base::SESSION_GLOBALS **)a1 + 2));
    v6 = v12[0];
    v7 = 0;
    if ( v12[0] )
    {
      v8 = *(_QWORD *)(v12[0] + 168LL);
      if ( v8 )
      {
        ++*(_DWORD *)(v8 + 76);
        v6 = v12[0];
      }
      v9 = *(_QWORD *)(v6 + 160);
      if ( v9 )
        ++*(_DWORD *)(v9 + 76);
      v7 = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return v7;
  }
}
