/*
 * XREFs of MiDeletePagablePteRange @ 0x140383DB4
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140383D40 (MiDeleteVirtualAddresses.c)
 *     MiDeleteRotateAndStopFaults @ 0x1404A6528 (MiDeleteRotateAndStopFaults.c)
 *     MiDeleteVadBitmap @ 0x140A33648 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14029A9C0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiDecommitInitializePacket @ 0x14038308C (MiDecommitInitializePacket.c)
 *     MiDeleteVaFinal @ 0x140384040 (MiDeleteVaFinal.c)
 *     MiUnlockAweVadsShared @ 0x1404BBD6C (MiUnlockAweVadsShared.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiDeletePagablePteRange(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7)
{
  _KPROCESS *Process; // rcx
  int v12; // ecx
  char v13; // al
  char v14; // r14
  ULONG_PTR v15; // rsi
  unsigned __int8 v16; // al
  unsigned int v17; // ecx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v20; // rcx
  ULONG_PTR v21; // rax
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh]
  char v24; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v25; // [rsp+59h] [rbp-A7h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  unsigned __int64 v27; // [rsp+78h] [rbp-88h]
  unsigned __int64 v28; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v29)(__int64, unsigned __int64, unsigned int); // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v30)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+100h] [rbp+0h]
  _QWORD *v31; // [rsp+108h] [rbp+8h]
  _BYTE v32[160]; // [rsp+110h] [rbp+10h] BYREF
  int v33; // [rsp+1B0h] [rbp+B0h]
  _QWORD v34[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v35[112]; // [rsp+200h] [rbp+100h] BYREF

  memset_0(v35, 0, 0x68uLL);
  memset_0(v32, 0, 0xE0uLL);
  memset_0(&v22, 0, 0xC0uLL);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    Process = 0LL;
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  MiDecommitInitializePacket(
    (__int64)v32,
    ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
    ((__int64)(((a4 >> 9) & 0x7FFFFFFFF8LL) - ((a3 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1,
    0LL,
    (__int64)Process,
    *(_QWORD *)(a7 + 32),
    (*(_QWORD *)(a7 + 32) != 0LL) + 32,
    0LL,
    a7);
  v23 &= 0xFFFFFE3F;
  v12 = 39;
  v34[0] = v32;
  v31 = v34;
  v33 = a6;
  v34[1] = a7;
  v22 = 39;
  if ( (a6 & 0x100) != 0 )
  {
    v12 = 2087;
    if ( (a6 & 0x200) != 0 )
      v12 = 6183;
    v22 = v12;
  }
  v13 = v24;
  v27 = a3;
  if ( (a6 & 0x800) != 0 )
    v13 = 63;
  v28 = a4;
  v24 = v13;
  v14 = 0;
  v26 = a1;
  v29 = MiDeleteVa;
  v30 = MiDeleteVaTail;
  if ( (a6 & 0x10) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = *(_QWORD *)(*(_QWORD *)(a7 + 40) + 32LL) + 64LL;
    --CurrentThread->SpecialApcDisable;
    v21 = ExAcquireAutoExpandPushLockShared(v20, 0LL);
    v12 = v22;
    v15 = v21;
  }
  else
  {
    v15 = 0LL;
  }
  if ( a2 == 17 )
  {
    v16 = MiLockWorkingSetShared(a1);
    LOWORD(v17) = v22;
    a2 = v16;
  }
  else
  {
    v17 = v12 & 0xFFFFFFFD;
    v14 = 1;
    v22 = v17;
  }
  v25 = a2;
  if ( (v17 & 0x800) != 0 || !MiDeleteVaDirect(&v22) )
    MiWalkPageTables(&v22);
  if ( !v14 )
    MiUnlockWorkingSetShared(a1, a2);
  result = MiDeleteVaFinal(&v22);
  if ( (a6 & 0x10) != 0 )
    return MiUnlockAweVadsShared(KeGetCurrentThread(), v15);
  return result;
}
