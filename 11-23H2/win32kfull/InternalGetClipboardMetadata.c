/*
 * XREFs of InternalGetClipboardMetadata @ 0x1C01FD08C
 * Callers:
 *     NtUserGetClipboardMetadata @ 0x1C01D01F0 (NtUserGetClipboardMetadata.c)
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C0013198 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0068408 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall InternalGetClipboardMetadata(unsigned int a1, _DWORD *a2)
{
  int v4; // ecx
  __int64 result; // rax
  struct tagWINDOWSTATION *v6; // rax
  int v7; // ebx
  struct tagCLIP *ClipFormat; // rax
  __int64 v9; // rcx
  int v10; // eax

  if ( *a2 != 1 )
  {
    v4 = 87;
LABEL_3:
    UserSetLastError(v4);
    return 0LL;
  }
  v6 = CheckClipboardAccess();
  v7 = 0;
  if ( !v6 )
  {
    v4 = 5;
    goto LABEL_3;
  }
  ClipFormat = FindClipFormat(v6, a1, 1);
  if ( !ClipFormat )
  {
    v4 = 1168;
    goto LABEL_3;
  }
  v9 = *((_QWORD *)ClipFormat + 1);
  if ( !v9 || (v10 = 0, v9 == 3) )
    v10 = 1;
  a2[1] = v10;
  result = 1LL;
  LOBYTE(v7) = (unsigned __int64)(v9 - 1) <= 3;
  a2[2] = v7;
  return result;
}
