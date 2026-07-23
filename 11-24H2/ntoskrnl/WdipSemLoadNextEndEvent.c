/*
 * XREFs of WdipSemLoadNextEndEvent @ 0x1407A1410
 * Callers:
 *     WdipSemLoadNextScenario @ 0x1407A1720 (WdipSemLoadNextScenario.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WdipSemOpenRegistryKey @ 0x1407A3108 (WdipSemOpenRegistryKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x1407A319C (WdipSemQueryValueFromRegistry.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     RtlUnicodeStringToInteger @ 0x14097E410 (RtlUnicodeStringToInteger.c)
 */

__int64 __fastcall WdipSemLoadNextEndEvent(HANDLE KeyHandle, ULONG Index, GUID *Guid)
{
  NTSTATUS v6; // ebx
  unsigned int i; // edx
  unsigned __int64 v8; // rax
  WCHAR v9; // cx
  __int64 v10; // rdx
  int v11; // r9d
  WCHAR *v12; // r8
  WCHAR v13; // cx
  int v15; // eax
  char v16; // cl
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Value; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v28; // [rsp+6Ch] [rbp-94h]
  WCHAR v29[72]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SourceString[64]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR v31[64]; // [rsp+180h] [rbp+80h] BYREF

  Handle = 0LL;
  ResultLength = 0;
  Value = 0;
  v22 = 0;
  v23 = 0;
  v25 = 0LL;
  DestinationString = 0LL;
  if ( !KeyHandle || !Guid )
    return (unsigned int)-1073741811;
  memset_0(KeyInformation, 0, 0x98uLL);
  v6 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
  if ( v6 >= 0 )
  {
    if ( v28 >= 0x80 )
    {
      v6 = -2147483643;
      goto LABEL_17;
    }
    v29[(unsigned __int64)v28 >> 1] = 0;
    memset_0(SourceString, 0, sizeof(SourceString));
    memset_0(v31, 0, sizeof(v31));
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x40 )
        goto LABEL_16;
      v8 = i;
      v9 = v29[v8];
      if ( v9 == 59 )
        break;
      SourceString[i] = v9;
    }
    if ( v8 >= 64 )
      _report_rangecheckfailure();
    v10 = i + 1;
    SourceString[v8] = 0;
    v11 = 0;
    if ( (unsigned int)v10 >= 0x40 )
    {
LABEL_16:
      v6 = -1073741823;
      goto LABEL_17;
    }
    v12 = &v29[v10];
    while ( 1 )
    {
      v13 = *v12;
      v31[v11] = *v12;
      if ( !v13 )
        break;
      LODWORD(v10) = v10 + 1;
      ++v12;
      ++v11;
      if ( (unsigned int)v10 >= 0x40 )
        goto LABEL_16;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    v6 = RtlGUIDFromString(&DestinationString, Guid);
    if ( v6 < 0 )
      goto LABEL_17;
    RtlInitUnicodeString(&DestinationString, v31);
    v6 = RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
    if ( v6 < 0 )
      goto LABEL_17;
    LOWORD(Guid[1].Data1) = Value;
    v6 = WdipSemOpenRegistryKey(v29);
    if ( v6 < 0 )
      goto LABEL_17;
    v15 = WdipSemQueryValueFromRegistry(Handle, &v22, (__int64)&ResultLength);
    v6 = v15;
    if ( v15 >= 0 )
    {
      v16 = v22;
      if ( !v22 )
        v16 = -1;
      BYTE2(Guid[1].Data1) = v16;
    }
    else
    {
      if ( v15 != -1073741772 )
        goto LABEL_17;
      BYTE2(Guid[1].Data1) = -1;
    }
    v17 = WdipSemQueryValueFromRegistry(Handle, &v25, (__int64)&ResultLength);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v18 = v25;
      if ( !v25 )
        v18 = -1LL;
      *(_QWORD *)Guid[1].Data4 = v18;
      goto LABEL_35;
    }
    if ( v17 == -1073741772 )
    {
      *(_QWORD *)Guid[1].Data4 = -1LL;
LABEL_35:
      v19 = WdipSemQueryValueFromRegistry(Handle, &v23, (__int64)&ResultLength);
      v6 = v19;
      if ( v19 >= 0 )
      {
        *(_DWORD *)&Guid[2].Data2 = v23;
      }
      else if ( v19 == -1073741772 )
      {
        v6 = 0;
        *(_DWORD *)&Guid[2].Data2 = 0;
      }
    }
  }
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
