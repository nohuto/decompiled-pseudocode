/*
 * XREFs of _CmGetDevicePanelMappedPropertyKeys @ 0x14081DC10
 * Callers:
 *     _CmDeleteDevicePanelWorker @ 0x14081D60C (_CmDeleteDevicePanelWorker.c)
 *     _PnpDispatchDevicePanel @ 0x140820650 (_PnpDispatchDevicePanel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDevicePanelMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 *v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // edx

  v7 = 0;
  *a7 = 0;
  v8 = 0LL;
  while ( v7 < 3 )
  {
    if ( a5 && (unsigned int)v8 < a6 )
    {
      v9 = 5 * v8;
      v10 = (&off_14000C578)[2 * v7];
      *(_OWORD *)(a5 + 4 * v9) = *(_OWORD *)v10;
      *(_DWORD *)(a5 + 4 * v9 + 16) = *((_DWORD *)v10 + 4);
    }
    v11 = *a7;
    v8 = 0xFFFFFFFFLL;
    v12 = *a7 + 1;
    if ( v12 >= *a7 )
      v8 = v12;
    v13 = v12 < v11 ? 0xC0000095 : 0;
    *a7 = v8;
    if ( v12 < v11 )
    {
      *a7 = 0;
      return v13;
    }
    ++v7;
  }
  return a6 < (unsigned int)v8 ? 0xC0000023 : 0;
}
