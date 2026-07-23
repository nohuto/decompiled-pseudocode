/*
 * XREFs of CmpAddRemoveRMLogContainer @ 0x1407D0AF8
 * Callers:
 *     CmpTransWriteLog @ 0x1408667CC (CmpTransWriteLog.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407D6518 (CmpAddRemoveContainerToCLFSLog.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     CmpQueryNameString @ 0x1409FA3D4 (CmpQueryNameString.c)
 */

__int64 __fastcall CmpAddRemoveRMLogContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rax
  UNICODE_STRING *p_UnicodeString; // r14
  NTSTATUS v7; // ebx
  unsigned int i; // esi
  int v9; // eax
  UNICODE_STRING GuidString; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+68h] [rbp+17h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  if ( (PVOID)a1 == CmRmSystem )
  {
    v5 = qword_140E09990;
    p_UnicodeString = (UNICODE_STRING *)&CmpLogPath;
  }
  else
  {
    v7 = CmpQueryNameString(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 1544LL), &UnicodeString, a3, a4);
    if ( v7 < 0 )
      goto LABEL_19;
    v5 = *(_QWORD *)(a1 + 80);
    p_UnicodeString = &UnicodeString;
  }
  v7 = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(v5 + 64) + 112LL), &GuidString, 1u);
  if ( v7 >= 0 )
  {
    for ( i = *(_DWORD *)(a1 + 68); i < 0x100; ++i )
    {
      v9 = CmpAddRemoveContainerToCLFSLog(
             *(PLOG_FILE_OBJECT *)(a1 + 88),
             p_UnicodeString,
             &GuidString,
             &CmpLogExt,
             &CmpContainerSuffix,
             i,
             (PULONGLONG)(a1 + 72));
      v7 = v9;
      if ( v9 != -1073741771 && v9 != -1073741635 )
      {
        if ( v9 >= 0 )
          ++*(_DWORD *)(a1 + 68);
        goto LABEL_17;
      }
    }
    if ( (unsigned int)dword_140E09E08 > 5 && tlgKeywordOn((__int64)&dword_140E09E08, 1LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09E08,
        (unsigned __int8 *)byte_140054421,
        0LL,
        0LL,
        2u,
        &v13);
    v7 = -1073741670;
  }
LABEL_17:
  if ( GuidString.Buffer )
    RtlFreeAnsiString(&GuidString);
LABEL_19:
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v7;
}
