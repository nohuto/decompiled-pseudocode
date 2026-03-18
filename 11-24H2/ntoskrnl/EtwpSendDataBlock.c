/*
 * XREFs of EtwpSendDataBlock @ 0x14083A3F4
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x1407ADA30 (SendCaptureStateNotificationsWorker.c)
 *     EtwpBufferingModeFlush @ 0x140832840 (EtwpBufferingModeFlush.c)
 *     EtwpNotifyGuid @ 0x140836EE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14083ECD8 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409F6160 (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     KeQueryTimeIncrement @ 0x140444C20 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpQueueNotification @ 0x14083A16C (EtwpQueueNotification.c)
 */

__int64 __fastcall EtwpSendDataBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  unsigned int v5; // r14d
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  char v11; // r15
  __int64 v12; // r13
  unsigned int i; // eax
  __int64 v14; // rbx
  __int64 v15; // r11
  __int64 v16; // r9
  unsigned __int8 v17; // cl
  int v18; // r8d
  int v19; // r10d
  int v20; // r9d
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // [rsp+40h] [rbp-69h] BYREF
  __int64 v26; // [rsp+48h] [rbp-61h] BYREF
  int v27; // [rsp+50h] [rbp-59h]
  int v28; // [rsp+54h] [rbp-55h]
  __int128 v29; // [rsp+58h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+70h] [rbp-39h] BYREF
  __int64 *v31; // [rsp+90h] [rbp-19h]
  __int64 v32; // [rsp+98h] [rbp-11h]
  __int64 *v33; // [rsp+A0h] [rbp-9h]
  __int64 v34; // [rsp+A8h] [rbp-1h]
  __int64 v35; // [rsp+B0h] [rbp+7h]
  __int64 v36; // [rsp+B8h] [rbp+Fh]

  v3 = *(_WORD *)(a1 + 98);
  v5 = 0;
  v29 = 0LL;
  if ( (v3 & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      v7 = MEMORY[0xFFFFF78000000320];
      if ( *(_DWORD *)a2 == 3 )
      {
        if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
        {
          v15 = *(_QWORD *)(a1 + 32);
          v16 = *(_QWORD *)(a1 + 80);
          LOBYTE(a2) = *(_BYTE *)(a2 + 112);
          v17 = *(_BYTE *)(v15 + 90);
          v18 = *(_DWORD *)(v15 + 80);
          v19 = *(_DWORD *)(v15 + 84);
          LOWORD(v26) = *(_WORD *)(v15 + 88);
          WORD1(v26) = v17;
          HIDWORD(v26) = v18;
          v27 = v19;
          v28 = 0;
          guard_dispatch_icall_no_overrides(v15 + 40, a2, &v26, v16);
        }
        else
        {
          v8 = *(_QWORD *)(a1 + 88);
          v9 = *(_DWORD *)(a2 + 72);
          v10 = *(_DWORD *)(a2 + 116);
          v25 = v8;
          v11 = v9 != 0 ? *(_BYTE *)(a2 + 76) : 0;
          v12 = *(_QWORD *)(a2 + 88) & -(__int64)(v9 != 0);
          for ( i = 0; i < v10; ++i )
          {
            a3 = 2LL * i;
            v20 = *(_DWORD *)(a2 + 16LL * i + 132);
            if ( v20 >= 0 || v20 == 0x80000000 )
            {
              v21 = *(_QWORD *)(a2 + 16LL * i + 120);
              v22 = *(_DWORD *)(a2 + 16LL * i + 128);
              *(_QWORD *)&v29 = a2 + v21;
              *((_QWORD *)&v29 + 1) = __PAIR64__(v20, v22);
              break;
            }
          }
          LOBYTE(a3) = v11;
          guard_dispatch_icall_no_overrides(a2 + 56, v9, a3, v12);
        }
      }
      else
      {
        v5 = -1073741811;
      }
      v14 = MEMORY[0xFFFFF78000000320];
      if ( (v14 - v7) * KeQueryTimeIncrement() >= 600010000
        && (unsigned int)dword_140E09128 > 5
        && tlgKeywordOn((__int64)&dword_140E09128, 0x200000000800LL) )
      {
        v32 = 8LL;
        v25 = 2164260864LL;
        v34 = 8LL;
        v31 = &v25;
        v36 = 16LL;
        v33 = &v26;
        v24 = *(_QWORD *)(a1 + 32);
        v26 = v23 / 10000;
        v35 = v24 + 40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09128,
          (unsigned __int8 *)&unk_140053970,
          0LL,
          0LL,
          5u,
          &v30);
      }
    }
  }
  else if ( (v3 & 2) != 0 )
  {
    return (unsigned int)EtwpQueueNotification(*(_QWORD *)(a1 + 80), a2, a1);
  }
  return v5;
}
