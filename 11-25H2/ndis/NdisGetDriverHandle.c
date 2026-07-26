/*
 * XREFs of NdisGetDriverHandle @ 0x1400BFB20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall NdisGetDriverHandle(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      31,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      a1);
  }
  result = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(result + 3760);
  *v2 = v5;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             6u,
             0x20u,
             (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
             a1,
             v5);
  return result;
}
