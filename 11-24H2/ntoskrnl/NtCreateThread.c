/*
 * XREFs of NtCreateThread @ 0x140773B00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x1403D4970 (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PspCreateThread @ 0x1408FA8F0 (PspCreateThread.c)
 */

NTSTATUS __cdecl NtCreateThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PCONTEXT ThreadContext,
        PINITIAL_TEB InitialTeb,
        BOOLEAN CreateSuspended)
{
  PCONTEXT v12; // rbx
  NTSTATUS result; // eax
  char PreviousMode; // dl
  __int64 v15; // rcx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rcx
  _INITIAL_TEB::$51A6825BF626353FB0168B5A96FF6713 OldInitialTeb; // xmm0
  _KPROCESS *Process; // rax
  __int16 v21; // ax
  PCONTEXT v23; // [rsp+78h] [rbp-5B0h]
  _INITIAL_TEB::$51A6825BF626353FB0168B5A96FF6713 v24; // [rsp+90h] [rbp-598h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-588h]
  PVOID StackAllocationBase; // [rsp+B0h] [rbp-578h]
  __int128 v27; // [rsp+B8h] [rbp-570h]
  PVOID v28; // [rsp+C8h] [rbp-560h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-548h]
  struct _KTHREAD *v30; // [rsp+E8h] [rbp-540h]
  char v31; // [rsp+F0h] [rbp-538h] BYREF
  __int128 v32; // [rsp+F1h] [rbp-537h]
  __int64 v33; // [rsp+101h] [rbp-527h]
  _BYTE v34[152]; // [rsp+110h] [rbp-518h] BYREF
  unsigned __int64 v35; // [rsp+1A8h] [rbp-480h]

  v12 = ThreadContext;
  memset_0(&v24, 0, 0x48uLL);
  v32 = 0LL;
  v33 = 0LL;
  if ( !ThreadContext )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ThreadHandle < 0x7FFFFFFF0000LL )
      v15 = (__int64)ThreadHandle;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    if ( ClientId )
    {
      if ( ((unsigned __int8)ClientId & 3) != 0 )
        goto LABEL_16;
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ClientId < 0x7FFFFFFF0000LL )
        v16 = (__int64)ClientId;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 15) = *(_BYTE *)(v16 + 15);
    }
    if ( ((unsigned __int8)ThreadContext & 0xF) == 0 )
    {
      v17 = v34;
      v18 = 9LL;
      do
      {
        *v17 = *(_OWORD *)&v12->P1Home;
        v17[1] = *(_OWORD *)&v12->P3Home;
        v17[2] = *(_OWORD *)&v12->P5Home;
        v17[3] = *(_OWORD *)&v12->ContextFlags;
        v17[4] = *(_OWORD *)&v12->SegGs;
        v17[5] = *(_OWORD *)&v12->Dr1;
        v17[6] = *(_OWORD *)&v12->Dr3;
        v17 += 8;
        *(v17 - 1) = *(_OWORD *)&v12->Dr7;
        v12 = (PCONTEXT)((char *)v12 + 128);
        --v18;
      }
      while ( v18 );
      *v17 = *(_OWORD *)&v12->P1Home;
      v17[1] = *(_OWORD *)&v12->P3Home;
      v17[2] = *(_OWORD *)&v12->P5Home;
      v17[3] = *(_OWORD *)&v12->ContextFlags;
      v17[4] = *(_OWORD *)&v12->SegGs;
      v23 = (PCONTEXT)v34;
      v35 = (v35 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
      if ( ((unsigned __int8)InitialTeb & 3) == 0 )
      {
        v12 = (PCONTEXT)v34;
        goto LABEL_18;
      }
    }
LABEL_16:
    ExRaiseDatatypeMisalignment();
  }
  v23 = ThreadContext;
LABEL_18:
  result = RtlpSanitizeContextFlags(&v12->ContextFlags, PreviousMode);
  if ( result >= 0 )
  {
    v12->ContextFlags &= 0x10001Fu;
    *ThreadHandle = 0LL;
    OldInitialTeb = InitialTeb->OldInitialTeb;
    v24 = InitialTeb->OldInitialTeb;
    if ( *(_OWORD *)&v24 == 0LL )
    {
      v24 = OldInitialTeb;
      v25 = *(_OWORD *)&InitialTeb->StackBase;
      StackAllocationBase = InitialTeb->StackAllocationBase;
      if ( StackAllocationBase )
      {
        v30 = KeGetCurrentThread();
        Process = v30->ApcState.Process;
        if ( Process[1].ReadyTime )
        {
          v21 = WORD2(Process[3].PerProcessorCycleTimes);
          if ( v21 == 332 || v21 == 452 )
          {
            v28 = StackAllocationBase;
            v27 = v25;
            StackAllocationBase = 0LL;
            v25 = 0LL;
          }
        }
        v31 = 1;
        return PspCreateThread(
                 ThreadHandle,
                 DesiredAccess,
                 ObjectAttributes,
                 ProcessHandle,
                 0LL,
                 0LL,
                 ClientId,
                 v23,
                 &v24,
                 CreateSuspended == 1,
                 0LL,
                 0LL,
                 &v31);
      }
      else
      {
        return -1073741811;
      }
    }
    else
    {
      return -1073741637;
    }
  }
  return result;
}
