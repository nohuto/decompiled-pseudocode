/*
 * XREFs of ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x1800056D0
 * Callers:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180004FFC (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpSystemApplyPsmPriorityToHost(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v6; // r8
  char v7; // r10
  __int64 v8; // r9
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, __int64, __int64, int, EVENT_DESCRIPTOR *); // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v13; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v14[3]; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v15; // [rsp+58h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-31h] BYREF
  __int64 v17; // [rsp+70h] [rbp-21h]
  int v18; // [rsp+78h] [rbp-19h]
  int v19; // [rsp+7Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-9h] BYREF
  void *v21; // [rsp+98h] [rbp+7h]
  int v22; // [rsp+A0h] [rbp+Fh]
  int v23; // [rsp+A4h] [rbp+13h]
  _DWORD *v24; // [rsp+A8h] [rbp+17h]
  int v25; // [rsp+B0h] [rbp+1Fh]
  int v26; // [rsp+B4h] [rbp+23h]
  __int64 *v27; // [rsp+B8h] [rbp+27h]
  int v28; // [rsp+C0h] [rbp+2Fh]
  int v29; // [rsp+C4h] [rbp+33h]
  int *v30; // [rsp+C8h] [rbp+37h]
  int v31; // [rsp+D0h] [rbp+3Fh]
  int v32; // [rsp+D4h] [rbp+43h]

  v2 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)&EventDescriptor.Id = 0LL;
  EventDescriptor.Keyword = 0LL;
  v6 = *(_QWORD *)(v2 + 40);
  v17 = 0LL;
  v7 = *(_BYTE *)(a1 + 656);
  v8 = *(unsigned int *)(a1 + 624);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, int, EVENT_DESCRIPTOR *))(v6 + 8);
  v18 = a2;
  v19 = 16;
  v10 = v9(a1 + 552, *(unsigned int *)(a1 + 620), a1 + 88, v8, v4, v7 != 0 ? 4 : 0, &EventDescriptor);
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    v11 = *(_QWORD *)(a1 + 32);
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v15 = v11;
    v30 = &v13;
    v27 = &v15;
    v24 = v14;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    EventDescriptor.Keyword = 1LL;
    v13 = a2;
    v14[0] = v10;
    v31 = 4;
    v28 = 8;
    v25 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v21 = &unk_1800DAB21;
    v23 = 1;
    UserData.Reserved = 2;
    v22 = 80;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return v10;
}
