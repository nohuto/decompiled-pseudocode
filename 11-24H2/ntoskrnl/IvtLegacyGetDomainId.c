/*
 * XREFs of IvtLegacyGetDomainId @ 0x14056DD24
 * Callers:
 *     IvtLegacyAllocateTranslationStructures @ 0x14056CF38 (IvtLegacyAllocateTranslationStructures.c)
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056CFEC (IvtLegacyAttachDeviceDomainInternal.c)
 *     IvtLegacyUpdateScalableModeContextEntry @ 0x14056E2C8 (IvtLegacyUpdateScalableModeContextEntry.c)
 * Callees:
 *     IvtGetScalableModePasidTables @ 0x14056BE6C (IvtGetScalableModePasidTables.c)
 */

__int64 __fastcall IvtLegacyGetDomainId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 *ScalableModePasidTables; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( !*(_BYTE *)(a1 + 320) )
    return (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL * (a2 >> 8))
                                        + 16LL * (unsigned __int8)a2
                                        + 8) >> 8);
  v2 = 0x10000LL;
  ScalableModePasidTables = IvtGetScalableModePasidTables(a1, a2);
  if ( ScalableModePasidTables )
  {
    if ( *((_DWORD *)ScalableModePasidTables + 8) )
    {
      v4 = ScalableModePasidTables[8];
      if ( (*(_QWORD *)v4 & 1) != 0 )
      {
        v5 = *(_QWORD *)v4 & 0x1C0LL;
        if ( v5 == 128 || v5 == 256 )
          return (unsigned __int16)*(_DWORD *)(v4 + 8);
      }
    }
  }
  return v2;
}
