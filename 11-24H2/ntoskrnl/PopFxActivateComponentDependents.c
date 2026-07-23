/*
 * XREFs of PopFxActivateComponentDependents @ 0x1403A91E0
 * Callers:
 *     PopFxCompleteComponentActivation @ 0x1402BFDF0 (PopFxCompleteComponentActivation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopPluginComponentActive @ 0x1402C0850 (PopPluginComponentActive.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopQueueQuerySetIrp @ 0x1403A96B4 (PopQueueQuerySetIrp.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxActivateComponentDependents(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // r8
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r13
  KIRQL v17; // al
  __int64 v18; // rdx
  bool v19; // r12
  unsigned __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rax
  ULONG_PTR v23; // r14
  bool v24; // zf
  _QWORD *v25; // r15
  KSPIN_LOCK *v26; // r12
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  int v32; // eax
  char v33; // cl
  unsigned int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // r15
  KIRQL v38; // al
  KSPIN_LOCK *v39; // rcx
  __int64 v40; // rdi
  KIRQL v41; // al
  int v42; // edi
  __int64 v43; // [rsp+20h] [rbp-88h]
  __int128 i; // [rsp+30h] [rbp-78h] BYREF
  __int128 v45; // [rsp+40h] [rbp-68h] BYREF
  __int128 v46; // [rsp+50h] [rbp-58h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v48; // [rsp+B0h] [rbp+8h]
  char v49; // [rsp+B0h] [rbp+8h]
  __int64 SpinLock; // [rsp+B8h] [rbp+10h]
  __int64 v51; // [rsp+C0h] [rbp+18h]
  __int64 v52; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0LL;
  for ( i = 0LL; (unsigned int)v2 < *(_DWORD *)(a1 + 188); v2 = (unsigned int)(v2 + 1) )
  {
    v14 = *(_QWORD *)(a1 + 192);
    v15 = *(unsigned int *)(v14 + 8 * v2 + 4);
    v48 = *(_DWORD *)(v14 + 8 * v2);
    v16 = *(_QWORD *)(*(_QWORD *)(v1 + 872) + 8LL * v48);
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 128));
    v18 = *(_QWORD *)(v16 + 176);
    v19 = 0;
    v20 = v17;
    if ( *(_BYTE *)(v18 + 8 * v15 + 4) )
    {
      *(_BYTE *)(v18 + 8 * v15 + 4) = 0;
      v24 = (*(_DWORD *)(v16 + 184))-- == 1;
      v19 = v24;
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v16 + 128));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v20);
    __writecr8(v20);
    if ( v19 )
    {
      v21 = *(_QWORD *)(v1 + 56);
      if ( *(_BYTE *)(v21 + 124) )
      {
        v22 = *(_QWORD *)(v21 + 32);
        v45 = 0LL;
        DWORD2(v45) = v48;
        v23 = *(_QWORD *)(v22 + 64);
        *(_QWORD *)&v45 = *(_QWORD *)(v22 + 72);
        BYTE12(v45) = 1;
        v46 = 0LL;
        BYTE8(v46) = 0;
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(7LL, &v45) )
        {
          if ( BYTE8(v46) )
            PopFxBugCheck(0x612uLL, v23, 0LL, 0LL);
        }
      }
      if ( (unsigned __int8)PopPepProcessEvent(v21, v21 + 208LL * v48 + 192, 6u, 2u, v43, 0LL) )
        PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
    }
  }
  v4 = (KSPIN_LOCK *)(a1 + 128);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v6 = (_QWORD *)(a1 + 440);
  v7 = 0LL;
  *((_QWORD *)&i + 1) = &i;
  *(_QWORD *)&i = &i;
  while ( 1 )
  {
    v8 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    v25 = v8 - 4;
    v26 = v8 - 3;
    KxAcquireSpinLock(v26);
    if ( (*(_DWORD *)(v8 - 2) & 8) != 0 )
    {
      v29 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_7;
      v30 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v30 != v8 )
        goto LABEL_7;
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      v31 = (_QWORD *)*((_QWORD *)&i + 1);
      if ( **((__int128 ***)&i + 1) != &i )
        goto LABEL_7;
      v8[1] = *((_QWORD *)&i + 1);
      *v8 = &i;
      *v31 = v8;
      *((_QWORD *)&i + 1) = v8;
      v32 = *((_DWORD *)v25 + 4);
      v33 = v32 & 1;
      v34 = v32 & 0xFFFFFFFE;
      v49 = v33;
      *((_DWORD *)v25 + 4) = v34;
      if ( v33 )
        *((_DWORD *)v25 + 4) = v34 | 2;
      v35 = v25[6];
      v36 = 0LL;
      SpinLock = v35;
      if ( *(_DWORD *)v25 )
      {
        v51 = v35 - 112;
        v37 = v35 + 56;
        v52 = v35 - 48;
      }
      else
      {
        v36 = v35 - 1280;
        v51 = 16LL;
        v35 = 128LL;
        v52 = 80LL;
        SpinLock = 128LL;
        v37 = 184LL;
      }
      KxReleaseSpinLock((volatile signed __int64 *)v26);
      if ( v49 )
      {
        KeReleaseSpinLock(v4, v5);
        if ( v36 )
        {
          v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 1280));
          v24 = (*(_DWORD *)(v36 + 1288))-- == 1;
          v39 = (KSPIN_LOCK *)(v36 + 1280);
          if ( v24 )
          {
            v40 = *(_QWORD *)(v36 + 1296);
            *(_QWORD *)(v36 + 1296) = 0LL;
            KeReleaseSpinLock(v39, v38);
            *(_QWORD *)(v40 + 120) = v7;
            v7 = v40;
          }
          else
          {
            KeReleaseSpinLock(v39, v38);
          }
        }
        else
        {
          v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v35);
          v42 = *(_DWORD *)v37 - 1;
          *(_DWORD *)v37 = v42;
          KeReleaseSpinLock((PKSPIN_LOCK)SpinLock, v41);
          if ( !v42 )
            PopPluginComponentActive(*(_QWORD *)v52, *(_DWORD *)v51, 1, 0LL);
        }
        v5 = KeAcquireSpinLockRaiseToDpc(v4);
      }
    }
    else
    {
      KxReleaseSpinLock(v8 - 3);
      *((_DWORD *)v25 + 4) &= ~4u;
      v25[3] = 0LL;
      v27 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_7;
      v28 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v28 != v8 )
        goto LABEL_7;
      *v28 = v27;
      *(_QWORD *)(v27 + 8) = v28;
      ExFreePoolWithTag(v8 - 4, 0x4D584650u);
    }
  }
  v9 = (_QWORD *)i;
  if ( (__int128 *)i != &i )
  {
    v10 = (_QWORD *)*((_QWORD *)&i + 1);
    if ( *(__int128 **)(i + 8) != &i
      || **((__int128 ***)&i + 1) != &i
      || (**((_QWORD **)&i + 1) = i, v9[1] = v10, v11 = (_QWORD *)v6[1], *(_QWORD **)(*v6 + 8LL) != v6)
      || (_QWORD *)*v11 != v6
      || *(_QWORD **)(*v9 + 8LL) != v9
      || (_QWORD *)*v10 != v9 )
    {
LABEL_7:
      __fastfail(3u);
    }
    *v11 = v9;
    v6[1] = v9[1];
    *(_QWORD *)v9[1] = v6;
    v9[1] = v11;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v4, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  result = v5;
  __writecr8(v5);
  for ( ; v7; result = PopQueueQuerySetIrp(v13) )
  {
    v13 = v7;
    v7 = *(_QWORD *)(v7 + 120);
  }
  return result;
}
