/*
 * XREFs of ?Create@GameInputProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x180097C78
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18004F884 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x1800961C0 (--0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ABBBC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GameInputProcessor::Create(struct IInputDeviceInfoStore *a1, struct GameInputProcessor **a2)
{
  GameInputProcessor *v4; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (GameInputProcessor *)RefCountedObject::operator new(0xC8uLL);
  if ( v4 )
    v4 = GameInputProcessor::GameInputProcessor(v4, a1);
  if ( !v4 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x6B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      v5);
  *a2 = v4;
  return 0LL;
}
