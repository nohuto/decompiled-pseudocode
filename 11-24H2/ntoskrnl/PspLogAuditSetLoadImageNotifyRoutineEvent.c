/*
 * XREFs of PspLogAuditSetLoadImageNotifyRoutineEvent @ 0x140A85C94
 * Callers:
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A85BE0 (PsSetLoadImageNotifyRoutineEx.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PspLogAuditSetLoadImageNotifyRoutineEvent(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF
  int *v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  if ( EtwApiCallsProvRegHandle )
  {
    v3.Ptr = (ULONGLONG)&v7;
    v3.Reserved = 0;
    v3.Size = 8;
    v4 = &v8;
    v6 = 0;
    v5 = 4;
    return EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_PSSETLOADIMAGENOTIFYROUTINE, 0LL, 2u, &v3);
  }
  return result;
}
