/*
 * XREFs of EtwpEventWriteTemplateInvalidGroupMask @ 0x1407A7868
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x14048A210 (EtwpUpdateSelectedGroupMasks.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateInvalidGroupMask(__int64 a1, __int64 a2, unsigned __int16 *a3, ULONGLONG a4)
{
  ULONGLONG v4; // rax
  ULONG v6; // r9d
  REGHANDLE v7; // r11
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  int *v11; // rdx
  __int64 v12; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-138h] BYREF
  int *v15; // [rsp+40h] [rbp-128h]
  int v16; // [rsp+48h] [rbp-120h]
  int v17; // [rsp+4Ch] [rbp-11Ch]

  v4 = *((_QWORD *)a3 + 1);
  UserData.Reserved = 0;
  v6 = 2;
  v7 = EtwpEventTracingProvRegHandle;
  v17 = 0;
  UserData.Ptr = v4;
  LODWORD(v4) = *a3;
  v8 = 8LL;
  UserData.Size = v4;
  v9 = 8LL;
  v16 = 2;
  v15 = &EtwpNull;
  do
  {
    v10 = v6++;
    v10 *= 2LL;
    *(&UserData.Reserved + 2 * v10) = 0;
    *(&UserData.Ptr + v10) = a4;
    a4 += 4LL;
    *(&UserData.Size + 2 * v10) = 4;
    --v9;
  }
  while ( v9 );
  v11 = EtwpSiloAllowedGroupMask;
  do
  {
    v12 = v6++;
    v12 *= 2LL;
    *(&UserData.Reserved + 2 * v12) = 0;
    *(&UserData.Ptr + v12) = (ULONGLONG)v11++;
    *(&UserData.Size + 2 * v12) = 4;
    --v8;
  }
  while ( v8 );
  return EtwWrite(v7, &ETW_EVENT_INVALID_GROUP_MASK, 0LL, v6, &UserData);
}
