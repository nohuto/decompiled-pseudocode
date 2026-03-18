/*
 * XREFs of KiSwapDirectoryTableBaseTarget @ 0x140311500
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MmStealTopLevelPage @ 0x1403116F0 (MmStealTopLevelPage.c)
 *     KiLoadDirectoryTableBase @ 0x140321990 (KiLoadDirectoryTableBase.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiHaltOnAddress @ 0x1404FA2B8 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404FA680 (KeCanUseHaltOnAddress.c)
 */

volatile signed __int32 *__fastcall KiSwapDirectoryTableBaseTarget(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  _KPROCESS *v4; // r15
  signed __int32 v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 v9; // eax
  unsigned int v10; // ebp
  char v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  signed __int32 v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // ebp
  char v18; // r14
  volatile signed __int32 *result; // rax
  signed __int32 v20; // ecx
  signed __int32 v21; // edx
  volatile signed __int32 v22; // r8d
  signed __int32 v23; // ecx
  signed __int32 v24; // edx
  volatile signed __int32 v25; // r8d
  int v26; // esi
  int v27; // esi
  __int32 v28; // [rsp+68h] [rbp+10h] BYREF
  volatile signed __int32 *v29; // [rsp+70h] [rbp+18h]
  __int32 v30; // [rsp+78h] [rbp+20h] BYREF

  v29 = a3;
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
          v20 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
          {
            v21 = *(_DWORD *)a4;
            v22 = *(_DWORD *)a4;
            do
            {
              v26 = v20 | 0x40000000;
              v20 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v20 | 0x40000000, v21);
              if ( v20 == v22 )
              {
                v28 = v26;
                do
                {
                  KiHaltOnAddress(a4, &v28, 4LL);
                  v20 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v26 );
              }
              v21 = v20;
              v22 = v20;
            }
            while ( (v20 & 0x80000000) != v8 );
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
    v28 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8);
    if ( (v28 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2, a3, a4);
  }
  if ( (unsigned int)MmStealTopLevelPage(*(_QWORD *)(a2 + 16)) )
    *(_BYTE *)a2 = 1;
  v15 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v16 = ~v15 & 0x80000000;
  if ( (v15 & 0x3FFFFFFF) != 0 )
  {
    v17 = 0;
    v18 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v16 )
    {
      if ( (++v17 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v18;
        if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v18 & 7) == 0 )
        {
          v23 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v16 )
          {
            v24 = *(_DWORD *)a4;
            v25 = *(_DWORD *)a4;
            do
            {
              v27 = v23 | 0x40000000;
              v23 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v23 | 0x40000000, v24);
              if ( v23 == v25 )
              {
                v30 = v27;
                do
                {
                  KiHaltOnAddress(a4, &v30, 4LL);
                  v23 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v27 );
              }
              v24 = v23;
              v25 = v23;
            }
            while ( (v23 & 0x80000000) != v16 );
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
    v30 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v16);
    if ( (v30 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, v12, v13, v14);
  }
  if ( *(_BYTE *)a2 && KeGetCurrentThread()->ApcState.Process == v4 )
    KiLoadDirectoryTableBase(v4, v4->DirectoryTableBase);
  result = v29;
  _InterlockedDecrement(v29);
  return result;
}
