/*
 * XREFs of KiSwapDirectoryTableBaseTarget @ 0x1403F4770
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLoadDirectoryTableBase @ 0x1402CA520 (KiLoadDirectoryTableBase.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     MmStealTopLevelPage @ 0x1403F4960 (MmStealTopLevelPage.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 */

volatile signed __int32 *__fastcall KiSwapDirectoryTableBaseTarget(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        unsigned __int64 a4)
{
  _KPROCESS *v4; // r15
  signed __int32 v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 v9; // eax
  unsigned int v10; // ebp
  char v11; // r14
  __int64 v12; // rdx
  signed __int32 v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ebp
  char v16; // r14
  volatile signed __int32 *result; // rax
  signed __int32 v18; // ecx
  signed __int32 v19; // edx
  volatile signed __int32 v20; // r8d
  signed __int32 v21; // ecx
  signed __int32 v22; // edx
  volatile signed __int32 v23; // r8d
  int v24; // esi
  int v25; // esi
  __int32 v26; // [rsp+68h] [rbp+10h] BYREF
  volatile signed __int32 *v27; // [rsp+70h] [rbp+18h]
  __int32 v28; // [rsp+78h] [rbp+20h] BYREF

  v27 = a3;
  v4 = *(_KPROCESS **)(a2 + 8);
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
          v18 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
          {
            v19 = *(_DWORD *)a4;
            v20 = *(_DWORD *)a4;
            do
            {
              v24 = v18 | 0x40000000;
              v18 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v18 | 0x40000000, v19);
              if ( v18 == v20 )
              {
                v26 = v24;
                do
                {
                  KiHaltOnAddress(a4, &v26, 4LL);
                  v18 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v24 );
              }
              v19 = v18;
              v20 = v18;
            }
            while ( (v18 & 0x80000000) != v8 );
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
    v26 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8);
    if ( (v26 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
  }
  if ( (unsigned int)MmStealTopLevelPage(*(_QWORD *)(a2 + 16)) )
    *(_BYTE *)a2 = 1;
  v13 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v14 = ~v13 & 0x80000000;
  if ( (v13 & 0x3FFFFFFF) != 0 )
  {
    v15 = 0;
    v16 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v14 )
    {
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v16;
        if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v16 & 7) == 0 )
        {
          v21 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v14 )
          {
            v22 = *(_DWORD *)a4;
            v23 = *(_DWORD *)a4;
            do
            {
              v25 = v21 | 0x40000000;
              v21 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v21 | 0x40000000, v22);
              if ( v21 == v23 )
              {
                v28 = v25;
                do
                {
                  KiHaltOnAddress(a4, &v28, 4LL);
                  v21 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v25 );
              }
              v22 = v21;
              v23 = v21;
            }
            while ( (v21 & 0x80000000) != v14 );
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
    v28 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v14);
    if ( (v28 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, v12);
  }
  if ( *(_BYTE *)a2 && KeGetCurrentThread()->ApcState.Process == v4 )
    KiLoadDirectoryTableBase((__int64)v4, v4->DirectoryTableBase);
  result = v27;
  _InterlockedDecrement(v27);
  return result;
}
