/*
 * XREFs of ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x140079920
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016A2A0 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall ndisReadBindPaths(
        struct _NDIS_MINIPORT_BLOCK *a1,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PCWSTR Path)
{
  __int16 v3; // si
  PRTL_QUERY_REGISTRY_TABLE v5; // rbx
  unsigned __int64 v7; // rdx
  NTSTATUS v8; // ebx
  const WCHAR *v9; // rdi
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // r13d
  unsigned __int64 v13; // rax
  bool v14; // zf
  _NDIS_BIND_PATHS *BindPaths; // rcx
  _NDIS_BIND_PATHS *Pool2; // rax
  bool v17; // r13
  __int64 v18; // rcx
  const WCHAR *v19; // r15
  char *v20; // r12
  char *v21; // rdi
  _NDIS_BIND_PATHS *v22; // r10
  unsigned __int16 v23; // ax
  unsigned __int64 Length; // rcx
  wchar_t *Buffer; // r9
  unsigned __int16 MaximumLength; // ax
  wchar_t *v27; // r8
  unsigned __int64 v28; // rcx
  int v29; // eax
  __int64 Context; // [rsp+40h] [rbp-30h] BYREF
  _UNICODE_STRING v32; // [rsp+48h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char v34; // [rsp+B8h] [rbp+48h]
  PCWSTR SourceString; // [rsp+C8h] [rbp+58h] BYREF

  v3 = 0;
  SourceString = 0LL;
  v34 = 0;
  v5 = QueryTable;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
  v5->Name = L"Linkage";
  v5->QueryRoutine = 0LL;
  v5[1].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))ndisReadParameter;
  v5->Flags = 1;
  v5[1].Name = L"RootDevice";
  v5[1].Flags = 20;
  v5[1].EntryContext = &SourceString;
  v5[1].DefaultType = 0;
  v5[2].QueryRoutine = 0LL;
  v5[2].Flags = 0;
  v5[2].Name = 0LL;
  v8 = RtlQueryRegistryValuesEx(0x40000000u, Path, v5, &Context, 0LL);
  if ( v8 == -1073741772 )
  {
    v8 = 0;
  }
  else if ( v8 < 0 || (_DWORD)Context != 7 )
  {
    v17 = SourceString != 0LL;
    if ( v8 >= 0 )
      v8 = -1073741823;
    goto LABEL_54;
  }
  if ( SourceString )
    v34 = 1;
  else
    SourceString = (PCWSTR)a1->BaseName.Buffer;
  v9 = SourceString;
  v10 = 24;
  v11 = 0;
  if ( !*SourceString )
    goto LABEL_51;
  do
  {
    v12 = v11;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v9);
    LODWORD(v7) = DestinationString.Length;
    ++v11;
    v10 += DestinationString.Length + ndisDeviceStr.Length + 18;
    v13 = ((unsigned __int64)DestinationString.Length + 2) >> 1;
    v14 = v9[v13] == 0;
    v9 += v13;
  }
  while ( !v14 );
  if ( v11 )
  {
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ExFreePoolWithTag(BindPaths, 0);
    Pool2 = (_NDIS_BIND_PATHS *)ExAllocatePool2(64LL, v10, 1851868238LL);
    a1->BindPaths = Pool2;
    if ( !Pool2 )
    {
      v17 = v34;
      v8 = -1073741670;
      goto LABEL_54;
    }
    Pool2->Number = v11;
    if ( v11 > 1 )
    {
      a1->PnPFlags |= 0x8000000u;
      a1->InfoFlags |= 0x10000000u;
    }
    v18 = v11;
    v19 = SourceString;
    v20 = (char *)&a1->BindPaths[1] + 16 * v18;
    if ( *SourceString )
    {
      while ( 1 )
      {
        v32 = 0LL;
        DestinationString = 0LL;
        RtlInitUnicodeString(&v32, v19);
        if ( v32.Length > 0x1000u )
          break;
        v21 = (char *)a1->BindPaths + 16 * v12;
        v19 += ((unsigned __int64)v32.Length + 2) >> 1;
        *((_QWORD *)v21 + 2) = v20;
        *((_WORD *)v21 + 4) = 0;
        *((_WORD *)v21 + 5) = ndisDeviceStr.Length + v32.Length + 2;
        DestinationString.Length = 0;
        DestinationString.Buffer = (wchar_t *)&v20[ndisDeviceStr.Length];
        DestinationString.MaximumLength = v32.Length + 2;
        RtlCopyUnicodeString((PUNICODE_STRING)(v21 + 8), &ndisDeviceStr);
        RtlUpcaseUnicodeString(&DestinationString, &v32, 0);
        --v12;
        *((_WORD *)v21 + 4) += DestinationString.Length;
        v20 += 2 * ((unsigned __int64)*((unsigned __int16 *)v21 + 5) >> 1);
        if ( !*v19 )
          goto LABEL_24;
      }
      v8 = -1073741670;
    }
LABEL_24:
    if ( (a1->Flags & 0x80u) == 0 )
      goto LABEL_47;
    v22 = a1->BindPaths;
    LODWORD(v7) = v22->Paths[0].Length;
    if ( (v7 & 1) != 0
      || (v23 = v22->Paths[0].MaximumLength, (v23 & 1) != 0)
      || (unsigned __int16)v7 > v23
      || v23 == 0xFFFF
      || !v22->Paths[0].Buffer && ((_WORD)v7 || v23) )
    {
      v8 = -1073741811;
      v29 = -1073741811;
    }
    else
    {
      Length = a1->MiniportName.Length;
      Buffer = v22->Paths[0].Buffer;
      v7 = (unsigned __int64)v22->Paths[0].MaximumLength >> 1;
      if ( (Length & 1) != 0
        || (MaximumLength = a1->MiniportName.MaximumLength, (MaximumLength & 1) != 0)
        || (unsigned __int16)Length > MaximumLength
        || MaximumLength == 0xFFFF
        || !a1->MiniportName.Buffer && ((_WORD)Length || MaximumLength) )
      {
        v8 = -1073741811;
      }
      else
      {
        v27 = a1->MiniportName.Buffer;
        v8 = 0;
        v28 = Length >> 1;
        if ( v7 )
        {
          while ( v28 )
          {
            --v28;
            *Buffer++ = *v27++;
            ++v3;
            if ( !--v7 )
              goto LABEL_42;
          }
        }
        else
        {
LABEL_42:
          if ( v28 )
            v8 = -2147483643;
        }
      }
      v29 = v8;
      v22->Paths[0].Length = 2 * v3;
      if ( !v8 )
        goto LABEL_47;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_47:
      v17 = v34;
      goto LABEL_54;
    }
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0xDu,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      v29);
    v17 = v34;
  }
  else
  {
LABEL_51:
    v17 = v34;
    v8 = -1073741811;
  }
LABEL_54:
  if ( v17 )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      13,
      14,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  return (unsigned int)v8;
}
