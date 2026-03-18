/*
 * XREFs of DwmAsyncDesktopCreate @ 0x1C002217C
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0021F8C (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00293D4 (xxxCreateDesktopEx.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C00AA9BC (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncDesktopCreate(PVOID Object, __int64 a2)
{
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-28h]

  v4 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    memset(v6, 0, sizeof(v6));
    v7[0] = 0LL;
    LODWORD(v6[0]) = 3407884;
    WORD2(v6[0]) = 0x8000;
    LODWORD(v7[1]) = 1073741838;
    *(_QWORD *)((char *)&v7[1] + 4) = a2;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
