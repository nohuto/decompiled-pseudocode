/*
 * XREFs of ??_EMessageProxyReconnectAdapter@@UEAAPEAXI@Z @ 0x18010BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MessageProxyReconnectAdapter@@UEAA@XZ @ 0x18010BD40 (--1MessageProxyReconnectAdapter@@UEAA@XZ.c)
 */

MessageProxyReconnectAdapter *__fastcall MessageProxyReconnectAdapter::`vector deleting destructor'(
        MessageProxyReconnectAdapter *this,
        char a2)
{
  MessageProxyReconnectAdapter::~MessageProxyReconnectAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
