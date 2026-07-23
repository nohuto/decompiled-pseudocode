/*
 * XREFs of CcShouldIssueVDLUpdate @ 0x1404D8080
 * Callers:
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall CcShouldIssueVDLUpdate(__int64 a1)
{
  _QWORD *v1; // rdx
  char v2; // r8
  bool v3; // zf
  char v4; // dl
  __int64 v5; // r9
  char v6; // al

  if ( CcEnablePerVolumeLazyWriter )
    v1 = (_QWORD *)(*(_QWORD *)(a1 + 600) + 1104LL);
  else
    v1 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 1168LL);
  v2 = 1;
  if ( *(_DWORD *)(a1 + 4) <= 1u || (v3 = *v1 == (_QWORD)v1, v4 = 1, v3) )
    v4 = 0;
  if ( (*(_DWORD *)(a1 + 152) & 0x400) == 0
    || (v5 = *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48) < v5)
    || v5 == 0x7FFFFFFFFFFFFFFFLL
    || (v6 = 1, !*(_QWORD *)(a1 + 8)) )
  {
    v6 = 0;
  }
  if ( *(_DWORD *)(a1 + 524) || !v6 || v4 )
    return 0;
  return v2;
}
