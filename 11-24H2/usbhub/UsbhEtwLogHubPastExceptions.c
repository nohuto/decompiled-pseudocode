/*
 * XREFs of UsbhEtwLogHubPastExceptions @ 0x140030558
 * Callers:
 *     UsbhEtwRundown @ 0x14002DB8C (UsbhEtwRundown.c)
 * Callees:
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     UsbhGetExceptionDispatch @ 0x140030860 (UsbhGetExceptionDispatch.c)
 *     UsbhEtwGetHubInfo @ 0x140030E60 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogHubPastExceptions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *i; // rdi
  __int64 v8; // rcx
  __int64 ExceptionDispatch; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v13; // [rsp+A8h] [rbp-78h] BYREF
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-70h] BYREF
  int v15; // [rsp+C8h] [rbp-58h] BYREF
  __int16 v16; // [rsp+CCh] [rbp-54h]
  __int16 v17; // [rsp+CEh] [rbp-52h]
  __int16 v18; // [rsp+D0h] [rbp-50h]
  __int16 v19; // [rsp+D2h] [rbp-4Eh]
  _OWORD v20[2]; // [rsp+D8h] [rbp-48h] BYREF
  int v21; // [rsp+F8h] [rbp-28h]

  v12 = 0;
  v13 = 0LL;
  v21 = 0;
  v15 = *(_DWORD *)(a1 + 5192);
  v16 = *(_WORD *)(a1 + 5196);
  v17 = *(_DWORD *)(a1 + 5200);
  v18 = *(_WORD *)(a1 + 5228);
  v19 = *(_WORD *)(a1 + 5230);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v20, 0, sizeof(v20));
  UsbhEtwGetHubInfo(a1, v20, a3, a4);
  v6 = MEMORY[0xFFFFF78000000014];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 4872), &LockHandle);
  for ( i = *(_QWORD **)(a1 + 4856); i != (_QWORD *)(a1 + 4856); i = (_QWORD *)*i )
  {
    v8 = *(_QWORD *)(a1 + 1200);
    v13 = v6 - i[2];
    ExceptionDispatch = UsbhGetExceptionDispatch(v8, *((unsigned int *)i - 8));
    v10 = -1LL;
    v12 = *((unsigned __int16 *)i - 14);
    v11 = *(_QWORD *)(ExceptionDispatch + 8);
    do
      ++v10;
    while ( *(_BYTE *)(v11 + v10) );
    UsbhEtwWrite(
      &USBHUB_ETW_EVENT_HUB_PAST_EXCEPTION,
      0LL,
      &v13,
      8LL,
      &v15,
      12LL,
      v20,
      36LL,
      &v12,
      4LL,
      i - 4,
      4LL,
      (char *)i - 20,
      4LL,
      i - 3,
      4LL,
      v11,
      v10 + 1,
      0LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
