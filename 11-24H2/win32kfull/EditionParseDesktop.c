/*
 * XREFs of EditionParseDesktop @ 0x1400A48F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400A4A5C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1401E4EC8 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 */

__int64 __fastcall EditionParseDesktop(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        char a4,
        char a5,
        int a6,
        UNICODE_STRING *String1,
        _DWORD *a8,
        int a9,
        void **a10)
{
  void **v10; // r14
  _DWORD *v12; // rsi
  unsigned int DesktopEx2; // edi
  _QWORD *i; // rbx
  const UNICODE_STRING *v17; // rax
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = a2;
  v10 = a10;
  v12 = a8;
  DesktopEx2 = -1073741772;
  *a10 = 0LL;
  if ( v12 && *v12 != (unsigned int)W32GetCurrentWin32kSessionId() )
    return 3221225485LL;
  LOBYTE(v19) = IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2, (__int64)a3);
  if ( !(_BYTE)v19 )
    EnterCrit(1LL, 0LL);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 2); ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      if ( v12 )
        DesktopEx2 = xxxCreateDesktopEx2(a1, a3, a4, String1, v12[1], v10);
      goto LABEL_12;
    }
    if ( ObQueryNameInfo(i) )
    {
      v17 = (const UNICODE_STRING *)(ObQueryNameInfo(i) + 8);
      if ( v17 )
      {
        if ( RtlEqualUnicodeString(String1, v17, (a5 & 0x40) != 0) )
          break;
      }
    }
  }
  if ( !v12 )
  {
    DesktopEx2 = 0;
LABEL_11:
    ObfReferenceObject(i);
    *v10 = i;
    goto LABEL_12;
  }
  if ( a5 < 0 )
  {
    DesktopEx2 = 0x40000000;
    goto LABEL_11;
  }
  DesktopEx2 = -1073741771;
LABEL_12:
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  return DesktopEx2;
}
