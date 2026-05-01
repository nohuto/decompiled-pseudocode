/*
 * XREFs of ??_GPenWorkspaceDiscoverBroker@@UEAAPEAXI@Z @ 0x1803EED10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PenWorkspaceDiscoverBroker@@UEAA@XZ @ 0x1803EEB08 (--1PenWorkspaceDiscoverBroker@@UEAA@XZ.c)
 */

PenWorkspaceDiscoverBroker *__fastcall PenWorkspaceDiscoverBroker::`scalar deleting destructor'(
        PenWorkspaceDiscoverBroker *this,
        char a2)
{
  PenWorkspaceDiscoverBroker::~PenWorkspaceDiscoverBroker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
