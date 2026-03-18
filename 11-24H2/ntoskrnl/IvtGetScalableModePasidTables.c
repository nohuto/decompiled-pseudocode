/*
 * XREFs of IvtGetScalableModePasidTables @ 0x14056E9DC
 * Callers:
 *     IvtLegacyGetDomainId @ 0x140570894 (IvtLegacyGetDomainId.c)
 *     IvtLegacyUpdateScalableModeContextEntry @ 0x140570E38 (IvtLegacyUpdateScalableModeContextEntry.c)
 *     IvtLegacyUpdateScalableModeTranslationStructures @ 0x140570FFC (IvtLegacyUpdateScalableModeTranslationStructures.c)
 *     IvtProcessDeviceExceptions @ 0x140B527F4 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 *__fastcall IvtGetScalableModePasidTables(__int64 a1, int a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v5; // r8
  __int64 *i; // rax

  IsEnabledDeviceUsageNoInline = Feature_Test57481295__private_IsEnabledDeviceUsageNoInline();
  v5 = 0LL;
  if ( IsEnabledDeviceUsageNoInline && !*(_BYTE *)(a1 + 320) )
    return 0LL;
  for ( i = *(__int64 **)(a1 + 56); i != (__int64 *)(a1 + 56); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 10) == a2 )
      return i;
  }
  return (__int64 *)v5;
}
