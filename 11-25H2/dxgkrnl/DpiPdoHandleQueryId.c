/*
 * XREFs of DpiPdoHandleQueryId @ 0x1403E2E00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005319C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiAppendStringToString @ 0x140242BF0 (DpiAppendStringToString.c)
 *     DpiAppendNumberToString @ 0x1403F87DC (DpiAppendNumberToString.c)
 */

__int64 __fastcall DpiPdoHandleQueryId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 appended; // rdi
  char v7; // si
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  const WCHAR *v12; // rax
  int v13; // eax
  const WCHAR *v14; // rdx
  bool IsAdapterSessionized; // al
  unsigned __int16 *v16; // r11
  unsigned __int16 v17; // cx
  unsigned __int16 *v18; // rdx
  const WCHAR *v19; // rcx
  void *v20; // rbx
  unsigned int v21; // r14d
  void *Pool2; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  void *v28; // rax
  void *v29; // r14
  unsigned int MaximumLength; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp+27h] BYREF
  unsigned int v33; // [rsp+D8h] [rbp+67h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  DestinationString = 0LL;
  LODWORD(appended) = 0;
  v7 = 0;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v8 )
  {
    v27 = *(_DWORD *)(v5 + 496);
    v18 = (unsigned __int16 *)(v5 + 512);
    if ( v27 == 1 && !*v18 )
    {
      v14 = L"DISPLAY\\Default_Monitor";
      goto LABEL_12;
    }
    v19 = L"LOGICALGPU\\";
    if ( v27 != 4 )
      v19 = L"DISPLAY\\";
    goto LABEL_45;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *(_DWORD *)(v5 + 496) != 1 )
    {
      v20 = 0LL;
      v21 = 0;
      do
      {
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        v21 += 256;
        Pool2 = (void *)ExAllocatePool2(256LL, v21, 1953656900LL, a4);
        v20 = Pool2;
        if ( !Pool2 )
        {
          LODWORD(appended) = -1073741801;
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 5569;
          return (unsigned int)appended;
        }
        memset(Pool2, 0, v21);
        v23 = RtlStringCbPrintfW(
                (unsigned __int16 *)v20,
                v21,
                (size_t *)L"VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X&%ws,VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X"
                           "&%ws,VIDEO\\VEN_%04X&DEV_%04X&%ws,VIDEO\\%ws,,");
        v24 = v23;
      }
      while ( v23 == -2147483643 );
      if ( v23 < 0 )
      {
        ExFreePoolWithTag(v20, 0);
        LODWORD(appended) = -1073741823;
        WdLogSingleEntry1(2LL, v24);
        WdLogGlobalForLineNumber = 5616;
        return (unsigned int)appended;
      }
      appended = (int)DpiAppendStringToString((PCWSTR)v20, L",,", &DestinationString);
      ExFreePoolWithTag(v20, 0);
      if ( (int)appended < 0 )
      {
        WdLogSingleEntry1(2LL, appended);
        WdLogGlobalForLineNumber = 5631;
        return (unsigned int)appended;
      }
      if ( DestinationString.Length >> 1 )
      {
        v25 = 0LL;
        v26 = DestinationString.Length >> 1;
        do
        {
          if ( DestinationString.Buffer[v25] == 44 )
            DestinationString.Buffer[v25] = 0;
          ++v25;
          --v26;
        }
        while ( v26 );
      }
LABEL_47:
      v7 = 1;
      goto LABEL_48;
    }
    IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(
                             *(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 64LL) + 4032LL),
                             (struct _LUID *)v5,
                             &v33,
                             0LL);
    v17 = *v16;
    if ( IsAdapterSessionized )
    {
      if ( !v17 )
      {
        v14 = L"MONITOR\\Remote_Monitor";
        goto LABEL_12;
      }
      v18 = v16;
      v19 = L"MONITOR\\Remote_Monitor_";
    }
    else
    {
      if ( !v17 )
      {
        v14 = L"MONITOR\\Default_Monitor";
        goto LABEL_12;
      }
      v18 = v16;
      v19 = L"MONITOR\\";
    }
LABEL_45:
    v13 = DpiAppendStringToString(v19, v18, &DestinationString);
LABEL_46:
    LODWORD(appended) = v13;
    if ( v13 < 0 )
      return (unsigned int)appended;
    goto LABEL_47;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v12 = (const WCHAR *)(v5 + 716);
    if ( *(_DWORD *)(v5 + 496) == 1 && !*v12 )
    {
      v14 = L"*PNP09FF";
      goto LABEL_12;
    }
LABEL_11:
    v14 = v12;
LABEL_12:
    RtlInitUnicodeString(&DestinationString, v14);
    goto LABEL_48;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = (const WCHAR *)(v5 + 614);
    if ( !*(_WORD *)(v5 + 614) )
    {
      v13 = DpiAppendNumberToString(L"UID", *(_DWORD *)(v5 + 504), &DestinationString);
      goto LABEL_46;
    }
    goto LABEL_11;
  }
  if ( v11 != 2 || !*(_QWORD *)(v5 + 968) )
  {
    LODWORD(appended) = *(_DWORD *)(a2 + 48);
    return (unsigned int)appended;
  }
  DestinationString = *(struct _UNICODE_STRING *)(v5 + 960);
LABEL_48:
  v28 = (void *)ExAllocatePool2(256LL, DestinationString.MaximumLength + 2LL, 1953656900LL, a4);
  v29 = v28;
  if ( v28 )
  {
    MaximumLength = DestinationString.MaximumLength;
    memset(v28, 0, DestinationString.MaximumLength + 2LL);
    memmove(v29, DestinationString.Buffer, MaximumLength);
    *(_QWORD *)(a2 + 56) = v29;
  }
  else
  {
    LODWORD(appended) = -1073741801;
  }
  if ( v7 == 1 )
    RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)appended;
}
