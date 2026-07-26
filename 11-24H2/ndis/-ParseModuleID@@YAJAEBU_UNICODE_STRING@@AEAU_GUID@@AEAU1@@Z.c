/*
 * XREFs of ?ParseModuleID@@YAJAEBU_UNICODE_STRING@@AEAU_GUID@@AEAU1@@Z @ 0x1400DCD98
 * Callers:
 *     ndisKLoaderIrpCreateHandler @ 0x1400DCA80 (ndisKLoaderIrpCreateHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall ParseModuleID(const struct _UNICODE_STRING *a1, struct _GUID *a2, struct _UNICODE_STRING *a3)
{
  unsigned __int16 Length; // r9
  int v6; // r9d
  NTSTATUS result; // eax
  wchar_t *Buffer; // rcx
  unsigned __int16 v9; // r9
  unsigned __int16 i; // di
  wchar_t *v11; // rdx
  unsigned __int16 v12; // cx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-18h] BYREF

  Length = a1->Length;
  *a3 = 0LL;
  if ( !Length )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 10;
      LODWORD(a2) = 2;
LABEL_20:
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        1,
        v6,
        (struct _GUID *)&WPP_cf14d13d62ed38b508b3bb2ca0533d52_Traceguids);
      return -1073741790;
    }
    return -1073741790;
  }
  if ( (Length & 1) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        1,
        11,
        (struct _GUID *)&WPP_cf14d13d62ed38b508b3bb2ca0533d52_Traceguids);
    return -1073741811;
  }
  else
  {
    Buffer = a1->Buffer;
    if ( *Buffer != 92 || Length == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 12;
        LOBYTE(a2) = 2;
        goto LABEL_20;
      }
      return -1073741790;
    }
    v9 = Length >> 1;
    for ( i = 1; i < v9; ++i )
    {
      if ( Buffer[i] == 92 )
        break;
    }
    *(&GuidString.MaximumLength + 2) = 0;
    GuidString.Buffer = Buffer + 1;
    GuidString.Length = 2 * i - 2;
    *(_DWORD *)&GuidString.MaximumLength = GuidString.Length;
    result = RtlGUIDFromString(&GuidString, a2);
    if ( !result )
    {
      v11 = a1->Buffer;
      v12 = a1->Length - GuidString.Length - 2;
      if ( a1->Length - GuidString.Length == 2 )
        v12 = 2;
      else
        v11 += i;
      a3->Buffer = v11;
      result = 0;
      a3->Length = v12;
      a3->MaximumLength = v12;
    }
  }
  return result;
}
