/*
 * XREFs of LdrpGetLoadAsEntry @ 0x18002037C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpIsReparsePoint @ 0x1800D02AC (LdrpIsReparsePoint.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1801130E0 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x18001FC84 (LdrpInitMuiCrits.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpGetLoadAsEntry(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  int v7; // ecx
  __int64 v8; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = -1073741823;
  LdrpInitMuiCrits(a1, (__int64)a2, a3, a4);
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v7 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v8 = LoadAsDataTable;
    while ( v7 > 0 )
    {
      if ( *(_QWORD *)(v8 + 48LL * --v7) == a1 )
      {
        if ( *(_QWORD *)(v8 + 48LL * v7 + 8) )
        {
          *a2 = *(_OWORD *)(v8 + 48LL * v7);
          a2[1] = *(_OWORD *)(v8 + 48LL * v7 + 16);
          a2[2] = *(_OWORD *)(v8 + 48LL * v7 + 32);
          v6 = 0;
        }
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v6;
}
