/*
 * XREFs of ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x1400B788C
 * Callers:
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1400B7860 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140022104 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400B7994 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x1400B7EB8 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x1400B7FD4 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x1400B7FF4 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1400B8070 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1400B817C (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall SURFACE::bUnMapImmediate(SURFACE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // r8d
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  void *v9; // rdi
  unsigned int v10; // eax
  struct _ERESOURCE *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)SURFACE::bRedirectionBitmap(this) && _bittest16((const signed __int16 *)(v2 + 102), 0xBu) )
  {
    v11 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(v2) + 88) + 936LL);
    GreAcquireSemaphoreInternal(v11);
    GrepAcquireLockValidate<36>();
    if ( *((_QWORD *)this + 33) )
    {
      v6 = (_QWORD *)((char *)this + 528);
      v7 = *((_QWORD *)this + 66);
      if ( *(SURFACE **)(v7 + 8) != (SURFACE *)((char *)this + 528)
        || (v8 = (_QWORD *)*((_QWORD *)this + 67), (_QWORD *)*v8 != v6) )
      {
        __fastfail(3u);
      }
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *((_QWORD *)this + 67) = (char *)this + 528;
      *v6 = v6;
      v9 = (void *)*((_QWORD *)this + 9);
      if ( v9 )
      {
        v10 = GrepW32PidFromW32Process(*((struct _W32PROCESS **)this + 33));
        Gre::MapViewOfSectionObj::Unmap(v10, v9);
      }
    }
    if ( (*((_DWORD *)this + 29) & 1) == 0 )
    {
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
    }
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)this + 272));
    W32PIDLOCK::vUnlockSimple((SURFACE *)((char *)this + 272));
    SEMOBJ<36>::vUnlock(&v11, v3, v4);
  }
  return 1LL;
}
