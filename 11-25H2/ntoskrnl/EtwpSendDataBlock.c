/*
 * XREFs of EtwpSendDataBlock @ 0x14089AEF8
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x14079E660 (SendCaptureStateNotificationsWorker.c)
 *     EtwpBufferingModeFlush @ 0x1408931C4 (EtwpBufferingModeFlush.c)
 *     EtwpNotifyGuid @ 0x140897964 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1409E471C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409EED94 (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     KeQueryTimeIncrement @ 0x140443620 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpQueueNotification @ 0x14089AC70 (EtwpQueueNotification.c)
 */

__int64 __fastcall EtwpSendDataBlock(__int64 a1, _DWORD *a2)
{
  __int16 v2; // ax
  unsigned int v4; // r14d
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int i; // eax
  __int64 v10; // rbx
  __int64 v11; // r11
  unsigned __int8 v12; // cl
  int v13; // r8d
  int v14; // r10d
  int v15; // r9d
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  __int64 v21; // [rsp+48h] [rbp-61h] BYREF
  int v22; // [rsp+50h] [rbp-59h]
  int v23; // [rsp+54h] [rbp-55h]
  __int128 v24; // [rsp+58h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+70h] [rbp-39h] BYREF
  __int64 *v26; // [rsp+90h] [rbp-19h]
  __int64 v27; // [rsp+98h] [rbp-11h]
  __int64 *v28; // [rsp+A0h] [rbp-9h]
  __int64 v29; // [rsp+A8h] [rbp-1h]
  __int64 v30; // [rsp+B0h] [rbp+7h]
  __int64 v31; // [rsp+B8h] [rbp+Fh]

  v2 = *(_WORD *)(a1 + 98);
  v4 = 0;
  v24 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      v6 = MEMORY[0xFFFFF78000000320];
      if ( *a2 == 3 )
      {
        if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
        {
          v11 = *(_QWORD *)(a1 + 32);
          v12 = *(_BYTE *)(v11 + 90);
          v13 = *(_DWORD *)(v11 + 80);
          v14 = *(_DWORD *)(v11 + 84);
          LOWORD(v21) = *(_WORD *)(v11 + 88);
          WORD1(v21) = v12;
          HIDWORD(v21) = v13;
          v22 = v14;
          v23 = 0;
          guard_dispatch_icall_no_overrides(v11 + 40);
        }
        else
        {
          v7 = *(_QWORD *)(a1 + 88);
          v8 = a2[29];
          v20 = v7;
          for ( i = 0; i < v8; ++i )
          {
            v15 = a2[4 * i + 33];
            if ( v15 >= 0 || v15 == 0x80000000 )
            {
              v16 = *(_QWORD *)&a2[4 * i + 30];
              v17 = a2[4 * i + 32];
              *(_QWORD *)&v24 = (char *)a2 + v16;
              *((_QWORD *)&v24 + 1) = __PAIR64__(v15, v17);
              break;
            }
          }
          guard_dispatch_icall_no_overrides(a2 + 14);
        }
      }
      else
      {
        v4 = -1073741811;
      }
      v10 = MEMORY[0xFFFFF78000000320];
      if ( (v10 - v6) * KeQueryTimeIncrement() >= 600010000
        && (unsigned int)dword_140E09048 > 5
        && tlgKeywordOn((__int64)&dword_140E09048, 0x200000000800LL) )
      {
        v27 = 8LL;
        v20 = 2164260864LL;
        v29 = 8LL;
        v26 = &v20;
        v31 = 16LL;
        v28 = &v21;
        v19 = *(_QWORD *)(a1 + 32);
        v21 = v18 / 10000;
        v30 = v19 + 40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09048,
          (unsigned __int8 *)&word_140052546,
          0LL,
          0LL,
          5u,
          &v25);
      }
    }
  }
  else if ( (v2 & 2) != 0 )
  {
    return (unsigned int)EtwpQueueNotification(*(void **)(a1 + 80), (__int64)a2, a1);
  }
  return v4;
}
