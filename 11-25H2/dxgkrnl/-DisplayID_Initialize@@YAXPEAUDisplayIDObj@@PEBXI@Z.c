/*
 * XREFs of ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1400951AC
 * Callers:
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x140093EB4 (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140278F98 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 *     ?GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1402794F0 (-GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU.c)
 *     ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140279B50 (-LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorReg.c)
 *     ?UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140279E50 (-UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 * Callees:
 *     ?ComputeChecksum@DisplayID_Section_Parser@@QEBAEXZ @ 0x140093CE8 (-ComputeChecksum@DisplayID_Section_Parser@@QEBAEXZ.c)
 */

void __fastcall DisplayID_Initialize(struct DisplayIDObj *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r10
  struct DisplayIDObj *v4; // r9
  int v5; // r14d
  char *v6; // rbx
  int v7; // r11d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int8 *v10; // rdi
  __int64 v11; // r15
  char v12; // si
  int v13; // r11d
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    *((_DWORD *)a1 + 3) = 0;
    v3 = a2;
    *((_DWORD *)a1 + 5) = 0;
    v4 = a1;
    *(_QWORD *)a1 = a2;
    *((_DWORD *)a1 + 2) = a3;
    *((_BYTE *)a1 + 16) = 0;
    if ( a2 )
    {
      if ( a3 )
      {
        v5 = 0;
        v6 = (char *)&a2[a3];
        v7 = 0;
        while ( v3 + 3 < (unsigned __int8 *)v6 )
        {
          v8 = v3[1];
          v9 = v6 - (char *)v3;
          v14[0] = v3;
          v10 = v3;
          v14[1] = v6 - (char *)v3;
          v11 = (unsigned __int8)(v8 + 5);
          if ( &v3[v11] > (unsigned __int8 *)v6 )
            return;
          if ( (unsigned __int8)((*v3 >> 4) - 1) > 1u )
            return;
          v12 = v3[2] & 0xF;
          if ( !v12 )
          {
            if ( v3[3] )
              return;
          }
          if ( (unsigned __int8)v8 > 0xFBu
            || v8 > v9 - 5
            || v9 < 5
            || DisplayID_Section_Parser::ComputeChecksum((DisplayID_Section_Parser *)v14) != v3[v8 + 4] )
          {
            return;
          }
          if ( v13 )
          {
            if ( v12 )
              return;
          }
          else
          {
            v5 = v10[3];
            *((_DWORD *)v4 + 3) = v11;
          }
          v7 = v13 + 1;
          *((_DWORD *)v4 + 5) = v7;
        }
        if ( v7 == v5 + 1 && v3 <= (unsigned __int8 *)v6 )
          *((_BYTE *)v4 + 16) = 1;
      }
    }
  }
}
