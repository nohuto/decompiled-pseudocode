/*
 * XREFs of MiUpdatePageThresholdsDpc @ 0x1404AEE90
 * Callers:
 *     <none>
 * Callees:
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 */

__int64 __fastcall MiUpdatePageThresholdsDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  _QWORD *v6; // rsi
  signed __int32 v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  volatile signed __int32 v10; // eax
  unsigned int v11; // ebp
  char v12; // r14
  unsigned __int32 v13; // ecx
  volatile signed __int32 v14; // r8d
  int v15; // esi
  __int64 result; // rax
  unsigned int v17; // edi
  unsigned int v18; // ebp
  char v19; // r14
  signed __int32 v20; // ecx
  signed __int32 v21; // edx
  volatile signed __int32 v22; // r8d
  int v23; // esi
  __int32 v24; // [rsp+58h] [rbp+10h] BYREF
  __int32 v25; // [rsp+68h] [rbp+20h] BYREF

  v6 = (_QWORD *)a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x3FFFFFFF) != 0 )
  {
    v10 = *(_DWORD *)a4;
    v11 = 0;
    v12 = 0;
    while ( (v10 & 0x80000000) != v8 )
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v12;
        if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v12 & 7) == 0 )
        {
          v13 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
          {
            LODWORD(a2) = *(_DWORD *)a4;
            v14 = *(_DWORD *)a4;
            do
            {
              v15 = v13 | 0x40000000;
              v13 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v13 | 0x40000000, a2);
              if ( v13 == v14 )
              {
                v24 = v15;
                do
                {
                  KiHaltOnAddress(a4, &v24, 4LL);
                  v13 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v15 );
              }
              a2 = v13;
              v14 = v13;
            }
            while ( (v13 & 0x80000000) != v8 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v11);
        }
      }
      else
      {
        _mm_pause();
      }
      v10 = *(_DWORD *)a4;
    }
  }
  else
  {
    v24 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8);
    if ( (v24 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
    v9 = v6[2];
    *(_QWORD *)(v9 + 16640) = *v6;
    *(_QWORD *)(v9 + 16648) = v6[1];
    MiUpdateAvailableEventsAtDpc(v9);
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v17 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v17 )
        break;
      if ( (++v18 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v19;
        if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v19 & 7) == 0 )
        {
          v20 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v17 )
          {
            v21 = *(_DWORD *)a4;
            v22 = *(_DWORD *)a4;
            do
            {
              v23 = v20 | 0x40000000;
              v20 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v20 | 0x40000000, v21);
              if ( v20 == v22 )
              {
                v25 = v23;
                do
                {
                  KiHaltOnAddress(a4, &v25, 4LL);
                  v20 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v23 );
              }
              v21 = v20;
              v22 = v20;
            }
            while ( (v20 & 0x80000000) != v17 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v18);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    v25 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v17);
    if ( (v25 & 0x40000000) != 0 )
      result = KeWakeAddressAll(a4, a2);
  }
  _InterlockedDecrement(a3);
  return result;
}
