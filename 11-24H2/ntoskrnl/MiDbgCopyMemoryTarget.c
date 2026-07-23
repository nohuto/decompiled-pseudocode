/*
 * XREFs of MiDbgCopyMemoryTarget @ 0x14067FB00
 * Callers:
 *     <none>
 * Callees:
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiFillPteHierarchy @ 0x140398880 (MiFillPteHierarchy.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     KeFlushSingleTb @ 0x1405BA104 (KeFlushSingleTb.c)
 *     MiCopyFromUntrustedMemory @ 0x14067F3E4 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x14067F52C (MiCopyToUntrustedMemory.c)
 *     MiRealVaToFlushType @ 0x140680E2C (MiRealVaToFlushType.c)
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
  __int64 v13; // r8
  unsigned __int64 LeafVa; // rbx
  unsigned int v15; // eax
  int v16; // r11d
  unsigned int v17; // r9d
  _BYTE *v18; // rcx
  int v19; // eax
  int v20; // esi
  volatile signed __int32 v21; // eax
  unsigned int v22; // esi
  char v23; // r14
  unsigned __int32 v24; // ecx
  volatile signed __int32 v25; // r8d
  int v26; // ebp
  __int64 result; // rax
  unsigned int v28; // ebx
  unsigned int v29; // esi
  char v30; // r14
  signed __int32 v31; // ecx
  signed __int32 v32; // edx
  volatile signed __int32 v33; // r8d
  int v34; // ebp
  size_t Size; // [rsp+20h] [rbp-78h]
  int v36; // [rsp+30h] [rbp-68h]
  __int32 v37; // [rsp+40h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v39; // [rsp+58h] [rbp-40h]
  __int32 v40; // [rsp+B8h] [rbp+20h] BYREF

  *(_OWORD *)BugCheckParameter2 = 0LL;
  v6 = a2;
  v39 = 0LL;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x3FFFFFFF) != 0 )
  {
    v21 = *(_DWORD *)a4;
    v22 = 0;
    v23 = 0;
    while ( (v21 & 0x80000000) != v8 )
    {
      if ( (++v22 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v23;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v23 & 7) == 0 )
        {
          v24 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
          {
            LODWORD(a2) = *(_DWORD *)a4;
            v25 = *(_DWORD *)a4;
            do
            {
              v26 = v24 | 0x40000000;
              v24 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v24 | 0x40000000, a2);
              if ( v24 == v25 )
              {
                v40 = v26;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, &v40, 4LL);
                  v24 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v26 );
              }
              a2 = v24;
              v25 = v24;
            }
            while ( (v24 & 0x80000000) != v8 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v22);
        }
      }
      else
      {
        _mm_pause();
      }
      v21 = *(_DWORD *)a4;
    }
  }
  else
  {
    v40 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8);
    if ( (v40 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
    v9 = *(_BYTE **)v6;
    MiFillPteHierarchy(*(_QWORD *)v6, BugCheckParameter2);
    for ( i = 3LL; ; --i )
    {
      v11 = BugCheckParameter2[i];
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
        v20 = -1073741819;
        goto LABEL_18;
      }
      if ( (v12 & 0x42) == 0 )
      {
        MiWriteValidPteNewProtection(v11, v12 | 0x42, v13);
        LeafVa = MiGetLeafVa((unsigned __int64)v9);
        MiGetSystemRegionType(LeafVa);
        v15 = MiRealVaToFlushType(LeafVa);
        KeFlushSingleTb((unsigned __int64)v9, v15, v16 != 0 ? 2 : 0);
      }
    }
    v17 = *(_DWORD *)(v6 + 20);
    v18 = *(_BYTE **)(v6 + 8);
    if ( (*(_DWORD *)(v6 + 24) & 1) != 0 )
    {
      LODWORD(Size) = *(_DWORD *)(v6 + 16);
      v19 = MiCopyToUntrustedMemory(v9, -1, 0, v18, Size, v17, v36, 1);
    }
    else
    {
      v19 = MiCopyFromUntrustedMemory(v18, v9, *(_DWORD *)(v6 + 16), v17);
    }
    v20 = v19;
LABEL_18:
    *(_DWORD *)(v6 + 28) = v20;
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v28 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v29 = 0;
    v30 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v28 )
        break;
      if ( (++v29 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v30;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v30 & 7) == 0 )
        {
          v31 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v28 )
          {
            v32 = *(_DWORD *)a4;
            v33 = *(_DWORD *)a4;
            do
            {
              v34 = v31 | 0x40000000;
              v31 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v31 | 0x40000000, v32);
              if ( v31 == v33 )
              {
                v37 = v34;
                do
                {
                  KiHaltOnAddress((_BYTE *)a4, &v37, 4LL);
                  v31 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v34 );
              }
              v32 = v31;
              v33 = v31;
            }
            while ( (v31 & 0x80000000) != v28 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v29);
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
    v37 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v28);
    if ( (v37 & 0x40000000) != 0 )
      result = KeWakeAddressAll(a4, a2);
  }
  _InterlockedDecrement(a3);
  return result;
}
