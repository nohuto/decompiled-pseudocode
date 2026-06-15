/*
 * XREFs of ?Release@CSharedHandle@@AEAAXXZ @ 0x14000D208
 * Callers:
 *     ??4CConnectionNode@@QEAAXAEAV0@@Z @ 0x14000CE40 (--4CConnectionNode@@QEAAXAEAV0@@Z.c)
 *     ??1CConnectionNode@@UEAA@XZ @ 0x14000D16C (--1CConnectionNode@@UEAA@XZ.c)
 *     ??1CSharedHandle@@QEAA@XZ @ 0x14004AD0C (--1CSharedHandle@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSharedHandle::Release(CSharedHandle *this)
{
  __int64 v1; // rbx

  v1 = _InterlockedExchange64((volatile __int64 *)this, 0LL);
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF) == 1 )
    {
      CloseHandle(*(HANDLE *)v1);
      operator delete((void *)v1);
    }
  }
}
