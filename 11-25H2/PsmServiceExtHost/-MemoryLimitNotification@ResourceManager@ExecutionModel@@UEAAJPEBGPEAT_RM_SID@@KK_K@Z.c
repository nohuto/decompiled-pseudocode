/*
 * XREFs of ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18001ED40
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x1800189C0 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027700 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180028750 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     memcmp_0 @ 0x1800A77F6 (memcmp_0.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::MemoryLimitNotification(
        ExecutionModel::ResourceManager *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v10; // r15
  ULONG v11; // eax
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // r10
  int v17; // r9d
  DWORD v18; // esi
  _QWORD *Value; // rdi
  __int64 *v20; // rax
  __int64 v21; // rdx
  unsigned int v23; // edi
  __int64 v25; // rsi
  unsigned __int64 v26; // [rsp+28h] [rbp-D8h]
  wchar_t Destination[232]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE Buf1[68]; // [rsp+200h] [rbp+100h] BYREF
  int v29; // [rsp+244h] [rbp+144h]
  unsigned int v30; // [rsp+248h] [rbp+148h]
  unsigned __int64 v31; // [rsp+250h] [rbp+150h]

  v10 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a2);
  memset_0(Buf1, 0, sizeof(Buf1));
  v11 = RtlLengthSid(a3);
  memcpy_0(Buf1, a3, v11);
  v30 = a5;
  v31 = a6;
  v29 = a4;
  RmpAcquireGlobalLock();
  v12 = *((_QWORD *)this + 15);
  v13 = 0LL;
  v26 = utl::hash<_RM_PSM_HOST_INFO>::operator()(v14, (unsigned __int64)Destination);
  v15 = -1073741275;
  RtlAcquireSRWLockShared(v12 + 32);
LABEL_2:
  v16 = v26 & (-1LL << (*(_BYTE *)(v12 + 3348) & 0x1F));
  if ( v13 )
    goto LABEL_5;
  v17 = *(_DWORD *)(v12 + 3348) >> 5;
  if ( v17 )
  {
    v13 = *(_QWORD *)(v12 + 3352)
        + 8LL
        * ((37
          * (BYTE6(v16)
           + 37
           * (BYTE5(v16)
            + 37
            * (BYTE4(v16)
             + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * ((unsigned __int8)v16 + 11623883)))))))
          + HIBYTE(v16)) & (unsigned int)(v17 - 1));
LABEL_5:
    while ( 1 )
    {
      v13 = *(_QWORD *)v13;
      if ( (v13 & 1) != 0 )
        break;
      if ( v16 == ((-1LL << (*(_BYTE *)(v12 + 3348) & 0x1F)) & *(_QWORD *)(v13 + 8)) )
      {
        if ( !v13 )
          break;
        v25 = v13 - 1408;
        if ( !_wcsicmp(Destination, (const wchar_t *)(v13 - 1408 + 88))
          && !memcmp_0(Buf1, (const void *)(v25 + 552), 0x58uLL) )
        {
          v15 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v25 + 16)) <= 1 )
            __fastfail(0xEu);
          v10 = v13 - 1408;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared(v12 + 32);
  if ( v15 < 0 )
  {
    v23 = v15 | 0x10000000;
  }
  else
  {
    v18 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v18) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive(v10 + 64);
    *(_DWORD *)(v10 + 72) = GetCurrentThreadId();
    *(_QWORD *)(v10 + 728) |= 0x20000000000000uLL;
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v10 + 64), 0);
    if ( HampLockTrackerId != -1 )
    {
      v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v21 = *v20;
      if ( (*v20 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      if ( v20[2]-- == 1 )
        *v20 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *(_DWORD *)(v10 + 72) = 0;
    RtlReleaseSRWLockExclusive(v10 + 64);
    v23 = 0;
  }
  RmpReleaseGlobalLock();
  if ( v10 )
    RmpObjectRelease((PVOID)v10);
  return v23;
}
