/*
 * XREFs of CrmLogRegistrationRundownStop @ 0x180030060
 * Callers:
 *     CrmGlobalsRegistrationRundownHelper @ 0x18002FACC (CrmGlobalsRegistrationRundownHelper.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmLogRegistrationRundownStop(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v3[32]; // [rsp+40h] [rbp-58h] BYREF
  UUID *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 2) != 0 )
  {
    result = qword_1800E8300 & 2;
    if ( result == qword_1800E8300 )
    {
      v6 = 0;
      v9 = 0;
      v4 = &Uuid;
      v2 = *(_QWORD *)(a1 + 16);
      v5 = 16;
      v7 = &v2;
      v8 = 8;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D342D, 0LL, 0LL, 4, v3);
    }
  }
  return result;
}
