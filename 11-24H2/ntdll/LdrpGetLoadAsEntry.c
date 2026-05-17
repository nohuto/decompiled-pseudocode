/*
 * XREFs of LdrpGetLoadAsEntry @ 0x18006471C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpIsReparsePoint @ 0x180064A20 (LdrpIsReparsePoint.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x180064D50 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180064024 (LdrpInitMuiCrits.c)
 */

__int64 __fastcall LdrpGetLoadAsEntry(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ecx
  __int64 v6; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  LdrpInitMuiCrits(a1, (__int64)a2);
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v5 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v6 = LoadAsDataTable;
    while ( v5 > 0 )
    {
      if ( *(_QWORD *)(v6 + 48LL * --v5) == a1 )
      {
        if ( *(_QWORD *)(v6 + 48LL * v5 + 8) )
        {
          *a2 = *(_OWORD *)(v6 + 48LL * v5);
          a2[1] = *(_OWORD *)(v6 + 48LL * v5 + 16);
          a2[2] = *(_OWORD *)(v6 + 48LL * v5 + 32);
          v4 = 0;
        }
      }
    }
  }
  RtlLeaveCriticalSection((__int64)&LoadAsDataCrits);
  return v4;
}
