/*
 * XREFs of SmStoreCreate @ 0x140798AD8
 * Callers:
 *     SmcStoreCreate @ 0x14079D8F4 (SmcStoreCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwSetSystemInformation @ 0x1406AAB30 (ZwSetSystemInformation.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmStorePhysicalRequestIssue @ 0x140798C6C (SmStorePhysicalRequestIssue.c)
 */

NTSTATUS __fastcall SmStoreCreate(__int64 a1, int a2, __int128 *a3, _DWORD *a4)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  NTSTATUS result; // eax
  int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  _DWORD SystemInformation[2]; // [rsp+38h] [rbp-51h] BYREF
  int *v14; // [rsp+40h] [rbp-49h]
  int v15; // [rsp+48h] [rbp-41h]
  int v16; // [rsp+4Ch] [rbp-3Dh]
  int v17; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v18[4]; // [rsp+54h] [rbp-35h] BYREF
  __int128 v19; // [rsp+58h] [rbp-31h]
  __int128 v20; // [rsp+68h] [rbp-21h]
  __int128 v21; // [rsp+78h] [rbp-11h]
  __int128 v22; // [rsp+88h] [rbp-1h]
  __int64 v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+A0h] [rbp+17h]

  v12 = 0LL;
  v16 = 0;
  SystemInformation[0] = 1;
  SystemInformation[1] = 3;
  v14 = &v17;
  v15 = 88;
  memset_0(v18, 0, 0x54uLL);
  v8 = *a3;
  v9 = a3[1];
  v17 = 6;
  v19 = v8;
  v21 = a3[2];
  v23 = *((_QWORD *)a3 + 8);
  v20 = v9;
  v22 = a3[3];
  if ( a2 )
  {
    if ( a2 != 1 )
      return -1073741811;
    result = ZwSetSystemInformation(SystemStoreInformation, SystemInformation, 0x18u);
    v11 = v24;
  }
  else
  {
    result = SmStorePhysicalRequestIssue(*(PDEVICE_OBJECT *)(a1 + 2064), 0, (__int64)&v12);
    v11 = v12;
  }
  if ( result >= 0 )
  {
    *a4 = v11;
    return 0;
  }
  return result;
}
