/*
 * XREFs of MiObtainRotateProtectionRanges @ 0x140494200
 * Callers:
 *     MiRotateToFrameBufferNoCopy @ 0x140A23700 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiObtainRotateProtectionRanges(ULONG_PTR a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  int v7; // edi
  unsigned __int64 v8; // rsi
  _KPROCESS *Process; // r14
  unsigned __int8 v10; // r12
  int v11; // eax
  __int64 Pool; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  int v18; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-8h] BYREF
  __int16 v20; // [rsp+A8h] [rbp+48h] BYREF
  int v21; // [rsp+B0h] [rbp+50h] BYREF

  v19 = 0LL;
  v7 = 0;
  v18 = 0;
  v8 = a2;
  v20 = 0;
  v21 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, a2, a3, (__int64)a4);
  while ( v8 <= a3 )
  {
    MiQueryAddressState(v8, a3, v10, a1, 0LL, &v21, &v18, &v20, &v19);
    v11 = v21 & 7;
    if ( v11 != 4 && v11 != 1 )
    {
      v7 = -1073741755;
      break;
    }
    Pool = MiAllocatePool(0x40uLL, 0x28uLL, 1649568077);
    v13 = (_QWORD *)Pool;
    if ( !Pool )
    {
      v7 = -1073741670;
      break;
    }
    *(_QWORD *)(Pool + 16) = v8;
    *(_QWORD *)(Pool + 24) = v19;
    *(_DWORD *)(Pool + 32) = v21;
    v14 = (_QWORD *)a4[1];
    if ( (_QWORD *)*v14 != a4 )
LABEL_6:
      __fastfail(3u);
    *v13 = a4;
    v13[1] = v14;
    *v14 = v13;
    v8 = v19;
    a4[1] = v13;
  }
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v10);
  if ( v7 < 0 )
  {
    while ( 1 )
    {
      v16 = (_QWORD *)*a4;
      if ( (_QWORD *)*a4 == a4 )
        break;
      if ( (_QWORD *)v16[1] != a4 )
        goto LABEL_6;
      v17 = *v16;
      if ( *(_QWORD **)(*v16 + 8LL) != v16 )
        goto LABEL_6;
      *a4 = v17;
      *(_QWORD *)(v17 + 8) = a4;
      ExFreePoolWithTag(v16, 0);
    }
  }
  return (unsigned int)v7;
}
