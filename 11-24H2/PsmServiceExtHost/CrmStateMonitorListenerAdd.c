/*
 * XREFs of CrmStateMonitorListenerAdd @ 0x180059830
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18002DDF0 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CrmStateMonitorListenerAdd(unsigned int *a1, __int64 a2, int a3)
{
  unsigned int **v6; // rdx
  unsigned int *v7; // rax
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-68h] BYREF
  UUID *v12; // [rsp+60h] [rbp-48h]
  __int64 v13; // [rsp+68h] [rbp-40h]
  int *v14; // [rsp+70h] [rbp-38h]
  __int64 v15; // [rsp+78h] [rbp-30h]

  RtlAcquireSRWLockExclusive(a1 + 2);
  a1[4] = GetCurrentThreadId();
  v6 = (unsigned int **)*((_QWORD *)a1 + 4);
  v7 = (unsigned int *)(a2 + 8);
  if ( *v6 != a1 + 6 )
    __fastfail(3u);
  *(_QWORD *)v7 = a1 + 6;
  *(_QWORD *)(a2 + 16) = v6;
  *v6 = v7;
  *((_QWORD *)a1 + 4) = v7;
  if ( a3 == 1 )
  {
    dword_1800EA848 = 0;
    RtlReleaseSRWLockExclusive(&CrmGlobals);
  }
  else if ( a3 == 2 )
  {
    RtlReleaseSRWLockShared(&CrmGlobals);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a2)(a2, *a1, *((_QWORD *)a1 + 5));
  a1[4] = 0;
  LODWORD(v8) = RtlReleaseSRWLockExclusive(a1 + 2);
  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 8) != 0 )
  {
    v8 = qword_1800E8300 & 8;
    if ( v8 == qword_1800E8300 )
    {
      v13 = 16LL;
      v12 = &Uuid;
      v10 = *a1;
      v15 = 4LL;
      v14 = &v10;
      LODWORD(v8) = tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E82E8, byte_1800D2F02, 0LL, 0LL, 4u, &v11);
    }
  }
  return v8;
}
