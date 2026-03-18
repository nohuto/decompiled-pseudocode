/*
 * XREFs of UsbhHubWorker @ 0x1C001E890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

__int64 (__fastcall *__fastcall UsbhHubWorker(__int64 a1, __int64 a2))(__int64)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  KIRQL v12; // al
  __int64 v13; // r9
  _QWORD *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 (__fastcall *result)(__int64); // rax

  v4 = *(unsigned int *)(a2 + 4);
  if ( (_DWORD)v4 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v6 = 1380669288;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = v4;
        *(_QWORD *)(v6 + 24) = a2;
      }
    }
  }
  v7 = *(_QWORD *)(a2 + 16);
  if ( !v7 )
    goto LABEL_27;
  v8 = *(_QWORD *)(v7 + 64);
  if ( !v8 )
    UsbhTrapFatal_Dbg(v7, 0LL);
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(v7, *(_QWORD *)(v7 + 64));
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  v9 = *(_QWORD *)(a2 + 32);
  v10 = *(unsigned int *)(a2 + 12);
  v11 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 64) = KeGetCurrentThread();
  (*(void (__fastcall **)(__int64, __int64, __int64))(a2 + 24))(v11, v10, v9);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 2800));
  v13 = *(_QWORD *)(a2 + 48);
  if ( *(_QWORD *)(v13 + 8) != a2 + 48 || (v14 = *(_QWORD **)(a2 + 56), *v14 != a2 + 48) )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 2800), v12);
  v15 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(a2 + 4) != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 1716213608;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = 0LL;
        *(_QWORD *)(v17 + 24) = a2;
        ExFreePoolWithTag((PVOID)a2, 0);
        goto LABEL_17;
      }
    }
  }
  ExFreePoolWithTag((PVOID)a2, 0);
  if ( !a1 )
LABEL_27:
    UsbhTrapFatal_Dbg(0LL, 0LL);
LABEL_17:
  v18 = *(_QWORD *)(a1 + 64);
  if ( !v18 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v18 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  result = *(__int64 (__fastcall **)(__int64))(v18 + 4776);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(v15);
  return result;
}
