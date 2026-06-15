/*
 * XREFs of ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x18001E2F0
 * Callers:
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x18001B384 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18001E224 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CSid::IsValid(ATL::CSid *this)
{
  return *((_BYTE *)this + 76) && IsValidSid((char *)this + 8);
}
