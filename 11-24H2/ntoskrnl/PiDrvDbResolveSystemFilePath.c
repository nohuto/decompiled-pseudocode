/*
 * XREFs of PiDrvDbResolveSystemFilePath @ 0x1407371F4
 * Callers:
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407368E0 (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PiDrvDbFindSystemFilePathToken @ 0x140734D68 (PiDrvDbFindSystemFilePathToken.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall PiDrvDbResolveSystemFilePath(
        __int16 *a1,
        char a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        UNICODE_STRING *String1,
        PUNICODE_STRING Destination)
{
  bool v6; // r14
  NTSTATUS appended; // ebx
  const UNICODE_STRING *v10; // r13
  PWCHAR v11; // rsi
  PWCHAR SystemFilePathToken; // rax
  PWCHAR v13; // rax
  PWCHAR v14; // rax
  __int16 v15; // r8
  unsigned __int16 v16; // r14
  wchar_t *v17; // r9
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // dx
  unsigned int v20; // ebx
  void *Pool2; // rsi
  wchar_t *Buffer; // rdx
  char v24; // [rsp+20h] [rbp-40h]
  unsigned int Length; // [rsp+24h] [rbp-3Ch]
  bool v26; // [rsp+28h] [rbp-38h]
  char v27; // [rsp+2Ch] [rbp-34h]
  int v28; // [rsp+30h] [rbp-30h]
  UNICODE_STRING Source; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v30; // [rsp+50h] [rbp-10h]
  int v32; // [rsp+A8h] [rbp+48h]

  v24 = 0;
  v6 = 0;
  Length = 0;
  v27 = 0;
  v26 = 0;
  v28 = a2 & 2;
  appended = 0;
  v30 = 0LL;
  v10 = 0LL;
  if ( (a2 & 2) != 0 && a3 )
  {
    v6 = RtlEqualUnicodeString(a3, &PiDrvDbSystemRootNt, 1u) != 0;
    v27 = v6;
  }
  v32 = a2 & 1;
  if ( (a2 & 1) != 0 && String1 && a4 )
    v26 = RtlEqualUnicodeString(String1, a4, 1u) != 0;
  Destination->Length = 0;
  for ( Source = *(UNICODE_STRING *)a1; *Source.Buffer; Source = v30 )
  {
    v11 = 0LL;
    if ( v28 )
    {
      if ( a3 && !v6 )
      {
        SystemFilePathToken = PiDrvDbFindSystemFilePathToken(&Source, (UNICODE_STRING *)&PiDrvDbSystemRootNt);
        if ( SystemFilePathToken )
        {
          v10 = a3;
          v11 = SystemFilePathToken;
          Length = 22;
        }
        else
        {
          v27 = 1;
        }
      }
      if ( a4 && !v24 )
      {
        v13 = PiDrvDbFindSystemFilePathToken(&Source, (UNICODE_STRING *)&PiDrvDbSystemRootWin32);
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
          v24 = 1;
        }
      }
    }
    if ( v32 && a4 && !v26 && String1 && String1->Length > 2u )
    {
      v14 = PiDrvDbFindSystemFilePathToken(&Source, String1);
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
      v26 = 1;
    }
    if ( !v11 )
      break;
LABEL_31:
    v15 = *a1;
    v16 = 2 * (v11 - Source.Buffer);
    v17 = &v11[(unsigned __int64)Length >> 1];
    Source.Length = v16;
    v30.Buffer = v17;
    v18 = v15 - 2 * ((__int64)((unsigned int)v11 + 2 * (Length >> 1) - *((_DWORD *)a1 + 2)) >> 1);
    v19 = v18;
    v30.Length = v18;
    v30.MaximumLength = v18 + 2;
    if ( *v17 )
    {
      if ( *v17 != 92 )
        goto LABEL_46;
      if ( v10->Buffer[((unsigned __int64)v10->Length >> 1) - 1] == 92 )
      {
        v30.MaximumLength = v18;
        v19 = v18 - 2;
        v30.Buffer = v17 + 1;
        v30.Length = v18 - 2;
      }
    }
    v20 = v19 + Destination->Length + v16 + v10->Length + 2;
    if ( v20 > 0xFFFE )
      return (unsigned int)-2147483643;
    if ( v20 > Destination->MaximumLength )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL, v20, 0x67727453u);
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
      Destination->MaximumLength = v20;
    }
    if ( v16 )
    {
      appended = RtlAppendUnicodeStringToString(Destination, &Source);
      if ( appended < 0 )
        return (unsigned int)appended;
    }
    appended = RtlAppendUnicodeStringToString(Destination, v10);
    if ( appended < 0 )
      return (unsigned int)appended;
LABEL_46:
    v6 = v27;
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
