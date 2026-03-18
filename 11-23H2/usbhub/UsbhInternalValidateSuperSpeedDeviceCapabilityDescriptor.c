/*
 * XREFs of UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C0052338
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0051EEC (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 */

char __fastcall UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r11
  __int64 v3; // r10
  char v5; // dl
  int v7; // eax
  char v8; // r10

  v2 = a2;
  v3 = 0LL;
  v5 = 1;
  if ( *v2 == 10 )
  {
    if ( (v2[3] & 0xFD) != 0 )
    {
      Log(a1, 256, 1448301362, v2[3], 0LL);
      v5 = v3;
    }
    if ( *((_WORD *)v2 + 2) == (_WORD)v3 )
    {
      Log(a1, 256, 1448301363, 0LL, v3);
      v5 = v3;
    }
    if ( (v2[6] & 0xF0) != 0 )
    {
      Log(a1, 256, 1448301364, v2[6], v3);
      v5 = v3;
    }
    v7 = *((unsigned __int16 *)v2 + 2);
    if ( !_bittest(&v7, v2[6]) )
    {
      Log(a1, 256, 1448301365, v2[6], v3);
      v5 = v3;
    }
    if ( v2[7] >= 0xBu )
    {
      Log(a1, 256, 1448301366, v2[7], v3);
      v5 = v3;
    }
    if ( *((_WORD *)v2 + 4) >= 0x800u )
    {
      Log(a1, 256, 1448301367, *((unsigned __int16 *)v2 + 4), v3);
      return v8;
    }
    return v5;
  }
  else
  {
    Log(a1, 256, 1448301361, *v2, 0LL);
    return 0;
  }
}
