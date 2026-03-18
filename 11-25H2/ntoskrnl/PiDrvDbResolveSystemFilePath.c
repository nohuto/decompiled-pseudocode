/*
 * XREFs of PiDrvDbResolveSystemFilePath @ 0x14072D034
 * Callers:
 *     PiDrvDbResolveFilePathKeyValues @ 0x14072C720 (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PiDrvDbFindSystemFilePathToken @ 0x14072ABA8 (PiDrvDbFindSystemFilePathToken.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall PiDrvDbResolveSystemFilePath(
        unsigned __int16 *a1,
        char a2,
        UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        UNICODE_STRING *String1,
        PUNICODE_STRING Destination)
{
  bool v6; // r14
  NTSTATUS appended; // ebx
  const UNICODE_STRING *v10; // r13
  unsigned __int64 v11; // rsi
  unsigned __int64 SystemFilePathToken; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int16 v15; // r14
  wchar_t *v16; // r9
  unsigned __int16 v17; // dx
  unsigned int v18; // ebx
  void *Pool2; // rsi
  wchar_t *Buffer; // rdx
  char v22; // [rsp+20h] [rbp-40h]
  unsigned int Length; // [rsp+24h] [rbp-3Ch]
  bool v24; // [rsp+28h] [rbp-38h]
  char v25; // [rsp+2Ch] [rbp-34h]
  int v26; // [rsp+30h] [rbp-30h]
  UNICODE_STRING Source; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v28; // [rsp+50h] [rbp-10h]
  int v30; // [rsp+A8h] [rbp+48h]
  const UNICODE_STRING *v31; // [rsp+B0h] [rbp+50h]

  v31 = a3;
  v22 = 0;
  v6 = 0;
  Length = 0;
  v25 = 0;
  v24 = 0;
  v26 = a2 & 2;
  appended = 0;
  v28 = 0LL;
  v10 = 0LL;
  if ( (a2 & 2) != 0 && a3 )
  {
    v6 = RtlEqualUnicodeString(a3, &PiDrvDbSystemRootNt, 1u) != 0;
    v25 = v6;
  }
  v30 = a2 & 1;
  if ( (a2 & 1) != 0 && String1 && a4 )
    v24 = RtlEqualUnicodeString(String1, a4, 1u) != 0;
  Destination->Length = 0;
  for ( Source = *(UNICODE_STRING *)a1; *Source.Buffer; Source = v28 )
  {
    v11 = 0LL;
    if ( v26 )
    {
      if ( v31 && !v6 )
      {
        SystemFilePathToken = PiDrvDbFindSystemFilePathToken((__int128 *)&Source, &PiDrvDbSystemRootNt.Length, a3);
        if ( SystemFilePathToken )
        {
          v10 = v31;
          v11 = SystemFilePathToken;
          Length = 22;
        }
        else
        {
          v25 = 1;
        }
      }
      if ( a4 && !v22 )
      {
        v13 = PiDrvDbFindSystemFilePathToken((__int128 *)&Source, &PiDrvDbSystemRootWin32.Length, a3);
        if ( v13 )
        {
          if ( !v11 || v13 < v11 )
          {
            v11 = v13;
            Length = 24;
            v10 = a4;
          }
        }
        else
        {
          v22 = 1;
        }
      }
    }
    if ( v30 && a4 && !v24 && String1 && String1->Length > 2u )
    {
      v14 = PiDrvDbFindSystemFilePathToken((__int128 *)&Source, &String1->Length, a3);
      if ( v14 )
      {
        if ( !v11 || v14 < v11 )
        {
          v11 = v14;
          Length = String1->Length;
          v10 = a4;
        }
        goto LABEL_31;
      }
      v24 = 1;
    }
    if ( !v11 )
      break;
LABEL_31:
    a3 = (UNICODE_STRING *)*a1;
    v15 = 2 * ((__int64)(v11 - (unsigned __int64)Source.Buffer) >> 1);
    v16 = (wchar_t *)(v11 + 2 * ((unsigned __int64)Length >> 1));
    Source.Length = v15;
    v28.Buffer = v16;
    LOWORD(a3) = (_WORD)a3 - 2 * ((__int64)((unsigned int)v11 + 2 * (Length >> 1) - *((_DWORD *)a1 + 2)) >> 1);
    v17 = (unsigned __int16)a3;
    v28.Length = (unsigned __int16)a3;
    v28.MaximumLength = (_WORD)a3 + 2;
    if ( *v16 )
    {
      if ( *v16 != 92 )
        goto LABEL_46;
      if ( v10->Buffer[((unsigned __int64)v10->Length >> 1) - 1] == 92 )
      {
        v28.MaximumLength = (unsigned __int16)a3;
        v17 = (_WORD)a3 - 2;
        v28.Buffer = v16 + 1;
        v28.Length = (_WORD)a3 - 2;
      }
    }
    v18 = v17 + Destination->Length + v15 + v10->Length + 2;
    if ( v18 > 0xFFFE )
      return (unsigned int)-2147483643;
    if ( v18 > Destination->MaximumLength )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      Buffer = Destination->Buffer;
      if ( Buffer )
      {
        if ( Destination->Length )
          memmove(Pool2, Buffer, Destination->Length);
        ExFreePool(Destination->Buffer);
      }
      Destination->Buffer = (wchar_t *)Pool2;
      Destination->MaximumLength = v18;
    }
    if ( v15 )
    {
      appended = RtlAppendUnicodeStringToString(Destination, &Source);
      if ( appended < 0 )
        return (unsigned int)appended;
    }
    appended = RtlAppendUnicodeStringToString(Destination, v10);
    if ( appended < 0 )
      return (unsigned int)appended;
LABEL_46:
    v6 = v25;
  }
  if ( Destination->Length )
  {
    if ( Source.Length )
      return (unsigned int)RtlAppendUnicodeStringToString(Destination, &Source);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)appended;
}
