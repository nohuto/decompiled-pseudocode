/*
 * XREFs of ?ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU34@1HHHH@Z @ 0x1801DFEB4
 * Callers:
 *     ?GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA?AU?$pair@W4SnapRegion@@UCRect@Geometry@@@std@@AEBUCRect@Geometry@@0AEBUtagPOINT@@_NW4SnapRegionFlags@SnapLayoutHelpers@@@Z @ 0x18059EE24 (-GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA-AU-$pair@W4SnapRegion@@UCRect@Geom.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall SnapLayoutHelpers::CustomDragout::ComputeDefaultSafetyRectForRegion(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v9 = a2 - 1;
  if ( !v9 )
  {
    *(_DWORD *)(a1 + 4) = a3[1];
    *(_DWORD *)a1 = *a3;
    *(_DWORD *)(a1 + 12) = a8 + a4[1];
    goto LABEL_22;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v13 = v10 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
        {
          *(_DWORD *)(a1 + 4) = a4[3] - a5;
          *(_DWORD *)a1 = a4[2] - a6;
          *(_DWORD *)(a1 + 12) = a3[3];
          *(_DWORD *)(a1 + 8) = a3[2];
          return a1;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          *(_DWORD *)(a1 + 4) = a4[3] - a5;
          v19 = a3[3];
          *(_DWORD *)a1 = a7 + *a4;
          *(_DWORD *)(a1 + 12) = v19;
          goto LABEL_4;
        }
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 != 1 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgs();
            return a1;
          }
          v18 = a8 + a4[1];
          *(_DWORD *)a1 = *a3;
          *(_DWORD *)(a1 + 12) = a4[3] - a5;
          *(_DWORD *)(a1 + 4) = v18;
        }
        else
        {
          *(_DWORD *)(a1 + 4) = a4[3] - a5;
          *(_DWORD *)a1 = *a3;
          *(_DWORD *)(a1 + 12) = a3[3];
        }
LABEL_22:
        *(_DWORD *)(a1 + 8) = a7 + *a4;
        return a1;
      }
      v20 = a8 + a4[1];
      *(_DWORD *)a1 = a4[2] - a6;
      *(_DWORD *)(a1 + 12) = a4[3] - a5;
      *(_DWORD *)(a1 + 4) = v20;
    }
    else
    {
      *(_DWORD *)(a1 + 4) = a3[1];
      *(_DWORD *)a1 = a4[2] - a6;
      *(_DWORD *)(a1 + 12) = a8 + a4[1];
    }
    v11 = a3[2];
    goto LABEL_5;
  }
  *(_DWORD *)(a1 + 4) = a3[1];
  *(_DWORD *)a1 = a7 + *a4;
  *(_DWORD *)(a1 + 12) = a8 + a4[1];
LABEL_4:
  v11 = a4[2] - a6;
LABEL_5:
  *(_DWORD *)(a1 + 8) = v11;
  return a1;
}
