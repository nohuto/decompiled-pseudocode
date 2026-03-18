/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x140166FE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x140272AEC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

__int64 __fastcall NtUserGetQueueStatusReadonly(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // r9
  __int64 v4; // r9
  unsigned __int16 v5; // ax
  int v6; // edx
  int v7; // r8d

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v3 = 0LL;
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  INTERLOCKEDINT::operator int(*(_QWORD *)(v3 + 488) + 8LL);
  v5 = INTERLOCKEDINT::operator int(*(_QWORD *)(v4 + 488) + 4LL);
  return (v7 | (v7 << 16)) & (v6 | (unsigned int)v5);
}
