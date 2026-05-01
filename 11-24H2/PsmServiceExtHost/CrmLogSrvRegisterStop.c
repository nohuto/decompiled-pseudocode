/*
 * XREFs of CrmLogSrvRegisterStop @ 0x18003E3E0
 * Callers:
 *     CrmSrvRegister @ 0x18003DBE0 (CrmSrvRegister.c)
 *     CrmRpcSrvRegister @ 0x18003DF10 (CrmRpcSrvRegister.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1800347F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmLogSrvRegisterStop(int a1, const wchar_t *a2, _BYTE *a3, int a4)
{
  __int64 result; // rax
  _BYTE *v9; // rax
  __int64 v10; // r9
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v13[80]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[32]; // [rsp+90h] [rbp-70h] BYREF
  UUID *v15; // [rsp+B0h] [rbp-50h]
  __int64 v16; // [rsp+B8h] [rbp-48h]
  int *v17; // [rsp+C0h] [rbp-40h]
  __int64 v18; // [rsp+C8h] [rbp-38h]
  _BYTE *v19; // [rsp+D0h] [rbp-30h]
  int v20; // [rsp+D8h] [rbp-28h]
  int v21; // [rsp+DCh] [rbp-24h]
  _BYTE v22[16]; // [rsp+E0h] [rbp-20h] BYREF
  int *v23; // [rsp+F0h] [rbp-10h]
  __int64 v24; // [rsp+F8h] [rbp-8h]

  result = (__int64)memset_0(v13, 0, 0x44uLL);
  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 1) != 0 )
  {
    result = qword_1800E8300 & 1;
    if ( result == qword_1800E8300 )
    {
      v16 = 16LL;
      v15 = &Uuid;
      v11 = a1;
      v17 = &v11;
      v18 = 4LL;
      v9 = v13;
      v21 = 0;
      if ( a3 )
        v9 = a3;
      v19 = v9;
      v20 = 4 * (unsigned __int8)v9[1] + 8;
      tlgCreate1Sz_wchar_t((__int64)v22, a2);
      v12 = a4;
      v23 = &v12;
      v24 = 4LL;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D2425, 0LL, v10, 7, v14);
    }
  }
  return result;
}
