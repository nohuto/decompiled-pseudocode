/*
 * XREFs of PidNodeCompare @ 0x1407ADE60
 * Callers:
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407AD578 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD880 (EtwpRegisterPrivateSession.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x140832DA0 (EtwpDemuxPrivateTraceHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PidNodeCompare(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx

  v2 = *a1;
  v3 = *(_DWORD *)(a2 + 24);
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
