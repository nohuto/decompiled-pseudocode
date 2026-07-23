/*
 * XREFs of ViThunkHookExportAddress @ 0x140B998F8
 * Callers:
 *     VerifierMmGetSystemRoutineAddress @ 0x140BA2910 (VerifierMmGetSystemRoutineAddress.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1409051E0 (RtlUnicodeStringToAnsiString.c)
 */

__int64 __fastcall ViThunkHookExportAddress(unsigned __int8 **a1, const UNICODE_STRING *a2, unsigned __int8 **a3)
{
  unsigned int v3; // edi
  int v4; // r9d
  char *Buffer; // r10
  unsigned __int8 *v9; // rax
  int v10; // ebp
  unsigned __int8 *v11; // rax
  int v12; // r8d
  int v13; // ecx
  unsigned __int8 *v14; // rax
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v3 = 0;
  v4 = 0;
  Buffer = 0LL;
  DestinationString.Buffer = 0LL;
  while ( *a3 )
  {
    v9 = a3[2];
    v10 = *((_DWORD *)a3 + 8);
    if ( v9 == *a1 )
      goto LABEL_15;
    if ( !v9 )
    {
      if ( !v4 )
      {
        while ( RtlUnicodeStringToAnsiString(&DestinationString, a2, 1u) < 0 )
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&ViShortTime);
        Buffer = DestinationString.Buffer;
        v4 = 1;
      }
      v11 = *a3;
      do
      {
        v12 = v11[Buffer - (char *)*a3];
        v13 = *v11 - v12;
        if ( v13 )
          break;
        ++v11;
      }
      while ( v12 );
      if ( !v13 )
      {
LABEL_15:
        if ( (v10 & 1) == 0 )
          break;
        if ( (v10 & 4) != 0 )
        {
          *a1 = a3[1];
        }
        else
        {
          v14 = a3[5];
          if ( !*(_QWORD *)v14 )
            break;
          *a1 = *(unsigned __int8 **)v14;
        }
        v3 = 1;
        break;
      }
    }
    a3 += 7;
  }
  if ( v4 )
    RtlFreeAnsiString((PUNICODE_STRING)&DestinationString);
  return v3;
}
