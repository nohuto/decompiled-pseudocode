/*
 * XREFs of ?GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z @ 0x1C01FB168
 * Callers:
 *     NtUserGetImeHotKey @ 0x1C01D1210 (NtUserGetImeHotKey.c)
 * Callees:
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1C007FD44 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall GetImeHotKey(__int64 a1, unsigned int *a2, unsigned int *a3, HKL *a4)
{
  int v7; // ebx
  __int64 v8; // rax
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rax
  int v10; // ecx

  v7 = a1;
  v8 = SGDGetUserSessionState(a1);
  ImeHotKeyByID = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v8 + 12728), v7);
  if ( !ImeHotKeyByID )
  {
    v10 = 1419;
LABEL_3:
    UserSetLastError(v10);
    return 0LL;
  }
  if ( a4 )
  {
    *a4 = (HKL)*((_QWORD *)ImeHotKeyByID + 3);
  }
  else if ( *((_QWORD *)ImeHotKeyByID + 3) )
  {
    v10 = 87;
    goto LABEL_3;
  }
  *a2 = *((_DWORD *)ImeHotKeyByID + 4);
  *a3 = *((_DWORD *)ImeHotKeyByID + 3);
  return 1LL;
}
