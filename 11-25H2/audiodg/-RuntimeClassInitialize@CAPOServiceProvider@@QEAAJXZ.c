/*
 * XREFs of ?RuntimeClassInitialize@CAPOServiceProvider@@QEAAJXZ @ 0x140037634
 * Callers:
 *     ??$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIServiceProvider@@@Z @ 0x140037510 (--$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPOServiceProvider::RuntimeClassInitialize(GUID *this)
{
  HRESULT Guid; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Guid = CoCreateGuid(this + 2);
  v2 = Guid;
  if ( Guid >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
    (const char *)(unsigned int)Guid);
  return v2;
}
