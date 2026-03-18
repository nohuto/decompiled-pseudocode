/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400212B0
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1402FEE34 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$02@@YAXXZ @ 0x14001F228 (--$GrepReleaseLockValidate@$02@@YAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x14002181C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140021B3C (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140148174 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401E09CC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this)
{
  DLODCOBJ *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  DC *v6; // rdx
  _QWORD *v7; // rax
  int v8; // eax
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v15; // rax
  _QWORD v16[5]; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+48h] [rbp-10h]
  HSEMAPHORE v18; // [rsp+60h] [rbp+8h] BYREF

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 200);
  v3 = *((_QWORD *)this + 25);
  if ( v3 && *((_BYTE *)v1 + 73) )
  {
    v4 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
    {
      *(_DWORD *)(v3 + 36) &= ~0x4000u;
      DC::pSurface(*(DC **)v1, *(struct SURFACE **)(v4 + 2544));
    }
    v5 = *((_QWORD *)this + 35);
    if ( v5 )
    {
      v15 = *(_QWORD *)(v5 + 72);
      v16[1] = 0LL;
      v16[0] = 0LL;
      v16[2] = v15;
      v16[3] = 0LL;
      v16[4] = 0LL;
      v17 = 1;
      Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v16);
    }
    v6 = *(DC **)v1;
    if ( *(_QWORD *)v1 )
    {
      if ( (*((_DWORD *)this + 28) & 0x1000) != 0
        && (!*((_BYTE *)this + 273)
         || (v7 = (_QWORD *)*((_QWORD *)this + 15)) == 0LL
         || !*((_BYTE *)this + 193)
         || *(_QWORD *)v6 != *v7) )
      {
        v8 = *((_DWORD *)v6 + 9);
        if ( (v8 & 0x200) != 0 )
        {
          if ( (v8 & 0x4000) == 0 )
          {
            CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
            v10 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
            v11 = v10 + 8;
            v12 = -v10;
            if ( (v11 & -(__int64)(v12 != 0)) != 0 )
              *(_DWORD *)((v11 & -(__int64)(v12 != 0)) + 0x158) &= ~1u;
          }
          v13 = (_QWORD *)*((_QWORD *)this + 15);
          if ( v13 && *((_BYTE *)this + 193) && **(_QWORD **)v1 == *v13 && !*((_QWORD *)this + 36)
            || *(_QWORD *)v1 && *((_BYTE *)v1 + 73) && !*((_QWORD *)this + 39) )
          {
            SEMOBJSHARED<3>::SEMOBJSHARED<3>(&v18);
            DC::vClearRendering(*(DC **)v1);
            EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v18);
            GrepReleaseLockValidate<3>();
            GreReleaseSemaphoreSharedInternal(v18);
          }
        }
      }
    }
    DLODCOBJ::vUnlock(v1);
    *(_QWORD *)v1 = 0LL;
  }
  return 1LL;
}
