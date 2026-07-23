/*
 * XREFs of NtResetWriteWatch @ 0x140A31D20
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetVadMandatoryPageSize @ 0x14044D544 (MiGetVadMandatoryPageSize.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // r9
  char *v7; // r12
  _KPROCESS *Process; // rsi
  void *v9; // r14
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rsi
  NTSTATUS v15; // edi
  unsigned __int64 VadMandatoryPageSize; // rax
  NTSTATUS result; // eax
  __int64 v18; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v20[3]; // [rsp+48h] [rbp-70h] BYREF

  BugCheckParameter1 = 0LL;
  memset(v20, 0, sizeof(v20));
  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress < RegionSize || !RegionSize )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v7 = (char *)BaseAddress + RegionSize - 1;
  Process = CurrentThread->ApcState.Process;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v9 = CurrentThread->ApcState.Process;
    v10 = 0;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               8,
               (__int64)PsProcessType,
               CurrentThread->PreviousMode,
               0x77576D4Du,
               &BugCheckParameter1,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v9 = (void *)BugCheckParameter1;
    v10 = 0;
    if ( Process != (_KPROCESS *)BugCheckParameter1 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v20);
      v10 = 1;
    }
  }
  v11 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0LL, (int *)&BugCheckParameter1, (__int64)CurrentThread);
  v14 = (void *)v11;
  if ( !v11 )
  {
    v15 = -1073741585;
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(v11 + 48) & 0x600000) == 0x600000
    && (unsigned __int64)v7 <= (((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) << 12) | 0xFFF) )
  {
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(v11);
    if ( VadMandatoryPageSize <= 1 )
    {
LABEL_11:
      MiMoveDirtyBitsToPfns((unsigned __int64)BaseAddress, (unsigned __int64)v7, (__int64)v14, 1u);
      v15 = 0;
      goto LABEL_12;
    }
    v18 = (VadMandatoryPageSize << 12) - 1;
    if ( (v18 & (unsigned __int64)BaseAddress) == 0 )
    {
      if ( (v18 & RegionSize) != 0 )
      {
        v15 = -1073741583;
        goto LABEL_12;
      }
      goto LABEL_11;
    }
  }
  v15 = -1073741585;
LABEL_12:
  MiUnlockAndDereferenceVad(v14);
LABEL_13:
  if ( v10 )
    KiUnstackDetachProcess((__int64)v20, 0, v12, v13);
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v9, 0x77576D4Du);
  return v15;
}
