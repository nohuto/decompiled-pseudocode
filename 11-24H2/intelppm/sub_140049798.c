/*
 * XREFs of sub_140049798 @ 0x140049798
 * Callers:
 *     sub_1400495E4 @ 0x1400495E4 (sub_1400495E4.c)
 * Callees:
 *     sub_140008FEC @ 0x140008FEC (sub_140008FEC.c)
 *     sub_14002CE38 @ 0x14002CE38 (sub_14002CE38.c)
 *     sub_14002D0BC @ 0x14002D0BC (sub_14002D0BC.c)
 *     sub_14004985C @ 0x14004985C (sub_14004985C.c)
 */

__int64 sub_140049798()
{
  int v0; // ebx
  int **i; // rcx
  _BYTE *v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( dword_140021DE0 )
    return 0LL;
  dword_140021DE0 = 1;
  v4 = RtlQueryFeatureConfigurationChangeStamp();
  sub_14004985C();
  sub_14002CE38();
  for ( i = &off_1400179C8; ; i = (int **)(v2 + 56) )
  {
    v2 = sub_140008FEC(i);
    if ( !v2 )
      break;
    if ( !v2[29] && !v2[30] && !v2[28] )
    {
      if ( (unsigned int)RtlRegisterFeatureConfigurationChangeNotification(sub_14002D0A0, 0LL, &v4, &qword_140021DC8) )
        qword_140021DC8 = 0LL;
      else
        v0 = 1;
      break;
    }
  }
  result = sub_14002D0BC();
  if ( !(_DWORD)result )
    return 0LL;
  if ( v0 )
    return 0LL;
  return result;
}
