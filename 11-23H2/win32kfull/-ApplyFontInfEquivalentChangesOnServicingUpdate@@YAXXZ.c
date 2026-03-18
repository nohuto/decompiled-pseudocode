/*
 * XREFs of ?ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ @ 0x1C013EAE4
 * Callers:
 *     bAddAllFlEntry @ 0x1C001ADEC (bAddAllFlEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

void ApplyFontInfEquivalentChangesOnServicingUpdate(void)
{
  int v0; // edi
  NTSTATUS v1; // eax
  void *v2; // rcx
  __int64 v3; // rdx
  _OWORD *v4; // rcx
  const wchar_t *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // eax
  ULONG v15; // esi
  _BYTE *v16; // rbx
  USHORT AnsiCodePage[4]; // [rsp+38h] [rbp-D0h] BYREF
  void *DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength[2]; // [rsp+58h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v22[158]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v23; // [rsp+310h] [rbp+208h]
  __int16 v24; // [rsp+318h] [rbp+210h]
  __int128 KeyValueInformation; // [rsp+328h] [rbp+220h] BYREF
  int v26; // [rsp+338h] [rbp+230h]
  _BYTE Data[544]; // [rsp+348h] [rbp+240h] BYREF

  *(_OWORD *)&DestinationString[1] = 0LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  DestinationString[0] = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(DestinationString, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"UpdateFontLinks");
    v0 = 2;
    ResultLength[0] = 0;
    v26 = 0;
    KeyValueInformation = 0LL;
    v1 = ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           ResultLength);
    v2 = DestinationString[0];
    if ( v1 < 0 )
    {
LABEL_17:
      ZwClose(v2);
      return;
    }
    ZwDeleteValueKey(DestinationString[0], (PUNICODE_STRING)&DestinationString[1]);
    AnsiCodePage[0] = 0;
    AnsiCodePage[2] = 0;
    RtlGetDefaultCodePage(AnsiCodePage, &AnsiCodePage[2]);
    if ( AnsiCodePage[0] == 936 )
      goto LABEL_8;
    if ( AnsiCodePage[0] == 950 )
      goto LABEL_9;
    if ( AnsiCodePage[2] == 936 )
    {
LABEL_8:
      v0 = 1;
    }
    else if ( AnsiCodePage[2] != 950 )
    {
LABEL_16:
      v2 = DestinationString[0];
      goto LABEL_17;
    }
LABEL_9:
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    KeyHandle = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      v3 = 4LL;
      v4 = Data;
      v5 = L"MICROSS.TTF,Microsoft Sans Serif,108,122";
      do
      {
        v6 = *((_OWORD *)v5 + 1);
        *v4 = *(_OWORD *)v5;
        v7 = *((_OWORD *)v5 + 2);
        v4[1] = v6;
        v8 = *((_OWORD *)v5 + 3);
        v4[2] = v7;
        v9 = *((_OWORD *)v5 + 4);
        v4[3] = v8;
        v10 = *((_OWORD *)v5 + 5);
        v4[4] = v9;
        v11 = *((_OWORD *)v5 + 6);
        v4[5] = v10;
        v12 = *((_OWORD *)v5 + 7);
        v5 += 64;
        v4[6] = v11;
        v4 += 8;
        *(v4 - 1) = v12;
        --v3;
      }
      while ( v3 );
      v13 = *(_OWORD *)v5;
      v14 = *((_DWORD *)v5 + 4);
      v22[0] = 4784205;
      *v4 = v13;
      *((_DWORD *)v4 + 4) = v14;
      v22[1] = 5374019;
      v22[2] = 5439567;
      v22[3] = 3014739;
      v22[4] = 5505108;
      v22[5] = 2883654;
      v22[6] = 6881357;
      v22[7] = 7471203;
      v22[8] = 7536751;
      v22[9] = 6684783;
      v22[10] = 2097268;
      v22[11] = 6357075;
      v22[12] = 7536750;
      v22[13] = 5439520;
      v22[14] = 7471205;
      v22[15] = 6684777;
      v22[16] = 3211308;
      v22[17] = 3670064;
      v22[18] = 3211308;
      v22[19] = 3276850;
      v22[20] = 5046272;
      v22[21] = 4390985;
      v22[22] = 5177426;
      v22[23] = 5439571;
      v22[24] = 5505070;
      v22[25] = 4587604;
      v22[26] = 5046316;
      v22[27] = 6488169;
      v22[28] = 7274610;
      v22[29] = 7274611;
      v22[30] = 7602278;
      v22[31] = 5439520;
      v22[32] = 7209057;
      v22[33] = 2097267;
      v22[34] = 6619219;
      v22[35] = 6881394;
      v22[36] = 102;
      v22[37] = 4784211;
      v22[38] = 5439565;
      v22[39] = 5111893;
      v22[40] = 5505070;
      v22[41] = 4390996;
      v22[42] = 5439532;
      v22[43] = 7143529;
      v22[44] = 7667795;
      v22[45] = 110;
      v22[46] = 4784205;
      v22[47] = 4653134;
      v22[48] = 4784204;
      v22[49] = 3014741;
      v22[50] = 5505108;
      v22[51] = 2883651;
      v22[52] = 6881357;
      v22[53] = 6750318;
      v22[54] = 6881356;
      v22[55] = 6226005;
      v22[56] = 4915272;
      v22[57] = 4390995;
      v22[58] = 83;
      v22[59] = 4784205;
      v22[60] = 4653134;
      v22[61] = 4784204;
      v22[62] = 3014741;
      v22[63] = 5505108;
      v22[64] = 2883651;
      v22[65] = 5046352;
      v22[66] = 7209065;
      v22[67] = 4980839;
      v22[68] = 5570665;
      v22[69] = 5046272;
      v22[70] = 5046355;
      v22[71] = 5111881;
      v22[72] = 4718659;
      v22[73] = 3014735;
      v22[74] = 5505108;
      v22[75] = 2883651;
      v22[76] = 5439565;
      v22[77] = 5242912;
      v22[78] = 6881357;
      v22[79] = 6488174;
      v22[80] = 7274600;
      v22[81] = 4325376;
      v22[82] = 5505089;
      v22[83] = 5111873;
      v22[84] = 3014727;
      v22[85] = 5505108;
      v22[86] = 2883651;
      v22[87] = 6357058;
      v22[88] = 6357108;
      v22[89] = 6750318;
      v22[90] = 5046272;
      v22[91] = 5832787;
      v22[92] = 3014728;
      v22[93] = 5505108;
      v22[94] = 2883651;
      v22[95] = 6881357;
      v22[96] = 7471203;
      v22[97] = 7536751;
      v22[98] = 6684783;
      v22[99] = 2097268;
      v22[100] = 6357081;
      v22[101] = 6619208;
      v22[102] = 2097257;
      v22[103] = 4784213;
      v22[104] = 5046272;
      v22[105] = 4849747;
      v22[106] = 3014728;
      v22[107] = 5505108;
      v22[108] = 2883651;
      v22[109] = 6881357;
      v22[110] = 7471203;
      v22[111] = 7536751;
      v22[112] = 6684783;
      v22[113] = 2097268;
      v22[114] = 6815818;
      v22[115] = 7209061;
      v22[116] = 4718695;
      v22[117] = 6881381;
      v22[118] = 5570592;
      v22[119] = 73;
      v22[120] = 5570649;
      v22[121] = 5177415;
      v22[122] = 4718676;
      v22[123] = 3014733;
      v22[124] = 5505108;
      v22[125] = 2883651;
      v22[126] = 7667801;
      v22[127] = 4653088;
      v22[128] = 7602287;
      v22[129] = 6881384;
      v22[130] = 2097251;
      v22[131] = 4784213;
      v22[132] = 5046272;
      v22[133] = 4980801;
      v22[134] = 5570631;
      v22[135] = 3014734;
      v22[136] = 5505108;
      v22[137] = 2883654;
      v22[138] = 6357069;
      v22[139] = 6750316;
      v22[140] = 7209077;
      v22[141] = 4653088;
      v22[142] = 7602287;
      v22[143] = 6881384;
      v22[144] = 99;
      v22[145] = 4522067;
      v22[146] = 5570631;
      v22[147] = 5439561;
      v22[148] = 5046361;
      v22[149] = 5505070;
      v22[150] = 4587604;
      v22[151] = 5439532;
      v22[152] = 6750309;
      v22[153] = 6619247;
      v22[154] = 5570592;
      v22[155] = 2097225;
      v22[156] = 7929939;
      v22[157] = 6422637;
      v23 = 7077999LL;
      v24 = 0;
      if ( v0 == 1 )
      {
        v15 = 532;
        v16 = Data;
      }
      else
      {
        v15 = 642;
        v16 = v22;
      }
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"SimSun-ExtG");
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&DestinationString[1], 0, 7u, v16, v15);
      ZwClose(KeyHandle);
    }
    goto LABEL_16;
  }
}
