/*
 * XREFs of pProcessDfbSurfaces2 @ 0x140085260
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x140085BF0 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1401C3370 (pProcessDfbSurfaces.c)
 * Callees:
 *     bDfbSurfacesMigrated @ 0x14000CB70 (bDfbSurfacesMigrated.c)
 *     IsDwmActive @ 0x1400845E4 (IsDwmActive.c)
 *     pProcessDfbSurfacesInternal @ 0x1400846A0 (pProcessDfbSurfacesInternal.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087714 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087764 (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct _BASEOBJECT *v14; // rbx
  int (*v15)(void); // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  int v19; // eax
  int (*v20)(void); // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64); // rax

  v8 = **(_QWORD **)(W32GetSessionState(a1) + 88) + 520LL;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v8);
  if ( a3 && !(unsigned int)IsDwmActive(v10, v9) )
    goto LABEL_19;
  if ( (*(_DWORD *)(a1 + 116) & 1) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    if ( _bittest((const signed __int32 *)(v11 + 2112), 0x10u)
      && a5
      && _bittest((const signed __int32 *)(a5 + 2112), 0x10u) )
    {
      if ( _bittest((const signed __int32 *)(v11 + 40), 0x11u) && _bittest((const signed __int32 *)(a5 + 40), 0x11u) )
      {
        v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10, v9) + 24) + 720LL);
        if ( !v15 || v15() < 0 )
        {
LABEL_19:
          if ( v8 )
            GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v8);
          return 0LL;
        }
        v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 24)
                                                         + 728LL);
        if ( v18 )
        {
          v19 = v18((a1 + 24) & -(__int64)(a1 != 0), a5);
LABEL_28:
          v14 = (struct _BASEOBJECT *)v19;
          goto LABEL_15;
        }
LABEL_27:
        v19 = 0;
        goto LABEL_28;
      }
      bDfbSurfacesMigrated(a5, a1);
    }
    else if ( !_bittest((const signed __int32 *)(v11 + 40), 0x11u) )
    {
      v12 = *(_QWORD *)(v11 + 24);
      if ( _bittest((const signed __int32 *)(v12 + 40), 0x11u) )
      {
        if ( a4 )
        {
          if ( v8 )
            GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v8);
          return 1LL;
        }
        v20 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v9) + 24) + 704LL);
        if ( !v20 || v20() < 0 )
          goto LABEL_19;
        v23 = *(_QWORD *)(a1 + 144);
        v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 24) + 712LL);
        if ( v24 )
        {
          v19 = v24(v23);
          goto LABEL_28;
        }
        goto LABEL_27;
      }
    }
  }
  v14 = pProcessDfbSurfacesInternal((struct SURFACE *)a1);
LABEL_15:
  if ( v8 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v8);
  return (__int64)v14;
}
