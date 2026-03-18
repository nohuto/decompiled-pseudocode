/*
 * XREFs of _SetDisplayMapping @ 0x14028BCD8
 * Callers:
 *     NtUserSetDisplayMapping @ 0x14029D690 (NtUserSetDisplayMapping.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall SetDisplayMapping(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-3D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-3C8h] BYREF
  int v10; // [rsp+40h] [rbp-3B8h] BYREF
  _BYTE v11[324]; // [rsp+44h] [rbp-3B4h] BYREF
  unsigned __int16 v12[260]; // [rsp+188h] [rbp-270h] BYREF
  WCHAR SourceString[32]; // [rsp+390h] [rbp-68h] BYREF

  v4 = 0;
  memset_0(v11, 0, 0x344uLL);
  v5 = *(_QWORD *)(a1 + 16);
  DestinationString = 0LL;
  RIMEndAllActiveContacts(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 392LL), a1, 0LL);
  v6 = *(_QWORD *)(a2 + 88);
  v10 = 840;
  if ( (unsigned int)DrvGetHdevName(v6, SourceString) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v8 = 1;
    if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, &v10, v8, 0) >= 0
      && (int)RtlStringCchCopyW((char *)(v5 + 1356), 128LL, (char *)v12) >= 0 )
    {
      RIMFindMonitorForDigitizer(v5, a1, 1LL);
      return 1;
    }
  }
  return v4;
}
