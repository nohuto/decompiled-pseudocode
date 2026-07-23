/*
 * XREFs of MmReleaseResourceCharge @ 0x1402F8EFC
 * Callers:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRestockOverCommit @ 0x14042CEF4 (MiRestockOverCommit.c)
 */

unsigned __int64 __fastcall MmReleaseResourceCharge(_QWORD *a1, __int64 a2, char a3, int a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbx
  char v6; // r11
  __int64 v7; // rdi
  KIRQL v8; // r14
  struct _KPRCB *CurrentPrcb; // r8
  __int64 i; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  bool v14; // cf
  volatile LONG *v15; // rcx
  unsigned __int64 v16; // rdx
  struct _KEVENT *v17; // rcx
  struct _KEVENT *v18; // rcx
  struct _KEVENT *v19; // rcx
  struct _KEVENT *v20; // rcx
  volatile LONG *v21; // rcx
  KIRQL v22; // bp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = *a1;
  v6 = a3;
  v7 = a2;
  if ( (a3 & 2) != 0 && !a4 )
    result = MiReturnResident(*a1, a2);
  if ( (v6 & 1) == 0 || !v7 )
    return result;
  v8 = 17;
  if ( *(_QWORD *)(v5 + 16904) )
  {
    v21 = (volatile LONG *)(v5 + 16888);
    if ( KeGetCurrentIrql() == 2 )
    {
      v22 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v21);
    }
    else
    {
      v22 = ExAcquireSpinLockExclusive(v21);
    }
    v7 = MiRestockOverCommit(v5, v7);
    result = MiReleaseSpinLockExclusive((_DWORD *)(v5 + 16888), v22);
    if ( !v7 )
      return result;
  }
  if ( (ULONG *)v5 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
    for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v7) <= 0x100; i = (int)result )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                               i + v7,
                               i);
      if ( (int)result == i )
        return result;
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(v5 + 19328), -v7);
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 19264), -v7);
  v11 = *(_QWORD *)(v5 + 16864);
  v12 = *(_QWORD *)(v5 + 16856);
  v13 = result - v7;
  if ( result - v7 > result )
  {
    if ( v13 >= v11 && result < v11 )
      goto LABEL_23;
    if ( result >= v12 )
      return result;
    v14 = v13 < v12;
    goto LABEL_14;
  }
  if ( result >= v11 && v13 < v11 )
    goto LABEL_23;
  if ( v13 < v12 )
  {
    v14 = result < v12;
LABEL_14:
    if ( !v14 )
    {
LABEL_23:
      v15 = (volatile LONG *)(v5 + 16888);
      if ( KeGetCurrentIrql() == 2 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v15);
      else
        v8 = ExAcquireSpinLockExclusive(v15);
      v16 = *(_QWORD *)(v5 + 19264);
      if ( v16 < *(_QWORD *)(v5 + 16856) )
      {
        v19 = *(struct _KEVENT **)(v5 + 296);
        if ( !v19->Header.SignalState )
          KeSetEvent(v19, 0, 0);
        v20 = *(struct _KEVENT **)(v5 + 304);
        if ( v20->Header.SignalState != 1 )
          return MiReleaseSpinLockExclusive((_DWORD *)(v5 + 16888), v8);
        KeResetEvent(v20);
        v18 = *(struct _KEVENT **)(v5 + 312);
      }
      else
      {
        v17 = *(struct _KEVENT **)(v5 + 304);
        if ( v16 >= *(_QWORD *)(v5 + 16864) )
        {
          if ( !v17->Header.SignalState )
            KeSetEvent(v17, 0, 0);
          if ( *(_QWORD *)(v5 + 19608) == *(_QWORD *)(v5 + 16840) )
            KeSetEvent(*(PRKEVENT *)(v5 + 312), 0, 0);
        }
        else if ( v17->Header.SignalState == 1 )
        {
          KeResetEvent(v17);
          KeResetEvent(*(PRKEVENT *)(v5 + 312));
        }
        v18 = *(struct _KEVENT **)(v5 + 296);
        if ( v18->Header.SignalState != 1 )
          return MiReleaseSpinLockExclusive((_DWORD *)(v5 + 16888), v8);
      }
      KeResetEvent(v18);
      return MiReleaseSpinLockExclusive((_DWORD *)(v5 + 16888), v8);
    }
  }
  return result;
}
