/*
 * XREFs of ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x140021474
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$02@@YAXXZ @ 0x14001F228 (--$GrepReleaseLockValidate@$02@@YAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FC80 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14001FD90 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x14002181C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140021B3C (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140148174 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x140153520 (-bValid@DLODCOBJ@@QEAA_NXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14017117C (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareSrcDco(DC **this, struct XDCOBJ *a2, __int64 a3, int a4)
{
  unsigned int v7; // esi
  __int64 v9; // rdx
  XDCOBJ *v10; // rdi
  struct _DC_ATTR *UserAttr; // rax
  int v12; // ecx
  DC *v13; // rbp
  _DWORD *v14; // rdi
  _DWORD *v15; // r14
  DC *v16; // rbp
  int v17; // eax
  DC *v18; // rax
  DC *v19; // rax
  int v20; // ecx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  DC *v25; // rax
  HSEMAPHORE v26; // [rsp+68h] [rbp+10h] BYREF

  v7 = 1;
  if ( !a2 )
    goto LABEL_2;
  v9 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v9 + 36) & 0x200) == 0 )
    goto LABEL_2;
  v10 = (XDCOBJ *)(this + 25);
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)(this + 25), *(HDC *)v9, a3);
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
  if ( !*(_QWORD *)v10 || !*((_BYTE *)v10 + 73) )
    goto LABEL_29;
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v12 & 1) != 0 && (v12 & 0x4000) == 0 && this[35] && !this[39] )
  {
    *(_DWORD *)(*(_QWORD *)v10 + 36LL) |= 0x4000u;
    DC::pSurface(this[25], this[35]);
    *((_DWORD *)this + 28) |= 0x20u;
  }
  v13 = this[25];
  if ( !v13 )
    return v7;
  if ( !*((_BYTE *)this + 273) )
    return v7;
  v14 = this + 14;
  if ( ((_DWORD)this[14] & 0x1000) == 0 )
    return v7;
  v15 = this + 14;
  v16 = (DC *)*((_QWORD *)v13 + 62);
  if ( this[42] )
  {
    GrepCaptureLiveMemoryDump(400LL, 57LL, 1LL);
    v15 = this + 14;
  }
  this[42] = v16;
  if ( !v16 )
    return v7;
  v17 = SURFACE::Map(v16);
  if ( v17 != 2 )
  {
    if ( v17 == 1 )
    {
      *v14 |= 0x80u;
      v14 = v15;
    }
    *v14 |= 0x1000000u;
    return v7;
  }
  if ( !a4 )
  {
    if ( (*v15 & 0x1000) != 0 && DLODCOBJ::bValid((DLODCOBJ *)(this + 15)) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView((DEVLOCKBLTOBJ *)this);
    if ( !this[25] || ((_DWORD)this[14] & 0x1000) == 0 )
      goto LABEL_28;
    if ( *((_BYTE *)this + 273) && (v18 = this[15]) != 0LL && *((_BYTE *)this + 193) )
    {
      if ( *(_QWORD *)this[25] == *(_QWORD *)v18 )
      {
LABEL_28:
        DLODCOBJ::vUnlock((DLODCOBJ *)(this + 25));
LABEL_29:
        v7 = 0;
LABEL_2:
        this[25] = 0LL;
        return v7;
      }
      v19 = this[25];
    }
    else
    {
      v19 = this[25];
    }
    v20 = *((_DWORD *)v19 + 9);
    if ( (v20 & 0x200) != 0 )
    {
      if ( (v20 & 0x4000) == 0 )
      {
        CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
        v22 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
        v23 = v22 + 8;
        v24 = -v22;
        if ( (v23 & -(__int64)(v24 != 0)) != 0 )
          *(_DWORD *)((v23 & -(__int64)(v24 != 0)) + 0x158) &= ~1u;
      }
      v25 = this[15];
      if ( v25 && *((_BYTE *)this + 193) && *(_QWORD *)this[25] == *(_QWORD *)v25 && !this[36]
        || this[25] && *((_BYTE *)this + 273) && !this[39] )
      {
        SEMOBJSHARED<3>::SEMOBJSHARED<3>(&v26);
        DC::vClearRendering(this[25]);
        EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v26);
        GrepReleaseLockValidate<3>();
        GreReleaseSemaphoreSharedInternal(v26);
      }
    }
    goto LABEL_28;
  }
  *((_DWORD *)this[25] + 11) |= 1u;
  return 0LL;
}
