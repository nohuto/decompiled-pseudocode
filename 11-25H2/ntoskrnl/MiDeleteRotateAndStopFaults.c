/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x1404A6528
 * Callers:
 *     MiRotateToFrameBuffer @ 0x140A28F1C (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A29238 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiDeletePagablePteRange @ 0x140383DB4 (MiDeletePagablePteRange.c)
 */

__int64 __fastcall MiDeleteRotateAndStopFaults(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _KPROCESS *Process; // rbx
  unsigned __int8 v7; // al
  _KPROCESS *v8; // rbx
  __int64 result; // rax
  __int128 v10; // [rsp+40h] [rbp-48h] BYREF
  __int128 v11; // [rsp+50h] [rbp-38h]
  __int128 v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+70h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
  *a3 = Process[1].ActiveGroupsMask.Masks[1];
  Process[1].ActiveGroupsMask.Masks[1] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v7);
  *(_QWORD *)&v12 = a3[1];
  v8 = KeGetCurrentThread()->ApcState.Process;
  MiDeletePagablePteRange((__int64)&v8[2].ReadyListHead.Blink, 0x11u, a1, a2, 0, 136, (__int64)&v10);
  result = *((_QWORD *)&v11 + 1);
  if ( *((_QWORD *)&v11 + 1) )
  {
    result = -*((_QWORD *)&v11 + 1);
    _InterlockedAdd64((volatile signed __int64 *)v8[1].Padding, -*((_QWORD *)&v11 + 1));
  }
  return result;
}
