/*
 * XREFs of ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000F76C
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000EE2C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800021A0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000E74C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPortClient::ConnectWithName(HANDLE *this, const unsigned __int16 *a2)
{
  unsigned int v3; // edi
  _DWORD *v4; // rax
  struct _PORT_VIEW *v5; // r9
  NTSTATUS v6; // eax
  ULONG ConnectionInformationLength; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+58h] [rbp-20h] BYREF

  v3 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  *(_DWORD *)&SecurityQos.ContextTrackingMode = 257;
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  ConnectionInformationLength = 0;
  if ( !this[5] && *((_DWORD *)this + 7) )
  {
    v4 = HeapAlloc(this[6], 8u, 0x30uLL);
    this[5] = v4;
    if ( !v4 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        4,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9u,
        -2147024882,
        0xD8u,
        0LL);
      return v3;
    }
    *v4 = 48;
    *((_DWORD *)this[5] + 4) = 0;
    *((_QWORD *)this[5] + 3) = *((unsigned int *)this + 7);
    *((_QWORD *)this[5] + 1) = this[4];
  }
  v5 = (struct _PORT_VIEW *)this[5];
  if ( !v5 || !v5->SectionHandle )
    v5 = 0LL;
  v6 = NtConnectPort(this + 2, &DestinationString, &SecurityQos, v5, 0LL, 0LL, 0LL, &ConnectionInformationLength);
  if ( v6 >= 0 )
  {
    *((_BYTE *)this + 24) = 1;
  }
  else
  {
    v3 = v6 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(
      4,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      9u,
      v6 | 0x10000000,
      0xE9u,
      0LL);
  }
  return v3;
}
