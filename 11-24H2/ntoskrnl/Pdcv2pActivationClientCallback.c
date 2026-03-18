/*
 * XREFs of Pdcv2pActivationClientCallback @ 0x14078DCF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     PdcResetEvent @ 0x140607600 (PdcResetEvent.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x140607AB0 (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PdcWaitForEvent @ 0x14078E1B4 (PdcWaitForEvent.c)
 *     PdcAcquireRwLockExclusive2 @ 0x140A4F154 (PdcAcquireRwLockExclusive2.c)
 *     PdcReleaseRwLockExclusive2 @ 0x140A5AF2C (PdcReleaseRwLockExclusive2.c)
 */

__int64 __fastcall Pdcv2pActivationClientCallback(_DWORD *a1, __int64 a2)
{
  signed int v2; // ebp
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 i; // rsi
  struct _KEVENT *v10; // rcx
  __int64 v11; // rax
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0;
  v4 = a1;
  if ( !a1 )
  {
    v5 = -1073741585;
LABEL_22:
    Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK(0LL, v4, v2, v5);
    goto LABEL_23;
  }
  if ( *a1 != 843138128 )
  {
    v5 = -1073741585;
    v4 = 0LL;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(a2 + 40) != 12 )
  {
    v5 = -1073740030;
    goto LABEL_22;
  }
  v5 = PdcCreateWatchdogAroundClientCall();
  v7 = v6 + 8;
  while ( 1 )
  {
    PdcAcquireRwLockExclusive2(v7, &v13);
    if ( !*((_QWORD *)v4 + 12) )
      break;
    PdcReleaseRwLockExclusive2(v7, &v13);
    PdcWaitForEvent(*((_QWORD *)v4 + 13));
  }
  if ( !*((_QWORD *)v4 + 5) )
  {
    v5 = -1073740032;
    goto LABEL_22;
  }
  v8 = *(_QWORD *)(a2 + 56);
  v2 = *(_DWORD *)(a2 + 64);
  for ( i = *((_QWORD *)v4 + 10); ; i = *(_QWORD *)i )
  {
    if ( (_DWORD *)i == v4 + 20 )
    {
      v5 = -1073741431;
      goto LABEL_22;
    }
    if ( *(_QWORD *)(i + 592) == v8 )
      break;
  }
  if ( v2 >= 101 )
  {
    ++*(_DWORD *)(i + 68);
    *(_BYTE *)(i + 60) = 1;
  }
  Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK(i, v4, v2, v5);
  v10 = (struct _KEVENT *)*((_QWORD *)v4 + 13);
  *((_QWORD *)v4 + 12) = KeGetCurrentThread();
  *((_QWORD *)v4 + 14) = i;
  PdcResetEvent(v10);
  *(_QWORD *)(*((_QWORD *)v4 + 5) + 1760LL) = KeGetCurrentThread();
  PdcReleaseRwLockExclusive2(v7, &v13);
  guard_dispatch_icall_no_overrides(i, (unsigned int)v2, *((_QWORD *)v4 + 8), *(_QWORD *)(i + 32));
  PdcAcquireRwLockExclusive2(v7, &v13);
  v11 = *((_QWORD *)v4 + 5);
  if ( v11 )
    *(_QWORD *)(v11 + 1760) = 0LL;
  *((_QWORD *)v4 + 12) = 0LL;
  *((_QWORD *)v4 + 14) = 0LL;
  KeSetEvent(*((PRKEVENT *)v4 + 13), 0, 0);
LABEL_23:
  if ( v13 )
    PdcReleaseRwLockExclusive2(v4 + 2, &v13);
  return v5;
}
