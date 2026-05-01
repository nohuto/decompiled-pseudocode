/*
 * XREFs of _anonymous_namespace_::IsWebExperiencePackageSupportedOnProduct @ 0x180697348
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsWebExperiencePackageSupportedOnProduct(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  bool v4; // zf
  unsigned int v5; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx

  if ( a1 > 0x7A )
  {
    if ( a1 > 0xA2 )
    {
      v11 = a1 - 164;
      if ( !v11 )
        return 1;
      v12 = v11 - 1;
      if ( !v12 )
        return 1;
      v5 = v12 - 6;
      v4 = v5 == 0;
LABEL_24:
      if ( v4 )
        return 1;
      return v5 == 1;
    }
    if ( a1 == 162 )
      return 1;
    v7 = a1 - 125;
    if ( !v7 )
      return 1;
    v8 = v7 - 1;
    if ( !v8 )
      return 1;
    v9 = v8 - 3;
    if ( !v9 )
      return 1;
    v10 = v9 - 1;
    if ( !v10 )
      return 1;
    return v10 == 31;
  }
  else
  {
    if ( a1 == 122 )
      return 1;
    if ( a1 <= 0x31 )
    {
      if ( a1 == 49 )
        return 1;
      v1 = a1 - 4;
      if ( !v1 )
        return 1;
      v2 = v1 - 7;
      if ( !v2 )
        return 1;
      v3 = v2 - 16;
      if ( !v3 )
        return 1;
      v5 = v3 - 20;
      v4 = v5 == 0;
      goto LABEL_24;
    }
    if ( a1 == 72 || a1 == 84 || a1 == 98 || a1 == 101 )
      return 1;
    return a1 == 121;
  }
}
