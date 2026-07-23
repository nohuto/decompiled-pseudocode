/*
 * XREFs of MiSignalNewAcceleratorsAvailable @ 0x140691DA4
 * Callers:
 *     MiAcceptNewAccelerators @ 0x1408007A4 (MiAcceptNewAccelerators.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiSignalNewAcceleratorsAvailable(__int64 *a1)
{
  int v2; // r13d
  KIRQL v3; // al
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  _QWORD *i; // rax
  _QWORD *v13; // r14
  __int64 v14; // r12
  unsigned int v15; // r8d
  int v16; // r15d
  char *v17; // rdi
  unsigned int v18; // r9d
  int v19; // eax
  unsigned int v20; // r11d
  unsigned int v21; // esi
  char *v22; // rsi
  __int64 j; // rdx
  unsigned __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // r13
  KIRQL v28; // bl
  KIRQL v29; // [rsp+20h] [rbp-40h]
  __int64 v30; // [rsp+48h] [rbp-18h] BYREF
  int v31; // [rsp+50h] [rbp-10h]
  _BYTE vars0[40]; // [rsp+60h] [rbp+0h] BYREF

  v30 = 0LL;
  v31 = 0;
  v2 = 0;
  v3 = ExAcquireSpinLockExclusive(&dword_140E375A8);
  v29 = v3;
  if ( !byte_140E37594 )
  {
    while ( 1 )
    {
      v4 = *a1;
      if ( (__int64 *)*a1 == a1 || word_140E2DC2A == -1 )
        break;
      if ( *(__int64 **)(v4 + 8) != a1 )
        goto LABEL_17;
      v5 = *(_QWORD *)v4;
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
        goto LABEL_17;
      *a1 = v5;
      *(_QWORD *)(v5 + 8) = a1;
      v6 = *(unsigned int *)(v4 + 24);
      v7 = *(_QWORD *)(384 * v6 + qword_140E2DC38 + 376);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
      if ( *(_WORD *)(v7 + 18) == 0xFFFF )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
        v9 = *a1;
        if ( *(__int64 **)(*a1 + 8) != a1 )
LABEL_17:
          __fastfail(3u);
        *(_QWORD *)v4 = v9;
        *(_QWORD *)(v4 + 8) = a1;
        *(_QWORD *)(v9 + 8) = v4;
        *a1 = v4;
        break;
      }
      *((_BYTE *)&v30 + (v6 >> 3)) |= 1 << (v6 & 7);
      v8 = (__int64 *)qword_140E37588;
      if ( *(__int64 **)qword_140E37588 != &qword_140E37580 )
        goto LABEL_17;
      *(_QWORD *)(v4 + 8) = qword_140E37588;
      *(_QWORD *)v4 = &qword_140E37580;
      *v8 = v4;
      qword_140E37588 = v4;
      ++dword_140E37590;
      ++*(_WORD *)(v7 + 18);
      ++*(_WORD *)(v7 + 24);
      ++word_140E2DC2A;
      ++word_140E2DC30;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
      v2 = 1;
    }
    v3 = v29;
  }
  MiReleaseSpinLockExclusive(&dword_140E375A8, v3);
  while ( 1 )
  {
    v10 = (__int64 *)*a1;
    if ( (__int64 *)*a1 == a1 )
      break;
    if ( (__int64 *)v10[1] != a1 )
      goto LABEL_17;
    v11 = *v10;
    if ( *(__int64 **)(*v10 + 8) != v10 )
      goto LABEL_17;
    *a1 = v11;
    *(_QWORD *)(v11 + 8) = a1;
    ExFreePoolWithTag(v10, 0);
  }
  if ( v2 )
  {
    for ( i = PsGetNextPartition(0LL); ; i = PsGetNextPartition(v13) )
    {
      v13 = i;
      if ( !i )
        return;
      v14 = *i;
      KeSetEvent((PRKEVENT)(*i + 112LL), 0, 0);
      v15 = 0;
      v16 = (((unsigned __int8)vars0 - 24) & 4) != 0LL ? 0x20 : 0;
      v17 = (char *)&v30 + (-(__int64)((((unsigned __int8)vars0 - 24) & 4) != 0LL) & 0xFFFFFFFFFFFFFFFCuLL);
      do
      {
        v18 = v15 < 0x40 ? v15 : 0;
        v19 = 63;
        while ( 1 )
        {
          v20 = v16 + v19;
          if ( v19 - v18 == -1 )
          {
            v21 = -1;
            goto LABEL_32;
          }
          v22 = &v17[8 * ((unsigned __int64)(v16 + v18) >> 6)];
          for ( j = ~*(_QWORD *)v22 | ((1LL << ((v16 + v18) & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v22 )
          {
            v22 += 8;
            if ( v22 > &v17[8 * ((unsigned __int64)v20 >> 6)] )
              goto LABEL_29;
          }
          _BitScanForward64(&v24, ~j);
          v21 = v24 + ((unsigned int)((v22 - v17) >> 3) << 6);
          if ( v21 > v20 )
          {
LABEL_29:
            v21 = -1;
            goto LABEL_32;
          }
          if ( v21 != -1 )
            break;
LABEL_32:
          if ( !v18 )
            goto LABEL_37;
          v25 = v15 + 1;
          if ( v15 + 1 > 0x40 )
            v25 = 64;
          v19 = v25 - 1;
          v18 = 0;
        }
        v21 -= v16;
LABEL_37:
        if ( v21 < v15 || v21 == -1 )
          break;
        v26 = *(_QWORD *)(v14 + 16) + 57216LL * v21;
        v27 = *(_QWORD *)(v26 + 15272);
        if ( v27 )
        {
          v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v26 + 15280));
          KeSetEvent((PRKEVENT)(v27 + 88), 0, 0);
          MiReleaseSpinLockExclusive((_DWORD *)(v26 + 15280), v28);
        }
        v17 = (char *)&v30 + (-(__int64)((((unsigned __int8)vars0 - 24) & 4) != 0LL) & 0xFFFFFFFFFFFFFFFCuLL);
        v15 = v21 + 1;
      }
      while ( v21 + 1 < 0x40 );
    }
  }
}
