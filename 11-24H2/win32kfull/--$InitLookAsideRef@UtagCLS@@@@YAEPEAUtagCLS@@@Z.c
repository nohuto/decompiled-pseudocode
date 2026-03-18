/*
 * XREFs of ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1400B6438
 * Callers:
 *     InternalRegisterClassEx @ 0x1400B54C0 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x14019A370 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

char __fastcall InitLookAsideRef<tagCLS>(__int64 a1)
{
  void *CurrentWin32kStackRefLookAside; // rax
  _QWORD *v3; // rax

  CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
  if ( !CurrentWin32kStackRefLookAside )
    KeBugCheck(4u);
  v3 = (_QWORD *)Win32AllocateFromPagedLookasideList(CurrentWin32kStackRefLookAside);
  *(_QWORD *)(a1 + 128) = v3;
  if ( v3 )
  {
    *v3 = a1;
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 8LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 12LL) = 0;
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
