/*
 * XREFs of ACPIDetectCouldExtensionBeInRelation @ 0x1400AFB28
 * Callers:
 *     ACPIDetectEjectDevices @ 0x14003CD1C (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoMatch @ 0x1400AFA30 (ACPIDetectPdoMatch.c)
 *     ACPIDetectFilterMatch @ 0x1400AFA94 (ACPIDetectFilterMatch.c)
 * Callees:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x140038694 (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIMatchHardwareAddress @ 0x1400AFD8C (ACPIMatchHardwareAddress.c)
 *     ACPIMatchHardwareId @ 0x1400B00B4 (ACPIMatchHardwareId.c)
 */

__int64 __fastcall ACPIDetectCouldExtensionBeInRelation(__int64 a1, unsigned int *a2, char a3, char a4, _QWORD *a5)
{
  const signed __int64 *v5; // rbx
  char v8; // r14
  char v9; // r15
  unsigned int i; // edi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-18h] BYREF

  v5 = (const signed __int64 *)(a1 + 8);
  v13 = 0LL;
  v8 = 0;
  *a5 = 0LL;
  v9 = 0;
  UnicodeString = 0LL;
  if ( a3 && !_bittest64(v5, 0x2Cu) || a4 && !_bittest64(v5, 0x2Du) )
    return 3221225524LL;
  if ( !a2 || !*a2 )
    return 0LL;
  if ( (*v5 & 0x2000100000000000LL) != 0 )
  {
    v8 = 1;
    ACPIGet(a1, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v13, 0LL);
  }
  if ( (*v5 & 0xA00000000000LL) == 0 || ACPIDeviceHasFirmwareDependencies(a1) )
  {
LABEL_8:
    for ( i = 0; i < *a2; ++i )
    {
      if ( !v9 || (int)ACPIMatchHardwareId(*(PDEVICE_OBJECT *)&a2[2 * i + 2], &UnicodeString) >= 0 )
      {
        if ( v8 )
          ACPIMatchHardwareAddress(*(PDEVICE_OBJECT *)&a2[2 * i + 2]);
      }
    }
    RtlFreeUnicodeString(&UnicodeString);
    return 0LL;
  }
  result = ACPIGet(
             v12,
             1145653343,
             268960278,
             0LL,
             0,
             0LL,
             0LL,
             (__int64)&UnicodeString.Buffer,
             (__int64)&UnicodeString);
  if ( (int)result >= 0 )
  {
    v9 = 1;
    UnicodeString.MaximumLength = UnicodeString.Length;
    goto LABEL_8;
  }
  return result;
}
