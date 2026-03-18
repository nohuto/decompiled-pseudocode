/*
 * XREFs of ??_GCAdapter@@IEAAPEAXI@Z @ 0x140099048
 * Callers:
 *     ?Release@CAdapter@@UEAAJXZ @ 0x14003EC70 (-Release@CAdapter@@UEAAJXZ.c)
 *     ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x14005CB94 (-Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x140098F40 (--1CAdapter@@IEAA@XZ.c)
 */

CAdapter *__fastcall CAdapter::`scalar deleting destructor'(CAdapter *this)
{
  CAdapter::~CAdapter(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
