/*
 * XREFs of ExpLimitInsertDpc @ 0x140653350
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     ExpLimitDpcInsertEntry @ 0x1406530A0 (ExpLimitDpcInsertEntry.c)
 */

volatile signed __int32 *__fastcall ExpLimitInsertDpc(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        unsigned __int64 a4)
{
  unsigned int *v5; // rsi
  signed __int32 v6; // eax
  unsigned int v7; // edi
  unsigned int i; // edi
  signed __int32 v9; // eax
  unsigned int v10; // edi
  __int32 v11; // edi
  unsigned int v12; // esi
  char v13; // r14
  signed __int32 v14; // ecx
  signed __int32 v15; // edx
  volatile signed __int32 v16; // r8d
  int v17; // ebp
  volatile signed __int32 v18; // eax
  unsigned int v19; // ebp
  char v20; // r14
  unsigned __int32 v21; // ecx
  volatile signed __int32 v22; // r8d
  int v23; // esi
  signed __int32 v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // ebp
  char v27; // r14
  signed __int32 v28; // ecx
  signed __int32 v29; // edx
  volatile signed __int32 v30; // r8d
  int v31; // esi
  volatile signed __int32 *result; // rax
  __int32 v33; // [rsp+20h] [rbp-38h] BYREF
  __int32 v34[13]; // [rsp+24h] [rbp-34h] BYREF
  __int32 v36; // [rsp+78h] [rbp+20h] BYREF

  v5 = (unsigned int *)a2;
  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x3FFFFFFF) != 0 )
  {
    v18 = *(_DWORD *)a4;
    v19 = 0;
    v20 = 0;
    while ( (v18 & 0x80000000) != v7 )
    {
      if ( (++v19 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v20;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v20 & 7) == 0 )
        {
          v21 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v7 )
          {
            LODWORD(a2) = *(_DWORD *)a4;
            v22 = *(_DWORD *)a4;
            do
            {
              v23 = v21 | 0x40000000;
              v21 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v21 | 0x40000000, a2);
              if ( v21 == v22 )
              {
                v33 = v23;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, &v33, 4LL);
                  v21 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v23 );
              }
              a2 = v21;
              v22 = v21;
            }
            while ( (v21 & 0x80000000) != v7 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v19);
        }
      }
      else
      {
        _mm_pause();
      }
      v18 = *(_DWORD *)a4;
    }
    v24 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v25 = ~v24 & 0x80000000;
    if ( (v24 & 0x3FFFFFFF) == 0 )
    {
      v11 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v25);
      v34[0] = v11;
LABEL_8:
      if ( (v11 & 0x40000000) != 0 )
        KeWakeAddressAll(a4, a2);
      goto LABEL_65;
    }
    v26 = 0;
    v27 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v25 )
    {
      if ( (++v26 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v27;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v27 & 7) == 0 )
        {
          v28 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v25 )
          {
            v29 = *(_DWORD *)a4;
            v30 = *(_DWORD *)a4;
            do
            {
              v31 = v28 | 0x40000000;
              v28 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v28 | 0x40000000, v29);
              if ( v28 == v30 )
              {
                v34[0] = v31;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, v34, 4LL);
                  v28 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v31 );
              }
              v29 = v28;
              v30 = v28;
            }
            while ( (v28 & 0x80000000) != v25 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v26);
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
    v33 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v7);
    if ( (v33 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
    for ( i = 0; i < *v5; ++i )
      ExpLimitDpcInsertEntry((signed __int64 *)&v5[14 * i + 2]);
    v9 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v10 = ~v9 & 0x80000000;
    if ( (v9 & 0x3FFFFFFF) == 0 )
    {
      v11 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v10);
      v36 = v11;
      goto LABEL_8;
    }
    v12 = 0;
    v13 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v10 )
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v13;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v13 & 7) == 0 )
        {
          v14 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v10 )
          {
            v15 = *(_DWORD *)a4;
            v16 = *(_DWORD *)a4;
            do
            {
              v17 = v14 | 0x40000000;
              v14 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v14 | 0x40000000, v15);
              if ( v14 == v16 )
              {
                v36 = v17;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, &v36, 4LL);
                  v14 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v17 );
              }
              v15 = v14;
              v16 = v14;
            }
            while ( (v14 & 0x80000000) != v10 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v12);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
LABEL_65:
  result = a3;
  _InterlockedDecrement(a3);
  return result;
}
