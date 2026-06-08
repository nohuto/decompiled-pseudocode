/*
 * XREFs of sub_140049A7C @ 0x140049A7C
 * Callers:
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_1400294F4 @ 0x1400294F4 (sub_1400294F4.c)
 */

__int64 __fastcall sub_140049A7C(__int64 a1)
{
  int v1; // ebx
  int v3; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  v1 = sub_1400294F4(a1, (char **)&P);
  if ( v1 >= 0 )
  {
    if ( *((_DWORD *)P + 14) )
    {
      dword_140019AC4 = 268439553;
      dword_140019ACC = 0;
      dword_140019AC8 = *((_DWORD *)P + 14);
    }
    if ( *((_DWORD *)P + 15) )
    {
      dword_140019AD0 = 268439553;
      HIDWORD(qword_140019AD4) = 0;
      LODWORD(qword_140019AD4) = *((_DWORD *)P + 15);
    }
    if ( *((_DWORD *)P + 16) )
    {
      dword_140019ADC = 268439553;
      dword_140019AE4 = 0;
      dword_140019AE0 = *((_DWORD *)P + 16);
    }
    if ( *((_DWORD *)P + 17) )
    {
      dword_140019AE8 = 268439553;
      HIDWORD(qword_140019AEC) = 0;
      LODWORD(qword_140019AEC) = *((_DWORD *)P + 17);
    }
    if ( *((_DWORD *)P + 18) )
    {
      dword_140019AF4 = 134219777;
      dword_140019AFC = 0;
      dword_140019AF8 = *((_DWORD *)P + 18);
    }
    dword_140019B00 = *((_DWORD *)P + 12);
    byte_140019B06 = *((_BYTE *)P + 105);
    byte_140019B07 = *((_BYTE *)P + 104);
    word_140019AC0 = *((_WORD *)P + 48);
    word_140019AC2 = *((_WORD *)P + 49);
    byte_140019B04 = *((_BYTE *)P + 55);
    byte_140019B05 = *((_BYTE *)P + 95);
    ExFreePoolWithTag(P, 0);
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v3 = v1;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0x5Du, (__int64)&unk_140012FE8, v3);
  }
  return (unsigned int)v1;
}
