/*
 * XREFs of ??_EMessageProxyReconnectAdapter@@UEAAPEAXI@Z @ 0x180675390
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MessageProxyReconnectAdapter@@UEAA@XZ @ 0x180675330 (--1MessageProxyReconnectAdapter@@UEAA@XZ.c)
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
