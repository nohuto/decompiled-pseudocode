/*
 * XREFs of PopFxAllocatePowerIrp @ 0x140378380
 * Callers:
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 * Callees:
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopFxTryReferenceDevice @ 0x140377BF0 (PopFxTryReferenceDevice.c)
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 */

__int64 __fastcall PopFxAllocatePowerIrp(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *OldIrql,
        _QWORD *a8)
{
  volatile LONG *v9; // rbp
  KIRQL v14; // al
  __int64 v15; // rdi
  int v16; // esi
  signed __int32 v17; // edx
  char v18; // al
  signed __int32 v19; // r8d
  unsigned __int32 v20; // eax
  signed __int32 v21; // r8d
  signed __int32 v23; // r8d
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  unsigned __int32 v26; // ett
  KIRQL OldIrqla; // [rsp+80h] [rbp+38h]

  v9 = (volatile LONG *)(a1 + 88);
  *OldIrql = 0LL;
  *a8 = 0LL;
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v15 = *(_QWORD *)(a1 + 80);
  OldIrqla = v14;
  if ( v15 )
  {
    v16 = PopFxTryReferenceDevice(v15, 0);
    if ( v16 < 0 )
      goto LABEL_11;
    _m_prefetchw((const void *)(v15 + 32));
    v17 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x10;
    _m_prefetchw((const void *)(v15 + 32));
    v18 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
    if ( v17 )
    {
      if ( (v18 & 0x20) == 0 )
        goto LABEL_9;
      _m_prefetchw((const void *)(v15 + 32));
      v24 = *(_DWORD *)(v15 + 32);
      do
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 32), v24, v24);
      }
      while ( v25 != v24 );
      _m_prefetchw((const void *)(v15 + 32));
      if ( ((v24 & 0x100) != 0) != (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1) )
        goto LABEL_9;
      goto LABEL_22;
    }
    if ( (v18 & 0x10) != 0 )
    {
LABEL_10:
      PopFxDereferenceDevice(v15, 0);
      goto LABEL_11;
    }
    if ( a6 )
    {
      _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
      _InterlockedXor((volatile signed __int32 *)(v15 + 32), 0x100u);
      _m_prefetchw((const void *)(v15 + 32));
      v23 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x100;
      _m_prefetchw((const void *)(v15 + 32));
      if ( (v23 != 0) == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1) )
        _InterlockedAnd((volatile signed __int32 *)(v15 + 32), 0xFFFFFFDF);
      _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x10u);
      v16 = 0;
      *OldIrql = *(_QWORD *)(v15 + 16);
      *a8 = *(_QWORD *)(v15 + 24);
    }
    else
    {
      _m_prefetchw((const void *)(v15 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x20) != 0 )
      {
        _m_prefetchw((const void *)(v15 + 32));
        v19 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x100;
        _m_prefetchw((const void *)(v15 + 32));
        v20 = *(_DWORD *)(v15 + 32);
        do
        {
          v26 = v20;
          v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 32), v20, v20);
        }
        while ( v26 != v20 );
        if ( (v19 != 0) != ((v20 >> 9) & 1) )
        {
LABEL_9:
          _m_prefetchw((const void *)(v15 + 32));
          v21 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x200;
          _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x20u);
          _InterlockedXor((volatile signed __int32 *)(v15 + 32), 0x200u);
          v16 = 259;
          *(_QWORD *)((v21 != 0 ? 8 : 0) + v15 + 552) = a2;
          *(_DWORD *)((v21 != 0 ? 4 : 0) + v15 + 568) = a3;
          *(_QWORD *)((v21 != 0 ? 8 : 0) + v15 + 576) = a4;
          *(_QWORD *)((v21 != 0 ? 8 : 0) + v15 + 592) = a5;
          goto LABEL_10;
        }
LABEL_22:
        v16 = -1073741670;
        goto LABEL_10;
      }
      _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x10u);
      KeResetEvent((PRKEVENT)(v15 + 608));
      v16 = 0;
      *OldIrql = *(_QWORD *)(v15 + 16);
      *a8 = *(_QWORD *)(v15 + 24);
    }
  }
  else
  {
    v16 = -1073741130;
  }
LABEL_11:
  ExReleaseSpinLockExclusive(v9, OldIrqla);
  if ( v15 )
    PopFxAddLogEntry(*(_QWORD *)(v15 + 48), 0, 21, v16);
  return (unsigned int)v16;
}
