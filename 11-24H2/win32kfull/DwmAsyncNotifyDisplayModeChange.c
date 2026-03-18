/*
 * XREFs of DwmAsyncNotifyDisplayModeChange @ 0x140201D20
 * Callers:
 *     <none>
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140062E44 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncNotifyDisplayModeChange(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+48h] [rbp-10h]

  v4 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object, a2, a3);
  if ( Object )
  {
    v8 = 1073741878;
    v7 = 0LL;
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[0]) = 2883588;
    WORD2(v6[0]) = 0x8000;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
