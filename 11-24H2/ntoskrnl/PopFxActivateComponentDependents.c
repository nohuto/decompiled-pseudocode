/*
 * XREFs of PopFxActivateComponentDependents @ 0x1403769A0
 * Callers:
 *     PopFxCompleteComponentActivation @ 0x140317240 (PopFxCompleteComponentActivation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PopPluginComponentActive @ 0x140317CC0 (PopPluginComponentActive.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     PopQueueQuerySetIrp @ 0x140376E74 (PopQueueQuerySetIrp.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rax
  ULONG_PTR v25; // r14
  bool v26; // zf
  _QWORD *v27; // r15
  KSPIN_LOCK *v28; // r12
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  int v34; // eax
  char v35; // cl
  unsigned int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // r13
  __int64 v39; // r15
  KIRQL v40; // al
  KSPIN_LOCK *v41; // rcx
  __int64 v42; // rdi
  KIRQL v43; // al
  int v44; // edi
  __int64 v45; // r8
  __int64 v46; // [rsp+20h] [rbp-88h]
  __int128 i; // [rsp+30h] [rbp-78h] BYREF
  __int128 v48; // [rsp+40h] [rbp-68h] BYREF
  __int128 v49; // [rsp+50h] [rbp-58h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v51; // [rsp+B0h] [rbp+8h]
  char v52; // [rsp+B0h] [rbp+8h]
  __int64 SpinLock; // [rsp+B8h] [rbp+10h]
  __int64 v54; // [rsp+C0h] [rbp+18h]
  __int64 v55; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0LL;
  for ( i = 0LL; (unsigned int)v2 < *(_DWORD *)(a1 + 188); v2 = (unsigned int)(v2 + 1) )
  {
    v14 = *(_QWORD *)(a1 + 192);
    v15 = *(unsigned int *)(v14 + 8 * v2 + 4);
    v51 = *(_DWORD *)(v14 + 8 * v2);
    v16 = *(_QWORD *)(*(_QWORD *)(v1 + 872) + 8LL * v51);
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 128));
    v18 = *(_QWORD *)(v16 + 176);
    v19 = 0;
    v20 = v17;
    if ( *(_BYTE *)(v18 + 8 * v15 + 4) )
    {
      *(_BYTE *)(v18 + 8 * v15 + 4) = 0;
      v26 = (*(_DWORD *)(v16 + 184))-- == 1;
      v19 = v26;
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v16 + 128));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v20);
    __writecr8(v20);
    if ( v19 )
    {
      v23 = *(_QWORD *)(v1 + 56);
      if ( *(_BYTE *)(v23 + 124) )
      {
        v24 = *(_QWORD *)(v23 + 32);
        v48 = 0LL;
        DWORD2(v48) = v51;
        v25 = *(_QWORD *)(v24 + 64);
        *(_QWORD *)&v48 = *(_QWORD *)(v24 + 72);
        BYTE12(v48) = 1;
        v49 = 0LL;
        BYTE8(v49) = 0;
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(7LL, &v48, v21, v22) )
        {
          if ( BYTE8(v49) )
            PopFxBugCheck(0x612uLL, v25, 0LL, 0LL);
        }
      }
      if ( (unsigned __int8)PopPepProcessEvent(v23, v23 + 208LL * v51 + 192, 6LL, 2LL, v46, 0LL) )
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
    v27 = v8 - 4;
    v28 = v8 - 3;
    KxAcquireSpinLock(v28);
    if ( (*(_DWORD *)(v8 - 2) & 8) != 0 )
    {
      v31 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_7;
      v32 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v32 != v8 )
        goto LABEL_7;
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      v33 = (_QWORD *)*((_QWORD *)&i + 1);
      if ( **((__int128 ***)&i + 1) != &i )
        goto LABEL_7;
      v8[1] = *((_QWORD *)&i + 1);
      *v8 = &i;
      *v33 = v8;
      *((_QWORD *)&i + 1) = v8;
      v34 = *((_DWORD *)v27 + 4);
      v35 = v34 & 1;
      v36 = v34 & 0xFFFFFFFE;
      v52 = v35;
      *((_DWORD *)v27 + 4) = v36;
      if ( v35 )
        *((_DWORD *)v27 + 4) = v36 | 2;
      v37 = v27[6];
      v38 = 0LL;
      SpinLock = v37;
      if ( *(_DWORD *)v27 )
      {
        v54 = v37 - 112;
        v39 = v37 + 56;
        v55 = v37 - 48;
      }
      else
      {
        v38 = v37 - 1280;
        v54 = 16LL;
        v37 = 128LL;
        v55 = 80LL;
        SpinLock = 128LL;
        v39 = 184LL;
      }
      KxReleaseSpinLock((volatile signed __int64 *)v28);
      if ( v52 )
      {
        KeReleaseSpinLock(v4, v5);
        if ( v38 )
        {
          v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v38 + 1280));
          v26 = (*(_DWORD *)(v38 + 1288))-- == 1;
          v41 = (KSPIN_LOCK *)(v38 + 1280);
          if ( v26 )
          {
            v42 = *(_QWORD *)(v38 + 1296);
            *(_QWORD *)(v38 + 1296) = 0LL;
            KeReleaseSpinLock(v41, v40);
            *(_QWORD *)(v42 + 120) = v7;
            v7 = v42;
          }
          else
          {
            KeReleaseSpinLock(v41, v40);
          }
        }
        else
        {
          v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v37);
          v44 = *(_DWORD *)v39 - 1;
          *(_DWORD *)v39 = v44;
          KeReleaseSpinLock((PKSPIN_LOCK)SpinLock, v43);
          if ( !v44 )
          {
            LOBYTE(v45) = 1;
            PopPluginComponentActive(*(_QWORD *)v55, *(_DWORD *)v54, v45, 0LL);
          }
        }
        v5 = KeAcquireSpinLockRaiseToDpc(v4);
      }
    }
    else
    {
      KxReleaseSpinLock(v8 - 3);
      *((_DWORD *)v27 + 4) &= ~4u;
      v27[3] = 0LL;
      v29 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_7;
      v30 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v30 != v8 )
        goto LABEL_7;
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
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
