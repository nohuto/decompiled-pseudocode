/*
 * XREFs of ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x140205808
 * Callers:
 *     ProcessChannelSuspended @ 0x140205F00 (ProcessChannelSuspended.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelSuspended(DXGVMBUSCHANNEL *this, __int64 a2, __int64 a3, __int64 a4)
{
  DXGVMBUSCHANNEL *v5; // rdi
  DXGVMBUSCHANNEL *v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  struct _KEVENT *v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  WdLogGlobalForLineNumber = 664;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v5 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 6);
  while ( v5 != (DXGVMBUSCHANNEL *)((char *)this + 48) )
  {
    v6 = v5;
    v5 = *(DXGVMBUSCHANNEL **)v5;
    v7 = (__int64)v6 + 120;
    if ( !v6 )
      v7 = 136LL;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 32LL))(*(_QWORD *)v7);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  v8 = *((_QWORD *)this + 4) == 0LL;
  *((_BYTE *)this + 25) = 1;
  if ( !v8 )
  {
    if ( *((_BYTE *)this + 26) )
    {
      WdLogSingleEntry1(3LL, this);
      v9 = (struct _KEVENT *)*((_QWORD *)this + 4);
      WdLogGlobalForLineNumber = 699;
      KeSetEvent(v9, 0, 0);
    }
  }
}
