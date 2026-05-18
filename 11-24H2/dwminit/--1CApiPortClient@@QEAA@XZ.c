/*
 * XREFs of ??1CApiPortClient@@QEAA@XZ @ 0x18000F578
 * Callers:
 *     _dynamic_atexit_destructor_for__g_PortClient__ @ 0x1800117C0 (_dynamic_atexit_destructor_for__g_PortClient__.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000F628 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 */

void __fastcall CApiPortClient::~CApiPortClient(CApiPortClient *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  CApiPortClient::Disconnect(this);
  *((_BYTE *)this + 56) = 1;
  if ( v1 )
    LeaveCriticalSection(v1);
  DeleteCriticalSection(v1);
}
