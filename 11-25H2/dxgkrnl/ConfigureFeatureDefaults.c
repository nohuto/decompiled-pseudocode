/*
 * XREFs of ConfigureFeatureDefaults @ 0x140280E44
 * Callers:
 *     ConfigureFeature @ 0x140280BF4 (ConfigureFeature.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x140073484 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline @ 0x140092B60 (Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x140093B14 (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall ConfigureFeatureDefaults(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v6; // al
  char v7; // cl
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  bool v15; // zf
  char v16; // cl
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  __int16 v22; // r8
  unsigned int v23; // edx

  *(_DWORD *)a4 = 0;
  *(_WORD *)(a4 + 4) = 0;
  *(_WORD *)a4 = *(_WORD *)a3;
  *(_WORD *)(a4 + 2) = *(_WORD *)(a3 + 2);
  v6 = *(_BYTE *)(a4 + 4) & 0xFD;
  *(_BYTE *)(a4 + 4) = v6;
  v7 = v6 ^ (*(_BYTE *)(a3 + 4) ^ v6) & 1;
  LOBYTE(IsEnabledDeviceUsageNoInline) = 9;
  *(_BYTE *)(a4 + 4) = v7;
  if ( a2 > 0x30000009 )
  {
    v17 = a2 - 805306378;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = 5;
              v23 = v21 - 1;
              if ( v23 )
              {
                if ( v23 != 1 )
                  return IsEnabledDeviceUsageNoInline;
              }
              else if ( (*(_DWORD *)(a1 + 848) & 2) == 0 )
              {
                *(_WORD *)(a4 + 2) = 5;
              }
              IsEnabledDeviceUsageNoInline = *(_DWORD *)(a1 + 848);
              if ( (IsEnabledDeviceUsageNoInline & 2) == 0 )
                return IsEnabledDeviceUsageNoInline;
            }
            else
            {
              IsEnabledDeviceUsageNoInline = *(_DWORD *)(a1 + 848);
              if ( (IsEnabledDeviceUsageNoInline & 2) != 0 )
              {
                *(_WORD *)a4 = 9;
                v22 = 10;
              }
              else
              {
                v22 = 5;
              }
            }
            *(_WORD *)(a4 + 2) = v22;
            return IsEnabledDeviceUsageNoInline;
          }
          IsEnabledDeviceUsageNoInline = *(_DWORD *)(a1 + 848) >> 1;
        }
        else
        {
          LOBYTE(IsEnabledDeviceUsageNoInline) = ~(unsigned __int8)(*(_DWORD *)(a1 + 848) >> 1);
        }
        LOBYTE(IsEnabledDeviceUsageNoInline) = v7 ^ (v7 ^ IsEnabledDeviceUsageNoInline) & 1;
        *(_BYTE *)(a4 + 4) = IsEnabledDeviceUsageNoInline;
        return IsEnabledDeviceUsageNoInline;
      }
    }
    IsEnabledDeviceUsageNoInline = *(_DWORD *)(a1 + 848);
    if ( (IsEnabledDeviceUsageNoInline & 2) == 0 )
      return IsEnabledDeviceUsageNoInline;
    *(_WORD *)(a4 + 2) = 6;
    goto LABEL_40;
  }
  if ( a2 == 805306377 )
  {
    IsEnabledDeviceUsageNoInline = *(_DWORD *)(a1 + 848);
    if ( (IsEnabledDeviceUsageNoInline & 2) != 0 )
      return IsEnabledDeviceUsageNoInline;
    goto LABEL_40;
  }
  v9 = a2 - 32;
  if ( !v9 || (v10 = v9 - 5) == 0 )
  {
LABEL_40:
    v16 = v7 & 0xFE;
    goto LABEL_41;
  }
  v11 = v10 - 268435422;
  if ( !v11 )
  {
    v16 = v7 | 1;
    goto LABEL_41;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 268435453;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 268435462 )
        {
          LOWORD(IsEnabledDeviceUsageNoInline) = (*(_DWORD *)(a1 + 848) & 2) != 0 ? 5 : 8;
          *(_WORD *)(a4 + 2) = IsEnabledDeviceUsageNoInline;
        }
        return IsEnabledDeviceUsageNoInline;
      }
      IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline();
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline();
    }
    v15 = IsEnabledDeviceUsageNoInline == 0;
    LOBYTE(IsEnabledDeviceUsageNoInline) = *(_BYTE *)(a4 + 4) & 0xFE;
    v16 = IsEnabledDeviceUsageNoInline | !v15;
LABEL_41:
    *(_BYTE *)(a4 + 4) = v16;
    return IsEnabledDeviceUsageNoInline;
  }
  IsEnabledDeviceUsageNoInline = Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
    *(_BYTE *)(a4 + 4) |= 1u;
  return IsEnabledDeviceUsageNoInline;
}
