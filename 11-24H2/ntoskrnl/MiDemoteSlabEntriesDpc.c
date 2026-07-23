/*
 * XREFs of MiDemoteSlabEntriesDpc @ 0x14043B750
 * Callers:
 *     <none>
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     MiDemoteSlabEntry @ 0x14043BE9C (MiDemoteSlabEntry.c)
 *     MiGatherSlabDemoteCandidates @ 0x14043C840 (MiGatherSlabDemoteCandidates.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046321C (MiEnumerateSlabAllocatorsEx.c)
 *     MiCheckMdlSlabFragmentation @ 0x14048FD10 (MiCheckMdlSlabFragmentation.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 */

__int64 __fastcall MiDemoteSlabEntriesDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  volatile signed __int32 *v5; // r13
  __int64 *v6; // rsi
  signed __int32 v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 v9; // eax
  unsigned int v10; // esi
  char v11; // r15
  __int64 result; // rax
  unsigned int v13; // edi
  unsigned int v14; // esi
  char v15; // r15
  __int64 v16; // r14
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  char *v19; // r13
  char *i; // rdi
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  unsigned __int32 v26; // ecx
  volatile signed __int32 v27; // r8d
  signed __int32 v28; // ecx
  signed __int32 v29; // edx
  volatile signed __int32 v30; // r8d
  int v31; // r14d
  int v32; // r14d
  __int64 v33; // [rsp+30h] [rbp-40h]
  __int128 v34; // [rsp+38h] [rbp-38h] BYREF
  __int128 v35; // [rsp+48h] [rbp-28h]
  __int128 v36; // [rsp+58h] [rbp-18h]
  __int64 v37; // [rsp+68h] [rbp-8h]
  __int32 v38; // [rsp+B8h] [rbp+48h] BYREF
  volatile signed __int32 *v39; // [rsp+C0h] [rbp+50h]
  __int32 v40; // [rsp+C8h] [rbp+58h] BYREF

  v39 = a3;
  v37 = 0LL;
  v5 = a3;
  v6 = (__int64 *)a2;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x3FFFFFFF) == 0 )
  {
    v38 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8);
    if ( (v38 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
    v16 = *v6;
    v33 = 0LL;
    while ( 1 )
    {
      v17 = v6[12];
      v37 = 0LL;
      v34 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      if ( v17 == -1LL )
      {
        v18 = v6[11];
        if ( v18 )
        {
          LODWORD(v37) = *(_DWORD *)(v18 + 128) <= 4u;
          MiGatherSlabDemoteCandidates(v16, v18, &v34);
        }
        else
        {
          MiEnumerateSlabAllocatorsEx(v16, (unsigned int)MiGatherSlabDemoteCandidates, (unsigned int)&v34, -1, 9);
          if ( *((_QWORD *)&v36 + 1) < 0x420uLL )
          {
            LODWORD(v37) = 1;
            MiEnumerateSlabAllocatorsEx(v16, (unsigned int)MiGatherSlabDemoteCandidates, (unsigned int)&v34, -1, 9);
          }
        }
      }
      else
      {
        *((_QWORD *)&v36 + 1) = v17;
        v25 = MiPageToNode(v17);
        MiEnumerateSlabAllocatorsEx(v16, (unsigned int)MiFindSlabEntryForDemoteByPage, (unsigned int)&v34, v25, 9);
        if ( !(_QWORD)v34 || (*(_DWORD *)(v34 + 92) & 3) != 0 )
        {
LABEL_37:
          v5 = v39;
          goto LABEL_7;
        }
      }
      if ( !(_QWORD)v36 )
        goto LABEL_37;
      v19 = (char *)&v34 + 8 * v36;
      for ( i = (char *)&v34; i < v19; i += 8 )
      {
        v21 = *(_QWORD *)(*(_QWORD *)i + 56LL);
        v22 = MiDemoteSlabEntry(v16, v21);
        ++v6[10];
        v23 = v22 + v33;
        v33 += v22;
        ++v6[*(int *)(v21 + 128) + 1];
        if ( v6[12] != -1 )
          goto LABEL_37;
        v24 = v6[11];
        if ( v24 && *(_DWORD *)(v24 + 128) == 7 )
        {
          if ( !(unsigned int)MiCheckMdlSlabFragmentation(v21, 1LL) )
            goto LABEL_37;
        }
        else if ( v23 >= 0x420 )
        {
          goto LABEL_37;
        }
        if ( (unsigned __int64)v6[10] >= 0x40 && KeShouldYieldProcessor() )
          goto LABEL_37;
      }
    }
  }
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
        v26 = *(_DWORD *)a4;
        if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
        {
          LODWORD(a2) = *(_DWORD *)a4;
          v27 = *(_DWORD *)a4;
          do
          {
            v31 = v26 | 0x40000000;
            v26 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v26 | 0x40000000, a2);
            if ( v26 == v27 )
            {
              v38 = v31;
              do
              {
                KiHaltOnAddress(a4, &v38, 4LL);
                v26 = *(_DWORD *)a4;
              }
              while ( *(_DWORD *)a4 == v31 );
            }
            a2 = v26;
            v27 = v26;
          }
          while ( (v26 & 0x80000000) != v8 );
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
LABEL_7:
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v13 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v13 )
        break;
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v15;
        if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v15 & 7) == 0 )
        {
          v28 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v13 )
          {
            v29 = *(_DWORD *)a4;
            v30 = *(_DWORD *)a4;
            do
            {
              v32 = v28 | 0x40000000;
              v28 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v28 | 0x40000000, v29);
              if ( v28 == v30 )
              {
                v40 = v32;
                do
                {
                  KiHaltOnAddress(a4, &v40, 4LL);
                  v28 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v32 );
              }
              v29 = v28;
              v30 = v28;
            }
            while ( (v28 & 0x80000000) != v13 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v14);
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
    v40 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v13);
    if ( (v40 & 0x40000000) != 0 )
      result = KeWakeAddressAll(a4, a2);
  }
  _InterlockedDecrement(v5);
  return result;
}
