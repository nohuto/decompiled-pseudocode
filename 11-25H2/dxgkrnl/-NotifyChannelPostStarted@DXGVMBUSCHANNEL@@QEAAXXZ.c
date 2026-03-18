/*
 * XREFs of ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1402056F8
 * Callers:
 *     ProcessChannelPostStarted @ 0x140205E80 (ProcessChannelPostStarted.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelPostStarted(DXGVMBUSCHANNEL *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  DXGVMBUSCHANNEL *v6; // rsi
  DXGVMBUSCHANNEL *v7; // rcx
  __int64 v8; // rax
  char v9; // si
  struct _KEVENT *v10; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  WdLogGlobalForLineNumber = 715;
  if ( *((struct _KTHREAD **)this + 18) != KeGetCurrentThread() )
  {
    DXGFASTMUTEX::Acquire((DXGVMBUSCHANNEL *)((char *)this + 120));
    v5 = 1;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v6 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 6);
  while ( v6 != (DXGVMBUSCHANNEL *)((char *)this + 48) )
  {
    v7 = v6;
    v6 = *(DXGVMBUSCHANNEL **)v6;
    v8 = (__int64)v7 + 120;
    if ( !v7 )
      v8 = 136LL;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 48LL))(*(_QWORD *)v8);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  v9 = *((_BYTE *)this + 26);
  *(_WORD *)((char *)this + 25) = 0;
  if ( v5 )
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 15);
  ExReInitializeRundownProtection((PEX_RUNDOWN_REF)this + 8);
  v10 = (struct _KEVENT *)*((_QWORD *)this + 4);
  if ( v10 )
  {
    if ( v9 )
      KeSetEvent(v10, 0, 0);
  }
}
