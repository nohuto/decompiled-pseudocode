/*
 * XREFs of SecureDump_Init @ 0x14059E4E4
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x140C0B6E0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14059DFC4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14059EF94 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptCloseAlgorithmProvider @ 0x1405FBF14 (BCryptCloseAlgorithmProvider.c)
 *     BCryptDestroyKey @ 0x1405FBF6C (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_Init(__int64 a1, int a2)
{
  int v2; // ebx

  v2 = 0;
  if ( SecureDmpEncryptionContext == 1 )
  {
    if ( !DWORD1(xmmword_140E65E08) )
    {
      byte_140E65E04 = 0;
      goto LABEL_7;
    }
    byte_140E65E04 = 1;
    v2 = SecureDump_SymmetricEncryptionSetup();
    if ( v2 >= 0 )
    {
      v2 = SecureDump_EncryptSymmetricKeyWithPublicKey();
      if ( v2 >= 0 )
      {
        a2 = (*(&dwFlags + 1) + pcbResult + 8279) & 0xFFFFF000;
        dword_140E65E50 = a2;
LABEL_7:
        SecureDmpEncryptionContext = 2;
      }
    }
  }
  switch ( SecureDmpEncryptionContext )
  {
    case 3:
      v2 = -1073741823;
      break;
    case 2:
      return 0LL;
    case 0:
      return 3221225488LL;
    default:
      if ( v2 < 0 )
      {
        byte_140E65E04 = 0;
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
        if ( qword_140E65E28 )
        {
          ExFreePoolWithTag(qword_140E65E28, 0);
          qword_140E65E28 = 0LL;
        }
        if ( *((_QWORD *)&dwFlags + 1) )
        {
          ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
          *((_QWORD *)&dwFlags + 1) = 0LL;
        }
        if ( *((_QWORD *)&xmmword_140E65E08 + 1) )
        {
          ExFreePoolWithTag(*((PVOID *)&xmmword_140E65E08 + 1), 0);
          *((_QWORD *)&xmmword_140E65E08 + 1) = 0LL;
        }
        SecureDmpEncryptionContext = 3;
      }
      break;
  }
  return (unsigned int)v2;
}
