/*
 * XREFs of UserIsWindowDesktopComposed @ 0x14008C840
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowDesktopComposed(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v2 = a2;
  v3 = 0;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(a1, a2);
  if ( v4 )
  {
    *v2 = IsWindowDesktopComposed(v4);
    return 1;
  }
  return v3;
}
