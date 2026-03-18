/*
 * XREFs of PiControlGetUserFlagsFromDeviceNode @ 0x1408CEEF8
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x1408CEC60 (PiControlGetSetDeviceStatus.c)
 * Callees:
 *     PipAreDriversLoaded @ 0x1404E6CA8 (PipAreDriversLoaded.c)
 *     PipIsDevNodeDNStarted @ 0x1404E6CD4 (PipIsDevNodeDNStarted.c)
 *     Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1404F1B38 (Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline.c)
 *     _CmIsRootEnumeratedDevice @ 0x140954D08 (_CmIsRootEnumeratedDevice.c)
 */

__int64 __fastcall PiControlGetUserFlagsFromDeviceNode(__int64 a1, int *a2)
{
  int v4; // ebx
  int v5; // edi
  char IsRootEnumeratedDevice; // al
  int v7; // ecx
  int v8; // ebx
  int v9; // edi
  __int64 result; // rax
  int v11; // r10d
  int v12; // r9d
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  int v31; // ecx
  int v32; // edx

  v4 = (unsigned int)PipAreDriversLoaded(a1) != 0 ? 25165826 : 25165824;
  v5 = v4 | 8;
  if ( !(unsigned int)PipIsDevNodeDNStarted(a1) )
    v5 = v4;
  IsRootEnumeratedDevice = CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48));
  v7 = v5 | 1;
  if ( !IsRootEnumeratedDevice )
    v7 = v5;
  v8 = v7 | 0x4000;
  if ( (*(_BYTE *)(a1 + 560) & 0x10) == 0 )
    v8 = v7;
  v9 = v8 | 0x40000;
  result = Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline();
  v11 = *(_DWORD *)(a1 + 400);
  v12 = *(_DWORD *)(a1 + 396);
  if ( (_DWORD)result )
  {
    result = *(unsigned int *)(a1 + 600);
    if ( (v11 & 1) == 0 )
      v9 = v8;
    v13 = v9 | 0x40000000;
    if ( (v11 & 2) == 0 )
      v13 = v9;
    v14 = v13 | 0x2000000;
    if ( (v11 & 0x40) == 0 )
      v14 = v13;
    v15 = v14 | 0x100;
    if ( (v11 & 4) == 0 )
      v15 = v14;
    v16 = v15 | 0x8000;
    if ( (v12 & 0x4000) == 0 )
      v16 = v15;
    v17 = v16 | 0x400;
    if ( (v12 & 0x2000) == 0 )
      v17 = v16;
    v18 = v17 | 0x40;
    if ( (v12 & 0x100000) == 0 )
      v18 = v17;
    v19 = v18 | 0x1000;
    if ( (v12 & 0x1000) == 0 )
      v19 = v18;
    v20 = v19 | 0x200;
    if ( (v12 & 0x200000) == 0 )
      v20 = v19;
    v21 = v20 | 0x2000;
    if ( (_DWORD)result )
      v21 = v20;
    v22 = v21 | 0x10000;
    if ( (v11 & 0x100) == 0 )
      v22 = v21;
    v23 = v22 | 0x20000;
    if ( (v11 & 0x200) == 0 )
      v23 = v22;
  }
  else
  {
    if ( (v11 & 1) == 0 )
      v9 = v8;
    v24 = v9 | 0x40000000;
    if ( (v11 & 2) == 0 )
      v24 = v9;
    v25 = v24 | 0x2000000;
    if ( (v11 & 0x40) == 0 )
      v25 = v24;
    v26 = v25 | 0x100;
    if ( (v11 & 4) == 0 )
      v26 = v25;
    v27 = v26 | 0x8000;
    if ( (v12 & 0x4000) == 0 )
      v27 = v26;
    v28 = v27 | 0x400;
    if ( (v12 & 0x2000) == 0 )
      v28 = v27;
    v29 = v28 | 0x40;
    if ( (v12 & 0x100000) == 0 )
      v29 = v28;
    v30 = v29 | 0x1000;
    if ( (v12 & 0x1000) == 0 )
      v30 = v29;
    v31 = v30 | 0x200;
    if ( (v12 & 0x200000) == 0 )
      v31 = v30;
    v32 = v31 | 0x2000;
    if ( *(_DWORD *)(a1 + 600) )
      v32 = v31;
    v23 = v32 | 0x10000;
    if ( (v11 & 0x100) == 0 )
      v23 = v32;
    if ( (v11 & 0x200) != 0 )
      v23 |= 0x20000u;
  }
  *a2 = v23;
  return result;
}
