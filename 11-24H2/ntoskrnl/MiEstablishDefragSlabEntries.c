/*
 * XREFs of MiEstablishDefragSlabEntries @ 0x14068781C
 * Callers:
 *     MiDefragmentSlabWorker @ 0x140686E60 (MiDefragmentSlabWorker.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiFreeSlabEntry @ 0x1402D2150 (MiFreeSlabEntry.c)
 *     MiRemoveSlabEntry @ 0x140414068 (MiRemoveSlabEntry.c)
 *     MiClearHintSlabEntry @ 0x14041415C (MiClearHintSlabEntry.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046A884 (MiEnumerateSlabAllocatorsEx.c)
 *     MiPurgeSlabEntry @ 0x1404829DC (MiPurgeSlabEntry.c)
 *     MiDetermineDefragmentSlabIdentity @ 0x14068775C (MiDetermineDefragmentSlabIdentity.c)
 *     MiFindDefragmentSlabEntries @ 0x140687B94 (MiFindDefragmentSlabEntries.c)
 *     MiLockUnlockSlabContextsForDefrag @ 0x1406884D4 (MiLockUnlockSlabContextsForDefrag.c)
 */

__int64 __fastcall MiEstablishDefragSlabEntries(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 *v3; // rsi
  unsigned __int64 v4; // r12
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r15d
  unsigned int v19; // ebp
  unsigned __int64 v20; // r13
  __int64 v21; // r10
  __int64 v22; // rax
  int v23; // r11d
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r8
  bool v33; // zf
  unsigned int v34; // [rsp+70h] [rbp+8h]
  __int64 v35; // [rsp+78h] [rbp+10h]
  __int64 v36; // [rsp+80h] [rbp+18h]

  v1 = *(_DWORD *)(a1 + 76);
  v34 = v1;
  MiLockUnlockSlabContextsForDefrag(a1, 1LL, 0LL);
  v3 = (__int64 *)(a1 + 40);
  v4 = 0LL;
  if ( !*(_QWORD *)(a1 + 40) )
  {
    if ( (unsigned int)MiEnumerateSlabAllocatorsEx(
                         *(_QWORD *)a1,
                         (__int64)MiSlabContextDefragInProgress,
                         0LL,
                         *(unsigned int *)(a1 + 68),
                         *(_DWORD *)(a1 + 72)) )
      return 3221226614LL;
    *(_DWORD *)(a1 + 84) |= 0x10u;
    v6 = a1 + 40;
    if ( *(_DWORD *)(a1 + 72) == 8 )
    {
      MiDetermineDefragmentSlabIdentity(a1);
      if ( *(_BYTE *)(a1 + 88) == 0xFF )
        return 0LL;
      v6 = a1 + 40;
    }
    v7 = *(unsigned int *)(a1 + 68);
    v8 = *(_QWORD *)a1;
    *v3 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 16);
    MiEnumerateSlabAllocatorsEx(v8, (__int64)MiSlabContextDefragInProgress, a1, v7, *(_DWORD *)(a1 + 72));
    *v3 = 0LL;
    v3 = (__int64 *)v6;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v35 = 0LL;
  v36 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *v3;
      if ( !*v3 )
        goto LABEL_26;
      v10 = a1 + 32;
      v11 = (_QWORD *)(a1 + 48);
      v12 = *(_QWORD *)(a1 + 48);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) != v12 )
      {
        *(_DWORD *)(a1 + 84) |= 2u;
        *v11 = 0LL;
        goto LABEL_27;
      }
      v13 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v13 + 48) == v9 )
      {
        if ( *(_DWORD *)(v9 + 84) == v1 )
        {
          MiRemoveSlabEntry(*(_QWORD *)a1, *(_QWORD *)(a1 + 24), v9);
          v14 = *v3;
          *(_DWORD *)(a1 + 84) |= 2u;
          v35 = v14;
          *v3 = 0LL;
          goto LABEL_27;
        }
        if ( *(_DWORD *)(a1 + 64) >= v1 )
        {
LABEL_20:
          *(_DWORD *)(a1 + 84) |= 0x10u;
          v11 = (_QWORD *)(a1 + 48);
          *v3 = 0LL;
        }
        v15 = v12;
        if ( !*(_QWORD *)(a1 + 56) && !*(_DWORD *)(v12 + 84) )
        {
          *v11 = 0LL;
          v15 = 0LL;
        }
        if ( (*(_DWORD *)(a1 + 84) & 0x10) == 0 && v15 )
          return 0LL;
LABEL_26:
        MiFindDefragmentSlabEntries(a1);
        v10 = a1 + 32;
        v11 = (_QWORD *)(a1 + 48);
        goto LABEL_27;
      }
      *v3 = 0LL;
      if ( (*(_BYTE *)(v13 + 48) & 1) != 0 )
      {
        *(_DWORD *)(a1 + 84) |= 2u;
        goto LABEL_27;
      }
      if ( *(_DWORD *)(a1 + 68) == -1 )
        goto LABEL_20;
