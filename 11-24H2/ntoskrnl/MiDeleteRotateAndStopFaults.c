/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x14026622C
 * Callers:
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A23700 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiDeletePagablePteRange @ 0x1402663A4 (MiDeletePagablePteRange.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 */

__int64 __fastcall MiDeleteRotateAndStopFaults(int a1, int a2, _QWORD *a3)
{
  _KPROCESS *Process; // rbx
  unsigned __int8 v7; // al
  int v8; // edx
  _KPROCESS *v9; // rbx
  __int64 result; // rax
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h]
  __int128 v13; // [rsp+60h] [rbp-28h]
  __int64 v14; // [rsp+70h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = MiLockWorkingSetExclusive(&Process[2].ReadyListHead.Blink);
  *a3 = Process[1].ActiveGroupsMask.Masks[1];
  Process[1].ActiveGroupsMask.Masks[1] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v7);
  *(_QWORD *)&v13 = a3[1];
  LOBYTE(v8) = 17;
  v9 = KeGetCurrentThread()->ApcState.Process;
  MiDeletePagablePteRange((_DWORD)v9 + 1024, v8, a1, a2, 0, 136, (__int64)&v11);
  result = *((_QWORD *)&v12 + 1);
  if ( *((_QWORD *)&v12 + 1) )
  {
    result = -*((_QWORD *)&v12 + 1);
    _InterlockedAdd64((volatile signed __int64 *)v9[1].Padding, -*((_QWORD *)&v12 + 1));
  }
  return result;
}
