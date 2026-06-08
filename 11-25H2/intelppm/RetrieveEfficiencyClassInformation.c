/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x140029798
 * Callers:
 *     InitializeEnergyEstimation @ 0x140029660 (InitializeEnergyEstimation.c)
 * Callees:
 *     EnumerateNextDevice @ 0x140004B78 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400053BC (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x1400054C4 (InitializeEnumerationContext.c)
 *     GetProcessorEfficiencyClass @ 0x140028D44 (GetProcessorEfficiencyClass.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  unsigned int v2; // eax
  __int64 *v3; // rcx
  unsigned int v4; // r11d
  _OWORD v6[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF

  v8 = 0LL;
  memset(v6, 0, sizeof(v6));
  v7 = 0;
  if ( byte_140019408 )
  {
LABEL_2:
    InitializeEnumerationContext((__int64)&qword_1400191C8, 32, (__int64)v6);
    ResetEnumerationContext((__int64 *)v6);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v6, &v8) )
    {
      if ( _bittest64((const signed __int64 *)(v8 + 280), 0x25u) )
        *(_BYTE *)(v8 + 376) = 0;
    }
    dword_140019864 = 1;
  }
  else
  {
    v9 = 0LL;
    InitializeEnumerationContext((__int64)&qword_1400191C8, 32, (__int64)v6);
    ResetEnumerationContext((__int64 *)v6);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v6, &v8) )
    {
      v0 = v8;
      if ( _bittest64((const signed __int64 *)(v8 + 280), 0x25u) )
      {
        if ( (int)GetProcessorEfficiencyClass(v8, &v7) < 0 )
          goto LABEL_2;
        v1 = v7;
        *(_BYTE *)(v0 + 376) = v7;
        ++*((_DWORD *)&v9 + v1);
      }
    }
    v2 = 0;
    v3 = &v9;
    do
    {
      if ( !*(_DWORD *)v3 )
        break;
      ++v2;
      v3 = (__int64 *)((char *)v3 + 4);
    }
    while ( v2 < 2 );
    dword_140019864 = v2;
    return 0;
  }
  return v4;
}
