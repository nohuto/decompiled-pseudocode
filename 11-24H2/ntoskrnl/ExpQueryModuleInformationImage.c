/*
 * XREFs of ExpQueryModuleInformationImage @ 0x140A183D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x1409051E0 (RtlUnicodeStringToAnsiString.c)
 */

__int64 __fastcall ExpQueryModuleInformationImage(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rax
  NTSTATUS v7; // eax
  char *v8; // rax
  __int64 result; // rax
  _STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF

  DestinationString = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 20);
  v5 = v4 + 296;
  if ( v4 + 296 < v4 )
  {
    result = 3221225473LL;
    *(_DWORD *)a2 = -1073741823;
  }
  else
  {
    *(_DWORD *)(a2 + 20) = v5;
    if ( *(_DWORD *)(a2 + 16) < v5 )
    {
      **(_DWORD **)(a2 + 24) = v5;
      *(_DWORD *)a2 = -1073741820;
    }
    else
    {
      v6 = 0LL;
      if ( !*(_DWORD *)(a2 + 32) )
        v6 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(v3 + 16) = v6;
      *(_DWORD *)(v3 + 24) = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(v3 + 28) = *(_DWORD *)(a1 + 104);
      *(_WORD *)(v3 + 36) = *(_WORD *)(a1 + 108);
      *(_WORD *)(v3 + 32) = *(_WORD *)(a2 + 36);
      *(_WORD *)(v3 + 34) = 0;
      DestinationString.Buffer = (char *)(v3 + 40);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      v7 = RtlUnicodeStringToAnsiString(&DestinationString, (PCUNICODE_STRING)(a1 + 72), 0);
      if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
      {
        v8 = &DestinationString.Buffer[DestinationString.Length];
        while ( v8 > DestinationString.Buffer )
        {
          if ( !*--v8 )
            break;
          if ( *v8 == 92 )
          {
            LOWORD(v8) = (_WORD)v8 + 1;
            break;
          }
        }
        *(_WORD *)(v3 + 38) = (_WORD)v8 - LOWORD(DestinationString.Buffer);
      }
      else
      {
        *(_BYTE *)(v3 + 40) = 0;
        *(_WORD *)(v3 + 38) = 0;
      }
      *(_QWORD *)(a2 + 8) += 296LL;
    }
    ++*(_DWORD *)(a2 + 36);
    return 0LL;
  }
  return result;
}
