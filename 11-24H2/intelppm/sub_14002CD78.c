/*
 * XREFs of sub_14002CD78 @ 0x14002CD78
 * Callers:
 *     sub_14002C980 @ 0x14002C980 (sub_14002C980.c)
 *     sub_1400495E4 @ 0x1400495E4 (sub_1400495E4.c)
 * Callees:
 *     <none>
 */

__int64 sub_14002CD78()
{
  __int64 result; // rax

  if ( qword_140021DC8 )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    qword_140021DC8 = 0LL;
  }
  if ( qword_140018E80 )
  {
    result = RtlUnregisterFeatureUsageProvider();
    qword_140018E80 = 0LL;
  }
  dword_140021DE0 = 0;
  return result;
}
