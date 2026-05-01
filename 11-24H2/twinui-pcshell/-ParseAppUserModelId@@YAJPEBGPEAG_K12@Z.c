/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x180064D44
 * Callers:
 *     ?LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ @ 0x180431C38 (-LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ.c)
 *     ?LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ @ 0x180437A18 (-LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180065FB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAppUserModelId(
        char *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5)
{
  unsigned __int16 *v6; // rdi
  __int64 v7; // rdx
  signed __int64 v8; // r8
  wchar_t *v9; // rcx
  unsigned int v10; // ebx
  wchar_t v11; // ax
  wchar_t *v12; // rax
  wchar_t *v13; // rax
  const unsigned __int16 *v15; // r8
  __int64 v16; // r10
  char *v17; // rcx
  unsigned __int16 v18; // ax
  unsigned __int16 *v19; // rax
  wchar_t Str[136]; // [rsp+20h] [rbp-138h] BYREF

  v6 = a2;
  if ( a2 )
    *a2 = 0;
  if ( a4 && a5 )
    *a4 = 0;
  v7 = 130LL;
  v8 = a1 - (char *)Str;
  v9 = Str;
  v10 = 1;
  do
  {
    if ( v7 == -2147483516 )
      break;
    v11 = *(wchar_t *)((char *)v9 + v8);
    if ( !v11 )
      break;
    *v9++ = v11;
    --v7;
  }
  while ( v7 );
  v12 = v9 - 1;
  if ( v7 )
    v12 = v9;
  *v12 = 0;
  if ( v7 && (v13 = wcsrchr(Str, 0x21u), Str[0] != 33) && v13 && (v15 = v13 + 1, v13[1]) )
  {
    *v13 = 0;
    if ( !v6 )
      goto LABEL_26;
    v16 = 65LL;
    v17 = (char *)((char *)Str - (char *)v6);
    do
    {
      if ( v16 == -2147483581 )
        break;
      v18 = *(unsigned __int16 *)((char *)v6 + (_QWORD)v17);
      if ( !v18 )
        break;
      *v6++ = v18;
      --v16;
    }
    while ( v16 );
    v19 = v6 - 1;
    if ( v16 )
      v19 = v6;
    *v19 = 0;
    v10 = v16 == 0 ? 0x8007007A : 0;
    if ( v16 )
    {
LABEL_26:
      if ( a4 )
        return (unsigned int)StringCchCopyW(a4, a5, v15);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v10;
}
