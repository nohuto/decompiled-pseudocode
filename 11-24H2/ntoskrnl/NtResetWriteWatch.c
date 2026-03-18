/*
 * XREFs of NtResetWriteWatch @ 0x140A3C540
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiGetVadMandatoryPageSize @ 0x140458234 (MiGetVadMandatoryPageSize.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtResetWriteWatch(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v7; // r12
  _KPROCESS *Process; // rsi
  void *v9; // r14
  int v10; // ebx
  __int64 v11; // rax
  void *v12; // rsi
  unsigned int v13; // edi
  unsigned __int64 VadMandatoryPageSize; // rax
  __int64 result; // rax
  __int64 v16; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v18[3]; // [rsp+48h] [rbp-70h] BYREF

  BugCheckParameter1 = 0LL;
  memset(v18, 0, sizeof(v18));
  if ( a2 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - a2 < a3 || !a3 )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v7 = a2 + a3 - 1;
  Process = CurrentThread->ApcState.Process;
  if ( a1 == -1LL )
  {
    v9 = CurrentThread->ApcState.Process;
    v10 = 0;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               a1,
               8,
               (__int64)PsProcessType,
               CurrentThread->PreviousMode,
               0x77576D4Du,
               &BugCheckParameter1,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    v9 = (void *)BugCheckParameter1;
    v10 = 0;
    if ( Process != (_KPROCESS *)BugCheckParameter1 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v18);
      v10 = 1;
    }
  }
  v11 = MiObtainReferencedVadEx(a2, 0LL, (int *)&BugCheckParameter1);
  v12 = (void *)v11;
  if ( !v11 )
  {
    v13 = -1073741585;
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(v11 + 48) & 0x600000) == 0x600000
    && v7 <= (((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) << 12) | 0xFFF) )
  {
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(v11);
    if ( VadMandatoryPageSize <= 1 )
    {
LABEL_11:
      MiMoveDirtyBitsToPfns(a2, v7, (__int64)v12, 1u);
      v13 = 0;
      goto LABEL_12;
    }
    v16 = (VadMandatoryPageSize << 12) - 1;
    if ( (v16 & a2) == 0 )
    {
      if ( (v16 & a3) != 0 )
      {
        v13 = -1073741583;
        goto LABEL_12;
      }
      goto LABEL_11;
    }
  }
  v13 = -1073741585;
LABEL_12:
  MiUnlockAndDereferenceVad(v12);
LABEL_13:
  if ( v10 )
    KiUnstackDetachProcess((__int64)v18, 0);
  if ( a1 != -1LL )
    ObfDereferenceObjectWithTag(v9, 0x77576D4Du);
  return v13;
}
