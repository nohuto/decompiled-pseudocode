/*
 * XREFs of RtlUnicodeStringToOemString @ 0x1800AF9B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18000BE90 (AllocateOrValidateCharStringBuffer.c)
 *     RtlpIsUtf8Process @ 0x180070CD0 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToMultiByteSize @ 0x1800B18B0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToCustomCPN @ 0x1800B1D30 (RtlUnicodeToCustomCPN.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 *p_Buffer; // rdi
  NTSTATUS result; // eax
  int v7; // edx
  __int64 v8; // r8
  int v9; // r10d
  int v10; // r11d
  __int16 *v11; // rcx
  NTSTATUS v12; // ebx
  unsigned __int16 v13; // dx
  signed __int32 v14[8]; // [rsp+0h] [rbp-78h] BYREF
  NTSTATUS v15; // [rsp+30h] [rbp-48h]
  ULONG v16; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN v17; // [rsp+90h] [rbp+18h]
  ULONG v18; // [rsp+98h] [rbp+20h] BYREF

  v17 = AllocateDestinationString;
  v16 = 0;
  RtlUnicodeToMultiByteSize(&v16, SourceString->Buffer, SourceString->Length);
  v18 = v16 + 1;
  if ( v16 + 1 > 0xFFFF )
    return -1073741584;
  p_Buffer = (__int64 *)&DestinationString->Buffer;
  result = AllocateOrValidateCharStringBuffer(
             AllocateDestinationString,
             v16 + 1,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  v15 = result;
  if ( result >= 0 )
  {
    if ( RtlpIsUtf8Process() )
    {
      v11 = (__int16 *)&Utf8TableInfo;
    }
    else
    {
      _InterlockedOr(v14, 0);
      v11 = &GlobalRtlNlsState;
    }
    v12 = RtlUnicodeToCustomCPN((_DWORD)v11, v10, v9, (unsigned int)&v18, v8, v7);
    v15 = v12;
    if ( v12 >= 0 )
    {
      v13 = v18;
      *(_BYTE *)(v18 + *p_Buffer) = 0;
      DestinationString->Length = v13;
      v12 = 0;
      v15 = 0;
    }
    if ( v12 < 0 )
    {
      if ( AllocateDestinationString )
      {
        RtlpSysVolFree(*p_Buffer);
        *p_Buffer = 0LL;
        DestinationString->MaximumLength = 0;
      }
    }
    return v12;
  }
  return result;
}
