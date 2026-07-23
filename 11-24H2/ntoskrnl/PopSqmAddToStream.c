/*
 * XREFs of PopSqmAddToStream @ 0x14049ABB8
 * Callers:
 *     PopSqmBatteryUpdate @ 0x140AA3C3C (PopSqmBatteryUpdate.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __fastcall PopSqmAddToStream(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  const wchar_t **v6; // r10
  unsigned int v7; // r11d
  int v8; // r9d
  int v9; // r8d
  char *v10; // rdx
  __int64 v11; // rcx
  const wchar_t *v12; // rax
  const wchar_t *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+50h] [rbp-B8h] BYREF
  int v18; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  int *v22; // [rsp+88h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-78h]
  int *v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  _BYTE v26[432]; // [rsp+A8h] [rbp-60h] BYREF

  v17 = 11131;
  v18 = 4;
  result = (unsigned int)memset_0(v26, 0, sizeof(v26));
  v16 = 11;
  if ( PopDiagHandleRegistered && a4 )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v16;
    v6 = (const wchar_t **)(a4 + 8);
    v21 = 16LL;
    v20 = qword_14001BC20;
    v7 = 0;
    v23 = 4LL;
    v22 = &v17;
    v24 = &v18;
    v25 = 4LL;
    do
    {
      v8 = 3 * v7;
      v9 = *((_DWORD *)v6 - 2);
      v10 = byte_14001BC18;
      if ( v9 == 1 )
        v10 = (char *)v6;
      *(&UserData.Ptr + 2 * (unsigned int)(v8 + 4)) = (ULONGLONG)(v6 - 1);
      *((_QWORD *)&UserData.Size + 2 * (unsigned int)(v8 + 4)) = 4LL;
      v11 = 2LL * (unsigned int)(v8 + 5);
      *(&UserData.Ptr + v11) = (ULONGLONG)v10;
      *((_QWORD *)&UserData.Size + v11) = 4LL;
      if ( v9 == 2 )
      {
        v12 = *v6;
        v13 = *v6;
      }
      else
      {
        v12 = L"0";
        v13 = L"0";
      }
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
      v6 += 2;
      v15 = 3 * (v7 + 2);
      ++v7;
      v15 *= 2LL;
      *(&UserData.Ptr + v15) = (ULONGLONG)v13;
      *(&UserData.Size + 2 * v15) = 2 * v14 + 2;
      *(&UserData.Reserved + 2 * v15) = 0;
    }
    while ( v7 < 4 );
    return EtwWriteEx(PopDiagHandle, &PopSqm_Add_StreamRow, 0LL, 0, 0LL, 0LL, 0x1Fu, &UserData);
  }
  return result;
}
