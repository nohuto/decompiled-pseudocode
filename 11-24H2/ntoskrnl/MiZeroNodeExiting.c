/*
 * XREFs of MiZeroNodeExiting @ 0x1406912C4
 * Callers:
 *     MiNodeZeroConductor @ 0x1407FFF00 (MiNodeZeroConductor.c)
 * Callees:
 *     MiDeleteAcceleratorDescriptor @ 0x140271A18 (MiDeleteAcceleratorDescriptor.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiWakeZeroingThreads @ 0x140412F50 (MiWakeZeroingThreads.c)
 *     MiZeroNodeConductorWait @ 0x1406911A8 (MiZeroNodeConductorWait.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroNodeExiting(_QWORD *P)
{
  __int64 v2; // rsi
  volatile LONG *v3; // rbp
  KIRQL v4; // bl
  KIRQL v5; // al
  _QWORD *v6; // rbx
  __int64 i; // rsi
  _QWORD **v8; // r14
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  void *v11; // rcx
  __int64 v12; // r14
  void *v13; // rcx
  KIRQL v14; // al
  _QWORD **v15; // r12
  _QWORD *v16; // r15
  _QWORD *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx

  v2 = *(_QWORD *)(P[6] + 16LL) + 57216LL * *((unsigned int *)P + 14);
  v3 = (volatile LONG *)(v2 + 15280);
  if ( *((_DWORD *)P + 15) )
  {
    *((_BYTE *)P + 81) = 1;
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 15280));
    MiWakeZeroingThreads((__int64)P);
    MiReleaseSpinLockExclusive((_DWORD *)(v2 + 15280), v4);
    MiZeroNodeConductorWait((__int64)P, 0LL);
  }
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 15280));
  *(_QWORD *)(v2 + 15272) = 0LL;
  v6 = *(_QWORD **)(v2 + 15264);
  if ( v6 )
    *(_QWORD *)(v2 + 15264) = 0LL;
  MiReleaseSpinLockExclusive((_DWORD *)(v2 + 15280), v5);
  for ( i = 0LL; i < 3; ++i )
  {
    if ( v6 )
    {
      v8 = (_QWORD **)&v6[38 * i + 41];
      while ( 1 )
      {
        v9 = *v8;
        if ( *v8 == v8 )
          break;
        if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
LABEL_31:
          __fastfail(3u);
        *v8 = v10;
        v10[1] = v8;
        ExFreePoolWithTag(v9 - 52, 0);
      }
      v11 = (void *)v6[38 * i + 54];
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
    v12 = 38 * i;
    v13 = (void *)P[38 * i + 54];
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      P[v12 + 54] = 0LL;
    }
    if ( !i )
    {
      v14 = ExAcquireSpinLockExclusive(v3);
      v15 = (_QWORD **)&P[v12 + 32];
      while ( 1 )
      {
        v16 = *v15;
        if ( *v15 == v15 )
          break;
        if ( (_QWORD **)v16[1] != v15 )
          goto LABEL_31;
        v17 = (_QWORD *)*v16;
        if ( *(_QWORD **)(*v16 + 8LL) != v16 )
          goto LABEL_31;
        *v15 = v17;
        v17[1] = v15;
        MiReleaseSpinLockExclusive(v3, v14);
        MiDeleteAcceleratorDescriptor((__int64)(v16 + 4));
        v14 = ExAcquireSpinLockExclusive(v3);
      }
      MiReleaseSpinLockExclusive(v3, v14);
    }
    v18 = (void *)P[v12 + 35];
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      P[v12 + 35] = 0LL;
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v19 = (void *)P[9];
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  ExFreePoolWithTag(P, 0);
}
