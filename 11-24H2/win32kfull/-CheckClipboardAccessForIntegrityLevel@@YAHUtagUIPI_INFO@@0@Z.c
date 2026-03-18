/*
 * XREFs of ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x140106134
 * Callers:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1401056F4 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140106020 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     _GetPriorityClipboardFormat @ 0x1401FD150 (_GetPriorityClipboardFormat.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x140203EF0 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall CheckClipboardAccessForIntegrityLevel(_QWORD *a1, const struct tagUIPI_INFO *a2)
{
  const struct tagUIPI_INFO *v2; // r8
  unsigned int v3; // r9d
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]

  v2 = (const struct tagUIPI_INFO *)&unk_140398AC8;
  v3 = *a1;
  v10 = 0LL;
  v11 = 0;
  v5 = 0LL;
  do
  {
    v6 = v5 + 1;
    if ( v3 >= *(_DWORD *)v2 && v3 < *((_DWORD *)&gaClipILDef + 8 * v6 + 2) )
      break;
    v2 = (const struct tagUIPI_INFO *)((char *)v2 + 32);
    v5 = v6;
  }
  while ( v6 < 5 );
  if ( (_DWORD)v5 != 5 )
  {
    while ( (unsigned int)v5 < 5 )
    {
      if ( *((_DWORD *)&gaClipILDef + 8 * (unsigned int)(v5 + 1) + 6) )
      {
        v7 = 32 * v5;
        LODWORD(v10) = *(_DWORD *)((char *)&gaClipILDef + v7 + 8);
        v8 = *(_DWORD *)((char *)&gaClipILDef + v7 + 12);
        goto LABEL_9;
      }
      v5 = (unsigned int)(v5 + 1);
    }
  }
  LODWORD(v10) = dword_140398B68;
  v8 = dword_140398B6C;
LABEL_9:
  HIDWORD(v10) = v8;
  return UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)&v10, a2, v2);
}
