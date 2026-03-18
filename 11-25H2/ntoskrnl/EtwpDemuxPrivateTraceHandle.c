/*
 * XREFs of EtwpDemuxPrivateTraceHandle @ 0x140AB0B54
 * Callers:
 *     EtwpNotifyGuid @ 0x140897964 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PidNodeCompare @ 0x14079E640 (PidNodeCompare.c)
 */

__int64 __fastcall EtwpDemuxPrivateTraceHandle(unsigned int a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  struct _LIST_ENTRY *Flink; // r15
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // rbx
  int v13; // esi
  int v14; // eax
  __int64 v15; // rax
  __int64 **v16; // rbx
  __int64 *i; // rax
  unsigned int v18; // ebx
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  signed __int64 v21; // rtt
  unsigned int v22; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 >= 0x40u )
  {
    Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
    CurrentThread = KeGetCurrentThread();
    v9 = (signed __int64 *)&Flink[256];
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((__int64)&Flink[256], 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink[256], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[256], v10, (__int64)&Flink[256]);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v22 = a1;
    v12 = (__int64)Flink[255].Flink;
    if ( ((__int64)Flink[255].Blink & 1) != 0 && v12 )
      v12 ^= (unsigned __int64)&Flink[255];
    v13 = (__int64)Flink[255].Blink & 1;
    while ( v12 )
    {
      v14 = PidNodeCompare(&v22, v12);
      if ( v14 >= 0 )
      {
        if ( v14 <= 0 )
          break;
        v15 = *(_QWORD *)(v12 + 8);
      }
      else
      {
        v15 = *(_QWORD *)v12;
      }
      if ( v13 && v15 )
        v12 ^= v15;
      else
        v12 = v15;
    }
    if ( v12 )
    {
      v16 = (__int64 **)(v12 + 32);
      for ( i = *v16; i != (__int64 *)v16; i = (__int64 *)*i )
      {
        if ( *((_WORD *)i + 9) == a2 )
        {
          v18 = 0;
          *a3 = *((_WORD *)i + 8);
          goto LABEL_27;
        }
      }
    }
    v18 = -1073741162;
LABEL_27:
    _m_prefetchw(v9);
    v19 = *v9;
    v20 = *v9 - 16;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v20 = 0LL;
    if ( (v19 & 2) != 0 || (v21 = *v9, v21 != _InterlockedCompareExchange64(v9, v20, v19)) )
      ExfReleasePushLock(&Flink[256].Flink);
    KeAbPostRelease((ULONG_PTR)&Flink[256]);
    KeLeaveCriticalRegion();
    return v18;
  }
  else
  {
    *a3 = a2;
    return 0LL;
  }
}
