/*
 * XREFs of PrExtExportRecordData @ 0x140662904
 * Callers:
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140662788 (Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline.c)
 *     GetMicrocodePatchData @ 0x140662BB8 (GetMicrocodePatchData.c)
 */

__int64 __fastcall PrExtExportRecordData(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // r10d
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d

  if ( a1 )
    v8 = *a1;
  else
    v8 = (unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() != 0 ? 13 : 1;
  v9 = v8 - 1;
  if ( !v9 )
    return GetMicrocodePatchData(a1, a2, a3, a4);
  v10 = v9 - 1;
  if ( !v10 )
    return GetMicrocodePatchData(a1, a2, a3, a4);
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 2;
            if ( v16 )
            {
              if ( v16 != 4 || !(unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() )
                return 3221225473LL;
              return GetMicrocodePatchData(a1, a2, a3, a4);
            }
          }
        }
      }
    }
  }
  return 3221226021LL;
}
