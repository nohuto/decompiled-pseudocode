/*
 * XREFs of NtUserTestForInteractiveUser @ 0x1C01DE540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserTestForInteractiveUser(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx

  v3 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( v3 + 1 < v3 || (unsigned __int64)(v3 + 1) > MmUserProbeAddress )
    v3 = (_QWORD *)MmUserProbeAddress;
  if ( *v3 == *(_QWORD *)(grpWinStaList + 184LL) )
    v6 = 0;
  else
    v6 = -1073741790;
  UserSessionSwitchLeaveCrit(grpWinStaList, grpWinStaList, v4, v5);
  return v6;
}
