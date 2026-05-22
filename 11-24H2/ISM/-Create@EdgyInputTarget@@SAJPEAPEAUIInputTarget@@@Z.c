/*
 * XREFs of ?Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x1801AC35C
 * Callers:
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801AC4A0 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall EdgyInputTarget::Create(struct IInputTarget **a1)
{
  _QWORD *v2; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = RefCountedObject::operator new(0x28uLL);
  if ( v2 )
  {
    v2[2] = &RefCountedObject::`vftable';
    *((_DWORD *)v2 + 6) = 1;
    *((_DWORD *)v2 + 8) = 0;
    *v2 = &EdgyInputTarget::`vftable'{for `IInputTarget'};
    v2[1] = &EdgyInputTarget::`vftable'{for `IDCompInputTarget'};
    v2[2] = &EdgyInputTarget::`vftable'{for `RefCountedObject'};
    *a1 = (struct IInputTarget *)v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x170,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
