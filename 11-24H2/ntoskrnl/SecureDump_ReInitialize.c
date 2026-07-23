/*
 * XREFs of SecureDump_ReInitialize @ 0x14059F3CC
 * Callers:
 *     IoProvisionCrashDumpKey @ 0x14058ED10 (IoProvisionCrashDumpKey.c)
 * Callees:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14059E6E4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x14059F308 (SecureDump_ProvisionCrashDumpKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14059F6B4 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptCloseAlgorithmProvider @ 0x1406058CC (BCryptCloseAlgorithmProvider.c)
 *     BCryptDestroyKey @ 0x140605924 (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_ReInitialize(__int64 a1, ULONG a2)
{
  ULONG v3; // edx
  int v4; // ebx

  if ( ForceDumpDisabled || !AllowCrashDump )
    return 3221225473LL;
  if ( (unsigned int)(SecureDmpEncryptionContext - 2) > 1 )
    return 3221225860LL;
  if ( !DWORD1(xmmword_140E661D8) || !SecureDmpLoadCertificate )
    return 3221225488LL;
  if ( hAlgorithm )
  {
    BCryptCloseAlgorithmProvider(hAlgorithm, a2);
    hAlgorithm = 0LL;
  }
  if ( hObject )
  {
    BCryptDestroyKey(hObject);
    hObject = 0LL;
  }
  if ( qword_140E661F8 )
  {
    ExFreePoolWithTag(qword_140E661F8, 0);
    qword_140E661F8 = 0LL;
  }
  if ( *((_QWORD *)&dwFlags + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
    *((_QWORD *)&dwFlags + 1) = 0LL;
  }
  if ( *((_QWORD *)&xmmword_140E661D8 + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&xmmword_140E661D8 + 1), 0);
    *((_QWORD *)&xmmword_140E661D8 + 1) = 0LL;
  }
  v4 = SecureDump_ProvisionCrashDumpKey();
  if ( v4 < 0
    || (v4 = SecureDump_SymmetricEncryptionSetup(), v4 < 0)
    || (v4 = SecureDump_EncryptSymmetricKeyWithPublicKey(), v4 < 0) )
  {
    byte_140E661D4 = 0;
    if ( hAlgorithm )
    {
      BCryptCloseAlgorithmProvider(hAlgorithm, v3);
      hAlgorithm = 0LL;
    }
    if ( hObject )
    {
      BCryptDestroyKey(hObject);
      hObject = 0LL;
    }
    if ( qword_140E661F8 )
    {
      ExFreePoolWithTag(qword_140E661F8, 0);
      qword_140E661F8 = 0LL;
    }
    if ( *((_QWORD *)&dwFlags + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
      *((_QWORD *)&dwFlags + 1) = 0LL;
    }
    if ( *((_QWORD *)&xmmword_140E661D8 + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&xmmword_140E661D8 + 1), 0);
      *((_QWORD *)&xmmword_140E661D8 + 1) = 0LL;
    }
    SecureDmpEncryptionContext = 3;
  }
  else
  {
    byte_140E661D4 = 1;
    SecureDmpEncryptionContext = 2;
    dword_140E66220 = (*(&dwFlags + 1) + pcbResult + 8279) & 0xFFFFF000;
  }
  return (unsigned int)v4;
}
