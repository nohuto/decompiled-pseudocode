/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyLocales @ 0x14081EE80
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x1408CA5F0 (_PnpDispatchDeviceInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v8; // r8d
  unsigned int v9; // edx
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int i; // edx
  __int64 v13; // r9
  __int64 v14; // rcx

  v8 = -1073741802;
  v9 = 0;
  *a7 = 0;
  while ( v9 < 3 )
  {
    v10 = (__int64)*(&off_140B3D1B0 + 2 * v9);
    if ( v10 && *(_DWORD *)(a4 + 16) == *(_DWORD *)(v10 + 16) )
    {
      v11 = *(_QWORD *)a4 - *(_QWORD *)v10;
      if ( *(_QWORD *)a4 == *(_QWORD *)v10 )
        v11 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v10 + 8);
      if ( !v11 )
      {
LABEL_16:
        *a7 = 1;
        if ( a6 )
        {
          v8 = 0;
          *a5 = 0;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
        return v8;
      }
    }
    ++v9;
  }
  for ( i = 0; i < 4; ++i )
  {
    v13 = (__int64)*(&off_140B3DA10 + 2 * i);
    if ( *(_DWORD *)(a4 + 16) == *(_DWORD *)(v13 + 16) )
    {
      v14 = *(_QWORD *)a4 - *(_QWORD *)v13;
      if ( *(_QWORD *)a4 == *(_QWORD *)v13 )
        v14 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v13 + 8);
      if ( !v14 )
        goto LABEL_16;
    }
  }
  return v8;
}
