/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x1800975B0
 * Callers:
 *     _cpu_check_features @ 0x180096D54 (_cpu_check_features.c)
 *     RtlHpGlobalsInitialize @ 0x180097254 (RtlHpGlobalsInitialize.c)
 *     LdrpGenRandom @ 0x180097560 (LdrpGenRandom.c)
 *     __cpu_features_init @ 0x18012B4AC (__cpu_features_init.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlIsProcessorFeaturePresent(unsigned int a1)
{
  if ( a1 >= 0xC0 )
    return 0;
  if ( a1 < 0x40 )
    return *(_BYTE *)(a1 + 0x7FFE0274LL);
  return _bittest64((const signed __int64 *)qword_1801D3DC8, a1 - 64);
}
