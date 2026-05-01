/*
 * XREFs of ??0?$list@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@1@@Z @ 0x18021F5F4
 * Callers:
 *     ??0RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802C4334 (--0RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>::list<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
