/*
 * XREFs of ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000FD48
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000F66C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800021B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180003154 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000EF88 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPortClient::ConnectWithName(CPortClient *this, const unsigned __int16 *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v7[4]; // [rsp+70h] [rbp-68h] BYREF
  int v8; // [rsp+74h] [rbp-64h]
  int v9; // [rsp+78h] [rbp-60h]
  __int16 v10; // [rsp+7Ch] [rbp-5Ch]
  __int64 v11; // [rsp+80h] [rbp-58h]

  v3 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  memset_0(v7, 0, 0x48uLL);
  v8 = 12;
  v9 = 1;
  v10 = 257;
  v11 = 512LL;
  v4 = NtAlpcConnectPort((char *)this + 16, &DestinationString, 0LL, v7, 0x20000, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( v4 >= 0 )
  {
    *((_BYTE *)this + 24) = 1;
  }
  else
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(
      4,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      9u,
      v4 | 0x10000000,
      0xD2u,
      0LL);
  }
  return v3;
}
