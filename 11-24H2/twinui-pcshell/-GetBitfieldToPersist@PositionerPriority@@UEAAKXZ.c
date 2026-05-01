/*
 * XREFs of ?GetBitfieldToPersist@PositionerPriority@@UEAAKXZ @ 0x1801E0ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$array@_N$0L@@std@@QEAAAEA_N_K@Z @ 0x180510794 (--A-$array@_N$0L@@std@@QEAAAEA_N_K@Z.c)
 */

__int64 __fastcall PositionerPriority::GetBitfieldToPersist(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  unsigned int v3; // esi
  unsigned __int64 i; // rdx
  __int64 v5; // rdx

  v1 = this + 2;
  AcquireSRWLockShared(this + 2);
  v3 = 0;
  for ( i = 0LL; i < 0xB; i = v5 + 1 )
  {
    if ( *(_BYTE *)std::array<bool,11>::operator[](&this[3], i) )
      v3 |= 1 << v5;
  }
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
