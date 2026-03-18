/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1400B79C0
 * Callers:
 *     GdiProcessCallout @ 0x140179DD0 (GdiProcessCallout.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140022104 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x1400B7EB8 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 */

__int64 __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  struct _ERESOURCE *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v11);
  v10 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(v2) + 88) + 936LL);
  GreAcquireSemaphoreInternal(v10);
  GrepAcquireLockValidate<36>();
  v4 = (_QWORD *)(a1 + 224);
  v5 = (_QWORD *)*v4;
  if ( *v4 )
  {
    while ( v5 != v4 )
    {
      v3 = (_QWORD *)*v5;
      v7 = v5;
      v8 = v5;
      v5 = v3;
      *(v7 - 33) = 0LL;
      *(v7 - 34) = 0LL;
      if ( (_QWORD *)v3[1] != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v8) )
        __fastfail(3u);
      *v9 = v3;
      v3[1] = v9;
      v8[1] = v8;
      *v8 = v8;
    }
  }
  v4[1] = v4;
  *v4 = v4;
  SEMOBJ<36>::vUnlock(&v10, (__int64)v5, (int)v3);
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
           (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
           v11);
}
