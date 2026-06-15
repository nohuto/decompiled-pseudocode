/*
 * XREFs of ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x14003A540
 * Callers:
 *     ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x14003A420 (-SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z.c)
 * Callees:
 *     ?LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14008CE3C (-LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialCrossProcessBaseEndpoint::CheckResourceLimits(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned __int32 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rcx
  signed __int64 v5; // rdx
  unsigned __int32 v6; // eax
  __int64 v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 736) & -(__int64)TryEnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736)));
  lpCriticalSection = v4;
  if ( v4 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 163) + 64LL), 0, 0) & 0x40) != 0 )
    {
      v5 = _InterlockedCompareExchange64(*((volatile signed __int64 **)this + 163), 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 163) + 8LL), 0LL, 0LL) <= v5 )
      {
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 163) + 16LL), 0, 0);
        if ( a2 >= v6 )
        {
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 163) + 20LL), v6);
          _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 163) + 64LL), 0xFFFFFFBF);
          CSpatialCrossProcessEndpointTraceLogger::LogGrantCompleted(
            (CSpatialCrossProcessBaseEndpoint *)((char *)this + 784),
            v6);
          v7 = *((_QWORD *)this + 97);
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
        }
      }
    }
    v4 = lpCriticalSection;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
