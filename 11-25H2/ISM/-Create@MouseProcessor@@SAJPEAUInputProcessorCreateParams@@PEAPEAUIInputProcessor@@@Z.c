/*
 * XREFs of ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180191CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x180191A6C (--0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJXZ @ 0x180191FC8 (-Initialize@MouseProcessor@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  MouseProcessor *v4; // rax
  MouseProcessor *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (MouseProcessor *)RefCountedObject::operator new(0x6B8uLL);
  if ( v4 )
    v5 = MouseProcessor::MouseProcessor(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v7 = MouseProcessor::Initialize(v5);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a2 = (MouseProcessor *)((char *)v5 + 16);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
