/*
 * XREFs of ?Create@ContextualProcessorManager@@SAJPEAPEAV1@@Z @ 0x18008E71C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContextualProcessorManager::Create(struct ContextualProcessorManager **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  _DWORD *v4; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v4 = RefCountedObject::operator new(0x30uLL);
    if ( v4 )
    {
      *(_QWORD *)v4 = &RefCountedObject::`vftable';
      *(_QWORD *)v4 = &ContextualProcessorManager::`vftable';
      v4[2] = 1;
      *((_QWORD *)v4 + 2) = 0LL;
      *((_QWORD *)v4 + 3) = 0LL;
      *((_QWORD *)v4 + 4) = 0LL;
      v4[10] = 0;
      *a1 = (struct ContextualProcessorManager *)v4;
      return 0LL;
    }
    v2 = -2147024882;
    v3 = 39LL;
  }
  else
  {
    v2 = -2147024809;
    v3 = 32LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
    (const char *)v2,
    v6);
  return v2;
}
