/*
 * XREFs of FsRtlpPrepareExtraCreateParametersForCreate @ 0x1409568C0
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x140955124 (IopOpenLinkOrRenameTarget.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1409590B0 (IoQueryInformationByName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall FsRtlpPrepareExtraCreateParametersForCreate(ULONG_PTR BugCheckParameter4)
{
  int v1; // r8d
  char v3; // dl
  int v4; // r8d
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  v1 = *(_DWORD *)(BugCheckParameter4 + 4);
  if ( (v1 & 9) != 0 )
  {
    v3 = 0;
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x3F0) == 0x3F0 )
      return 3221226539LL;
    v4 = v1 + 16;
  }
  else
  {
    v3 = 1;
    v4 = v1 | 1;
  }
  *(_DWORD *)(BugCheckParameter4 + 4) = v4;
  v5 = (_QWORD *)(BugCheckParameter4 + 8);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
    KeBugCheckEx(0x10Cu, 0x15uLL, 0LL, 0LL, BugCheckParameter4);
  do
  {
    if ( v3 )
      *((_DWORD *)v6 + 10) |= 1u;
    v6 = (_QWORD *)*v6;
  }
  while ( v6 != v5 );
  return 0LL;
}
