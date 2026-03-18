/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x14001F2D8
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400D076C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$02@@YAXXZ @ 0x14001F228 (--$GrepReleaseLockValidate@$02@@YAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FC80 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14001FD90 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140021B3C (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140148174 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x140153520 (-bValid@DLODCOBJ@@QEAA_NXZ.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1401550B4 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140157A24 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1402FC664 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareTrgDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, int a3)
{
  unsigned int v6; // ebp
  __int64 v8; // rdx
  __int64 v9; // rbx
  XDCOBJ *v10; // rsi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // r15
  char *v15; // rbx
  __int64 v16; // r15
  int v17; // r12d
  char *v18; // r14
  char *v19; // rsi
  struct _DC_ATTR *v20; // rax
  DC *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  int v26; // eax
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  DC **v31; // rbx
  __int64 v32; // rax
  _QWORD *v33; // rax
  HSEMAPHORE v34; // [rsp+58h] [rbp+10h] BYREF

  v6 = 1;
  if ( !a2 )
    goto LABEL_2;
  v8 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v8 + 36) & 0x200) == 0 )
    goto LABEL_2;
  v9 = *(_QWORD *)(v8 + 48);
  v10 = (DEVLOCKBLTOBJ *)((char *)this + 120);
  XDCOBJ::vLockIgnoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v8);
  if ( *(_QWORD *)v10 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v10 + 44LL) & 2) == 0 )
    {
      if ( (*((_DWORD *)v10 + 8) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr(v10);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(*(DC **)v10, UserAttr) )
          {
            OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)v10);
            *(_QWORD *)v10 = 0LL;
            goto LABEL_11;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)v10 + 44LL) |= 2u;
      *((_DWORD *)v10 + 2) = 1;
    }
    if ( (*(_DWORD *)(*(_QWORD *)v10 + 520LL) & 4) != 0 )
      DC::vMarkTransformDirty(*(DC **)v10);
  }
LABEL_11:
  v12 = *(_QWORD *)(v9 + 1408);
  if ( !*(_QWORD *)v10 || !*((_BYTE *)v10 + 73) )
  {
LABEL_34:
    v6 = 0;
LABEL_2:
    *((_QWORD *)this + 15) = 0LL;
    return v6;
  }
  v13 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v13 & 1) != 0 && (v13 & 0x4000) == 0 && v12 && !*((_QWORD *)this + 36) )
  {
    *(_DWORD *)(*(_QWORD *)v10 + 36LL) |= 0x4000u;
    DC::pSurface(*((DC **)this + 15), (struct SURFACE *)(v12 - 24));
    *((_DWORD *)this + 28) |= 0x10u;
  }
  v14 = *((_QWORD *)this + 15);
  if ( !v14 )
    return v6;
  if ( !*((_BYTE *)this + 193) )
    return v6;
  v15 = (char *)this + 112;
  if ( !_bittest((const signed __int32 *)this + 28, 0xCu) )
    return v6;
  v16 = *(_QWORD *)(v14 + 496);
  if ( !v16 )
    return v6;
  v17 = SURFACE::Map(v16);
  if ( !v17 )
    goto LABEL_19;
  if ( v17 == 1 )
  {
    v15 = (char *)this + 112;
LABEL_19:
    v18 = v15;
    if ( (*(_DWORD *)(v16 + 112) & 0x800) != 0
      && *(_QWORD *)(v16 + 248)
      && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
    {
      *(_DWORD *)v15 |= 0x400u;
      v18 = (char *)this + 112;
    }
    v19 = v15;
    if ( (*(_DWORD *)(v16 + 112) & 0x10) != 0 )
    {
      v19 = v18;
      if ( (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
        *(_DWORD *)v15 |= 0x2000u;
    }
    if ( v17 == 1 )
      *(_DWORD *)v19 |= 0x40u;
    return v6;
  }
  if ( v17 != 2 )
    return v6;
  if ( !a3 )
  {
    if ( _bittest((const signed __int32 *)this + 28, 0xCu) && DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 200)) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    v25 = *((_QWORD *)this + 15);
    if ( v25
      && _bittest((const signed __int32 *)this + 28, 0xCu)
      && (!*((_QWORD *)this + 25)
       || !*((_BYTE *)this + 273)
       || !*((_BYTE *)this + 193)
       || **((_QWORD **)this + 25) != *(_QWORD *)v25) )
    {
      v26 = *(_DWORD *)(v25 + 36);
      if ( (v26 & 0x200) != 0 )
      {
        if ( (v26 & 0x4000) == 0 )
        {
          CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
          v28 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
          v29 = v28 + 8;
          v30 = -v28;
          if ( (v29 & -(__int64)(v30 != 0)) != 0 )
            *(_DWORD *)((v29 & -(__int64)(v30 != 0)) + 0x158) &= ~1u;
        }
        if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 193) && !*((_QWORD *)this + 36)
          || (v33 = (_QWORD *)*((_QWORD *)this + 25)) != 0LL
          && *((_BYTE *)this + 273)
          && **((_QWORD **)this + 15) == *v33
          && !*((_QWORD *)this + 39) )
        {
          SEMOBJSHARED<3>::SEMOBJSHARED<3>(&v34);
          DC::vClearRendering(*((DC **)this + 15));
          EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v34);
          GrepReleaseLockValidate<3>();
          GreReleaseSemaphoreSharedInternal(v34);
        }
      }
    }
    v31 = (DC **)((char *)this + 120);
    v32 = *((_QWORD *)this + 15);
    if ( v32 && *((_BYTE *)this + 192) )
    {
      *(_DWORD *)(v32 + 40) &= ~2u;
      *((_BYTE *)this + 192) = 0;
    }
    if ( *v31 )
    {
      if ( *((_DWORD *)this + 32) && (*((_DWORD *)*v31 + 11) & 2) != 0 )
      {
        if ( (*((_DWORD *)this + 38) & 2) == 0 )
        {
          v20 = XDCOBJ::GetUserAttr((DEVLOCKBLTOBJ *)((char *)this + 120));
          if ( v20 )
            DC::RestoreAttributes(*v31, v20);
        }
        *((_DWORD *)*v31 + 11) &= ~2u;
        *((_DWORD *)this + 32) = 0;
      }
      v21 = *v31;
      v22 = *((unsigned int *)this + 38);
      v23 = *((_QWORD *)this + 17);
      LODWORD(v34) = 0;
      v24 = *(_QWORD *)v21;
      HmgDecrementExclusiveReferenceCountExFastOpt(v23, v21, v22, &v34);
      if ( (_DWORD)v34 )
        GrepDeleteDC(v24, 0x2000000LL);
    }
    goto LABEL_34;
  }
  *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) |= 1u;
  return 0LL;
}
