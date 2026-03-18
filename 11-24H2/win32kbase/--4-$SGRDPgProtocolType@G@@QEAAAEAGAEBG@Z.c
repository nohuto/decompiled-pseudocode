/*
 * XREFs of ??4?$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z @ 0x14019E4F8
 * Callers:
 *     SetProtocolType @ 0x140144520 (SetProtocolType.c)
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgProtocolType<unsigned short>::operator=(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  __int64 v3; // rcx

  v2 = *a2;
  *(_WORD *)(W32GetUserSessionState(a1) + 69008) = v2;
  return W32GetUserSessionState(v3) + 69008;
}
