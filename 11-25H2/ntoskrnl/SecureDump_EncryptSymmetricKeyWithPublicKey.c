/*
 * XREFs of SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14059DFC4
 * Callers:
 *     SecureDump_Init @ 0x14059E4E4 (SecureDump_Init.c)
 *     SecureDump_ReInitialize @ 0x14059ECAC (SecureDump_ReInitialize.c)
 * Callees:
 *     BCryptEncrypt @ 0x1404F62E4 (BCryptEncrypt.c)
 *     SecureDump_LogErrorEvent @ 0x14059E96C (SecureDump_LogErrorEvent.c)
 *     BCryptCloseAlgorithmProvider @ 0x1405FBF14 (BCryptCloseAlgorithmProvider.c)
 *     BCryptDestroyKey @ 0x1405FBF6C (BCryptDestroyKey.c)
 *     BCryptImportKeyPair @ 0x14077FF68 (BCryptImportKeyPair.c)
 *     BCryptGetProperty @ 0x140A41A50 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x140AA1968 (BCryptOpenAlgorithmProvider.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 SecureDump_EncryptSymmetricKeyWithPublicKey()
{
  UCHAR *v0; // rsi
  unsigned int v1; // edi
  void *v2; // rdx
  NTSTATUS Property; // ebx
  UCHAR *Pool2; // rax
  const WCHAR *v5; // r8
  ULONG v6; // r9d
  ULONG pcbResult; // [rsp+28h] [rbp-50h]
  ULONG dwFlags; // [rsp+30h] [rbp-48h]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-28h] BYREF
  _QWORD pPaddingInfo[4]; // [rsp+58h] [rbp-20h] BYREF
  ULONG cbInput; // [rsp+B0h] [rbp+38h] BYREF
  int pbOutput; // [rsp+B8h] [rbp+40h] BYREF
  ULONG v14; // [rsp+C0h] [rbp+48h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+C8h] [rbp+50h] BYREF

  pPaddingInfo[0] = L"SHA256";
  cbInput = 0;
  v0 = 0LL;
  phAlgorithm = 0LL;
  phKey = 0LL;
  v1 = 1;
  pPaddingInfo[1] = 0LL;
  pPaddingInfo[2] = 0LL;
  pbOutput = 0;
  v14 = 0;
  dword_140E65E4C = 2;
  Property = BCryptExportKey(hObject, 0LL, L"KeyDataBlob", 0LL, 0, &cbInput, 0);
  if ( Property >= 0 )
  {
    Pool2 = (UCHAR *)ExAllocatePool2(0x40uLL);
    v0 = Pool2;
    if ( !Pool2 )
    {
LABEL_3:
      Property = -1073741670;
      goto LABEL_14;
    }
    Property = BCryptExportKey(hObject, 0LL, L"KeyDataBlob", Pool2, cbInput, &cbInput, 0);
    if ( Property >= 0 )
    {
      Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"RSA", 0LL, 1u);
      if ( Property >= 0 )
      {
        Property = BCryptImportKeyPair(
                     phAlgorithm,
                     v2,
                     v5,
                     &phKey,
                     *((PUCHAR *)&xmmword_140E65E08 + 1),
                     ::dwFlags,
                     dwFlags);
        if ( Property < 0
          || (Property = BCryptGetProperty(phKey, L"KeyLength", (PUCHAR)&pbOutput, v6, &v14, pcbResult), Property < 0) )
        {
          v1 = 3;
        }
        else if ( pbOutput == 2048 )
        {
          Property = BCryptEncrypt(phKey, v0, cbInput, pPaddingInfo, 0LL, 0, 0LL, 0, &::pcbResult, 4u);
          if ( Property >= 0 )
          {
            qword_140E65E28 = (PVOID)ExAllocatePool2(0x40uLL);
            if ( !qword_140E65E28 )
              goto LABEL_3;
            Property = BCryptEncrypt(
                         phKey,
                         v0,
                         cbInput,
                         pPaddingInfo,
                         0LL,
                         0,
                         (PUCHAR)qword_140E65E28,
                         ::pcbResult,
                         &::pcbResult,
                         4u);
          }
        }
        else
        {
          v1 = 4;
          Property = -1073741823;
        }
      }
    }
  }
LABEL_14:
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, (ULONG)v2);
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  if ( Property < 0 )
    SecureDump_LogErrorEvent(v1);
  return (unsigned int)Property;
}
