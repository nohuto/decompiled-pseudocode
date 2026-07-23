/*
 * XREFs of SecureDump_ConvertToRsaBlob @ 0x14059E620
 * Callers:
 *     SecureDump_ValidateAmeCertChain @ 0x14059F7F0 (SecureDump_ValidateAmeCertChain.c)
 * Callees:
 *     SecureDump_ConvertParsedRSAPubKeyToBCryptPubKey @ 0x14059E528 (SecureDump_ConvertParsedRSAPubKeyToBCryptPubKey.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MinAsn1ParsePublicKeyInfo @ 0x14082796C (MinAsn1ParsePublicKeyInfo.c)
 *     MinAsn1ParseRSAPublicKey @ 0x1408279B4 (MinAsn1ParseRSAPublicKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_ConvertToRsaBlob(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  _DWORD *Pool2; // rax
  void *v5; // rbx
  _BYTE v7[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v9[64]; // [rsp+60h] [rbp-58h] BYREF

  v3 = -1073739510;
  if ( (int)MinAsn1ParsePublicKeyInfo(a1, v7) >= 0 && (int)MinAsn1ParseRSAPublicKey(v8, v9) >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, 0x21CuLL, 0x706D6453u);
    v5 = Pool2;
    if ( Pool2 )
    {
      v3 = SecureDump_ConvertParsedRSAPubKeyToBCryptPubKey((__int64)v9, Pool2);
      if ( v3 < 0 )
        ExFreePoolWithTag(v5, 0);
      else
        *a2 = v5;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v3;
}
