/*
 * XREFs of PspCreateThread @ 0x1408F1680
 * Callers:
 *     NtCreateThread @ 0x140763F10 (NtCreateThread.c)
 *     NtCreateThreadEx @ 0x1408EFF10 (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14047AC00 (PspIsProcessReadyForRemoteThread.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+64h] [rbp-9Ch]
  __int64 v37; // [rsp+68h] [rbp-98h]
  PVOID v38; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-40h]
  struct _ACCESS_STATE AccessState; // [rsp+D0h] [rbp-30h] BYREF

  v14 = a5;
  v40 = a6;
  v45 = a7;
  v43 = a9;
  v37 = a11;
  v41 = a12;
  v44 = a3;
  v36 = a2;
  v46 = a1;
  v42 = a13;
  memset_0(&AccessState, 0, 0x190uLL);
  v48 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  Process = CurrentThread->ApcState.Process;
  v38 = 0LL;
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
  v20 = v37;
  if ( v37 && a8 )
  {
    v20 = v37 & -(__int64)(v18 != 0);
    v37 = v20;
  }
  if ( v40
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
    v35 = 0;
    if ( (a10 & 1) != 0 )
    {
      v22 = 1;
      v23 = 1;
      v35 = 1;
    }
    if ( (a10 & 2) != 0 )
    {
      v22 = v23 | 2;
      v35 = v23 | 2;
      v23 |= 2u;
    }
    if ( (a10 & 4) != 0 )
    {
      v22 = v23 | 4;
      v35 = v23 | 4;
      v23 |= 4u;
    }
    if ( (a10 & 0x10) != 0 )
    {
      v22 = v23 | 0x80;
      v35 = v23 | 0x80;
      v23 |= 0x80u;
    }
    if ( (a10 & 0x20) != 0 )
    {
      v22 = v23 | 0x100;
      v35 = v23 | 0x100;
    }
    if ( (a10 & 0x40) != 0 )
    {
      v22 |= 0x200u;
      v35 = v22;
    }
    if ( v18 )
    {
      if ( a8 )
      {
LABEL_43:
        Thread = -1073741790;
        goto LABEL_33;
      }
      v35 = v22 | 0x400;
    }
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v24, v25, v26);
      Thread = -1073741558;
LABEL_33:
      ObfDereferenceObjectWithTag(v14, 0x72437350u);
      return (unsigned int)Thread;
    }
    ObfReferenceObjectWithTag(v14, 0x72437350u);
    v47 = v43;
    v27 = v40;
    Thread = PspAllocateThread(
               (ULONG_PTR)v14,
               a8,
               (__int64)&v47,
               v37,
               v41,
               (__int64)&v35,
               (__int64)&v38,
               v42,
               (__int64)&AccessState);
    if ( Thread < 0 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v32, v33, v34);
      goto LABEL_33;
    }
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
    Thread = PspInsertThread(v38, (ULONG_PTR)v14, v36, v42, v27, v41, &AccessState, v46, v45);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v28, v29, v30);
    ObfDereferenceObject(v38);
    return (unsigned int)Thread;
  }
  return 3221225506LL;
}
