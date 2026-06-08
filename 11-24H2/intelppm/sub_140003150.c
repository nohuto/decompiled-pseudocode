/*
 * XREFs of sub_140003150 @ 0x140003150
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 */

void __fastcall sub_140003150(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  if ( !byte_140019B20 )
  {
    v4 = a2;
    v2 = PoFxProcessorNotification(a1, 33LL, &v4);
    if ( v2 < 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v3) = 4;
        sub_1400050F8(off_140018050->DeviceExtension, v3, 2, 22, (__int64)&unk_140014CC8, v2);
      }
      byte_140019B20 = 1;
    }
  }
}
