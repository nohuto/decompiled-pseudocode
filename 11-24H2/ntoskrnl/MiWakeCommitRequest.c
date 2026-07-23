/*
 * XREFs of MiWakeCommitRequest @ 0x1403EE13C
 * Callers:
 *     MiRemoveUnusedSegments @ 0x1403EDF30 (MiRemoveUnusedSegments.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiWakeCommitRequest(__int64 a1, int a2)
{
  _DWORD *v2; // rsi
  _QWORD *v4; // rdi
  KIRQL v6; // bp
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  _BYTE *v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rax
  bool v15; // zf

  v2 = (_DWORD *)(a1 + 1728);
  v4 = (_QWORD *)(a1 + 1944);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  while ( 1 )
  {
    v7 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v8 = *(_QWORD *)(a1 + 19264);
    v9 = *(_QWORD *)(a1 + 19608);
    if ( v8 < v9 && (v10 = v7[3], v10 <= v9 - v8) )
    {
      v12 = (char *)v7 + 71;
      v7[4] = 1LL;
      if ( (*((_BYTE *)v7 + 71) & 0x40) != 0 )
        *(_QWORD *)(a1 + 2792) -= v10;
    }
    else
    {
      if ( a2 )
        return MiReleaseSpinLockExclusive(v2, v6);
      v12 = (char *)v7 + 71;
      if ( (*((_BYTE *)v7 + 71) & 0x44) == 0 )
        return MiReleaseSpinLockExclusive(v2, v6);
    }
    v13 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v14 = (_QWORD *)v7[1], (_QWORD *)*v14 != v7) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = (*v12 & 4) == 0;
    v7[9] = 1LL;
    if ( v15 )
      KeSetEvent((PRKEVENT)(v7 + 5), 0, 0);
    else
      _InterlockedExchange((volatile __int32 *)v7 + 16, 0);
  }
  return MiReleaseSpinLockExclusive(v2, v6);
}
