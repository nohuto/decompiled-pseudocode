/*
 * XREFs of SecureDump_Encrypt_DmpData @ 0x14059E950
 * Callers:
 *     IopLiveDumpWriteBuffer @ 0x140495AFC (IopLiveDumpWriteBuffer.c)
 * Callees:
 *     BCryptEncrypt @ 0x1404F63C4 (BCryptEncrypt.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall SecureDump_Encrypt_DmpData(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbx
  NTSTATUS v9; // r10d
  ULONG cbOutput; // ecx
  ULONG pcbResult; // [rsp+50h] [rbp-38h] BYREF
  UCHAR pbIV[8]; // [rsp+58h] [rbp-30h] BYREF

  v5 = 0LL;
  v9 = -1073741823;
  if ( byte_140E661D4 )
  {
    if ( !a1 || !a3 && a4 || (cbOutput = pbInput, a2 % pbInput) || a2 < pbInput )
    {
      v9 = -1073741811;
    }
    else if ( a4 >= a2 )
    {
      pcbResult = 0;
      *(_QWORD *)pbIV = 0LL;
      while ( v5 < a2 )
      {
        v9 = BCryptEncrypt(
               hObject,
               (PUCHAR)(a1 + v5),
               cbOutput,
               0LL,
               pbIV,
               8u,
               (PUCHAR)(a3 + v5),
               cbOutput,
               &pcbResult,
               0);
        if ( v9 < 0 )
          break;
        v5 += pcbResult;
        cbOutput = pbInput;
        if ( pcbResult != pbInput )
        {
          v9 = -1073741823;
          break;
        }
      }
    }
    else
    {
      v5 = a2;
      v9 = -2147483643;
    }
  }
  else
  {
    v9 = -1073741808;
  }
  if ( a5 )
    *a5 = v5;
  return (unsigned int)v9;
}
