/*
 * XREFs of ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x140097580
 * Callers:
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x140096468 (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140280488 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 *     ?GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1402809E0 (-GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU.c)
 *     ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140281080 (-LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorReg.c)
 *     ?UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140281370 (-UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 * Callees:
 *     ?DisplayID_Init@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEAUDisplayIDObj@@PEBXI_N@Z @ 0x140097454 (-DisplayID_Init@@YA-AW4DISPLAYID_VALIDATION_RESULT@@PEAUDisplayIDObj@@PEBXI_N@Z.c)
 *     ?IsValidSection@DisplayID_Section_Parser@@QEBA_NXZ @ 0x140097904 (-IsValidSection@DisplayID_Section_Parser@@QEBA_NXZ.c)
 *     Feature_DisplayIDValidationRelaxed__private_IsEnabledDeviceUsageNoInline @ 0x140097964 (Feature_DisplayIDValidationRelaxed__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DisplayID_Initialize(struct DisplayIDObj *a1, char *a2, unsigned int a3)
{
  __int64 v3; // rsi
  char *v6; // r11
  int v7; // ebp
  int v8; // esi
  char *v9; // r14
  int v10; // r15d
  unsigned __int8 v11; // al
  int v12; // r12d
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  if ( (unsigned int)Feature_DisplayIDValidationRelaxed__private_IsEnabledDeviceUsageNoInline() )
  {
    DisplayID_Init((__int64)a1, (unsigned __int64)a2, v3);
  }
  else if ( a1 )
  {
    *((_DWORD *)a1 + 3) = 0;
    *((_DWORD *)a1 + 5) = 0;
    *(_QWORD *)a1 = a2;
    *((_DWORD *)a1 + 2) = v3;
    *((_BYTE *)a1 + 16) = 0;
    if ( a2 )
    {
      if ( (_DWORD)v3 )
      {
        v6 = &a2[v3];
        v7 = 0;
        if ( a2 + 3 < &a2[v3] )
        {
          v8 = 0;
          while ( 1 )
          {
            v13[0] = a2;
            v9 = a2;
            v13[1] = v6 - a2;
            v10 = v8;
            v11 = a2[1] + 5;
            a2 += v11;
            v12 = v11;
            if ( a2 > v6 || !DisplayID_Section_Parser::IsValidSection((DisplayID_Section_Parser *)v13) )
              break;
            if ( v8 )
            {
              if ( (v9[2] & 0xF) != 0 )
                return;
            }
            else
            {
              v7 = (unsigned __int8)v9[3];
              *((_DWORD *)a1 + 3) = v12;
            }
            *((_DWORD *)a1 + 5) = ++v8;
            if ( a2 + 3 >= v6 )
            {
              if ( v10 == v7 )
                *((_BYTE *)a1 + 16) = 1;
              return;
            }
          }
        }
      }
    }
  }
}
