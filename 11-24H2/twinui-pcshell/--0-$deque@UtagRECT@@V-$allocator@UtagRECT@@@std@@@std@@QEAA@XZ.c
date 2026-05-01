/*
 * XREFs of ??0?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x180200490
 * Callers:
 *     ??0CSnapAssistControllerBase@@QEAA@XZ @ 0x18020035C (--0CSnapAssistControllerBase@@QEAA@XZ.c)
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802933BC (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::deque<tagRECT>::deque<tagRECT>(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v2[1] = 0LL;
  *a1 = v2;
  *v2 = a1;
  return a1;
}
