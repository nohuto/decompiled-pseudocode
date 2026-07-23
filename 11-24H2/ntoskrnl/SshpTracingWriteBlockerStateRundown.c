/*
 * XREFs of SshpTracingWriteBlockerStateRundown @ 0x14048173C
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x140A18F20 (SleepstudyHelperBuildBlocker.c)
 *     SshpFreeBlockerEntry @ 0x140A36EBC (SshpFreeBlockerEntry.c)
 *     SshpTracingRundownBlockerState @ 0x140A70784 (SshpTracingRundownBlockerState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall SshpTracingWriteBlockerStateRundown(PCEVENT_DESCRIPTOR EventDescriptor, PKSPIN_LOCK SpinLock)
{
  BOOLEAN result; // al
  KSPIN_LOCK v5; // rbx
  KIRQL v6; // al
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-65h] BYREF
  PKSPIN_LOCK v12; // [rsp+48h] [rbp-61h] BYREF
  __int64 v13; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  KSPIN_LOCK v15; // [rsp+70h] [rbp-39h]
  int v16; // [rsp+78h] [rbp-31h]
  int v17; // [rsp+7Ch] [rbp-2Dh]
  KSPIN_LOCK v18; // [rsp+80h] [rbp-29h]
  int v19; // [rsp+88h] [rbp-21h]
  int v20; // [rsp+8Ch] [rbp-1Dh]
  __int64 v21; // [rsp+90h] [rbp-19h]
  int v22; // [rsp+98h] [rbp-11h]
  int v23; // [rsp+9Ch] [rbp-Dh]
  __int64 *v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+ACh] [rbp+3h]
  int *v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+BCh] [rbp+13h]
  unsigned int *v30; // [rsp+C0h] [rbp+17h]
  int v31; // [rsp+C8h] [rbp+1Fh]
  int v32; // [rsp+CCh] [rbp+23h]
  __int64 v33; // [rsp+D0h] [rbp+27h]
  int v34; // [rsp+D8h] [rbp+2Fh]
  int v35; // [rsp+DCh] [rbp+33h]

  result = SshpTraceHandleRegistered;
  if ( SshpTraceHandleRegistered )
  {
    result = EtwEventEnabled(SshpTraceHandle, EventDescriptor);
    if ( result )
    {
      v5 = SpinLock[38];
      v6 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v10 = SpinLock[1] & 1;
      v13 = MEMORY[0xFFFFF78000000008];
      KeReleaseSpinLock(SpinLock, v6);
      v12 = SpinLock;
      v7 = *(unsigned __int16 *)(v5 + 80);
      UserData.Reserved = 0;
      v17 = 0;
      v20 = 0;
      UserData.Ptr = (ULONGLONG)&v12;
      v15 = v5 + 64;
      v18 = v5 + 48;
      v11 = v7 >> 1;
      UserData.Size = 8;
      v16 = 16;
      v19 = 16;
      v8 = *(int *)(v5 + 40);
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v22 = 16;
      v25 = 8;
      v21 = *((_QWORD *)&off_140E083B8 + 6 * v8);
      v24 = &v13;
      v27 = &v10;
      v30 = &v11;
      v28 = 4;
      v31 = 4;
      v9 = *(_QWORD *)(v5 + 88);
      v35 = 0;
      v33 = v9;
      v34 = 2 * (v7 >> 1);
      return EtwWriteEx(SshpTraceHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 8u, &UserData);
    }
  }
  return result;
}
