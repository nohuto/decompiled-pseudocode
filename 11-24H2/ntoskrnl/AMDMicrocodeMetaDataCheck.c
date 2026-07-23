/*
 * XREFs of AMDMicrocodeMetaDataCheck @ 0x140663AC8
 * Callers:
 *     MicrocodeGetRecord @ 0x140662DD0 (MicrocodeGetRecord.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140662788 (Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall AMDMicrocodeMetaDataCheck(_DWORD *a1, int a2)
{
  int v9; // ebp
  unsigned int v10; // esi
  unsigned int v11; // ebx
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rcx

  _RAX = 1LL;
  __asm { cpuid }
  v9 = _RAX;
  v10 = -1073741275;
  v11 = __readmsr(0x8Bu);
  if ( (unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *a1 == 1 )
    {
      v16 = a1[6];
      v17 = 0LL;
      if ( !v16 )
        return v10;
      while ( a1[v17 + 7] != v9 || a1[5] > v11 )
      {
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= v16 )
          return v10;
      }
    }
    else
    {
      if ( *a1 != 13 )
        return v10;
      v14 = a1[8];
      v15 = 0LL;
      if ( !v14 )
        return v10;
      while ( a1[v15 + 9] != v9 || a1[5] > v11 )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v14 )
          return v10;
      }
    }
  }
  else
  {
    v12 = a1[6];
    v13 = 0LL;
    if ( !v12 )
      return v10;
    while ( a1[v13 + 7] != v9 || a1[5] > v11 )
    {
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= v12 )
        return v10;
    }
  }
  v10 = 0;
  if ( !PatchConfigFound && PatchConfig && *(_DWORD *)PatchConfig == v9 )
    PatchConfigFound = *(_DWORD *)(PatchConfig + 4) == a2;
  return v10;
}
