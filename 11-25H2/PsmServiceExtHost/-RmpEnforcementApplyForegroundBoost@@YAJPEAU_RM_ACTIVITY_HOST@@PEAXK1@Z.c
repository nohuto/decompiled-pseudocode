/*
 * XREFs of ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18005FCB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementApplyForegroundBoost(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  BOOL v6; // edi
  unsigned int v7; // ebx
  __int64 v8; // rax
  BOOL ProcessInformation; // [rsp+30h] [rbp-59h] BYREF
  BOOL v11; // [rsp+34h] [rbp-55h] BYREF
  int v12; // [rsp+38h] [rbp-51h] BYREF
  _DWORD v13[3]; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v17; // [rsp+70h] [rbp-19h]
  int v18; // [rsp+78h] [rbp-11h]
  int v19; // [rsp+7Ch] [rbp-Dh]
  _DWORD *v20; // [rsp+80h] [rbp-9h]
  int v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+8Ch] [rbp+3h]
  __int64 *v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]
  int *v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+ACh] [rbp+23h]
  BOOL *v29; // [rsp+B0h] [rbp+27h]
  int v30; // [rsp+B8h] [rbp+2Fh]
  int v31; // [rsp+BCh] [rbp+33h]

  v6 = (_DWORD)a4 != 0;
  ProcessInformation = v6;
  v7 = NtSetInformationProcess(a2, ProcessImageFileName|0x40, &ProcessInformation, 4u);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
  {
    v8 = *((_QWORD *)a1 + 4);
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v14 = v8;
    v29 = &v11;
    v26 = &v12;
    v23 = &v14;
    v20 = v13;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v11 = v6;
    v12 = a3;
    v13[0] = v7;
    v30 = 4;
    v27 = 4;
    v24 = 8;
    v21 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v17 = &unk_1800D9F8C;
    UserData.Reserved = 2;
    v18 = 58;
    v19 = 1;
    v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return v7;
}
