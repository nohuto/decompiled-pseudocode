/*
 * XREFs of _CmSetDeviceInterfaceMappedProperty @ 0x1408AEE34
 * Callers:
 *     _CmDeleteDeviceInterfaceWorker @ 0x140818ED8 (_CmDeleteDeviceInterfaceWorker.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA5F0 (_PnpDispatchDeviceInterface.c)
 * Callees:
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408AEF9C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1408AF360 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x1408B0B98 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall CmSetDeviceInterfaceMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        ULONG a8)
{
  int v8; // ebp
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int i; // edx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx

  v8 = a3;
  v11 = -1073741802;
  if ( !a4 )
  {
    while ( (unsigned int)a4 < 3 )
    {
      v12 = (__int64)*(&off_140B3D1B0 + 2 * (unsigned int)a4);
      if ( v12 && *(_DWORD *)(a5 + 16) == *(_DWORD *)(v12 + 16) )
      {
        v13 = *(_QWORD *)a5 - *(_QWORD *)v12;
        if ( *(_QWORD *)a5 == *(_QWORD *)v12 )
          v13 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v12 + 8);
        if ( !v13 )
        {
          if ( a6 < 2 )
            v14 = CmDeleteDeviceInterfaceMappedPropertyFromRegValue(a1, a2, a3, a5);
          else
            v14 = CmSetDeviceInterfaceMappedPropertyFromRegValue(a1, a2, a3, a5, a6, a7, a8);
          v11 = v14;
          if ( v14 >= 0 )
          {
            v18 = *(_QWORD *)(a1 + 496);
            if ( v18 )
              PnpInterfaceRaisePropertyChangeEventWorker(a1, a2, v8, 0, a5, v18);
            return v11;
          }
          if ( v14 != -1073741802 )
            return v11;
          break;
        }
      }
      LODWORD(a4) = a4 + 1;
    }
    for ( i = 0; i < 4; ++i )
    {
      v17 = (__int64)*(&off_140B3DA10 + 2 * i);
      if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v17 + 16) )
      {
        v19 = *(_QWORD *)a5 - *(_QWORD *)v17;
        if ( *(_QWORD *)a5 == *(_QWORD *)v17 )
          v19 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v17 + 8);
        if ( !v19 )
          return (unsigned int)-1073741790;
      }
    }
  }
  return v11;
}
