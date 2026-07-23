/*
 * XREFs of _CmDeleteInstallerClassWorker @ 0x1408192B0
 * Callers:
 *     _CmDeleteInstallerClass @ 0x140819158 (_CmDeleteInstallerClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _CmDeleteInstallerClassRegKey @ 0x140819284 (_CmDeleteInstallerClassRegKey.c)
 *     _CmRaiseDeleteEvent @ 0x14081CA00 (_CmRaiseDeleteEvent.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14081F520 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14081FF04 (_CmSetInstallerClassMappedProperty.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140A163D4 (_CmGetMatchingFilteredDeviceList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteInstallerClassWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // edi
  unsigned int MatchingFilteredDeviceList; // eax
  int v7; // r9d
  int *v8; // r14
  unsigned int v9; // ebx
  int v10; // eax
  void *Pool2; // rbx
  unsigned int v12; // ebp
  int InstallerClassMappedPropertyKeys; // eax
  unsigned __int64 v14; // r14
  __int64 i; // rbp
  int v16; // eax
  unsigned int v18; // [rsp+50h] [rbp-48h] BYREF
  int v19; // [rsp+54h] [rbp-44h] BYREF
  _DWORD v20[4]; // [rsp+58h] [rbp-40h] BYREF

  v3 = 0;
  v19 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(a1, a2, 128, 0, 0LL, 0LL, 0, (__int64)&v19);
    if ( MatchingFilteredDeviceList == -1073741789 )
    {
      return (unsigned int)-1073741535;
    }
    else if ( MatchingFilteredDeviceList )
    {
      return MatchingFilteredDeviceList;
    }
    else
    {
      v20[0] = 800;
      v8 = v20;
      v20[1] = 544;
      v9 = 0;
      v20[2] = 288;
      while ( v9 < 3 )
      {
        v10 = CmDeleteInstallerClassRegKey(a1, a2, *v8);
        if ( v10 && v10 != -1073741772 && v10 != -1073741811 && v10 != -1073741637 )
        {
          v3 = v10;
          if ( v10 < 0 )
            return (unsigned int)v3;
          break;
        }
        ++v9;
        ++v8;
      }
      Pool2 = 0LL;
      v12 = 0;
      v18 = 0;
      while ( 1 )
      {
        LOBYTE(v7) = 1;
        InstallerClassMappedPropertyKeys = CmGetInstallerClassMappedPropertyKeys(
                                             a1,
                                             a2,
                                             0,
                                             v7,
                                             (__int64)Pool2,
                                             v12,
                                             (__int64)&v18);
        if ( InstallerClassMappedPropertyKeys != -1073741789 )
          break;
        v12 = v18;
        v14 = 20LL * v18;
        if ( v14 > 0xFFFFFFFF )
        {
          InstallerClassMappedPropertyKeys = -1073741811;
          goto LABEL_25;
        }
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v14, 0x52504E50u);
        if ( !Pool2 )
        {
          InstallerClassMappedPropertyKeys = -1073741801;
LABEL_25:
          v3 = InstallerClassMappedPropertyKeys;
          goto LABEL_40;
        }
      }
      if ( InstallerClassMappedPropertyKeys && InstallerClassMappedPropertyKeys != -1073741275 )
        goto LABEL_25;
      for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
      {
        v16 = CmSetInstallerClassMappedProperty(a1, a2, 0, 0, (__int64)Pool2 + 20 * i, 0, 0LL, 0);
        if ( v16 && v16 != -1073741275 && v16 != -1073741790 && v16 != -1073741802 && v16 != -1073741637 )
        {
          v3 = v16;
          break;
        }
      }
      if ( v3 >= 0 )
      {
        InstallerClassMappedPropertyKeys = CmDeleteInstallerClassRegKey(a1, a2, 32);
        if ( InstallerClassMappedPropertyKeys
          && InstallerClassMappedPropertyKeys != -1073741772
          && InstallerClassMappedPropertyKeys != -1073741811 )
        {
          goto LABEL_25;
        }
        CmRaiseDeleteEvent(a1, a2, 2LL);
      }
LABEL_40:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
    }
  }
  return (unsigned int)v3;
}
