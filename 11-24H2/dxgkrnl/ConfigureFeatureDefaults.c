/*
 * XREFs of ConfigureFeatureDefaults @ 0x1402882E4
 * Callers:
 *     ConfigureFeature @ 0x140288094 (ConfigureFeature.c)
 * Callees:
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E0 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline @ 0x140095010 (Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x140096074 (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledDeviceUsageNoInline @ 0x1400960C8 (Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledDeviceUsageNoInline.c)
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
  unsigned int v15; // edx
  unsigned int v16; // edx
  bool v17; // zf
  char v18; // cl
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  __int16 v25; // r8
  unsigned int v26; // edx

  *(_DWORD *)a4 = 0;
  *(_WORD *)(a4 + 4) = 0;
  *(_WORD *)a4 = *(_WORD *)a3;
  *(_WORD *)(a4 + 2) = *(_WORD *)(a3 + 2);
  v6 = *(_BYTE *)(a4 + 4) & 0xFD;
  *(_BYTE *)(a4 + 4) = v6;
  v7 = v6 ^ (*(_BYTE *)(a3 + 4) ^ v6) & 1;
  LOBYTE(IsEnabledDeviceUsageNoInline) = 8;
  *(_BYTE *)(a4 + 4) = v7;
  if ( a2 > 0x30000008 )
  {
    v19 = a2 - 805306377;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = 5;
                v26 = v24 - 1;
                if ( v26 )
                {
                  if ( v26 != 1 )
                    return IsEnabledDeviceUsageNoInline;
                }
                else if ( (*(_DWORD *)(a1 + 912) & 2) == 0 )
                {
                  *(_WORD *)(a4 + 2) = 5;
                }
                IsEnabledDeviceUsageNoInline = *(_DWORD *)(a1 + 912);
                if ( (IsEnabledDeviceUsageNoInline & 2) == 0 )
                  return IsEnabledDeviceUsageNoInline;
              }
              else
              {
                IsEnabledDeviceUsageNoInline = *(_DWORD *)(a1 + 912);
                if ( (IsEnabledDeviceUsageNoInline & 2) != 0 )
                {
                  *(_WORD *)a4 = 9;
                  v25 = 10;
                }
                else
                {
                  v25 = 5;
                }
              }
              *(_WORD *)(a4 + 2) = v25;
              return IsEnabledDeviceUsageNoInline;
            }
            IsEnabledDeviceUsageNoInline = *(_DWORD *)(a1 + 912) >> 1;
          }
          else
          {
            LOBYTE(IsEnabledDeviceUsageNoInline) = ~(unsigned __int8)(*(_DWORD *)(a1 + 912) >> 1);
          }
          LOBYTE(IsEnabledDeviceUsageNoInline) = v7 ^ (v7 ^ IsEnabledDeviceUsageNoInline) & 1;
          *(_BYTE *)(a4 + 4) = IsEnabledDeviceUsageNoInline;
          return IsEnabledDeviceUsageNoInline;
        }
      }
      IsEnabledDeviceUsageNoInline = *(_DWORD *)(a1 + 912);
      if ( (IsEnabledDeviceUsageNoInline & 2) == 0 )
        return IsEnabledDeviceUsageNoInline;
      *(_WORD *)(a4 + 2) = 6;
    }
    else
    {
      IsEnabledDeviceUsageNoInline = *(_DWORD *)(a1 + 912);
      if ( (IsEnabledDeviceUsageNoInline & 2) != 0 )
        return IsEnabledDeviceUsageNoInline;
    }
LABEL_42:
    v18 = v7 & 0xFE;
    goto LABEL_43;
  }
  if ( a2 == 805306376 )
  {
    LOWORD(IsEnabledDeviceUsageNoInline) = (*(_DWORD *)(a1 + 912) & 2) != 0 ? 5 : 8;
    *(_WORD *)(a4 + 2) = IsEnabledDeviceUsageNoInline;
    return IsEnabledDeviceUsageNoInline;
  }
  v9 = a2 - 32;
  if ( !v9 )
    goto LABEL_42;
  v10 = v9 - 5;
  if ( !v10 )
    goto LABEL_42;
  v11 = v10 - 4;
  if ( !v11 )
    goto LABEL_16;
  v12 = v11 - 5;
  if ( !v12 )
  {
    IsEnabledDeviceUsageNoInline = Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline();
    goto LABEL_13;
  }
  v13 = v12 - 268435413;
  if ( !v13 || (v14 = v13 - 1) == 0 )
  {
LABEL_16:
    v18 = v7 | 1;
    goto LABEL_43;
  }
  v15 = v14 - 2;
  if ( !v15 )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_IsEnabledDeviceUsageNoInline();
    goto LABEL_13;
  }
  v16 = v15 - 268435451;
  if ( !v16 )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline();
    goto LABEL_13;
  }
  if ( v16 == 1 )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_IommuIntegerOverflow__private_IsEnabledDeviceUsageNoInline();
LABEL_13:
    v17 = IsEnabledDeviceUsageNoInline == 0;
    LOBYTE(IsEnabledDeviceUsageNoInline) = *(_BYTE *)(a4 + 4) & 0xFE;
    v18 = IsEnabledDeviceUsageNoInline | !v17;
LABEL_43:
    *(_BYTE *)(a4 + 4) = v18;
  }
  return IsEnabledDeviceUsageNoInline;
}
