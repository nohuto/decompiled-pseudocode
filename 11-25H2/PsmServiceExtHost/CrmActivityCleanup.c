/*
 * XREFs of CrmActivityCleanup @ 0x180032E80
 * Callers:
 *     CrmSrvActivityAllocate @ 0x180030EE8 (CrmSrvActivityAllocate.c)
 *     CrmRpcSrvActivityAllocate @ 0x180031280 (CrmRpcSrvActivityAllocate.c)
 *     CrmRpcSrvActivityFree @ 0x180031A90 (CrmRpcSrvActivityFree.c)
 *     CrmSrvActivityFree @ 0x180031DAC (CrmSrvActivityFree.c)
 *     CrmActivityDereference @ 0x180032160 (CrmActivityDereference.c)
 *     CrmRpcSrvActivityStart @ 0x1800321C0 (CrmRpcSrvActivityStart.c)
 *     CrmSrvActivityStart @ 0x180032720 (CrmSrvActivityStart.c)
 *     CrmSrvActivityStop @ 0x1800336F0 (CrmSrvActivityStop.c)
 *     CrmRpcSrvActivityStop @ 0x180033980 (CrmRpcSrvActivityStop.c)
 * Callees:
 *     CrmActivityTelemetryUpdate @ 0x18002F8D8 (CrmActivityTelemetryUpdate.c)
 *     CrmStateMonitorListenerRemove @ 0x180033220 (CrmStateMonitorListenerRemove.c)
 *     CrmLogActivityStop @ 0x180033534 (CrmLogActivityStop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmActivityCleanup(__int64 a1)
{
  unsigned int i; // edi
  void *v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  void *v7; // r8
  void *v8; // r8
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp-88h] BYREF
  __int64 v14; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-78h] BYREF
  UUID *v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+68h] [rbp-50h]
  __int64 *v18; // [rsp+70h] [rbp-48h]
  __int64 v19; // [rsp+78h] [rbp-40h]
  __int64 *v20; // [rsp+80h] [rbp-38h]
  __int64 v21; // [rsp+88h] [rbp-30h]

  for ( i = 0; i < *(_DWORD *)(a1 + 108); ++i )
    CrmStateMonitorListenerRemove(*(&qword_1800E98B0 + *(unsigned int *)(*(_QWORD *)(a1 + 112) + 56LL * i + 32)));
  v3 = *(void **)(a1 + 112);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  RtlAcquireSRWLockExclusive(&unk_1800E9A40);
  dword_1800E9A48 = GetCurrentThreadId();
  if ( *(_QWORD *)(a1 + 40) == -1LL )
  {
    dword_1800E9A48 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E9A40);
  }
  else
  {
    RtlRbRemoveNode(&xmmword_1800E9A50, a1 + 24);
    *(_QWORD *)(a1 + 40) = -1LL;
    v10 = *(_QWORD *)(a1 + 48);
    RtlAcquireSRWLockExclusive(v10);
    *(_DWORD *)(v10 + 8) = GetCurrentThreadId();
    if ( *(_DWORD *)(a1 + 64) == 1301 )
    {
      CrmActivityTelemetryUpdate(a1, 2);
      *(_QWORD *)(a1 + 264) = -1LL;
      *(_QWORD *)(a1 + 288) = -1LL;
    }
    v11 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(v11 + 8) = 0;
    RtlReleaseSRWLockExclusive(v11);
    dword_1800E9A48 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E9A40);
    v12 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 1) != 0 && (qword_1800E7300 & 1) == qword_1800E7300 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
      v16 = &Uuid;
      v14 = v12;
      v18 = &v13;
      v17 = 16LL;
      v20 = &v14;
      v19 = 8LL;
      v21 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D1734, 0LL, 0LL, 5, v15);
    }
  }
  v4 = *(_QWORD *)(a1 + 48);
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( *(_DWORD *)(a1 + 64) == 1301 )
  {
    if ( *(_QWORD *)(a1 + 248) != -1LL )
      CrmActivityTelemetryUpdate(a1, 0);
    if ( *(_QWORD *)(a1 + 256) != -1LL )
      CrmActivityTelemetryUpdate(a1, 1);
    if ( *(_QWORD *)(a1 + 264) != -1LL )
      CrmActivityTelemetryUpdate(a1, 2);
  }
  v5 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v5 + 8) = 0;
  RtlReleaseSRWLockExclusive(v5);
  if ( *(_DWORD *)(a1 + 152) || *(_DWORD *)(a1 + 156) )
    NtDeleteWnfStateName(a1 + 152, v6);
  if ( *(_DWORD *)(a1 + 144) || *(_DWORD *)(a1 + 148) )
    NtDeleteWnfStateName(a1 + 144, v6);
  v7 = *(void **)(a1 + 224);
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  v8 = *(void **)(a1 + 232);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  return CrmLogActivityStop(a1);
}
