/*
 * XREFs of _CmGetDeviceMappedPropertyKeys @ 0x1409AB838
 * Callers:
 *     _PnpDispatchDevice @ 0x1408CB5A0 (_PnpDispatchDevice.c)
 *     _CmDeleteDeviceWorker @ 0x1409AA048 (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409ABB00 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409ACEE0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409AD3C4 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 v11; // r11
  unsigned int i; // edi
  __int64 v13; // rsi
  unsigned int DeviceMappedPropertyFromRegProp; // eax
  unsigned int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned int j; // edi
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int k; // edi
  __int64 v24; // rsi
  unsigned int DeviceMappedPropertyFromComposite; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // ecx
  unsigned int DeviceMappedPropertyFromInstanceKeyRegValue; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // ecx
  _DWORD v33[4]; // [rsp+50h] [rbp-38h] BYREF

  v7 = a7;
  v33[0] = 0;
  *a7 = 0;
  v11 = a1;
  LODWORD(a7) = 0;
  for ( i = 0; i < 0x21; ++i )
  {
    v13 = (__int64)*(&CmDeviceRegPropMap + 3 * i);
    if ( v13 )
    {
      if ( a4
        || (DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                                v11,
                                                a2,
                                                a3,
                                                v13,
                                                (__int64)v33,
                                                0LL,
                                                0,
                                                (__int64)&a7,
                                                0),
            v15 = DeviceMappedPropertyFromRegProp,
            DeviceMappedPropertyFromRegProp == -1073741789)
        || !DeviceMappedPropertyFromRegProp )
      {
        if ( a5 )
        {
          v16 = *v7;
          if ( (unsigned int)v16 < a6 )
          {
            v17 = 5 * v16;
            *(_OWORD *)(a5 + 4 * v17) = *(_OWORD *)v13;
            *(_DWORD *)(a5 + 4 * v17 + 16) = *(_DWORD *)(v13 + 16);
          }
        }
        v18 = *v7 + 1;
        if ( v18 < *v7 )
        {
LABEL_10:
          v15 = -1073741675;
LABEL_11:
          *v7 = 0;
          return v15;
        }
        *v7 = v18;
      }
      else if ( DeviceMappedPropertyFromRegProp == -1073741632 )
      {
        goto LABEL_11;
      }
    }
    v11 = a1;
  }
  for ( j = 0; j < 2; ++j )
  {
    v21 = 32LL * j;
    v22 = *(__int64 *)((char *)&off_140B3D6F0 + v21);
    if ( v22 )
    {
      if ( a4
        || (DeviceMappedPropertyFromInstanceKeyRegValue = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(
                                                            v11,
                                                            a2,
                                                            a3,
                                                            (unsigned int)*(DEVPROPKEY **)((char *)&off_140B3D6F0 + v21),
                                                            (__int64)v33,
                                                            0LL,
                                                            0,
                                                            (__int64)&a7),
            v15 = DeviceMappedPropertyFromInstanceKeyRegValue,
            DeviceMappedPropertyFromInstanceKeyRegValue == -1073741789)
        || !DeviceMappedPropertyFromInstanceKeyRegValue )
      {
        if ( a5 )
        {
          v30 = *v7;
          if ( (unsigned int)v30 < a6 )
          {
            v31 = 5 * v30;
            *(_OWORD *)(a5 + 4 * v31) = *(_OWORD *)v22;
            *(_DWORD *)(a5 + 4 * v31 + 16) = *(_DWORD *)(v22 + 16);
          }
        }
        v32 = *v7 + 1;
        if ( v32 < *v7 )
          goto LABEL_10;
        *v7 = v32;
      }
      else if ( DeviceMappedPropertyFromInstanceKeyRegValue == -1073741632 )
      {
        goto LABEL_11;
      }
    }
    v11 = a1;
  }
  for ( k = 0; k < 0x1C; ++k )
  {
    v24 = (__int64)*(&off_140B3FB70 + 2 * k);
    if ( a4
      || (DeviceMappedPropertyFromComposite = CmGetDeviceMappedPropertyFromComposite(
                                                v11,
                                                a2,
                                                a3,
                                                v24,
                                                v33,
                                                0LL,
                                                0,
                                                &a7,
                                                0),
          v15 = DeviceMappedPropertyFromComposite,
          DeviceMappedPropertyFromComposite == -1073741789)
      || !DeviceMappedPropertyFromComposite )
    {
      if ( a5 )
      {
        v26 = *v7;
        if ( (unsigned int)v26 < a6 )
        {
          v27 = 5 * v26;
          *(_OWORD *)(a5 + 4 * v27) = *(_OWORD *)v24;
          *(_DWORD *)(a5 + 4 * v27 + 16) = *(_DWORD *)(v24 + 16);
        }
      }
      v28 = *v7 + 1;
      if ( v28 < *v7 )
        goto LABEL_10;
      *v7 = v28;
    }
    else if ( DeviceMappedPropertyFromComposite == -1073741632 )
    {
      goto LABEL_11;
    }
    v11 = a1;
  }
  return a6 < *v7 ? 0xC0000023 : 0;
}
