/*
 * XREFs of IoGetFsTrackOffsetState @ 0x140441620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetFsTrackOffsetState(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v3 || (*(_BYTE *)(v3 + 2) & 0x20) == 0 )
    return 3221226021LL;
  v5 = *(_QWORD *)(a1 + 200);
  *a2 = *(_QWORD *)(v5 + 40);
  *a3 = *(_QWORD *)(v5 + 48);
  return 0LL;
}
