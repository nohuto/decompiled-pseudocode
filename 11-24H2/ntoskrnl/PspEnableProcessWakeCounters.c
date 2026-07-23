/*
 * XREFs of PspEnableProcessWakeCounters @ 0x140777900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspEnableProcessWakeCounters(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // r9
  _QWORD *v4; // r10
  __int64 v5; // r11
  unsigned __int32 v6; // eax

  v1 = *(_QWORD *)(a1 + 672);
  if ( (*(_DWORD *)(v1 + 1552) & 0x1000) == 0 )
  {
    v3 = 0LL;
    v4 = (_QWORD *)(v1 + 1120);
    v5 = 7LL;
    do
    {
      _m_prefetchw((const void *)(a1 + 4 * v3 + 1832));
      v6 = _InterlockedOr((volatile signed __int32 *)(a1 + 4 * v3++ + 1832), 0x80000000);
      *v4++ += v6;
      --v5;
    }
    while ( v5 );
    _m_prefetchw((const void *)(a1 + 1868));
    *(_QWORD *)(v1 + 1176) += (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 1868), 0x80000000);
  }
  return 0LL;
}
