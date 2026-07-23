/*
 * XREFs of MiDeletePendingSlabIdentities @ 0x14068829C
 * Callers:
 *     MiCreateSlabIdentity @ 0x140687B34 (MiCreateSlabIdentity.c)
 *     MiDefragmentAllSlabAllocators @ 0x140687C9C (MiDefragmentAllSlabAllocators.c)
 *     MiDeletePartitionSlabState @ 0x1407FBCD0 (MiDeletePartitionSlabState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046321C (MiEnumerateSlabAllocatorsEx.c)
 */

int __fastcall MiDeletePendingSlabIdentities(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v5; // rdi
  char *v6; // rax
  char *v7; // rsi
  unsigned int v8; // r10d
  unsigned int v9; // edi
  unsigned int v10; // r11d
  __int64 v11; // r12
  unsigned int *v12; // r9
  unsigned __int64 v13; // rsi
  unsigned int v14; // edx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // r8d
  int v18; // edx
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned int v21; // r11d
  _QWORD *v22; // r9
  $727077A9B6E167EAE1398C74674DC5A5 *i; // rax
  unsigned int v24; // r10d
  unsigned int v25; // r11d
  _DWORD *v26; // r9
  unsigned int v27; // edx
  unsigned int v28; // r8d
  __int64 v29; // rcx
  int v30; // edx
  unsigned int v31; // edx
  unsigned int v32; // r11d
  _BYTE *v33; // rdx
  __int64 v36; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-18h]

  v36 = 0LL;
  CurrentThread = 0LL;
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = (unsigned __int64 *)(a1 + 18296);
    --CurrentThread->SpecialApcDisable;
    v6 = (char *)KeAbPreAcquire(a1 + 18296, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
    if ( v7 )
      v7[10] = 1;
  }
  v8 = 0;
  v37 = 64;
  while ( 1 )
  {
    v9 = *(_DWORD *)(a1 + 18264);
    if ( v9 <= v8 )
      break;
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 18272);
    v12 = (unsigned int *)(v11 + 4 * ((unsigned __int64)v8 >> 5));
    v13 = v11 + 4 * ((unsigned __int64)(v9 - 1) >> 5);
    v14 = (-1 << (v8 & 0x1F)) & *v12;
    v15 = v12 + 1;
    while ( !v14 )
    {
      if ( (unsigned __int64)v15 > v13 )
        goto LABEL_13;
      ++v12;
      ++v15;
      v14 = *v12;
    }
    _BitScanForward64((unsigned __int64 *)&v16, v14);
    v17 = v16 + 32 * (((__int64)v12 - v11) >> 2);
    if ( v17 > v9 )
    {
LABEL_13:
      v17 = *(_DWORD *)(a1 + 18264);
      goto LABEL_23;
    }
    v18 = ((1 << v16) - 1) | v14;
    while ( 1 )
    {
      v19 = ~v18;
      if ( v19 )
        break;
      if ( (unsigned __int64)(v12 + 1) > v13 )
      {
        LODWORD(v20) = 32;
        goto LABEL_20;
      }
      v18 = v12[1];
      ++v12;
    }
    _BitScanForward64((unsigned __int64 *)&v20, v19);
LABEL_20:
    v21 = v20 + 32 * (((__int64)v12 - v11) >> 2);
    if ( v21 > v9 )
      v21 = *(_DWORD *)(a1 + 18264);
    v10 = v21 - v17;
LABEL_23:
    if ( !v10 )
      break;
    v8 = v10 + v17;
    if ( (unsigned __int8)v17 < (unsigned __int8)(v10 + v17) )
    {
      v22 = (_QWORD *)(a1 + 8 * ((unsigned __int8)v17 + 2219LL));
      do
      {
        if ( !*v22 )
          *((_BYTE *)&v36 + ((unsigned __int64)(unsigned __int8)v17 >> 3)) |= 1 << (v17 & 7);
        LOBYTE(v17) = v17 + 1;
        ++v22;
      }
      while ( (unsigned __int8)v17 < (unsigned __int8)v8 );
    }
  }
  if ( v37 < 0x40 || (_DWORD)v36 )
  {
LABEL_36:
    LODWORD(i) = MiEnumerateSlabAllocatorsEx(a1, (__int64)MiDeleteSlabEntriesForIdentity, 0LL, 0xFFFFFFFF, 8u);
    v24 = 0;
    while ( v24 < 0x40 )
    {
      v25 = 0;
      v26 = (_DWORD *)&v36 + ((unsigned __int64)v24 >> 5);
      v27 = (-1 << (v24 & 0x1F)) & *v26;
      i = ($727077A9B6E167EAE1398C74674DC5A5 *)(v26 + 1);
      while ( !v27 )
      {
        if ( i > ($727077A9B6E167EAE1398C74674DC5A5 *)((char *)&v36 + 4) )
        {
          v28 = 64;
          goto LABEL_54;
        }
        ++v26;
        i = ($727077A9B6E167EAE1398C74674DC5A5 *)((char *)i + 4);
        v27 = *v26;
      }
      _BitScanForward64((unsigned __int64 *)&v29, v27);
      i = ($727077A9B6E167EAE1398C74674DC5A5 *)&v36;
      v28 = v29 + 32 * (((char *)v26 - (char *)&v36) >> 2);
      if ( v28 <= 0x40 )
      {
        v30 = ((1 << v29) - 1) | v27;
        while ( 1 )
        {
          v31 = ~v30;
          if ( v31 )
            break;
          if ( v26 + 1 > (_DWORD *)&v36 + 1 )
          {
            LODWORD(i) = 32;
            goto LABEL_51;
          }
          v30 = v26[1];
          ++v26;
        }
        _BitScanForward64((unsigned __int64 *)&i, v31);
LABEL_51:
        v32 = (_DWORD)i + 32 * (((char *)v26 - (char *)&v36) >> 2);
        if ( v32 > 0x40 )
          v32 = 64;
        v25 = v32 - v28;
      }
      else
      {
        v28 = 64;
      }
LABEL_54:
      if ( !v25 )
        break;
      v24 = v25 + v28;
      while ( (unsigned __int8)v28 < (unsigned __int8)v24 )
      {
        v33 = (_BYTE *)(*(_QWORD *)(a1 + 18272) + ((unsigned __int64)(unsigned __int8)v28 >> 3));
        LODWORD(i) = (char)*v33 & ~(1 << (v28 & 7));
        *v33 = (_BYTE)i;
        LOBYTE(v28) = v28 + 1;
      }
    }
  }
  else
  {
    for ( i = ($727077A9B6E167EAE1398C74674DC5A5 *)((char *)&v36 + 4);
          i != ($727077A9B6E167EAE1398C74674DC5A5 *)((char *)&v36 + 4);
          i = ($727077A9B6E167EAE1398C74674DC5A5 *)((char *)i + 4) )
    {
      if ( LODWORD(i->ApcState.ApcListHead[0].Flink) )
        goto LABEL_36;
    }
  }
  if ( !a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 18296), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 18296));
    LODWORD(i) = KeAbPostRelease(a1 + 18296);
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      i = &CurrentThread->152;
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)i->ApcState.ApcListHead[0].Flink != i )
        LODWORD(i) = KiCheckForKernelApcDelivery();
    }
  }
  return (int)i;
}
