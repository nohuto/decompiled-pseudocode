/*
 * XREFs of _CmSetDeviceContainerMappedProperty @ 0x140A959B4
 * Callers:
 *     _CmDeleteDeviceContainerWorker @ 0x14081A19C (_CmDeleteDeviceContainerWorker.c)
 *     _PnpDispatchDeviceContainer @ 0x1408B3940 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmSetDeviceContainerMappedProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r8d
  unsigned int i; // ecx
  __int64 v8; // r10
  __int64 v9; // rdx

  v5 = -1073741802;
  if ( !a4 )
  {
    for ( i = 0; i < 4; ++i )
    {
      v8 = (__int64)*(&off_1400055E0 + 2 * i);
      if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v8 + 16) )
      {
        v9 = *(_QWORD *)a5 - *(_QWORD *)v8;
        if ( *(_QWORD *)a5 == *(_QWORD *)v8 )
          v9 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v8 + 8);
        if ( !v9 )
          return (unsigned int)-1073741790;
      }
    }
  }
  return v5;
}
