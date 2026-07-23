/*
 * XREFs of MiMakeIoRangePermanentDpc @ 0x140677810
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     MiMakeIoRangePermanent @ 0x140677564 (MiMakeIoRangePermanent.c)
 */

__int64 __fastcall MiMakeIoRangePermanentDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  __int64 v6; // rsi
  signed __int32 v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 v9; // eax
  unsigned int v10; // ebp
  char v11; // r14
  unsigned __int32 v12; // ecx
  volatile signed __int32 v13; // r8d
  int v14; // esi
  __int64 result; // rax
  unsigned int v16; // edi
  unsigned int v17; // ebp
  char v18; // r14
  signed __int32 v19; // ecx
  signed __int32 v20; // edx
  volatile signed __int32 v21; // r8d
  int v22; // esi
  __int32 v23; // [rsp+58h] [rbp+10h] BYREF
  __int32 v24; // [rsp+68h] [rbp+20h] BYREF

  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x3FFFFFFF) != 0 )
  {
    v9 = *(_DWORD *)a4;
    v10 = 0;
    v11 = 0;
    while ( (v9 & 0x80000000) != v8 )
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v11;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v11 & 7) == 0 )
        {
          v12 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
          {
            LODWORD(a2) = *(_DWORD *)a4;
            v13 = *(_DWORD *)a4;
            do
            {
              v14 = v12 | 0x40000000;
              v12 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v12 | 0x40000000, a2);
              if ( v12 == v13 )
              {
                v23 = v14;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, &v23, 4LL);
                  v12 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v14 );
              }
              a2 = v12;
              v13 = v12;
            }
            while ( (v12 & 0x80000000) != v8 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v10);
        }
      }
      else
      {
        _mm_pause();
      }
      v9 = *(_DWORD *)a4;
    }
  }
  else
  {
    v23 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8);
    if ( (v23 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
    *(_DWORD *)(v6 + 8) = MiMakeIoRangePermanent(*(_QWORD *)v6, a2);
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v16 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v16 )
        break;
      if ( (++v17 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v18;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v18 & 7) == 0 )
        {
          v19 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v16 )
          {
            v20 = *(_DWORD *)a4;
            v21 = *(_DWORD *)a4;
            do
            {
              v22 = v19 | 0x40000000;
              v19 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v19 | 0x40000000, v20);
              if ( v19 == v21 )
              {
                v24 = v22;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, &v24, 4LL);
                  v19 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v22 );
              }
              v20 = v19;
              v21 = v19;
            }
            while ( (v19 & 0x80000000) != v16 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v17);
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
    v24 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v16);
    if ( (v24 & 0x40000000) != 0 )
      result = KeWakeAddressAll(a4, a2);
  }
  _InterlockedDecrement(a3);
  return result;
}
