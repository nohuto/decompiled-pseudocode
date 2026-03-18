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
  UNICODE_STRING *v6; // r14
  int v7; // ebx
  unsigned int i; // esi
  int v9; // eax
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING v12; // [rsp+58h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+68h] [rbp+17h] BYREF

  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( (PVOID)a1 == CmRmSystem )
  {
    v5 = qword_140E09990;
    v6 = (UNICODE_STRING *)&CmpLogPath;
  }
  else
  {
    v7 = CmpQueryNameString(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 1544LL), &v12, a3, a4);
    if ( v7 < 0 )
      goto LABEL_19;
    v5 = *(_QWORD *)(a1 + 80);
    v6 = &v12;
  }
  LOBYTE(a3) = 1;
  v7 = RtlStringFromGUIDEx(*(_QWORD *)(v5 + 64) + 112LL, &UnicodeString, a3);
  if ( v7 >= 0 )
  {
    for ( i = *(_DWORD *)(a1 + 68); i < 0x100; ++i )
    {
      v9 = CmpAddRemoveContainerToCLFSLog(
             *(PLOG_FILE_OBJECT *)(a1 + 88),
             v6,
             &UnicodeString,
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
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
LABEL_19:
  if ( v12.Buffer )
    RtlFreeAnsiString(&v12);
  return (unsigned int)v7;
}
