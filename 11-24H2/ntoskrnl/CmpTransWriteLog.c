/*
 * XREFs of CmpTransWriteLog @ 0x140A01E5C
 * Callers:
 *     CmLogTmRmAction @ 0x140A015A0 (CmLogTmRmAction.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpAddRemoveRMLogContainer @ 0x1407E0920 (CmpAddRemoveRMLogContainer.c)
 *     LockRMLog @ 0x140A01F68 (LockRMLog.c)
 *     CmpComputeLogFillLevel @ 0x140A01F98 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x140A02110 (CmpDoTransWriteLogRecord.c)
 *     CmpLogCheckpoint @ 0x140A022E4 (CmpLogCheckpoint.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, PCLFS_LSN plsnFinish)
{
  int v5; // edi
  __int64 i; // r9
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r14d
  int v22; // r8d
  unsigned int v23; // [rsp+30h] [rbp-51h] BYREF
  int v24; // [rsp+34h] [rbp-4Dh] BYREF
  unsigned int v25; // [rsp+38h] [rbp-49h] BYREF
  int v26; // [rsp+3Ch] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27[2]; // [rsp+40h] [rbp-41h] BYREF
  unsigned int *v28; // [rsp+60h] [rbp-21h]
  int v29; // [rsp+68h] [rbp-19h]
  int v30; // [rsp+6Ch] [rbp-15h]
  int *v31; // [rsp+70h] [rbp-11h]
  int v32; // [rsp+78h] [rbp-9h]
  int v33; // [rsp+7Ch] [rbp-5h]

  v5 = 0;
  v23 = 0;
  v25 = a4;
  LockRMLog(a1);
  for ( i = a4; ; i = v25 )
  {
    v12 = CmpDoTransWriteLogRecord(a1, a2, a3, i, plsnFinish);
    if ( v12 != -1072037859 )
      break;
    if ( v5 )
    {
      if ( v5 != 1 )
        break;
    }
    else
    {
      v5 = 1;
      LOBYTE(v13) = 1;
      v23 = 1;
      if ( (int)CmpLogCheckpoint(a1, v11, v13) >= 0 )
        continue;
    }
    v23 = ++v5;
    v21 = CmpAddRemoveRMLogContainer(a1, v11, v13, v14);
    if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 1LL) )
    {
      v30 = 0;
      v33 = 0;
      v28 = (unsigned int *)&v26;
      v26 = v19;
      v31 = &v24;
      v29 = v19 + 3;
      v32 = v19 + 3;
      v24 = v21;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09F58,
        (unsigned __int8 *)qword_140056308,
        0LL,
        0LL,
        v19 + 3,
        v27);
    }
    if ( v21 < 0 )
      break;
    LOBYTE(v20) = 1;
    CmpLogCheckpoint(a1, v19, v20);
  }
  if ( v12 >= 0
    && (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              plsnFinish,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v23) >= 0
    && v23 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1, v15, v16, v17);
    if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 1LL) )
    {
      v30 = 0;
      v33 = 0;
      v28 = &v25;
      v24 = v22;
      v31 = &v24;
      v25 = 2;
      v29 = 4;
      v32 = 4;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, (unsigned __int8 *)byte_14005633B, 0LL, 0LL, 4u, v27);
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
