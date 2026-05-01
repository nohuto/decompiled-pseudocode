/*
 * XREFs of CrmRegistrationReadyQueueRemove @ 0x18002F678
 * Callers:
 *     CrmActivityUpdate @ 0x18002E0A0 (CrmActivityUpdate.c)
 *     CrmRegistrationReadyQueueRemoveAndNotify @ 0x18002E814 (CrmRegistrationReadyQueueRemoveAndNotify.c)
 *     CrmGlobalsPeriodicNotifier @ 0x1800309D0 (CrmGlobalsPeriodicNotifier.c)
 * Callees:
 *     CrmActivityTelemetryUpdate @ 0x18002F858 (CrmActivityTelemetryUpdate.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRegistrationReadyQueueRemove(__int64 a1, int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v10; // [rsp+38h] [rbp-29h] BYREF
  __int64 v11; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-19h] BYREF
  UUID *v13; // [rsp+68h] [rbp+7h]
  int v14; // [rsp+70h] [rbp+Fh]
  int v15; // [rsp+74h] [rbp+13h]
  __int64 *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  __int64 *v19; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+90h] [rbp+2Fh]
  int v21; // [rsp+94h] [rbp+33h]

  if ( !a2 )
  {
    RtlAcquireSRWLockExclusive(&unk_1800EA9E0);
    dword_1800EA9E8 = GetCurrentThreadId();
  }
  v4 = 0;
  if ( *(_QWORD *)(a1 + 40) != -1LL )
  {
    RtlRbRemoveNode(&xmmword_1800EA9F0, a1 + 24);
    *(_QWORD *)(a1 + 40) = -1LL;
    v4 = 1;
    v5 = *(_QWORD *)(a1 + 48);
    RtlAcquireSRWLockExclusive(v5);
    *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
    if ( *(_DWORD *)(a1 + 64) == 1301 )
    {
      CrmActivityTelemetryUpdate(a1, 2LL);
      *(_QWORD *)(a1 + 264) = -1LL;
      *(_QWORD *)(a1 + 288) = -1LL;
    }
    v6 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(v6 + 8) = 0;
    RtlReleaseSRWLockExclusive(v6);
  }
  if ( !a2 )
  {
    dword_1800EA9E8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800EA9E0);
  }
  if ( v4 )
  {
    v7 = *(_QWORD *)(a1 + 56);
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
    if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 1) != 0 && (qword_1800E8300 & 1) == qword_1800E8300 )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = &Uuid;
      v16 = &v10;
      v19 = &v11;
      v10 = v8;
      v17 = 8;
      v11 = v7;
      v20 = 8;
      v14 = 16;
      tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D2734, 0LL, 0LL, 5, v12);
    }
  }
  return v4;
}
