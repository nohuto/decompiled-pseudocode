/*
 * XREFs of PoQueryPowerLimitAttributes @ 0x14073EB50
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall PoQueryPowerLimitAttributes(__int64 a1, unsigned int a2, void *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdi
  __int64 v9; // rax

  v4 = 0;
  if ( a1 && a4 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    PopAcquireRwLockShared((volatile signed __int64 *)(v8 + 32));
    *a4 = *(_DWORD *)(v8 + 72);
    if ( a3 && (v9 = *(unsigned int *)(v8 + 72), a2 >= (unsigned int)v9) )
      memmove(a3, *(const void **)(v8 + 80), 36 * v9);
    else
      v4 = -1073741789;
    PopReleaseRwLock((signed __int64 *)(v8 + 32));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
