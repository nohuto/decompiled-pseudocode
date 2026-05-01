/*
 * XREFs of ?Initialize@PiiFilter@@QEAAJXZ @ 0x1802CB9AC
 * Callers:
 *     ?RuntimeClassInitialize@IsGameManager@@QEAAJXZ @ 0x180062A7C (-RuntimeClassInitialize@IsGameManager@@QEAAJXZ.c)
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x18031B3E8 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 * Callees:
 *     PiiFilterCreate @ 0x180136DFC (PiiFilterCreate.c)
 */

__int64 __fastcall PiiFilter::Initialize(RtlNameValueArray **this)
{
  __int64 result; // rax

  result = PiiFilterCreate(this);
  if ( (int)result >= 0 )
    *((_DWORD *)this + 2) = 1;
  return result;
}
