/*
 * XREFs of MiFreeUnusedPfnPagesDpc @ 0x14066E010
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x14066E238 (MiFreedUnusedPfnPagesDpc.c)
 */

__int64 __fastcall MiFreeUnusedPfnPagesDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  signed __int32 v6; // eax
  unsigned int v7; // edi
  volatile signed __int32 v8; // eax
  unsigned int v9; // ebp
  char v10; // r14
  unsigned __int32 v11; // ecx
  volatile signed __int32 v12; // r8d
  int v13; // esi
  __int64 result; // rax
  unsigned int v15; // edi
  unsigned int v16; // ebp
  char v17; // r14
  signed __int32 v18; // ecx
  signed __int32 v19; // edx
  volatile signed __int32 v20; // r8d
  int v21; // esi
  __int32 v22[14]; // [rsp+20h] [rbp-38h] BYREF
  __int32 v23; // [rsp+78h] [rbp+20h] BYREF

  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x3FFFFFFF) != 0 )
  {
    v8 = *(_DWORD *)a4;
    v9 = 0;
    v10 = 0;
    while ( (v8 & 0x80000000) != v7 )
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v10;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v10 & 7) == 0 )
        {
          v11 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v7 )
          {
            LODWORD(a2) = *(_DWORD *)a4;
            v12 = *(_DWORD *)a4;
            do
            {
              v13 = v11 | 0x40000000;
              v11 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v11 | 0x40000000, a2);
              if ( v11 == v12 )
              {
                v23 = v13;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, &v23, 4LL);
                  v11 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v13 );
              }
              a2 = v11;
              v12 = v11;
            }
            while ( (v11 & 0x80000000) != v7 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v9);
        }
      }
      else
      {
        _mm_pause();
      }
      v8 = *(_DWORD *)a4;
    }
  }
  else
  {
    v23 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v7);
    if ( (v23 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
    MiFreedUnusedPfnPagesDpc();
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v15 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v15 )
        break;
      if ( (++v16 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v17;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v17 & 7) == 0 )
        {
          v18 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v15 )
          {
            v19 = *(_DWORD *)a4;
            v20 = *(_DWORD *)a4;
            do
            {
              v21 = v18 | 0x40000000;
              v18 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v18 | 0x40000000, v19);
              if ( v18 == v20 )
              {
                v22[0] = v21;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, v22, 4LL);
                  v18 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v21 );
              }
              v19 = v18;
              v20 = v18;
            }
            while ( (v18 & 0x80000000) != v15 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v16);
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
    v22[0] = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v15);
    if ( (v22[0] & 0x40000000) != 0 )
      result = KeWakeAddressAll(a4, a2);
  }
  _InterlockedDecrement(a3);
  return result;
}
