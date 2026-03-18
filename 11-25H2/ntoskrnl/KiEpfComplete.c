/*
 * XREFs of KiEpfComplete @ 0x1405BF2D8
 * Callers:
 *     KiEpfDrainCompletionQueue @ 0x1405BF3EC (KiEpfDrainCompletionQueue.c)
 * Callees:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 */

__int64 __fastcall KiEpfComplete(unsigned __int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdx
  _QWORD *i; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax

  v2 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  v3 = *(_QWORD **)v2;
  for ( i = *(_QWORD **)v2; ; i = (_QWORD *)*i )
  {
    v5 = 0LL;
    if ( i == (_QWORD *)v2 )
      break;
    v5 = i;
    v6 = (_QWORD *)*i;
    if ( i[2] == a1 )
    {
      if ( (_QWORD *)v6[1] == i )
      {
        v7 = (_QWORD *)i[1];
        if ( (_QWORD *)*v7 == i )
        {
          *v7 = v6;
          v6[1] = v7;
          goto LABEL_13;
        }
      }
LABEL_16:
      __fastfail(3u);
    }
  }
  if ( v3 == (_QWORD *)v2 )
  {
    ++*(_DWORD *)(v2 + 24);
  }
  else
  {
    v5 = *(_QWORD **)v2;
    if ( v3[1] != v2 )
      goto LABEL_16;
    v8 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
      goto LABEL_16;
    *(_QWORD *)v2 = v8;
    *(_QWORD *)(v8 + 8) = v2;
  }
LABEL_13:
  result = KxReleaseSpinLock((volatile signed __int64 *)(v2 + 16));
  if ( v5 )
  {
    _InterlockedIncrement(&dword_140F0F7E4);
    return KeSignalGate((_DWORD *)v5 + 6, 0);
  }
  return result;
}
