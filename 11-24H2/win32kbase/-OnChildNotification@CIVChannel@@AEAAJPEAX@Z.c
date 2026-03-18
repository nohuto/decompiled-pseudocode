/*
 * XREFs of ?OnChildNotification@CIVChannel@@AEAAJPEAX@Z @ 0x14021B24C
 * Callers:
 *     ?sOnChildNotification@CIVChannel@@CAJPEAX@Z @ 0x14021B600 (-sOnChildNotification@CIVChannel@@CAJPEAX@Z.c)
 * Callees:
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x14021B480 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CIVChannel::OnChildNotification(CIVChannel *this, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx

  if ( isRootPartition((__int64)this) )
  {
    v4 = a2[2];
    v5 = (unsigned int)a2[3];
    if ( v4 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 10);
      (*((void (__fastcall **)(_QWORD, __int64))this + 2))(*(_QWORD *)this, v5);
    }
    else if ( v4 == 3 )
    {
      _InterlockedDecrement((volatile signed __int32 *)this + 10);
    }
    return 0LL;
  }
  if ( a2[2] != 2 )
    return 0LL;
  return CIVChannel::Reconnect(this);
}
