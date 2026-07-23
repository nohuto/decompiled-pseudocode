/*
 * XREFs of MiSpecialPurposeMemoryCacheUpdateDpc @ 0x14068FA90
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 */

__int64 __fastcall MiSpecialPurposeMemoryCacheUpdateDpc(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        unsigned __int64 a4)
{
  __int64 v4; // rbp
  signed __int32 v8; // eax
  unsigned int v9; // edi
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  volatile signed __int32 v16; // eax
  unsigned int v17; // ebp
  char v18; // r14
  signed __int32 v19; // ecx
  signed __int32 v20; // edx
  volatile signed __int32 v21; // r8d
  int v22; // esi
  __int64 result; // rax
  unsigned int v24; // edi
  unsigned int v25; // ebp
  char v26; // r14
  signed __int32 v27; // ecx
  signed __int32 v28; // edx
  volatile signed __int32 v29; // r8d
  int v30; // esi
  __int32 v31; // [rsp+58h] [rbp+10h] BYREF
  __int32 v32; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x3FFFFFFF) != 0 )
  {
    v16 = *(_DWORD *)a4;
    v17 = 0;
    v18 = 0;
    while ( (v16 & 0x80000000) != v9 )
    {
      if ( (++v17 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v18;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v18 & 7) == 0 )
        {
          v19 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v9 )
          {
            v20 = *(_DWORD *)a4;
            v21 = *(_DWORD *)a4;
            do
            {
              v22 = v19 | 0x40000000;
              v19 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v19 | 0x40000000, v20);
              if ( v19 == v21 )
              {
                v31 = v22;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, &v31, 4LL);
                  v19 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v22 );
              }
              v20 = v19;
              v21 = v19;
            }
            while ( (v19 & 0x80000000) != v9 );
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
      v16 = *(_DWORD *)a4;
    }
  }
  else
  {
    v31 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v9);
    if ( (v31 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
    if ( *(_DWORD *)(a2 + 16) )
    {
      v10 = (_QWORD *)(v4 + 72);
      v11 = *(_QWORD *)(a2 + 8) + 17640LL;
      v12 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) == v11 )
      {
        *v10 = v12;
        *(_QWORD *)(v4 + 80) = v11;
        *(_QWORD *)(v12 + 8) = v10;
        *(_QWORD *)v11 = v10;
        goto LABEL_29;
      }
LABEL_10:
      __fastfail(3u);
    }
    v13 = *(_QWORD *)a2 + 72LL;
    v14 = *(_QWORD *)v13;
    if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 )
      goto LABEL_10;
    v15 = *(_QWORD **)(*(_QWORD *)a2 + 80LL);
    if ( *v15 != v13 )
      goto LABEL_10;
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    *(_QWORD *)(*(_QWORD *)a2 + 72LL) = 0LL;
  }
LABEL_29:
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v24 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v25 = 0;
    v26 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v24 )
        break;
      if ( (++v25 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v26;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v26 & 7) == 0 )
        {
          v27 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v24 )
          {
            v28 = *(_DWORD *)a4;
            v29 = *(_DWORD *)a4;
            do
            {
              v30 = v27 | 0x40000000;
              v27 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v27 | 0x40000000, v28);
              if ( v27 == v29 )
              {
                v32 = v30;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, &v32, 4LL);
                  v27 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v30 );
              }
              v28 = v27;
              v29 = v27;
            }
            while ( (v27 & 0x80000000) != v24 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v25);
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
    v32 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v24);
    if ( (v32 & 0x40000000) != 0 )
      result = KeWakeAddressAll(a4, 4LL);
  }
  _InterlockedDecrement(a3);
  return result;
}
