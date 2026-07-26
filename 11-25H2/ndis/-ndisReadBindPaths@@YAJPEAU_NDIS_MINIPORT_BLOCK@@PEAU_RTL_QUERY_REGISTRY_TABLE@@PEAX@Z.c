/*
 * XREFs of ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x140081A80
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016F660 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1400720B0 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 */

__int64 __fastcall ndisReadBindPaths(
        struct _NDIS_MINIPORT_BLOCK *a1,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PCWSTR Path)
{
  unsigned int v3; // r15d
  bool v5; // si
  PRTL_QUERY_REGISTRY_TABLE v6; // rbx
  int Length; // edx
  NTSTATUS v9; // edi
  const WCHAR *v10; // rbx
  unsigned int v11; // r12d
  unsigned int v12; // r13d
  unsigned __int64 v13; // rax
  bool v14; // zf
  _NDIS_BIND_PATHS *BindPaths; // rcx
  _NDIS_BIND_PATHS *Pool2; // rax
  ULONG v17; // r8d
  __int64 v18; // rcx
  const WCHAR *v19; // r15
  char *v20; // r12
  char *v21; // rbx
  NTSTATUS v22; // eax
  _UNICODE_STRING v24; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp+48h] BYREF
  __int64 Context; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  SourceString = 0LL;
  v5 = 0;
  v6 = QueryTable;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(QueryTable) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)QueryTable,
      13,
      12,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  Context = 0LL;
  v6->Name = L"Linkage";
  v6->QueryRoutine = 0LL;
  v6[1].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))ndisReadParameter;
  v6->Flags = 1;
  v6[1].Name = L"RootDevice";
  v6[1].Flags = 20;
  v6[1].EntryContext = &SourceString;
  v6[1].DefaultType = 0;
  v6[2].QueryRoutine = 0LL;
  v6[2].Flags = 0;
  v6[2].Name = 0LL;
  v9 = RtlQueryRegistryValuesEx(0x40000000u, Path, v6, &Context, 0LL);
  if ( v9 == -1073741772 )
  {
    v9 = 0;
  }
  else if ( v9 < 0 || (_DWORD)Context != 7 )
  {
    v5 = SourceString != 0LL;
    if ( v9 >= 0 )
      v9 = -1073741823;
    goto LABEL_32;
  }
  if ( SourceString )
    v5 = 1;
  else
    SourceString = (PCWSTR)a1->BaseName.Buffer;
  v10 = SourceString;
  v11 = 24;
  if ( !*SourceString )
    goto LABEL_29;
  do
  {
    v12 = v3;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v10);
    Length = DestinationString.Length;
    ++v3;
    v11 += DestinationString.Length + ndisDeviceStr.Length + 18;
    v13 = ((unsigned __int64)DestinationString.Length + 2) >> 1;
    v14 = v10[v13] == 0;
    v10 += v13;
  }
  while ( !v14 );
  if ( v3 )
  {
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ExFreePoolWithTag(BindPaths, 0);
    Pool2 = (_NDIS_BIND_PATHS *)ExAllocatePool2(64LL, v11, 1851868238);
    a1->BindPaths = Pool2;
    if ( Pool2 )
    {
      Pool2->Number = v3;
      if ( v3 > 1 )
      {
        a1->PnPFlags |= 0x8000000u;
        a1->InfoFlags |= 0x10000000u;
      }
      v18 = v3;
      v19 = SourceString;
      v20 = (char *)&a1->BindPaths[1] + 16 * v18;
      while ( *v19 )
      {
        v24 = 0LL;
        DestinationString = 0LL;
        RtlInitUnicodeString(&v24, v19);
        if ( v24.Length > 0x1000u )
        {
          v9 = -1073741670;
          break;
        }
        v21 = (char *)a1->BindPaths + 16 * v12;
        v19 += ((unsigned __int64)v24.Length + 2) >> 1;
        *((_WORD *)v21 + 4) = 0;
        *((_QWORD *)v21 + 2) = v20;
        *((_WORD *)v21 + 5) = ndisDeviceStr.Length + v24.Length + 2;
        DestinationString.Length = 0;
        DestinationString.Buffer = (wchar_t *)&v20[ndisDeviceStr.Length];
        DestinationString.MaximumLength = v24.Length + 2;
        RtlCopyUnicodeString((PUNICODE_STRING)(v21 + 8), &ndisDeviceStr);
        RtlUpcaseUnicodeString(&DestinationString, &v24, 0);
        *((_WORD *)v21 + 4) += DestinationString.Length;
        --v12;
        v20 += 2 * ((unsigned __int64)*((unsigned __int16 *)v21 + 5) >> 1);
      }
      if ( (a1->Flags & 0x80u) != 0 )
      {
        v22 = RtlUnicodeStringCopy(a1->BindPaths->Paths, &a1->MiniportName, v17);
        v9 = v22;
        if ( v22 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0xDu,
              (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
              (char)a1,
              v22);
        }
      }
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
LABEL_29:
    v9 = -1073741811;
  }
LABEL_32:
  if ( v5 )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Length) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Length,
      13,
      14,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  return (unsigned int)v9;
}
