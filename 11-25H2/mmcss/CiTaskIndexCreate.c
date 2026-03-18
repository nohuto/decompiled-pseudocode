/*
 * XREFs of CiTaskIndexCreate @ 0x1C000D070
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x1C000CEB0 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000D290 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     CiAllocateMemory @ 0x1C0003F60 (CiAllocateMemory.c)
 *     CiFreeMemory @ 0x1C0003FF0 (CiFreeMemory.c)
 *     WPP_SF_ @ 0x1C0004620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0004960 (WPP_SF_d.c)
 *     CiSystemAcquirePushLock @ 0x1C000E130 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiTaskIndexCreate(__int64 a1, __int64 *a2)
{
  __int64 Memory; // rax
  __int64 v5; // rdi
  unsigned int v6; // esi
  _QWORD *v7; // rax
  HANDLE CurrentThreadId; // rax
  struct _DEVICE_OBJECT *DeferredRoutine; // rax
  int v10; // ecx
  PKDEFERRED_ROUTINE **v11; // rax
  struct _DEVICE_OBJECT **DeferredContext; // rdx

  Memory = CiAllocateMemory(200LL);
  v5 = Memory;
  if ( Memory )
  {
    *(_DWORD *)Memory = 2;
    *(_QWORD *)(Memory + 48) = 1LL;
    *(_QWORD *)(Memory + 136) = a1;
    v6 = 0;
    *(_QWORD *)(Memory + 8) = 0LL;
    v7 = (_QWORD *)(Memory + 32);
    v7[1] = v7;
    *v7 = v7;
    *(_QWORD *)(v5 + 152) = PsGetCurrentProcessId();
    CurrentThreadId = PsGetCurrentThreadId();
    *(_QWORD *)(v5 + 80) = 0LL;
    *(_QWORD *)(v5 + 160) = CurrentThreadId;
    *(_DWORD *)(v5 + 88) = 1;
    *(_BYTE *)(v5 + 92) = 0;
    *(_QWORD *)(v5 + 120) = 0LL;
    *(_DWORD *)(v5 + 128) = 1;
    *(_BYTE *)(v5 + 132) = 0;
    *(_DWORD *)(v5 + 184) = 0;
    *(_DWORD *)(v5 + 192) = 3;
    CiSystemAcquirePushLock(&WPP_MAIN_CB.Dpc.DpcListEntry);
    if ( (unsigned int)CiTaskIndicesCount >= 0x80 )
    {
      WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
      ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xBu,
          (__int64)&WPP_8af022b3843c3d7d366520be64f7950a_Traceguids);
      CiFreeMemory((void *)v5);
      return (unsigned int)-1073741527;
    }
    else
    {
LABEL_3:
      DeferredRoutine = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.DeferredRoutine;
      v10 = ++CiTaskIndex;
      while ( DeferredRoutine != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.DeferredRoutine )
      {
        if ( LODWORD(DeferredRoutine[-1].DeviceObjectExtension) == v10 )
          goto LABEL_3;
        DeferredRoutine = *(struct _DEVICE_OBJECT **)&DeferredRoutine->Type;
      }
      ++CiTaskIndicesCount;
      *(_DWORD *)(v5 + 144) = CiTaskIndex;
      v11 = (PKDEFERRED_ROUTINE **)(v5 + 168);
      DeferredContext = (struct _DEVICE_OBJECT **)WPP_MAIN_CB.Dpc.DeferredContext;
      *a2 = v5;
      if ( *DeferredContext != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.DeferredRoutine )
        __fastfail(3u);
      *(_QWORD *)(v5 + 176) = DeferredContext;
      *v11 = &WPP_MAIN_CB.Dpc.DeferredRoutine;
      *DeferredContext = (struct _DEVICE_OBJECT *)v11;
      WPP_MAIN_CB.Dpc.DeferredContext = (PVOID)(v5 + 168);
      WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
      ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
    }
    return v6;
  }
  else
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_8af022b3843c3d7d366520be64f7950a_Traceguids,
        -1073741801);
    return 3221225495LL;
  }
}
