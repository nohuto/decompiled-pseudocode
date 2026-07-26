/*
 * XREFs of ndisAllocateConfigurationString @ 0x140051660
 * Callers:
 *     NdisOpenConfigurationEx @ 0x140050AC0 (NdisOpenConfigurationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall ndisAllocateConfigurationString(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        PUNICODE_STRING Destination)
{
  const UNICODE_STRING *v6; // rsi
  unsigned __int16 Length; // cx
  int v9; // edx
  unsigned int v10; // r8d
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // ax
  bool v13; // cf
  unsigned int v14; // r8d
  unsigned __int16 v15; // ax
  unsigned int v16; // edi
  wchar_t *Pool2; // rax
  char v19; // [rsp+30h] [rbp-28h]

  v6 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v19 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      8,
      17,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)a1,
      v19,
      (char)a3);
  }
  Length = a1->Length;
  v9 = 0xFFFF;
  if ( (unsigned __int16)(ndisParameterStr.Length + Length) >= Length )
    LOWORD(v9) = ndisParameterStr.Length + Length;
  v10 = (unsigned __int16)(ndisParameterStr.Length + Length) < Length ? 0xC0000095 : 0;
  Destination->MaximumLength = v9;
  if ( v6 )
  {
    v11 = -1;
    v12 = a3->Length + v9;
    v13 = v12 < (unsigned __int16)v9;
    v9 = 0xFFFF;
    if ( !v13 )
      v11 = v12;
    Destination->MaximumLength = v11;
    v14 = (v13 ? 0xC0000095 : 0) | v10;
    v15 = v6->Length + v11;
    if ( v15 >= v11 )
      LOWORD(v9) = v6->Length + v11;
    v10 = (v15 < v11 ? 0xC0000095 : 0) | v14;
  }
  v16 = 0;
  LOWORD(v9) = v9 + 2;
  Destination->MaximumLength = v9;
  Destination->Buffer = 0LL;
  Destination->Length = 0;
  if ( !v10
    && (Pool2 = (wchar_t *)ExAllocatePool2(64LL, (unsigned __int16)v9, 538985550), (Destination->Buffer = Pool2) != 0LL) )
  {
    RtlCopyUnicodeString(Destination, a1);
    RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
    if ( v6 )
    {
      RtlAppendUnicodeStringToString(Destination, a3);
      RtlAppendUnicodeStringToString(Destination, v6);
    }
  }
  else
  {
    v16 = -1073741670;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      18,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)a1,
      (char)v6,
      (char)a3);
  }
  return v16;
}