LABEL_27:
      v16 = *(_QWORD *)(a1 + 24);
      if ( v16 )
      {
        *(_QWORD *)(v16 + 48) = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(*(_QWORD *)v10 + 56LL) = *(_QWORD *)(a1 + 16);
      }
      v17 = *v3;
      v18 = 0;
      v19 = 0;
      v20 = 0LL;
      if ( *v3 && (v21 = a1 + 48, v22 = *(_QWORD *)(a1 + 48), v11 = (_QWORD *)(a1 + 48), v22) && v17 != v22 )
      {
        if ( (*(_DWORD *)(a1 + 84) & 0x10) != 0 )
        {
          MiClearHintSlabEntry(*(_QWORD *)(v17 + 56), v17);
          *(_DWORD *)(a1 + 64) = v23;
          v10 = a1 + 32;
        }
        v24 = *(_QWORD *)v21;
        v25 = *v3;
        v26 = *(_QWORD *)(*v3 + 56);
        *(_QWORD *)(a1 + 24) = v26;
        *(_QWORD *)v10 = *(_QWORD *)(v24 + 56);
        *(_QWORD *)(v26 + 48) = v25;
        v27 = *(_QWORD *)v10;
        v28 = v36;
        *(_QWORD *)(v27 + 56) = *(_QWORD *)v21;
        *(_DWORD *)(*v3 + 92) |= 0x200u;
        *(_DWORD *)(*(_QWORD *)v21 + 92LL) |= 0x200u;
        *(_DWORD *)(a1 + 84) |= 1u;
        v4 = *(_QWORD *)(*v3 + 40);
        v18 = *(_DWORD *)(*v3 + 88);
        v20 = *(_QWORD *)(*(_QWORD *)v21 + 40LL);
        v19 = *(_DWORD *)(*(_QWORD *)v21 + 88LL);
      }
      else
      {
        *v3 = *(_QWORD *)(a1 + 8);
        v29 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)v10 = 0LL;
        v28 = *(_QWORD *)(a1 + 56);
        *v11 = v29;
        *(_QWORD *)(a1 + 24) = 0LL;
        v36 = v28;
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      MiLockUnlockSlabContextsForDefrag(a1, 0LL, 1LL);
      if ( v18 )
      {
        v32 = v18;
        v1 = v34;
        MiPurgeSlabEntry(v4, v4 + v34 - 1LL, v32, 1);
      }
      else
      {
        v1 = v34;
      }
      v4 = 0LL;
      if ( v19 )
        MiPurgeSlabEntry(v20, v20 + v1 - 1LL, v19, 1);
      if ( v35 )
      {
        MiFreeSlabEntry(*(_QWORD *)(v35 + 56), v35);
        v35 = 0LL;
      }
      if ( v28 )
      {
        MiReleaseFreshPage(v28, v30, v31);
        v36 = 0LL;
      }
      MiLockUnlockSlabContextsForDefrag(a1, 1LL, 1LL);
      if ( *v3 == *(_QWORD *)(a1 + 8) )
        break;
      *(_DWORD *)(a1 + 84) &= ~0x10u;
    }
    v33 = *(_DWORD *)(a1 + 72) == 8;
    *v3 = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    if ( !v33 )
      break;
    if ( (*(_DWORD *)(a1 + 84) & 2) != 0 )
      break;
    if ( *(_BYTE *)(a1 + 88) == 0xFF )
      break;
    MiDetermineDefragmentSlabIdentity(a1);
    if ( *(_BYTE *)(a1 + 88) == 0xFF )
      break;
    *(_DWORD *)(a1 + 84) |= 0x10u;
  }
  MiEnumerateSlabAllocatorsEx(
    *(_QWORD *)a1,
    (__int64)MiSlabContextDefragInProgress,
    a1,
    *(unsigned int *)(a1 + 68),
    *(_DWORD *)(a1 + 72));
  return 0LL;
}
