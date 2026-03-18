/*
 * XREFs of ParseWindowStation @ 0x140106C90
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 * Callees:
 *     ApiSetEditionParseDesktop @ 0x140106DB0 (ApiSetEditionParseDesktop.c)
 *     wcschr @ 0x1401A0348 (wcschr.c)
 */

__int64 __fastcall ParseWindowStation(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rcx
  _WORD *v5; // rax
  int v6; // r9d
  POBJECT_TYPE *v7; // rdx

  v1 = *(void **)(a1 + 16);
  **(_QWORD **)(a1 + 80) = 0LL;
  v3 = *(_QWORD *)(a1 + 56);
  if ( !*(_WORD *)v3 )
  {
    if ( *(_QWORD *)(a1 + 24) == ExWindowStationObjectType )
    {
      ObfReferenceObject(v1);
      **(_QWORD **)(a1 + 80) = v1;
      return 0LL;
    }
    return 3221225508LL;
  }
  v5 = *(_WORD **)(v3 + 8);
  if ( *v5 == 92 )
  {
    *(_QWORD *)(v3 + 8) = v5 + 1;
    **(_WORD **)(a1 + 56) -= 2;
    *(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL) -= 2;
  }
  if ( !wcschr(*(const wchar_t **)(*(_QWORD *)(a1 + 56) + 8LL), 0x5Cu) )
  {
    v7 = *(POBJECT_TYPE **)(a1 + 24);
    if ( v7 == ExDesktopObjectType )
    {
      LOBYTE(v6) = *(_BYTE *)(a1 + 40);
      return ApiSetEditionParseDesktop(
               *(_QWORD *)(a1 + 16),
               (_DWORD)v7,
               *(_QWORD *)(a1 + 32),
               v6,
               *(_DWORD *)(a1 + 44),
               *(_QWORD *)(a1 + 48),
               *(_QWORD *)(a1 + 56),
               *(_QWORD *)(a1 + 64),
               *(_QWORD *)(a1 + 72),
               *(_QWORD *)(a1 + 80));
    }
    return 3221225508LL;
  }
  return 3221225529LL;
}
