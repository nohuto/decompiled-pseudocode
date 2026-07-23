/*
 * XREFs of RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14035FCA0
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1403605B0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpSegLfhVsCommit @ 0x140360A10 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x140360B18 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x1403D86BC (RtlpHpLfhSubsegmentPrefetchRange.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1403FE590 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1404A2CC0 (RtlpHpLfhSubsegmentPrefetch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlHeapZero @ 0x1406B5ED0 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentAllocateBlockShared(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 v6; // r11
  unsigned __int64 v7; // r15
  unsigned int v8; // r13d
  signed __int64 *v9; // rbx
  int v10; // eax
  __int64 v11; // r10
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v13; // rdx
  int v14; // r14d
  char *v15; // r8
  unsigned __int64 v16; // rdx
  int v17; // esi
  unsigned __int8 v18; // bp
  unsigned int v19; // r12d
  signed __int64 *v20; // r10
  signed __int64 *v21; // r8
  signed __int64 v22; // rax
  unsigned int v27; // ecx
  unsigned int v28; // esi
  char v29; // cl
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r12
  signed __int16 *v34; // rbx
  __int64 v35; // rbp
  int v36; // r14d
  int v37; // edx
  int v38; // r15d
  __int64 v39; // rax
  char v40; // r13
  signed __int16 *v41; // rsi
  signed __int16 v42; // ax
  signed __int16 v43; // tt
  unsigned __int64 v47; // rcx
  unsigned int v48; // ecx
  char v50; // al
  char v51; // cl
  int v52; // ebp
  unsigned int v53; // r15d
  __int64 (__fastcall *v54)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v55; // ebp
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // r9
  int v60; // [rsp+40h] [rbp-78h]
  unsigned __int16 v61; // [rsp+42h] [rbp-76h]
  int v62; // [rsp+44h] [rbp-74h] BYREF
  _DWORD v63[2]; // [rsp+48h] [rbp-70h] BYREF
  unsigned int v64; // [rsp+50h] [rbp-68h]
  unsigned int v65; // [rsp+54h] [rbp-64h]
  unsigned int v66; // [rsp+58h] [rbp-60h]
  char v68; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v69; // [rsp+D0h] [rbp+18h]
  int v70; // [rsp+D8h] [rbp+20h]

  v70 = a4;
  v69 = a3;
  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  v7 = a2 >> 12;
  v8 = a3;
  v9 = (signed __int64 *)(a2 + 64);
  v10 = qword_140E28348 ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v11 = (unsigned int)*(unsigned __int8 *)(a2 + 24) - 8;
  Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
  v13 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
  v61 = HIWORD(v10);
  v14 = (unsigned __int16)v10;
  v15 = (char *)Blink + v13;
  v16 = (unsigned __int64)Blink ^ v13;
  v17 = BYTE4(v15);
  CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v16, 37);
  CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v16 ^ (v16 << 16) ^ __ROL8__(Blink, 24));
  v18 = *(_BYTE *)(a2 + 39);
  v19 = *(unsigned __int8 *)(a2 + 50);
  v20 = &v9[v11 - 1];
  v21 = &v9[*(unsigned __int8 *)(a2 + 36)];
LABEL_2:
  v22 = *v21;
  do
  {
    _RAX = ~v22;
    if ( !_RAX )
    {
      if ( v21 == v20 )
        v21 = v9;
      else
        ++v21;
      goto LABEL_2;
    }
    if ( (qword_140E28368 & 4) != 0 )
    {
      _RCX = 1LL << ((unsigned __int16)(v17 * __popcnt(_RAX)) >> 8);
      __asm
      {
        pdep    rdx, rcx, rax
        tzcnt   r9, rdx
      }
    }
    else
    {
      if ( v21 == v20 || v19 != 64 )
      {
        __asm { tzcnt   rdx, rax }
        _BitScanReverse64(&v47, _RAX);
        v63[1] = v47;
        v48 = v47 - _RDX + 1;
        if ( v19 < v48 )
          v48 = v19;
        v17 = _RDX + ((v48 * v17) >> 8);
        _RAX = __ROR8__(_RAX, v17);
        __asm { tzcnt   r9, rax }
        LODWORD(_R9) = v17 + _R9;
      }
      else
      {
        _RAX = __ROR8__(_RAX, v17);
        __asm { tzcnt   r9, rax }
        LODWORD(_R9) = ((_BYTE)v17 + (_BYTE)_R9) & 0x3F;
      }
      _RDX = 1LL << _R9;
    }
    _m_prefetchw(v21);
    v22 = _InterlockedOr64(v21, _RDX);
  }
  while ( (_RDX & v22) != 0 );
  v27 = _R9 + 8 * ((_DWORD)v21 - (_DWORD)v9);
  *(_BYTE *)(a2 + 36) = v27 >> 6;
  v66 = v27;
  v28 = v61 + v27 * v14;
  v64 = v28;
  if ( v18 <= 1u )
  {
    if ( v27 > *(unsigned __int16 *)(a2 + 48) )
      RtlpHpLfhSubsegmentPrefetch(v6, a2, v28);
    goto LABEL_23;
  }
  v29 = *(_BYTE *)(a2 + 38);
  v30 = *(unsigned __int8 *)(a2 + 24);
  v31 = 0LL;
  v32 = v28 >> 12 >> v29;
  v63[0] = 0;
  v62 = 0;
  v68 = -1;
  v33 = 2 * v32;
  v60 = 0;
  v34 = (signed __int16 *)(2 * v32 + a2 + 8 * v30);
  _m_prefetchw(v34);
  LODWORD(v35) = LOBYTE(v63[0]);
  v36 = LOBYTE(v63[0]);
  v37 = *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)v7;
  v38 = -1;
  v65 = (unsigned __int16)qword_140E28348 ^ v37;
  v39 = ((v28 + v65 - 1) >> 12 >> v29) - (unsigned int)v32 + 1;
  if ( v34 >= &v34[v39] )
  {
LABEL_23:
    if ( (v70 & 2) != 0 )
      RtlHeapZero(a2 + v28, (v8 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    return a2 + v28;
  }
  v40 = -1;
  v41 = &v34[v39];
  do
  {
    while ( 1 )
    {
      v42 = *v34;
      while ( v42 > 0 )
      {
        v43 = v42;
        v42 = _InterlockedCompareExchange16(v34, v42 + 1, v42);
        if ( v43 == v42 )
          goto LABEL_16;
      }
      if ( (_DWORD)v31 )
        break;
      v60 = 1;
      v50 = RtlpHpAcquireLockExclusive((int *)(a2 + 56), *(unsigned __int8 *)(v6 + 65));
      v6 = a1;
      v40 = v50;
      v31 = 1LL;
    }
    if ( v42 )
    {
      ++v36;
      v35 = v33 >> 1;
      if ( v38 == -1 )
        v38 = v33 >> 1;
    }
    else
    {
      --v36;
    }
    *v34 = v42 + 1;
LABEL_16:
    ++v34;
    v33 += 2LL;
  }
  while ( v34 < v41 );
  v28 = v64;
  if ( v36 )
  {
    RtlpHpLfhContextUpdateFreeCommitCount(v6, a2, (v36 << 12 << *(_BYTE *)(a2 + 38)) / 4096, v31);
    v6 = a1;
    LODWORD(v31) = v60;
  }
  if ( v38 == -1 )
  {
    if ( (_DWORD)v31 )
      RtlpHpReleaseLockExclusive(a2 + 56);
LABEL_22:
    v8 = v69;
    goto LABEL_23;
  }
  v51 = *(_BYTE *)(a2 + 38);
  v52 = v35 - v38 + 1;
  v53 = v38 << 12 << v51;
  v54 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v6 + 24));
  v63[0] = v52;
  v55 = v52 << 12 << v51;
  v56 = *(_QWORD *)v6;
  v57 = a2 + v53;
  v68 = v40;
  if ( v54 == RtlpHpSegLfhVsCommit )
    v58 = RtlpHpSegLfhVsCommit(v56, v57, v55, &v62);
  else
    v58 = guard_dispatch_icall_no_overrides(v56, v57);
  if ( v58 >= 0 )
  {
    RtlpHpLfhSubsegmentIncBlockCounts(a1, a2, v53, v55, (__int64)v63, 1, (__int64)&v68);
    v59 = 3LL;
    if ( !v62 )
      v59 = 2LL;
    RtlpHpLfhSubsegmentPrefetchRange(a2, v53, v55, v59);
    goto LABEL_22;
  }
  RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v28, v65);
  RtlpHpReleaseLockExclusive(a2 + 56);
  if ( v66 != -1 )
    _InterlockedAnd64(
      (volatile signed __int64 *)(a2 + 8 * ((unsigned __int64)v66 >> 6) + 64),
      __ROL8__(-2LL, v66 & 0x3F));
  return 0LL;
}
