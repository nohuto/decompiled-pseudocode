/*
 * XREFs of _CmGetInstallerClassMappedPropertyKeys @ 0x14081F520
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x1408192B0 (_CmDeleteInstallerClassWorker.c)
 *     _PnpDispatchInstallerClass @ 0x1409ADA00 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1409ADE0C (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1409AE2B4 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409AE4D8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1409AE93C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyKeys(
        int a1,
        int a2,
        int a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 i; // rdi
  __int64 v12; // rbp
  unsigned int InstallerClassMappedPropertyFromRegProp; // eax
  unsigned int v14; // r10d
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned int j; // edi
  __int64 v19; // rax
  __int64 v20; // rbp
  unsigned int InstallerClassMappedPropertyFromRegValue; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ecx
  unsigned int k; // edi
  __int64 v26; // rbp
  unsigned int InstallerClassMappedPropertyFromComposite; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // ecx
  int InstallerClassMappedPropertyFromCoInstallers; // eax
  __int64 v32; // rax
  unsigned int v33; // ecx
  _DWORD v35[4]; // [rsp+40h] [rbp-38h] BYREF
  int v36; // [rsp+90h] [rbp+18h]

  v36 = a3;
  v7 = a7;
  v35[0] = 0;
  LODWORD(a7) = 0;
  *v7 = 0;
  for ( i = 0LL; (unsigned int)i < 9; i = (unsigned int)(i + 1) )
  {
    v12 = (__int64)*(&CmClassRegPropMap + 3 * i);
    if ( v12 )
    {
      if ( a4
        || (InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                        a1,
                                                        a2,
                                                        a3,
                                                        (unsigned int)*(&CmClassRegPropMap + 3 * i),
                                                        (__int64)v35,
                                                        0LL,
                                                        0,
                                                        (__int64)&a7),
            v14 = InstallerClassMappedPropertyFromRegProp,
            InstallerClassMappedPropertyFromRegProp == -1073741789)
        || !InstallerClassMappedPropertyFromRegProp )
      {
        if ( a5 )
        {
          v15 = *v7;
          if ( (unsigned int)v15 < a6 )
          {
            v16 = 5 * v15;
            *(_OWORD *)(a5 + 4 * v16) = *(_OWORD *)v12;
            *(_DWORD *)(a5 + 4 * v16 + 16) = *(_DWORD *)(v12 + 16);
          }
        }
        v17 = *v7 + 1;
        if ( v17 < *v7 )
          goto LABEL_51;
        *v7 = v17;
      }
      else if ( InstallerClassMappedPropertyFromRegProp == -1073741772 )
      {
        goto LABEL_52;
      }
    }
    a3 = v36;
  }
  for ( j = 0; j < 0xD; ++j )
  {
    v19 = 32LL * j;
    v20 = *(__int64 *)((char *)&off_140B3F2F0 + v19);
    if ( v20 )
    {
      if ( a4
        || (InstallerClassMappedPropertyFromRegValue = CmGetInstallerClassMappedPropertyFromRegValue(
                                                         a1,
                                                         a2,
                                                         a3,
                                                         (unsigned int)*(DEVPROPKEY **)((char *)&off_140B3F2F0 + v19),
                                                         (__int64)v35,
                                                         0LL,
                                                         0,
                                                         (__int64)&a7),
            v14 = InstallerClassMappedPropertyFromRegValue,
            InstallerClassMappedPropertyFromRegValue == -1073741789)
        || !InstallerClassMappedPropertyFromRegValue )
      {
        if ( a5 )
        {
          v22 = *v7;
          if ( (unsigned int)v22 < a6 )
          {
            v23 = 5 * v22;
            *(_OWORD *)(a5 + 4 * v23) = *(_OWORD *)v20;
            *(_DWORD *)(a5 + 4 * v23 + 16) = *(_DWORD *)(v20 + 16);
          }
        }
        v24 = *v7 + 1;
        if ( v24 < *v7 )
          goto LABEL_51;
        *v7 = v24;
      }
      else if ( InstallerClassMappedPropertyFromRegValue == -1073741772 )
      {
        goto LABEL_52;
      }
    }
    a3 = v36;
  }
  for ( k = 0; k < 4; ++k )
  {
    v26 = (__int64)*(&off_140B3D9D0 + 2 * k);
    if ( a4
      || (InstallerClassMappedPropertyFromComposite = CmGetInstallerClassMappedPropertyFromComposite(
                                                        a1,
                                                        (__int64)v35,
                                                        0LL,
                                                        0,
                                                        (__int64)&a7),
          v14 = InstallerClassMappedPropertyFromComposite,
          InstallerClassMappedPropertyFromComposite == -1073741789)
      || !InstallerClassMappedPropertyFromComposite )
    {
      if ( a5 )
      {
        v28 = *v7;
        if ( (unsigned int)v28 < a6 )
        {
          v29 = 5 * v28;
          *(_OWORD *)(a5 + 4 * v29) = *(_OWORD *)v26;
          *(_DWORD *)(a5 + 4 * v29 + 16) = *(_DWORD *)(v26 + 16);
        }
      }
      v30 = *v7 + 1;
      if ( v30 < *v7 )
        goto LABEL_51;
      *v7 = v30;
    }
    else if ( InstallerClassMappedPropertyFromComposite == -1073741772 )
    {
      goto LABEL_52;
    }
    a3 = v36;
  }
  if ( !a4 )
  {
    InstallerClassMappedPropertyFromCoInstallers = CmGetInstallerClassMappedPropertyFromCoInstallers(
                                                     a1,
                                                     a2,
                                                     a3,
                                                     (unsigned int)v35,
                                                     0LL,
                                                     0,
                                                     (__int64)&a7);
    if ( InstallerClassMappedPropertyFromCoInstallers != -1073741789 )
    {
      if ( InstallerClassMappedPropertyFromCoInstallers )
        return a6 < *v7 ? 0xC0000023 : 0;
    }
  }
  if ( a5 )
  {
    v32 = *v7;
    if ( (unsigned int)v32 < a6 )
      *(DEVPROPKEY *)(a5 + 20 * v32) = DEVPKEY_DeviceClass_ClassCoInstallers;
  }
  v33 = *v7 + 1;
  if ( v33 >= *v7 )
  {
    *v7 = v33;
    return a6 < *v7 ? 0xC0000023 : 0;
  }
LABEL_51:
  v14 = -1073741675;
LABEL_52:
  *v7 = 0;
  return v14;
}
