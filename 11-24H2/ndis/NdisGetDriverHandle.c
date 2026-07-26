/*
 * XREFs of NdisGetDriverHandle @ 0x1400B8820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall NdisGetDriverHandle(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      33,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      a1);
  }
  result = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(result + 3760);
  *v2 = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return WPP_RECORDER_SF_qq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             (int)a2,
             6,
             34,
             (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
             a1,
             v5);
  }
  return result;
}
