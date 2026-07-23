/*
 * XREFs of _PnpDispatchDeviceContainer @ 0x1408B3940
 * Callers:
 *     <none>
 * Callees:
 *     _CmGetDeviceContainerMappedPropertyLocales @ 0x14081A808 (_CmGetDeviceContainerMappedPropertyLocales.c)
 *     _CmGetMatchingDeviceContainerList @ 0x14081AAE4 (_CmGetMatchingDeviceContainerList.c)
 *     _CmGetDeviceContainerMappedProperty @ 0x1408B3AF8 (_CmGetDeviceContainerMappedProperty.c)
 *     _CmOpenDeviceContainerRegKey @ 0x1408B3C14 (_CmOpenDeviceContainerRegKey.c)
 *     _CmValidateDeviceContainerName @ 0x1408B5474 (_CmValidateDeviceContainerName.c)
 *     _CmSetDeviceContainerMappedProperty @ 0x140A959B4 (_CmSetDeviceContainerMappedProperty.c)
 *     _CmGetDeviceContainerMappedPropertyKeys @ 0x140A988B4 (_CmGetDeviceContainerMappedPropertyKeys.c)
 */

__int64 __fastcall PnpDispatchDeviceContainer(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 (__fastcall *v6)(__int64, __int64, unsigned int); // rdx
  __int128 *v7; // r8
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v17 = 0LL;
  v8 = a4 - 1;
  if ( !v8 )
    return CmValidateDeviceContainerName(a1, a2, 0LL);
  v9 = v8 - 1;
  if ( !v9 )
    return CmOpenDeviceContainerRegKey(a1, a2, 0, 0, *(_DWORD *)a5, *(_BYTE *)(a5 + 4), *(_QWORD *)(a5 + 8), a5 + 16);
  v10 = v9 - 1;
  if ( !v10 )
    return 3221225474LL;
  v11 = v10 - 1;
  if ( !v11 )
    return 3221225474LL;
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            return CmSetDeviceContainerMappedProperty(a1, 0, 0, *(_QWORD *)(a5 + 8), *(_QWORD *)(a5 + 16));
          else
            return 3221225485LL;
        }
        else
        {
          return CmGetDeviceContainerMappedProperty(
                   a1,
                   a2,
                   *(_QWORD *)a5,
                   *(_QWORD *)(a5 + 8),
                   *(_QWORD *)(a5 + 16),
                   *(_QWORD *)(a5 + 24),
                   *(_QWORD *)(a5 + 32),
                   *(_DWORD *)(a5 + 40),
                   *(_QWORD *)(a5 + 48));
        }
      }
      else
      {
        return CmGetDeviceContainerMappedPropertyLocales(
                 a1,
                 0LL,
                 0LL,
                 *(_QWORD *)(a5 + 8),
                 *(_WORD **)(a5 + 16),
                 *(_DWORD *)(a5 + 24),
                 *(_DWORD **)(a5 + 32));
      }
    }
    else
    {
      return CmGetDeviceContainerMappedPropertyKeys(
               a5,
               0,
               0,
               0,
               *(_QWORD *)(a5 + 24),
               *(_DWORD *)(a5 + 32),
               *(_QWORD *)(a5 + 40));
    }
  }
  else
  {
    if ( *(_QWORD *)a5 )
    {
      *(_QWORD *)&v17 = *(_QWORD *)a5;
      v6 = PnpCmMatchCallbackRoutine;
      v7 = &v17;
      *((_QWORD *)&v17 + 1) = *(_QWORD *)(a5 + 8);
    }
    return CmGetMatchingDeviceContainerList(
             a1,
             (__int64)v6,
             (__int64)v7,
             *(_QWORD *)(a5 + 16),
             *(_DWORD *)(a5 + 24),
             *(_QWORD *)(a5 + 32),
             *(_DWORD *)(a5 + 40) & 0xFFFF0000);
  }
}
