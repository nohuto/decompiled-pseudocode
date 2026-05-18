/*
 * XREFs of ??1CApiPortClient@@QEAA@XZ @ 0x18000ED38
 * Callers:
 *     _dynamic_atexit_destructor_for__g_PortClient__ @ 0x180011030 (_dynamic_atexit_destructor_for__g_PortClient__.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000EDE8 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ @ 0x18000F06C (-ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ.c)
 */

void __fastcall CApiPortClient::~CApiPortClient(CApiPortClient *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  CApiPortClient::Disconnect(this);
  CApiPortClient::ReleaseExtraDataSection(this);
  *((_BYTE *)this + 72) = 1;
  if ( v1 )
    LeaveCriticalSection(v1);
  DeleteCriticalSection(v1);
}
