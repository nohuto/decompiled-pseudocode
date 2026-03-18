/*
 * XREFs of DpOpenSpbResource @ 0x14038ECF0
 * Callers:
 *     <none>
 * Callees:
 *     RESOURCE_HUB_STRING_PRINTF @ 0x14005FDFC (RESOURCE_HUB_STRING_PRINTF.c)
 *     RESOURCE_HUB_UNICODE_STRING_PRINTF @ 0x1400603B4 (RESOURCE_HUB_UNICODE_STRING_PRINTF.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DpiCreateSpbResourceRecord @ 0x1401857B0 (DpiCreateSpbResourceRecord.c)
 */

__int64 __fastcall DpOpenSpbResource(
        __int64 a1,
        __int64 a2,
        const UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG ShareAccess,
        ULONG OpenOptions,
        _QWORD *a7)
{
  int v9; // ebx
  __int64 result; // rax
  __int64 v12; // rsi
  _DWORD *v13; // r8
  unsigned __int16 Length; // ax
  int v15; // ebx
  NTSTATUS v16; // eax
  __int64 v17; // r9
  int v18; // eax
  _DWORD *v19; // r9
  __int64 i; // rcx
  __int64 v21; // rdx
  int v22; // [rsp+34h] [rbp-9Dh]
  PVOID P[2]; // [rsp+38h] [rbp-99h] BYREF
  void *FileHandle; // [rsp+48h] [rbp-89h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+50h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-79h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int16 v28[20]; // [rsp+98h] [rbp-39h] BYREF

  FileHandle = 0LL;
  v25 = 0LL;
  *(_OWORD *)P = 0LL;
  v9 = a2;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v22 = HIDWORD(a2);
  IoStatusBlock = 0LL;
  if ( KeGetCurrentIrql() )
  {
    v15 = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 522;
  }
  else
  {
    if ( !a1
      || (v12 = *(_QWORD *)(a1 + 64)) == 0
      || *(_DWORD *)(v12 + 16) != 1953656900
      || (unsigned int)(*(_DWORD *)(v12 + 20) - 2) > 1 )
    {
      WdLogSingleEntry1(3LL, a1);
      result = 3221225711LL;
      WdLogGlobalForLineNumber = 541;
      return result;
    }
    v13 = *(_DWORD **)(v12 + 1312);
    if ( !v13 )
      goto LABEL_8;
    v21 = 0LL;
LABEL_28:
    if ( (unsigned int)v21 >= *v13 )
    {
LABEL_8:
      WdLogSingleEntry1(3LL, v22);
      result = 3221225712LL;
      WdLogGlobalForLineNumber = 580;
      return result;
    }
    v19 = &v13[9 * v21];
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v19[4] )
      {
        v21 = (unsigned int)(v21 + 1);
        goto LABEL_28;
      }
      if ( LOBYTE(v19[5 * i + 5]) == 0x84 && v19[5 * i + 7] == v9 && v19[5 * i + 8] == v22 )
        break;
    }
    if ( a3 )
      Length = a3->Length;
    else
      Length = 0;
    WORD1(P[0]) = Length + 80;
    P[1] = (PVOID)ExAllocatePool2(256LL, (unsigned __int16)(Length + 80), 1953656900LL, v19);
    if ( P[1] )
    {
      v15 = RESOURCE_HUB_STRING_PRINTF(v28, 0x22uLL, L"%0*I64x");
      if ( v15 >= 0 )
        v15 = RESOURCE_HUB_UNICODE_STRING_PRINTF((__int64)P, L"%s%s", L"\\Device\\RESOURCE_HUB\\", v28);
      if ( v15 < 0 )
      {
        WdLogSingleEntry1(2LL, v15);
        WdLogGlobalForLineNumber = 618;
      }
      else
      {
        if ( a3 )
        {
          if ( *a3->Buffer != 92 )
            RtlAppendUnicodeToString((PUNICODE_STRING)P, L"\\");
          RtlAppendUnicodeStringToString((PUNICODE_STRING)P, a3);
        }
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v16 = ZwOpenFile(&FileHandle, a4, &ObjectAttributes, &IoStatusBlock, ShareAccess, OpenOptions);
        v15 = v16;
        if ( v16 < 0 )
        {
          WdLogSingleEntry1(2LL, v16);
          WdLogGlobalForLineNumber = 683;
        }
        else
        {
          v18 = DpiCreateSpbResourceRecord(v12, (__int64)FileHandle, &v25, v17);
          v15 = v18;
          if ( v18 >= 0 )
          {
            *a7 = v25;
          }
          else
          {
            WdLogSingleEntry1(2LL, v18);
            WdLogGlobalForLineNumber = 701;
          }
        }
      }
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
    else
    {
      v15 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 600;
    }
  }
  return (unsigned int)v15;
}
