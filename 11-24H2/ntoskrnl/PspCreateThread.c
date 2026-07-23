/*
 * XREFs of PspCreateThread @ 0x1408FA8F0
 * Callers:
 *     NtCreateThread @ 0x140773B00 (NtCreateThread.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 *     NtCreateThreadEx @ 0x1408F8F00 (NtCreateThreadEx.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140477210 (PspIsProcessReadyForRemoteThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 */

__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  _KPROCESS *v14; // rdi
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rsi
  int Thread; // ebx
  char v18; // bl
  char PreviousMode; // r13
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  __int64 v24; // r12
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+64h] [rbp-9Ch]
  __int64 v28; // [rsp+68h] [rbp-98h]
  PVOID v29; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40[50]; // [rsp+D0h] [rbp-30h] BYREF

  v14 = a5;
  v31 = a6;
  v36 = a7;
  v34 = a9;
  v28 = a11;
  v32 = a12;
  v35 = a3;
  v27 = a2;
  v37 = a1;
  v33 = a13;
  memset_0(v40, 0, sizeof(v40));
  v39 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  Process = CurrentThread->ApcState.Process;
  v29 = 0LL;
  if ( a4 )
  {
    Thread = ObpReferenceObjectByHandleWithTag(
               a4,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( Thread < 0 )
      return (unsigned int)Thread;
    v14 = (_KPROCESS *)Object;
  }
  else
  {
    if ( a8 )
      return (unsigned int)-1073741816;
    ObfReferenceObjectWithTag(a5, 0x72437350u);
  }
  v18 = v14->SecureState.SecureHandle & 1;
  if ( a8 || v18 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  if ( v14 != Process && !PspIsProcessReadyForRemoteThread((__int64)v14) )
    return 3221225473LL;
  v20 = v28;
  if ( v28 && a8 )
  {
    v20 = v28 & -(__int64)(v18 != 0);
    v28 = v20;
  }
  if ( v31
    || v20
    || ((__int64)v14[4].ThreadListHead.Flink & 1) == 0
    && ((__int64)Process[4].ThreadListHead.Flink & 1) == 0
    && !_bittest((const signed __int32 *)&v14[4].ThreadListHead.Flink + 1, 0xEu)
    && !_bittest((const signed __int32 *)&Process[4].ThreadListHead.Flink + 1, 0xEu) )
  {
    if ( PreviousMode )
    {
      v21 = HIDWORD(v14[3].ActiveGroupsMask.Masks[1]);
      if ( (v21 & 0x1000) != 0 )
      {
        ObfDereferenceObjectWithTag(v14, 0x72437350u);
        return 3221225480LL;
      }
      if ( (v21 & 1) != 0 )
      {
        Thread = -1073741816;
        goto LABEL_33;
      }
    }
    if ( (v14[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) != 0 && !v14[3].Padding[5] && a8 )
      goto LABEL_43;
    v22 = 0;
    v23 = 0;
    v26 = 0;
    if ( (a10 & 1) != 0 )
    {
      v22 = 1;
      v23 = 1;
      v26 = 1;
    }
    if ( (a10 & 2) != 0 )
    {
      v22 = v23 | 2;
      v26 = v23 | 2;
      v23 |= 2u;
    }
    if ( (a10 & 4) != 0 )
    {
      v22 = v23 | 4;
      v26 = v23 | 4;
      v23 |= 4u;
    }
    if ( (a10 & 0x10) != 0 )
    {
      v22 = v23 | 0x80;
      v26 = v23 | 0x80;
      v23 |= 0x80u;
    }
    if ( (a10 & 0x20) != 0 )
    {
      v22 = v23 | 0x100;
      v26 = v23 | 0x100;
    }
    if ( (a10 & 0x40) != 0 )
    {
      v22 |= 0x200u;
      v26 = v22;
    }
    if ( v18 )
    {
      if ( a8 )
      {
LABEL_43:
        Thread = -1073741790;
        goto LABEL_33;
      }
      v26 = v22 | 0x400;
    }
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      Thread = -1073741558;
LABEL_33:
      ObfDereferenceObjectWithTag(v14, 0x72437350u);
      return (unsigned int)Thread;
    }
    ObfReferenceObjectWithTag(v14, 0x72437350u);
    v38 = v34;
    v24 = v31;
    Thread = PspAllocateThread(
               (ULONG_PTR)v14,
               a8,
               (__int64)&v38,
               v28,
               v32,
               (__int64)&v26,
               (__int64)&v29,
               v33,
               (__int64)v40);
    if ( Thread < 0 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      goto LABEL_33;
    }
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
    Thread = PspInsertThread(v29, (ULONG_PTR)v14, v27, v33, v24, v32, (__int64)v40, v37, v36);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    ObfDereferenceObject(v29);
    return (unsigned int)Thread;
  }
  return 3221225506LL;
}
