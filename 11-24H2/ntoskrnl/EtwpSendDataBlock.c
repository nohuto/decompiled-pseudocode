/*
 * XREFs of EtwpSendDataBlock @ 0x140834A64
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x1407ADE80 (SendCaptureStateNotificationsWorker.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1408332EC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140837F48 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpBufferingModeFlush @ 0x1409D2A94 (EtwpBufferingModeFlush.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     KeQueryTimeIncrement @ 0x14043CEE0 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpQueueNotification @ 0x140834C40 (EtwpQueueNotification.c)
 */

__int64 __fastcall EtwpSendDataBlock(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  unsigned int v4; // r14d
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // r10d
  unsigned int v9; // ecx
  unsigned int i; // eax
  __int64 v11; // rbx
  __int64 v12; // r11
  unsigned __int8 v13; // cl
  int v14; // r8d
  int v15; // r10d
  int v16; // r9d
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // [rsp+40h] [rbp-69h] BYREF
  __int64 v22; // [rsp+48h] [rbp-61h] BYREF
  int v23; // [rsp+50h] [rbp-59h]
  int v24; // [rsp+54h] [rbp-55h]
  __int128 v25; // [rsp+58h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+70h] [rbp-39h] BYREF
  __int64 *v27; // [rsp+90h] [rbp-19h]
  __int64 v28; // [rsp+98h] [rbp-11h]
  __int64 *v29; // [rsp+A0h] [rbp-9h]
  __int64 v30; // [rsp+A8h] [rbp-1h]
  __int64 v31; // [rsp+B0h] [rbp+7h]
  __int64 v32; // [rsp+B8h] [rbp+Fh]

  v2 = *(_WORD *)(a1 + 98);
  v4 = 0;
  v25 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      v6 = MEMORY[0xFFFFF78000000320];
      if ( *(_DWORD *)a2 == 3 )
      {
        if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
        {
          v12 = *(_QWORD *)(a1 + 32);
          LOBYTE(a2) = *(_BYTE *)(a2 + 112);
          v13 = *(_BYTE *)(v12 + 90);
          v14 = *(_DWORD *)(v12 + 80);
          v15 = *(_DWORD *)(v12 + 84);
          LOWORD(v22) = *(_WORD *)(v12 + 88);
          WORD1(v22) = v13;
          HIDWORD(v22) = v14;
          v23 = v15;
          v24 = 0;
          guard_dispatch_icall_no_overrides(v12 + 40, a2);
        }
        else
        {
          v7 = *(_QWORD *)(a1 + 88);
          v8 = *(_DWORD *)(a2 + 72);
          v9 = *(_DWORD *)(a2 + 116);
          v21 = v7;
          for ( i = 0; i < v9; ++i )
          {
            v16 = *(_DWORD *)(a2 + 16LL * i + 132);
            if ( v16 >= 0 || v16 == 0x80000000 )
            {
              v17 = *(_QWORD *)(a2 + 16LL * i + 120);
              v18 = *(_DWORD *)(a2 + 16LL * i + 128);
              *(_QWORD *)&v25 = a2 + v17;
              *((_QWORD *)&v25 + 1) = __PAIR64__(v16, v18);
              break;
            }
          }
          guard_dispatch_icall_no_overrides(a2 + 56, v8);
        }
      }
      else
      {
        v4 = -1073741811;
      }
      v11 = MEMORY[0xFFFFF78000000320];
      if ( (v11 - v6) * KeQueryTimeIncrement() >= 600010000
        && (unsigned int)dword_140E09198 > 5
        && tlgKeywordOn((__int64)&dword_140E09198, 0x200000000800LL) )
      {
        v28 = 8LL;
        v21 = 2164260864LL;
        v30 = 8LL;
        v27 = &v21;
        v32 = 16LL;
        v29 = &v22;
        v20 = *(_QWORD *)(a1 + 32);
        v22 = v19 / 10000;
        v31 = v20 + 40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09198,
          (unsigned __int8 *)word_14005446A,
          0LL,
          0LL,
          5u,
          &v26);
      }
    }
  }
  else if ( (v2 & 2) != 0 )
  {
    return (unsigned int)EtwpQueueNotification(*(_QWORD *)(a1 + 80), a2, a1);
  }
  return v4;
}
