/*
 * XREFs of ?SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z @ 0x14008EE60
 * Callers:
 *     <none>
 * Callees:
 *     ?LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z @ 0x14008CED4 (-LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::SetGrantedObjectCount(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx

  CSpatialCrossProcessEndpointTraceLogger::LogSetGrantedCount(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 760),
    a2,
    a3);
  if ( a2 <= *((_DWORD *)this + 67) )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 712);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 712));
    if ( _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 160) + 8LL), a3) && a3 )
    {
      v6 = -2005139348;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 160) + 16LL), a2);
      _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 160) + 8LL), a3);
      v8 = *((_QWORD *)this + 160);
      if ( a3 )
      {
        _InterlockedOr((volatile signed __int32 *)(v8 + 64), 0x40u);
      }
      else
      {
        _InterlockedExchange((volatile __int32 *)(v8 + 20), a2);
        if ( (unsigned __int64)_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)(*((_QWORD *)this + 160) + 56LL),
                                 0LL,
                                 0LL) >> 32 < a2 )
        {
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 160) + 64LL), 0x40u);
        }
        else
        {
          v9 = *((_QWORD *)this + 94);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
        }
      }
      v6 = 0;
    }
    if ( v7 )
      LeaveCriticalSection(v7);
  }
  else
  {
    return (unsigned int)-2005139347;
  }
  return v6;
}
