/*
 * XREFs of ?OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x140197F14
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140223EAC (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x140135E14 (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CChannelGroup::OnConnectionReconnected(DirectComposition::CChannelGroup *this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi

  v1 = 0LL;
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 3);
    if ( v1 >= v3 )
      break;
    v4 = (_QWORD *)(*(_QWORD *)this + v1 * *((_QWORD *)this + 4));
    while ( 1 )
    {
      v5 = v1++;
      if ( *v4 )
        break;
      v4 = (_QWORD *)((char *)v4 + *((_QWORD *)this + 4));
      if ( v1 >= v3 )
        return;
    }
    _mm_lfence();
    v6 = *(_QWORD *)(*((_QWORD *)this + 4) * v5 + *(_QWORD *)this);
    if ( !v6 )
      break;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 4, 3) == 3
      && DirectComposition::CCriticalSection::TryAcquireExclusive(*(PERESOURCE *)(v6 + 32)) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 5, 4) == 4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
      KeLeaveCriticalRegion();
    }
  }
}
