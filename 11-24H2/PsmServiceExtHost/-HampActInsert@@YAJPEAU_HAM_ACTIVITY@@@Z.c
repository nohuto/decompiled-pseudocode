/*
 * XREFs of ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001A1E4
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x1800175A0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001E4BC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x18001A700 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C3E0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C43C (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001D8F8 (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     ?HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005A8B0 (-HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActInsert(struct _HAM_ACTIVITY *a1)
{
  DWORD v1; // r14d
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  int v5; // r15d
  _QWORD *Value; // rbx
  char v7; // bl
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  struct _HAM_CLIENT_CONTEXT *v10; // r14
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 **v13; // rcx
  int v14; // r14d
  __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  int v20; // r15d
  int v21; // eax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v26; // r10

  v1 = HampLockTrackerId;
  v2 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v3 = *((_QWORD *)a1 + 10);
  v5 = *((_DWORD *)a1 + 28);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(v3);
  v7 = 0;
  if ( ((v5 & 0x80000) == 0 || *(_QWORD *)(v3 + 608) == v3 + 608)
    && !HampHostIsElasticRecipient((struct _RM_HAM_ACTIVITY_HOST *)v3) )
  {
    *((_BYTE *)a1 + 562) = 1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    v8 = *(_QWORD **)(v3 + 616);
    v9 = (_QWORD *)((char *)a1 + 96);
    if ( *v8 == v3 + 608 )
    {
      *v9 = v3 + 608;
      *((_QWORD *)a1 + 13) = v8;
      *v8 = v9;
      *(_QWORD *)(v3 + 616) = v9;
      if ( *(_QWORD *)(v3 + 840) && !HampHostIsCached((struct _RM_HAM_ACTIVITY_HOST *)v3) )
        TpSetTimerEx(v26, 0LL, 0LL, 0LL);
      v10 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
      if ( !v10 )
        goto LABEL_13;
      HampClientAcquireLockExclusive(*((struct _HAM_CLIENT_CONTEXT **)a1 + 8));
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
        __fastfail(0xEu);
      v11 = (__int64 *)((char *)a1 + 48);
      v12 = *((_QWORD *)a1 + 8) + 56LL;
      v13 = *(__int64 ***)(*((_QWORD *)a1 + 8) + 64LL);
      if ( *v13 == (__int64 *)v12 )
      {
        *((_QWORD *)a1 + 7) = v13;
        *v11 = v12;
        *v13 = v11;
        *(_QWORD *)(v12 + 8) = v11;
        HampClientReleaseLockExclusive(v10);
LABEL_13:
        v14 = 0;
        goto LABEL_14;
      }
    }
    __fastfail(3u);
  }
  v14 = -1071513591;
LABEL_14:
  if ( HampLockTrackerId != -1 )
  {
    v15 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v16 = *v15;
    if ( (*v15 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v15[2]-- == 1 )
      *v15 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v3 + 8) = 0;
  RtlReleaseSRWLockExclusive(v3);
  if ( v14 >= 0 )
  {
    RtlAcquireSRWLockExclusive(v2 + 16);
    while ( 1 )
    {
      if ( *((_QWORD *)a1 + 2) != -1LL )
        NT_ASSERT("!CempRcObjectIsInserted(ObjectToInsert)");
      if ( !*((_QWORD *)a1 + 3) )
        NT_ASSERT("!CemRcObjectIsRundownInProgress(ObjectToInsert)");
      if ( (*(_BYTE *)(v2 + 40) & 1) != 0 )
        NT_ASSERT("!Table->IsRunningDown");
      v19 = *(_QWORD *)v2;
      v20 = *(_BYTE *)(v2 + 8) & 1;
      if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
        break;
LABEL_31:
      while ( v19 )
      {
        v21 = HampActCompareByHandle((char *)a1 + 40, (void *)v19);
        if ( v21 < 0 )
        {
          v22 = *(_QWORD *)v19;
        }
        else
        {
          if ( v21 <= 0 )
            break;
          v22 = *(_QWORD *)(v19 + 8);
        }
        if ( v20 && v22 )
          v19 ^= v22;
        else
          v19 = v22;
      }
      if ( !v19 )
        goto LABEL_33;
      if ( *(_QWORD *)(v19 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24)) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(v2 + 16);
        return (unsigned int)v14;
      }
      RtlSleepConditionVariableSRW(v2 + 32, v2 + 16, 0LL, 0LL);
    }
    if ( v19 )
    {
      v19 ^= v2;
      goto LABEL_31;
    }
LABEL_33:
    v23 = *(_QWORD *)v2;
    if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v23 )
      v23 ^= v2;
    if ( v23 )
    {
      v18 = *((_QWORD *)a1 + 5);
      while ( 1 )
      {
        if ( v18 < *(_QWORD *)(v23 + 40) )
        {
          v24 = *(_QWORD *)v23;
          if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
          {
            if ( !v24 )
              break;
            v24 ^= v23;
          }
          if ( !v24 )
            break;
        }
        else
        {
          v24 = *(_QWORD *)(v23 + 8);
          if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
          {
            if ( !v24 )
            {
LABEL_43:
              v7 = 1;
              break;
            }
            v24 ^= v23;
          }
          if ( !v24 )
            goto LABEL_43;
        }
        v23 = v24;
      }
    }
    LOBYTE(v18) = v7;
    RtlRbInsertNodeEx(v2, v23, v18, a1);
    *(_QWORD *)(v2 + 40) ^= (*(_QWORD *)(v2 + 40) ^ (*(_QWORD *)(v2 + 40) + 2LL)) & 0xFFFFFFFFFFFFFFFEuLL;
    RtlReleaseSRWLockExclusive(v2 + 16);
    RtlWakeAllConditionVariable(v2 + 32);
  }
  return (unsigned int)v14;
}
