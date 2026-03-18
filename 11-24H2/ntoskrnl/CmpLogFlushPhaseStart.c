/*
 * XREFs of CmpLogFlushPhaseStart @ 0x14097C28C
 * Callers:
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 * Callees:
 *     EtwWriteTransfer @ 0x14041C2C0 (EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CmpLogFlushPhaseStart(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  char v3; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-4Ch]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  char *v7; // [rsp+58h] [rbp-28h]
  int v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+64h] [rbp-1Ch]
  char *v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)dword_140E09EE8 > 4 )
  {
    v12 = 0;
    EventDescriptor.Keyword = 0LL;
    v10 = &v3;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_140E09EF0;
    v11 = 1;
    v3 = a2;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_140E09EF0;
    v7 = byte_1400546EB;
    v9 = 1;
    UserData.Reserved = 2;
    v8 = 26;
    v4 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EtwWriteTransfer(qword_140E09F08, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return result;
}
