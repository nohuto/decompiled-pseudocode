/*
 * XREFs of MiDbgCopyMemoryTarget @ 0x14067E900
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     MiFillPteHierarchy @ 0x1403A9BF0 (MiFillPteHierarchy.c)
 *     KiHaltOnAddress @ 0x1404FA2B8 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404FA680 (KeCanUseHaltOnAddress.c)
 *     KeFlushSingleTb @ 0x1405BCAD4 (KeFlushSingleTb.c)
 *     MiCopyFromUntrustedMemory @ 0x14067E1E4 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x14067E32C (MiCopyToUntrustedMemory.c)
 *     MiRealVaToFlushType @ 0x14067FC2C (MiRealVaToFlushType.c)
 */

__int64 __fastcall MiDbgCopyMemoryTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  __int64 v6; // r14
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  _BYTE *v9; // rbp
  __int64 i; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 LeafVa; // rbx
  unsigned int v14; // eax
  int v15; // r11d
  unsigned int v16; // r9d
  _BYTE *v17; // rcx
  int v18; // eax
  int v19; // esi
  volatile signed __int32 v20; // eax
  unsigned int v21; // esi
  char v22; // r14
  unsigned __int32 v23; // ecx
  volatile signed __int32 v24; // r8d
  int v25; // ebp
  __int64 result; // rax
  unsigned int v27; // ebx
  unsigned int v28; // esi
  char v29; // r14
  signed __int32 v30; // ecx
  signed __int32 v31; // edx
  volatile signed __int32 v32; // r8d
  int v33; // ebp
  size_t Size; // [rsp+20h] [rbp-78h]
  int v35; // [rsp+30h] [rbp-68h]
  __int32 v36; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v37[2]; // [rsp+48h] [rbp-50h] BYREF
  __int32 v38; // [rsp+B8h] [rbp+20h] BYREF

  memset(v37, 0, sizeof(v37));
  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x3FFFFFFF) != 0 )
  {
    v20 = *(_DWORD *)a4;
    v21 = 0;
    v22 = 0;
    while ( (v20 & 0x80000000) != v8 )
    {
      if ( (++v21 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v22;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v22 & 7) == 0 )
        {
          v23 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
          {
            LODWORD(a2) = *(_DWORD *)a4;
            v24 = *(_DWORD *)a4;
            do
            {
              v25 = v23 | 0x40000000;
              v23 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v23 | 0x40000000, a2);
              if ( v23 == v24 )
              {
                v38 = v25;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, &v38, 4LL);
                  v23 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v25 );
              }
              a2 = v23;
              v24 = v23;
            }
            while ( (v23 & 0x80000000) != v8 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v21);
        }
      }
      else
      {
        _mm_pause();
      }
      v20 = *(_DWORD *)a4;
    }
  }
  else
  {
    v38 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8);
    if ( (v38 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
    v9 = *(_BYTE **)v6;
    MiFillPteHierarchy(*(_QWORD *)v6, (unsigned __int64 *)v37);
    for ( i = 3LL; ; --i )
    {
      v11 = *((_QWORD *)v37 + i);
      v12 = MI_READ_PTE_LOCK_FREE(v11);
      if ( (v12 & 1) == 0 )
        goto LABEL_17;
      if ( (v12 & 0x80u) != 0LL || !i )
        break;
    }
    if ( (*(_DWORD *)(v6 + 24) & 1) != 0 )
    {
      if ( (v12 & 0x800) == 0 )
      {
LABEL_17:
        v19 = -1073741819;
        goto LABEL_18;
      }
      if ( (v12 & 0x42) == 0 )
      {
        MiWriteValidPteNewProtection(v11, v12 | 0x42);
        LeafVa = MiGetLeafVa((unsigned __int64)v9);
        MiGetSystemRegionType(LeafVa);
        v14 = MiRealVaToFlushType(LeafVa);
        KeFlushSingleTb((unsigned __int64)v9, v14, v15 != 0 ? 2 : 0);
      }
    }
    v16 = *(_DWORD *)(v6 + 20);
    v17 = *(_BYTE **)(v6 + 8);
    if ( (*(_DWORD *)(v6 + 24) & 1) != 0 )
    {
      LODWORD(Size) = *(_DWORD *)(v6 + 16);
      v18 = MiCopyToUntrustedMemory(v9, -1, 0, v17, Size, v16, v35, 1);
    }
    else
    {
      v18 = MiCopyFromUntrustedMemory(v17, v9, *(_DWORD *)(v6 + 16), v16);
    }
    v19 = v18;
LABEL_18:
    *(_DWORD *)(v6 + 28) = v19;
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v27 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v28 = 0;
    v29 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v27 )
        break;
      if ( (++v28 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v29;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v29 & 7) == 0 )
        {
          v30 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v27 )
          {
            v31 = *(_DWORD *)a4;
            v32 = *(_DWORD *)a4;
            do
            {
              v33 = v30 | 0x40000000;
              v30 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v30 | 0x40000000, v31);
              if ( v30 == v32 )
              {
                v36 = v33;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, &v36, 4LL);
                  v30 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v33 );
              }
              v31 = v30;
              v32 = v30;
            }
            while ( (v30 & 0x80000000) != v27 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v28);
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
    v36 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v27);
    if ( (v36 & 0x40000000) != 0 )
      result = KeWakeAddressAll(a4, a2);
  }
  _InterlockedDecrement(a3);
  return result;
}
