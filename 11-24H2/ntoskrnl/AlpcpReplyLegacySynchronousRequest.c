/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x1409E5CE0
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x14089D590 (NtReplyWaitReceivePortEx.c)
 *     NtReplyPort @ 0x1409E5BD0 (NtReplyPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     AlpcpCaptureMessageData @ 0x1408942E0 (AlpcpCaptureMessageData.c)
 *     AlpcpClearOwnerPortMessage @ 0x14089C36C (AlpcpClearOwnerPortMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14089C3A0 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     AlpcpAvailableBufferSize @ 0x14089E820 (AlpcpAvailableBufferSize.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcpValidateDataInformation @ 0x140ABBFF8 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 *a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // ebx
  int v8; // r8d
  ULONG_PTR v9; // rsi
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r15
  _QWORD *v13; // rsi
  char *v14; // rcx
  bool v15; // r15
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  size_t v18; // rdx
  __int64 *v19; // r13
  ULONG_PTR v20; // rbx
  __int64 v21; // rsi
  ULONG_PTR v22; // rbx
  int v23; // ecx
  int v24; // edx
  __int64 v25; // r15
  char *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // r9
  signed __int32 v31[8]; // [rsp+0h] [rbp-E8h] BYREF
  unsigned int v32; // [rsp+30h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-B0h] BYREF
  __m128i v34; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+58h] [rbp-90h]
  __int64 v36; // [rsp+68h] [rbp-80h]
  char *v37; // [rsp+70h] [rbp-78h]
  __int64 *v38; // [rsp+78h] [rbp-70h]
  __int64 v39; // [rsp+80h] [rbp-68h]
  __int64 *v40; // [rsp+90h] [rbp-58h]
  __int128 v41; // [rsp+A0h] [rbp-48h]
  __int64 v42; // [rsp+B0h] [rbp-38h]

  v38 = a1;
  v40 = a1;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  BugCheckParameter2[0] = 0LL;
  v4 = *a1;
  v39 = *a1;
  if ( !a3 )
  {
    v34 = *(__m128i *)a2;
    v35 = *(_OWORD *)(a2 + 16);
    HIDWORD(v36) = HIDWORD(*(_QWORD *)(a2 + 32));
    v8 = 0;
    LODWORD(v36) = 0;
    v6 = (unsigned int)_mm_cvtsi128_si32(v34);
    if ( (unsigned __int16)v6 >= (unsigned __int16)(v6 + 40)
      || (unsigned __int64)(unsigned __int16)v6 + 40 > v34.m128i_u16[1] )
    {
      return (unsigned int)-1073741811;
    }
    v34.m128i_i16[1] = v6 + 40;
LABEL_14:
    v7 = AlpcpLookupMessage(v4, DWORD2(v35), v8, v6, BugCheckParameter2);
    v32 = v7;
    if ( v7 < 0 )
      return (unsigned int)v7;
    v9 = BugCheckParameter2[0];
    v10 = *(_DWORD *)(BugCheckParameter2[0] + 40);
    if ( (v10 & 0x80u) != 0 )
    {
      AlpcpCancelMessage(v4, BugCheckParameter2[0], 0x10000);
      return (unsigned int)-1073741769;
    }
    if ( (v10 & 0x200) != 0 || !*(_QWORD *)(BugCheckParameter2[0] + 32) )
      goto LABEL_63;
    v11 = *(_QWORD *)(BugCheckParameter2[0] + 16);
    if ( v11 != v4 )
    {
      if ( (v10 & 7) == 0 )
      {
        v12 = *(_QWORD *)(BugCheckParameter2[0] + 24);
        if ( !v12 )
          goto LABEL_63;
        v13 = *(_QWORD **)(v12 + 16);
        v14 = (char *)KeAbPreAcquire((__int64)(v13 - 2), 0LL);
        v37 = v14;
        if ( _InterlockedCompareExchange64(v13 - 2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v13 - 2, 0, v14, (__int64)(v13 - 2));
          v14 = v37;
        }
        if ( v14 )
          v14[10] = 1;
        if ( ((*(_DWORD *)(v12 + 416) >> 1) & 3) == 2 )
          v15 = *v13 == v4 || v13[1] == v4;
        else
          v15 = v13[2] == v4;
        if ( _InterlockedCompareExchange64(v13 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v13 - 2);
        KeAbPostRelease((ULONG_PTR)(v13 - 2));
        v9 = BugCheckParameter2[0];
        goto LABEL_41;
      }
      if ( (*(_BYTE *)(v4 + 416) & 6) != 6 )
        goto LABEL_63;
      v16 = *(_QWORD **)(v4 + 16);
      if ( !v16 || *v16 != v11 )
        goto LABEL_63;
    }
    if ( (v10 & 7) != 3 || (v10 & 0x2000) != 0 )
      goto LABEL_63;
    v15 = 1;
LABEL_41:
    if ( v15 )
    {
      v17 = AlpcpAvailableBufferSize(v9);
      if ( v18 > v17 )
      {
        v7 = AlpcpCaptureMessageData(v9, v18, (char *)(a2 + 40));
        v32 = v7;
      }
      else
      {
        memmove((void *)(v9 + 280), (const void *)(a2 + 40), v18);
        v7 = 0;
        v32 = 0;
      }
      v19 = v38;
      if ( v7 >= 0 )
      {
        *(_DWORD *)(v9 + 40) |= 0x10000u;
        _InterlockedOr(v31, 0);
        v20 = BugCheckParameter2[0];
        v21 = *(_QWORD *)(BugCheckParameter2[0] + 24);
        AlpcpRemoveMessageFromPendingQueue(BugCheckParameter2[0]);
        *(_DWORD *)(v20 + 240) = v34.m128i_i32[0];
        *(_WORD *)(v20 + 244) = 2;
        v22 = BugCheckParameter2[0];
        *(_OWORD *)(BugCheckParameter2[0] + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
        v23 = *(_DWORD *)(v22 + 40) | 0x200;
        *(_DWORD *)(v22 + 40) = v23;
        v24 = (*(_DWORD *)(v21 + 416) >> 1) & 3;
        *(_DWORD *)(v22 + 40) = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)(8 * v24)) & 0x78;
        if ( v24 == 1 )
        {
          v25 = *(_QWORD *)(v21 + 16);
          v26 = (char *)KeAbPreAcquire(v25 - 16, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 - 16), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v25 - 16), 0, v26, v25 - 16);
          if ( v26 )
            v26[10] = 1;
          v27 = *(_QWORD *)(v25 + 8);
          if ( v27 )
            *(_QWORD *)(BugCheckParameter2[0] + 120) = *(_QWORD *)(v27 + 56);
          else
            *(_QWORD *)(BugCheckParameter2[0] + 120) = 0LL;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 - 16), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v25 - 16));
          KeAbPostRelease(v25 - 16);
          v22 = BugCheckParameter2[0];
        }
        else
        {
          *(_QWORD *)(v22 + 120) = *(_QWORD *)(v21 + 56);
        }
        v28 = *(_QWORD *)(v22 + 32);
        *(_QWORD *)(v22 + 32) = 0LL;
        --*(_WORD *)(v22 - 30);
        *(_DWORD *)(v22 + 40) = *(_DWORD *)(v22 + 40) & 0xFFFEFEF8 | 0x105;
        AlpcpClearOwnerPortMessage(v22);
        PsReferenceSiloContext((void *)v4);
        *(_QWORD *)(v22 + 24) = v4;
        *(_DWORD *)(v22 + 40) |= 0x1000u;
        AlpcpUnlockMessage(v22);
        if ( (v19[6] & 4) != 0 )
          v19[3] = v28;
        else
          KeReleaseSemaphoreEx((volatile signed __int32 *)(v28 + 1304), 1LL, 1, v29, 0, 0LL);
        return v32;
      }
      else
      {
        AlpcpUnlockMessage(v9);
      }
      return (unsigned int)v7;
    }
LABEL_63:
    AlpcpUnlockMessage(v9);
    return (unsigned int)-1073741790;
  }
  v41 = 0LL;
  v42 = 0LL;
  v5 = 0x7FFFFFFF0000LL;
  if ( a2 < 0x7FFFFFFF0000LL )
    v5 = a2;
  RtlCopyVolatileMemory(&v34, (const void *)v5, 0x28uLL);
  if ( (unsigned int)v34.m128i_i16[0] >= (unsigned __int16)(v34.m128i_i16[0] + 40)
    || (unsigned __int64)v34.m128i_u16[0] + 40 > v34.m128i_u16[1] )
  {
    v7 = -1073741811;
    v32 = -1073741811;
    return (unsigned int)v7;
  }
  v34.m128i_i16[1] = v34.m128i_i16[0] + 40;
  v32 = 0;
  if ( !v34.m128i_i16[3] || (v7 = AlpcpValidateDataInformation(a2, &v34), v32 = v7, v7 >= 0) )
  {
    v8 = v36;
    goto LABEL_14;
  }
  return (unsigned int)v7;
}
