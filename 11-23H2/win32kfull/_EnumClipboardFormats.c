/*
 * XREFs of _EnumClipboardFormats @ 0x1C01FD1D8
 * Callers:
 *     NtUserEnumClipboardFormats @ 0x1C0153A10 (NtUserEnumClipboardFormats.c)
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C0013198 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0068408 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall EnumClipboardFormats(unsigned int a1)
{
  unsigned int v2; // ebx
  struct tagWINDOWSTATION *v3; // rdi
  unsigned int *v5; // rcx
  struct tagCLIP *ClipFormat; // rax

  v2 = 0;
  v3 = CheckClipboardAccess();
  if ( !v3 )
    return 0LL;
  if ( *((_QWORD *)v3 + 10) != gptiCurrent )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  v5 = (unsigned int *)*((_QWORD *)v3 + 16);
  if ( v5 )
  {
    if ( !a1
      || (ClipFormat = FindClipFormat(v3, a1, 1)) != 0LL
      && (v5 = (unsigned int *)((char *)ClipFormat + 32), ClipFormat != (struct tagCLIP *)-32LL) )
    {
      if ( (unsigned __int64)v5 < *((_QWORD *)v3 + 16) + 32 * (unsigned __int64)*((unsigned int *)v3 + 34) )
        return *v5;
    }
  }
  return v2;
}
