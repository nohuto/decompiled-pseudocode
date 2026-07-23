/*
 * XREFs of _CmGetDeviceContainerMappedPropertyKeys @ 0x140A988B4
 * Callers:
 *     _CmDeleteDeviceContainerWorker @ 0x14081A19C (_CmDeleteDeviceContainerWorker.c)
 *     _PnpDispatchDeviceContainer @ 0x1408B3940 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDeviceContainerMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int i; // r8d
  __int64 v8; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ecx

  *a7 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= 4 )
      return a6 < *a7 ? 0xC0000023 : 0;
    v8 = (__int64)*(&off_1400055E0 + 2 * i);
    if ( v8 )
      break;
LABEL_4:
    ;
  }
  if ( a5 )
  {
    v10 = *a7;
    if ( (unsigned int)v10 < a6 )
    {
      v11 = 5 * v10;
      *(_OWORD *)(a5 + 4 * v11) = *(_OWORD *)v8;
      *(_DWORD *)(a5 + 4 * v11 + 16) = *(_DWORD *)(v8 + 16);
    }
  }
  v12 = *a7 + 1;
  if ( v12 >= *a7 )
  {
    *a7 = v12;
    goto LABEL_4;
  }
  *a7 = 0;
  return (unsigned int)-1073741675;
}
