/*
 * XREFs of ??_GCAdapter@@IEAAPEAXI@Z @ 0x14009B198
 * Callers:
 *     ?Release@CAdapter@@UEAAJXZ @ 0x14003E660 (-Release@CAdapter@@UEAAJXZ.c)
 *     ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x14005C5F4 (-Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x14009B090 (--1CAdapter@@IEAA@XZ.c)
 */

CAdapter *__fastcall CAdapter::`scalar deleting destructor'(CAdapter *this)
{
  CAdapter::~CAdapter(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
