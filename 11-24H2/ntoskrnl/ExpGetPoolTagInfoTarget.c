/*
 * XREFs of ExpGetPoolTagInfoTarget @ 0x14042D650
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall ExpGetPoolTagInfoTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  __int64 v6; // rsi
  signed __int32 v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 v9; // eax
  unsigned int v10; // ebp
  char v11; // r14
  _DWORD *v12; // rbp
  __int64 result; // rax
  unsigned int v14; // edi
  unsigned int v15; // esi
  char v16; // r14
  __int64 *v17; // r9
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // rax
  _QWORD *i; // rcx
  unsigned __int32 v22; // ecx
  volatile signed __int32 v23; // r8d
  signed __int32 v24; // ecx
  signed __int32 v25; // edx
  volatile signed __int32 v26; // r8d
  int v27; // esi
  int v28; // ebp
  __int32 v29; // [rsp+58h] [rbp+10h] BYREF
  __int32 v30; // [rsp+68h] [rbp+20h] BYREF

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
        if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v11 & 7) == 0 )
        {
          v22 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
          {
            LODWORD(a2) = *(_DWORD *)a4;
            v23 = *(_DWORD *)a4;
            do
            {
              v27 = v22 | 0x40000000;
              v22 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v22 | 0x40000000, a2);
              if ( v22 == v23 )
              {
                v29 = v27;
                do
                {
                  KiHaltOnAddress(a4, &v29, 4LL);
                  v22 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v27 );
              }
              a2 = v22;
              v23 = v22;
            }
            while ( (v22 & 0x80000000) != v8 );
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
    v12 = (_DWORD *)(a4 + 4);
  }
  else
  {
    v12 = (_DWORD *)(a4 + 4);
    v29 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8);
    if ( (v29 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
    memmove(*(void **)v6, ExPoolTagTables, 80LL * *(_QWORD *)(v6 + 8));
    v17 = (__int64 *)&unk_140EFAAE8;
    v18 = 2047LL;
    v19 = *(_QWORD *)v6 + 80LL * *(_QWORD *)(v6 + 8);
    do
    {
      a2 = *v17;
      if ( *v17 )
      {
        for ( i = *(_QWORD **)v6; i != (_QWORD *)v19; i += 10 )
        {
          if ( *(_DWORD *)a2 )
          {
            i[2] += *(_QWORD *)(a2 + 16);
            i[3] += *(_QWORD *)(a2 + 24);
            i[1] += *(_QWORD *)(a2 + 8);
            i[5] += *(_QWORD *)(a2 + 40);
            i[6] += *(_QWORD *)(a2 + 48);
            i[4] += *(_QWORD *)(a2 + 32);
          }
          a2 += 80LL;
        }
      }
      ++v17;
      --v18;
    }
    while ( v18 );
    v20 = *(_QWORD *)(v6 + 24);
    if ( v20 )
      memmove(*(void **)(v6 + 16), PoolTrackTableExpansion, 80 * v20);
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v14 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v14 )
        break;
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v16;
        if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v16 & 7) == 0 )
        {
          v24 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v14 )
          {
            v25 = *(_DWORD *)a4;
            v26 = *(_DWORD *)a4;
            do
            {
              v28 = v24 | 0x40000000;
              v24 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v24 | 0x40000000, v25);
              if ( v24 == v26 )
              {
                v30 = v28;
                do
                {
                  KiHaltOnAddress(a4, &v30, 4LL);
                  v24 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v28 );
              }
              v25 = v24;
              v26 = v24;
            }
            while ( (v24 & 0x80000000) != v14 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v15);
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
    v30 = _InterlockedExchange((volatile __int32 *)a4, *v12 | v14);
    if ( (v30 & 0x40000000) != 0 )
      result = KeWakeAddressAll(a4, a2);
  }
  _InterlockedDecrement(a3);
  return result;
}
