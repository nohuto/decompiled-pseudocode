/*
 * XREFs of McTemplateK0zq_EtwWriteTransfer @ 0x140008B38
 * Callers:
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000BC6C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0zq_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  int v6; // eax
  _BYTE v8[16]; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  char *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v10 = v6;
  v11 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v13 = 4LL;
  v9 = a4;
  v12 = &a5;
  return McGenEventWrite_EtwWriteTransfer(L"NULL", &EXBUS_DEVICE_START_EXIT, a3, 3LL, v8);
}
