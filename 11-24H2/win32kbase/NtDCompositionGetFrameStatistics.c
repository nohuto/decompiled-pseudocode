/*
 * XREFs of NtDCompositionGetFrameStatistics @ 0x1400BA540
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x140222888 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetFrameStatistics(void *a1, void *a2)
{
  signed int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  struct _ERESOURCE *v10; // rbx
  __int64 DCompSessionState; // rdi
  struct _ERESOURCE *v12; // rsi
  unsigned __int64 v13; // rdi
  LARGE_INTEGER v14; // rdx
  LARGE_INTEGER PerformanceCounter; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int128 v19; // [rsp+28h] [rbp-60h] BYREF
  int v20; // [rsp+38h] [rbp-50h]
  __int128 Src; // [rsp+40h] [rbp-48h] BYREF
  __int128 v22; // [rsp+50h] [rbp-38h]
  unsigned __int64 v23; // [rsp+60h] [rbp-28h]

  Src = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v4 = a1 == 0LL ? 0xC000000D : 0;
  if ( a1 )
  {
    KeEnterCriticalRegion();
    v5 = 0LL;
    v6 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v9 )
      v6 = *(_QWORD *)(v9 + 256);
    if ( v6 )
    {
      v10 = *(struct _ERESOURCE **)(v6 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v10, 1u);
      v5 = *(_QWORD *)(v6 + 24);
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
      KeLeaveCriticalRegion();
    }
    if ( v5 )
      goto LABEL_29;
    DCompSessionState = W32GetDCompSessionState();
    v12 = *(struct _ERESOURCE **)(DCompSessionState + 32);
    if ( v12 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v12, 1u);
      v5 = *(_QWORD *)(DCompSessionState + 16);
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      ExReleaseResourceLite(*(PERESOURCE *)(DCompSessionState + 32));
      KeLeaveCriticalRegion();
    }
    if ( v5 )
    {
LABEL_29:
      do
      {
        v13 = *(_QWORD *)(v5 + 168);
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&Src = v13;
        DWORD2(Src) = *(_DWORD *)(v5 + 184);
        HIDWORD(Src) = *(_DWORD *)(v5 + 176);
        *(LARGE_INTEGER *)&v22 = PerformanceCounter;
        *((_QWORD *)&v22 + 1) = *(_QWORD *)(v5 + 184);
        v16 = -1LL;
        if ( PerformanceCounter.QuadPart >= v13 )
        {
          v17 = PerformanceCounter.QuadPart - v13;
          v16 = v17 / *(_QWORD *)(v5 + 176);
          v14.QuadPart = v17 % *(_QWORD *)(v5 + 176);
        }
        v23 = v13 + *(_QWORD *)(v5 + 176) * (v16 + 2);
      }
      while ( v13 != *(_QWORD *)(v5 + 168) );
      v19 = *(_OWORD *)(v5 + 352);
      v20 = *(_DWORD *)(v5 + 368);
      v4 = 0;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'((PVOID)v5, v14.LowPart);
    }
    else
    {
      v4 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  if ( v4 >= 0 )
  {
    RtlCopyToUser(a1, &Src, 0x28uLL);
    if ( a2 )
      RtlCopyToUser(a2, &v19, 0x14uLL);
  }
  return (unsigned int)v4;
}
