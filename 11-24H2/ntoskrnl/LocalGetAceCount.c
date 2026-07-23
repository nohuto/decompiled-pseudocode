/*
 * XREFs of LocalGetAceCount @ 0x14086AF60
 * Callers:
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 * Callees:
 *     FContainCallBackAce @ 0x14086ADD0 (FContainCallBackAce.c)
 */

__int64 __fastcall LocalGetAceCount(wchar_t *a1, wchar_t *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  wchar_t *v6; // rbx
  int v7; // ebp
  BOOL v8; // r14d
  int i; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  wchar_t v13; // ax

  v3 = 0;
  *a3 = 0;
  v6 = a1;
  v7 = 0;
  v8 = 0;
  if ( !(unsigned int)FContainCallBackAce(a1) )
  {
    for ( i = 0; v6 < a2; ++v6 )
    {
      if ( *v6 == 59 )
      {
        ++v3;
      }
      else if ( *v6 != 40 )
      {
        i = 1;
      }
    }
    if ( v3 != 5 * (v3 / 5) || !v3 && i )
      return 87LL;
    *a3 = v3 / 5;
    return 0LL;
  }
  v11 = v6 == a2;
  if ( v6 < a2 )
  {
    while ( *v6 == 32 )
    {
      v11 = ++v6 == a2;
      if ( v6 >= a2 )
        goto LABEL_15;
    }
    goto LABEL_16;
  }
LABEL_15:
  if ( !v11 )
  {
LABEL_16:
    if ( *v6 == 40 )
    {
      v12 = 0LL;
      goto LABEL_18;
    }
  }
  v12 = 1LL;
LABEL_18:
  while ( v6 < a2 )
  {
    v13 = *v6;
    if ( *v6 == 32 )
      goto LABEL_24;
    if ( v12 )
      return 87LL;
    if ( v13 != 40 || v8 )
    {
      if ( v13 == 41 )
      {
        if ( v8 )
          goto LABEL_26;
        if ( !v7 )
          return 1336LL;
        if ( v7 == 1 )
        {
          if ( v3 < 5 )
            return 1336LL;
          v3 = 0;
          ++*a3;
        }
        --v7;
        ++v6;
      }
      else if ( v13 == 59 )
      {
        ++v3;
        ++v6;
      }
      else
      {
LABEL_24:
        if ( v13 == 34 )
          v8 = !v8;
LABEL_26:
        ++v6;
      }
    }
    else
    {
      ++v7;
      ++v6;
    }
  }
  if ( !v7 )
    return 0LL;
  *a3 = 0;
  return 1336LL;
}
