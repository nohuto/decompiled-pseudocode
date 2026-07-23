/*
 * XREFs of MiDeletePagablePteRange @ 0x1402663A4
 * Callers:
 *     MiDeleteRotateAndStopFaults @ 0x14026622C (MiDeleteRotateAndStopFaults.c)
 *     MiDeleteVirtualAddresses @ 0x140266330 (MiDeleteVirtualAddresses.c)
 *     MiDeleteVadBitmap @ 0x140A2CD84 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiDeleteVaFinal @ 0x140266630 (MiDeleteVaFinal.c)
 *     MiDecommitInitializePacket @ 0x1402995B0 (MiDecommitInitializePacket.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14031F040 (ExAcquireAutoExpandPushLockShared.c)
 *     MiUnlockAweVadsShared @ 0x1404B5F4C (MiUnlockAweVadsShared.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  char v15; // al
  __int64 v16; // rdx
  char v17; // r14
  __int64 v18; // rsi
  unsigned __int8 v19; // al
  unsigned int v20; // ecx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v23; // rcx
  __int64 v24; // rax
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh]
  char v27; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v28; // [rsp+59h] [rbp-A7h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  unsigned __int64 v30; // [rsp+78h] [rbp-88h]
  unsigned __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v32)(__int64, ULONG_PTR, unsigned int); // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v33)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+100h] [rbp+0h]
  _QWORD *v34; // [rsp+108h] [rbp+8h]
  _BYTE v35[160]; // [rsp+110h] [rbp+10h] BYREF
  int v36; // [rsp+1B0h] [rbp+B0h]
  _QWORD v37[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v38[112]; // [rsp+200h] [rbp+100h] BYREF

  memset_0(v38, 0, 0x68uLL);
  memset_0(v35, 0, 0xE0uLL);
  memset_0(&v25, 0, 0xC0uLL);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    Process = 0LL;
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  MiDecommitInitializePacket(
    (unsigned int)v35,
    (a3 >> 9) & 0xFFFFFFF8,
    ((__int64)(((a4 >> 9) & 0x7FFFFFFFF8LL) - ((a3 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1,
    0,
    (__int64)Process,
    *(_QWORD *)(a7 + 32),
    (*(_QWORD *)(a7 + 32) != 0LL) + 32,
    0LL,
    a7);
  v26 &= 0xFFFFFE3F;
  v14 = 39;
  v37[0] = v35;
  v34 = v37;
  v36 = a6;
  v37[1] = a7;
  v25 = 39;
  if ( (a6 & 0x100) != 0 )
  {
    v14 = 2087;
    if ( (a6 & 0x200) != 0 )
      v14 = 6183;
    v25 = v14;
  }
  v15 = v27;
  v16 = 63LL;
  v30 = a3;
  if ( (a6 & 0x800) != 0 )
    v15 = 63;
  v31 = a4;
  v27 = v15;
  v17 = 0;
  v29 = a1;
  v32 = MiDeleteVa;
  v33 = MiDeleteVaTail;
  if ( (a6 & 0x10) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v23 = *(_QWORD *)(*(_QWORD *)(a7 + 40) + 32LL) + 64LL;
    --CurrentThread->SpecialApcDisable;
    v24 = ExAcquireAutoExpandPushLockShared(v23, 0LL);
    v14 = v25;
    v18 = v24;
  }
  else
  {
    v18 = 0LL;
  }
  if ( a2 == 17 )
  {
    v19 = MiLockWorkingSetShared(a1, v16, v12, v13);
    LOWORD(v20) = v25;
    a2 = v19;
  }
  else
  {
    v20 = v14 & 0xFFFFFFFD;
    v17 = 1;
    v25 = v20;
  }
  v28 = a2;
  if ( (v20 & 0x800) != 0 || !MiDeleteVaDirect((__int64)&v25) )
    MiWalkPageTables(&v25);
  if ( !v17 )
    MiUnlockWorkingSetShared(a1, a2);
  result = MiDeleteVaFinal(&v25);
  if ( (a6 & 0x10) != 0 )
    return MiUnlockAweVadsShared(KeGetCurrentThread(), v18);
  return result;
}
