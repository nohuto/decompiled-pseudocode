/*
 * XREFs of ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x140321408
 * Callers:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x14002C0E4 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x14016C284 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14002AFD0 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1400C761C (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpNotifyLSurfaceTracking(
        __int64 (__fastcall **a1)(_QWORD, _QWORD, _QWORD, _QWORD),
        HLSURF a2,
        int a3)
{
  unsigned int v6; // edi
  HSEMAPHORE v7; // rbx
  struct _GRETHREAD *v8; // rax
  HLSURF v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+3Ch] [rbp-Ch]
  __int64 (__fastcall **v14)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp+8h] BYREF
  HSEMAPHORE v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = a1;
  SEMOBJ<8>::SEMOBJ<8>(&v15, (__int64)&v14);
  if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v14) )
  {
    v13 = 0;
    v11 = a2;
    v12 = a3;
    v6 = ((__int64 (__fastcall **)(_QWORD, __int64, __int64, HLSURF *))a1)[428](a1[223], 65544LL, 16LL, &v11);
  }
  else
  {
    v6 = -1073741822;
  }
  v7 = v15;
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DevLock", v15);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      if ( (*((_BYTE *)v8 + 16))-- == 1 )
        *(_QWORD *)v8 &= ~0x100uLL;
      if ( !*(_QWORD *)v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v7);
  }
  return v6;
}
