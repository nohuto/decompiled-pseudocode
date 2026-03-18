/*
 * XREFs of Mutex @ 0x14006EBC0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     PerformMutexDriverCallbacks @ 0x14002E494 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x14004E58C (InitMutex.c)
 */

__int64 __fastcall Mutex(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax

  v2 = (__int64 *)(a2 + 64);
  result = CreateNameSpaceObject(
             a1[40],
             *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL),
             a1[10],
             a1[11],
             (_QWORD *)(a2 + 64),
             0);
  if ( !(_DWORD)result )
  {
    result = InitMutex((__int64)a1, a1[40], *v2, *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL), 0);
    if ( !(_DWORD)result )
    {
      if ( gDeviceLockMutexSupported )
        return PerformMutexDriverCallbacks(0, *(_QWORD *)(*v2 + 96), (__int64)a1, 0LL, 0);
    }
  }
  return result;
}
