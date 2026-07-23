/*
 * XREFs of CmpLogFlushPhaseEnd @ 0x1409649B0
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140410100 (EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CmpLogFlushPhaseEnd(__int64 a1, char a2, int a3)
{
  NTSTATUS result; // eax
  char v4; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v5[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+6Ch] [rbp+23h]
  char *v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  _DWORD *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140E09F58 > 4 )
  {
    v4 = a2;
    v11 = &v4;
    v12 = 1LL;
    EventDescriptor.Keyword = 0LL;
    v13 = v5;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_140E09F60;
    v5[0] = a3;
    v14 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_140E09F60;
    v8 = &dword_14005521C;
    v10 = 1;
    UserData.Reserved = 2;
    v9 = 35;
    v5[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EtwWriteTransfer(qword_140E09F78, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return result;
}
