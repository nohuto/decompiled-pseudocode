/*
 * XREFs of ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x18001BE50
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006AB4 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A728 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001B770 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001C11C (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180034B34 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18005E738 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampActBeginStateChange(__int64 a1, unsigned __int8 a2)
{
  DWORD v2; // esi
  __int64 v4; // r14
  __int64 v5; // r15
  _QWORD *Value; // rdi
  __int64 v7; // rdx
  struct _HAM_DEPENDENCY_GROUP *v8; // rdi
  unsigned int v9; // esi
  int v10; // eax
  int v11; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // esi
  unsigned int v15; // esi
  char v16; // [rsp+30h] [rbp-69h] BYREF
  char v17; // [rsp+31h] [rbp-68h] BYREF
  char v18; // [rsp+32h] [rbp-67h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-65h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v21[12]; // [rsp+48h] [rbp-51h] BYREF
  int v22; // [rsp+54h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-21h]
  int v26; // [rsp+7Ch] [rbp-1Dh]
  _BYTE *v27; // [rsp+80h] [rbp-19h]
  __int64 v28; // [rsp+88h] [rbp-11h]
  char *v29; // [rsp+90h] [rbp-9h]
  __int64 v30; // [rsp+98h] [rbp-1h]
  char *v31; // [rsp+A0h] [rbp+7h]
  __int64 v32; // [rsp+A8h] [rbp+Fh]
  char *v33; // [rsp+B0h] [rbp+17h]
  __int64 v34; // [rsp+B8h] [rbp+1Fh]

  v2 = HampLockTrackerId;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = a2;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( *(_QWORD *)(a1 + 72) && *(_QWORD *)(a1 + 64) )
    v8 = HampHostCheckWaitEnterDependencyStateChange((struct _RM_HAM_ACTIVITY_HOST *)v4);
  else
    v8 = 0LL;
  if ( (*(_BYTE *)(a1 + 552) & 1) != 0 )
  {
    v13 = -1073740682;
  }
  else
  {
    v9 = *(unsigned __int8 *)(a1 + 562);
    *(_DWORD *)v21 = 12;
    *(_QWORD *)&v21[4] = 2LL;
    v22 = 14;
    v10 = *((_DWORD *)&EventDescriptor.Keyword + v5 + 1);
    if ( _bittest(&v10, v9) )
    {
      if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
      {
        v16 = *(_BYTE *)(a1 + 563);
        *(_QWORD *)v21 = *(_QWORD *)(a1 + 40);
        v17 = v9;
        v33 = &v16;
        v31 = &v17;
        v29 = &v18;
        v27 = v21;
        *(_DWORD *)&EventDescriptor.Level = 4;
        UserData.Ptr = (ULONGLONG)off_1800E82B8;
        v18 = v5;
        v34 = 1LL;
        v32 = 1LL;
        v30 = 1LL;
        v28 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 8LL;
        UserData.Size = *(unsigned __int16 *)off_1800E82B8;
        v24 = &unk_1800D62A8;
        UserData.Reserved = 2;
        v25 = 66;
        v26 = 1;
        v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
      }
      v11 = *(_DWORD *)(a1 + 552) | 1;
      *(_BYTE *)(a1 + 562) = v5;
      *(_DWORD *)(a1 + 552) = v11;
      if ( v9 == 4 )
        goto LABEL_13;
      v14 = v9 - 1;
      if ( !v14 )
        goto LABEL_13;
      v15 = v14 - 1;
      if ( !v15 )
      {
        LOBYTE(v7) = 6;
        HampActSetPendState(a1, v7);
        goto LABEL_14;
      }
      if ( v15 == 1 )
LABEL_13:
        *(_DWORD *)(a1 + 552) = v11 & 0xFFFFFFDF;
LABEL_14:
      if ( v8 )
        *(_DWORD *)(a1 + 552) |= 2u;
      else
        HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
      return 0LL;
    }
    v13 = -1073700861;
  }
  HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v4);
  if ( v8 )
    HampDepGroupRunStateChangeWorker(v8);
  return v13;
}
