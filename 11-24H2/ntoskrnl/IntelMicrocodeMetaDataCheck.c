/*
 * XREFs of IntelMicrocodeMetaDataCheck @ 0x140663720
 * Callers:
 *     MicrocodeGetRecord @ 0x140662DD0 (MicrocodeGetRecord.c)
 * Callees:
 *     IntelUpdateMicrocodeGetProcessorFlags @ 0x1406637CC (IntelUpdateMicrocodeGetProcessorFlags.c)
 */

__int64 __fastcall IntelMicrocodeMetaDataCheck(__int64 a1, int a2)
{
  int v8; // edi
  __int64 v9; // r11
  unsigned int v11; // edx
  __int64 i; // rbx
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
  _RAX = 1LL;
  __asm { cpuid }
  v8 = _RAX;
  if ( (int)IntelUpdateMicrocodeGetProcessorFlags((unsigned int)_RAX, &v13) < 0 )
    return 3221225485LL;
  v11 = -1073741275;
  HIDWORD(MCUpdateRegistryData) = v13;
  if ( (v13 & *(_DWORD *)(v9 + 20)) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v9 + 28); i = (unsigned int)(i + 1) )
    {
      if ( *(_DWORD *)(v9 + 4 * i + 32) == v8 )
      {
        v11 = 0;
        if ( !PatchConfigFound && PatchConfig && *(_DWORD *)PatchConfig == v8 && *(_DWORD *)(PatchConfig + 4) == a2 )
          PatchConfigFound = *(_DWORD *)(PatchConfig + 8) == v13;
        return v11;
      }
    }
  }
  return v11;
}
