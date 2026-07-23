/*
 * XREFs of PopPepInitializeVetoMasks @ 0x1404B8B0C
 * Callers:
 *     PopPepDeviceStarted @ 0x1404A5EE4 (PopPepDeviceStarted.c)
 *     PopPepPlatformStateRegistered @ 0x1405D8BE8 (PopPepPlatformStateRegistered.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1403A5BC0 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxReinitializeAccountingInstance @ 0x1403A5DA8 (PopFxReinitializeAccountingInstance.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A6EB0 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     PopPluginRequestDeviceIdleConstraints @ 0x1404C1EE0 (PopPluginRequestDeviceIdleConstraints.c)
 *     PopPluginRequestComponentIdleConstraints @ 0x1405CFC68 (PopPluginRequestComponentIdleConstraints.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     EmClientRuleEvaluate @ 0x140B6A540 (EmClientRuleEvaluate.c)
 */

void __fastcall PopPepInitializeVetoMasks(__int64 a1, unsigned int a2)
{
  __int64 v3; // r12
  ULONG_PTR v4; // r15
  __int64 v5; // rsi
  char v6; // r14
  __int128 *v7; // rdi
  unsigned int v8; // esi
  char v9; // sp
  __int64 v10; // rdx
  int *v11; // r8
  unsigned int i; // edi
  unsigned __int64 v13; // rdx
  int *v14; // r8
  KIRQL v15; // r13
  int DeepSleepPlatformStateIndex; // eax
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // edx
  int *v22; // r14
  int v23; // r12d
  unsigned int v24; // edi
  unsigned int v25; // edx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  char v29; // di
  __int64 v30; // r13
  int *v31; // r12
  int v32; // edx
  __int64 j; // r14
  unsigned int v34; // ecx
  _DWORD *v35; // rax
  __int64 v36; // rdi
  KIRQL v37; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+28h] [rbp-D8h] BYREF
  int v40; // [rsp+2Ch] [rbp-D4h]
  int v41; // [rsp+30h] [rbp-D0h]
  __int128 *v42; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h]
  __int64 v44; // [rsp+48h] [rbp-B8h]
  __int128 v45; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v46[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+78h] [rbp-88h] BYREF
  char v49; // [rsp+7Ch] [rbp-84h] BYREF
  int v50; // [rsp+100h] [rbp+0h] BYREF
  char v51; // [rsp+104h] [rbp+4h] BYREF

  v39 = 0;
  v3 = a2;
  v46[1] = 0;
  v45 = 0LL;
  memset_0(v46, 0, 0x94uLL);
  v4 = *(_QWORD *)(a1 + 32);
  v42 = 0LL;
  v5 = PopPepConstraintOverrides;
  v6 = 0;
  v43 = PopPepPlatformState;
  v7 = (__int128 *)(v4 + 216);
  while ( v5 )
  {
    v7 = (__int128 *)(v4 + 216);
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v5 + 8), (PCUNICODE_STRING)(v4 + 216), 1u) )
    {
      v6 = 1;
      break;
    }
    v5 = *(_QWORD *)v5;
  }
  v8 = 0;
  *(_BYTE *)(a1 + 188) = 0;
  v47 = *v7;
  v10 = (v9 + 120) & 4;
  if ( ((v9 + 120) & 4) != 0 )
    v48 = 1;
  v11 = &v48;
  if ( ((v9 + 120) & 4) != 0 )
    v11 = (int *)&v49;
  memset64(v11, 0x100000001uLL, 16LL - (v10 != 0));
  if ( ((v9 + 120) & 4) != 0 )
    *(int *)((char *)v11 + (-(__int64)(v10 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 124) = 1;
  for ( i = 0; i < (unsigned int)v3; ++i )
  {
    v46[0] = i;
    *(_QWORD *)&v45 = v46;
    DWORD2(v45) = 8;
    v42 = &v45;
    EmClientRuleEvaluate(&GUID_EM_PEP_UPADTE_DEVICE_CONTRAINT, &v42, 1LL, &v39);
    if ( v39 == 2 )
      *(_BYTE *)(a1 + 188) = 1;
  }
  v13 = (unsigned __int64)&v50 & 4;
  if ( ((unsigned __int8)&v50 & 4) != 0 )
    v50 = 1;
  v14 = &v50;
  if ( ((unsigned __int8)&v50 & 4) != 0 )
    v14 = (int *)&v51;
  memset64(v14, 0x100000001uLL, 16LL - (v13 != 0));
  if ( ((unsigned __int8)&v50 & 4) != 0 )
    *(int *)((char *)v14 + (-(__int64)(v13 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 124) = 1;
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  v37 = v15;
  if ( *(_DWORD *)(a1 + 172) != 2 )
  {
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    v17 = *(_QWORD *)(a1 + 32);
    v40 = DeepSleepPlatformStateIndex;
    v18 = PopPluginRequestDeviceIdleConstraints(v17, &v50, (unsigned int)v3);
    if ( v6 )
    {
      *(_BYTE *)(a1 + 188) = 0;
    }
    else if ( v18 )
    {
      if ( !*(_BYTE *)(a1 + 188) )
      {
LABEL_34:
        v22 = &v50;
        v23 = 1;
        while ( v8 < a2 )
        {
          if ( !*(_BYTE *)(448LL * v8 + v43 + 57) && *(&v50 + v8) != 1 )
            PopFxBugCheck(0x620uLL, v4, v8, 0LL);
          v24 = *v22;
          v25 = 1;
          do
          {
            if ( v25 >= v24 )
              break;
            v26 = v25++ - 1;
            *(_DWORD *)(a1 + 4 * v26 + 144) |= v23;
          }
          while ( v25 <= 3 );
          if ( v40 != -1 && v8 == v40 && (unsigned int)*v22 > 1 )
          {
            KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 640));
            PopFxReinitializeAccountingInstance(v4 + 640, 2);
            *(_DWORD *)(v4 + 652) = *v22;
            *(_QWORD *)(v4 + 664) = MEMORY[0xFFFFF78000000008];
            *(_BYTE *)(v4 + 648) = 1;
            KxReleaseSpinLock((volatile signed __int64 *)(v4 + 640));
            _InterlockedOr((volatile signed __int32 *)(v4 + 864), 0x810u);
          }
          ++v22;
          v23 *= 2;
          ++v8;
        }
        LODWORD(v3) = a2;
        v27 = *(_DWORD *)(a1 + 152);
        v8 = 0;
        *(_QWORD *)(a1 + 156) = *(_QWORD *)(a1 + 144);
        *(_DWORD *)(a1 + 164) = v27;
        goto LABEL_48;
      }
LABEL_29:
      if ( (_DWORD)v3 )
      {
        v19 = 0LL;
        v20 = v3;
        do
        {
          v21 = *(int *)((char *)&v48 + v19);
          if ( *(int *)((char *)&v50 + v19) < v21 )
            *(int *)((char *)&v50 + v19) = v21;
          v19 += 4LL;
          --v20;
        }
        while ( v20 );
      }
      goto LABEL_34;
    }
    if ( !*(_BYTE *)(a1 + 188) )
    {
LABEL_48:
      v28 = *(int *)(a1 + 168);
      if ( (_DWORD)v28 != 4 )
        PopPepUpdateIdleStateRefCount(0, *(_DWORD *)(a1 + 4 * v28 + 140), 1u, (volatile signed __int32 *)(a1 + 184));
      if ( *(_BYTE *)(a1 + 124) )
      {
        v29 = 0;
        while ( v8 < *(_DWORD *)(a1 + 180) )
        {
          v30 = 208LL * v8;
          v44 = *(_QWORD *)(*(_QWORD *)(v4 + 872) + 8LL * v8);
          memset_0(&v50, 0, 0x80uLL);
          if ( (unsigned __int8)PopPluginRequestComponentIdleConstraints(
                                  *(_QWORD *)(a1 + 32),
                                  v8,
                                  &v50,
                                  (unsigned int)v3) )
          {
            v31 = &v50;
            v32 = 1;
            for ( j = 0LL; ; j = (unsigned int)(j + 1) )
            {
              v41 = v32;
              if ( (unsigned int)j >= a2 )
                break;
              if ( !*(_BYTE *)(448LL * (unsigned int)j + v43 + 57) && *(&v50 + j) )
                PopFxBugCheck(0x621uLL, v4, v8, (unsigned int)j);
              v34 = 0;
              if ( *(_DWORD *)(a1 + v30 + 380) )
              {
                v35 = (_DWORD *)(*(_QWORD *)(a1 + v30 + 392) + 16LL);
                do
                {
                  if ( v34 >= *v31 )
                    break;
                  *v35 |= v32;
                  ++v34;
                  v35 += 6;
                }
                while ( v34 < *(_DWORD *)(a1 + v30 + 380) );
              }
              if ( v40 != -1 && (_DWORD)j == v40 )
              {
                if ( *v31 )
                {
                  v36 = v44 + 200;
                  KxAcquireSpinLock((PKSPIN_LOCK)(v44 + 200));
                  PopFxReinitializeAccountingInstance(v36, 2);
                  *(_DWORD *)(v36 + 12) = *v31;
                  *(_QWORD *)(v36 + 24) = MEMORY[0xFFFFF78000000008];
                  *(_BYTE *)(v36 + 8) = 1;
                  KxReleaseSpinLock((volatile signed __int64 *)v36);
                  v29 = 1;
                  _InterlockedOr((volatile signed __int32 *)(v4 + 864), 0x10u);
                  v32 = v41;
                }
              }
              ++v31;
              v32 *= 2;
            }
            LODWORD(v3) = a2;
          }
          PopPepUpdateIdleStateRefCount(
            0,
            *(_DWORD *)(*(_QWORD *)(a1 + v30 + 392) + 24LL * *(unsigned int *)(a1 + v30 + 368) + 16),
            1u,
            (volatile signed __int32 *)(v30 + a1 + 384));
          if ( v29 )
            _InterlockedOr((volatile signed __int32 *)(v4 + 864), 0x100u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v4 + 864), 0xFFFFFEFF);
          ++v8;
        }
        v15 = v37;
        if ( *(_BYTE *)(a1 + 124) )
          goto LABEL_75;
      }
      if ( *(_BYTE *)(a1 + 188) )
LABEL_75:
        *(_DWORD *)(a1 + 172) = 2;
      goto LABEL_76;
    }
    goto LABEL_29;
  }
LABEL_76:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64), v15);
}
