/*
 * XREFs of ?MakeAdapterIdle@DXGADAPTER@@QEAAXXZ @ 0x140397EAC
 * Callers:
 *     ?MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140397DD0 (-MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::MakeAdapterIdle(DXGADAPTER *this)
{
  char *v2; // rsi
  __int64 v3; // rbx
  ULONG TimeIncrement; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v2 = (char *)this + 4864;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 4856) )
  {
    v3 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    v5 = *((_QWORD *)this + 606);
    v6 = v3 * TimeIncrement;
    if ( v6 > v5 )
      *((_QWORD *)this + 605) += v6 - v5;
    *((_QWORD *)this + 606) = 0LL;
    *((_BYTE *)this + 4856) = 0;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
