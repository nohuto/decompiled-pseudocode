/*
 * XREFs of RtlpCreateUserProcess @ 0x1800F6744
 * Callers:
 *     RtlCreateUserProcessEx @ 0x1800F65A0 (RtlCreateUserProcessEx.c)
 *     RtlCloneUserProcess @ 0x18015D630 (RtlCloneUserProcess.c)
 * Callees:
 *     NtCreateUserProcess @ 0x180161A60 (NtCreateUserProcess.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpCreateUserProcess(unsigned __int16 *a1, _DWORD *a2, ULONG a3, ULONG a4, __int64 a5, __int64 a6)
{
  unsigned int v11; // ecx
  ULONG_PTR v12; // rdx
  __int64 v13; // rax
  ULONG_PTR v14; // rdx
  __int64 v15; // rax
  ULONG_PTR v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int16 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ThreadObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ProcessObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _PS_CREATE_INFO CreateInfo; // [rsp+E0h] [rbp-20h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+140h] [rbp+40h] BYREF
  __int64 v31; // [rsp+168h] [rbp+68h]
  __int64 v32; // [rsp+170h] [rbp+70h]
  __int64 v33; // [rsp+178h] [rbp+78h]
  __int64 v34; // [rsp+180h] [rbp+80h]
  _QWORD v35[37]; // [rsp+188h] [rbp+88h] BYREF

  memset_thunk_772440563353939046(v35, 0, 0x120uLL);
  v24 = 0;
  *(&ProcessObjectAttributes.Length + 1) = 0;
  *(&ProcessObjectAttributes.Attributes + 1) = 0;
  v25 = 0LL;
  *(&ThreadObjectAttributes.Length + 1) = 0;
  *(&ThreadObjectAttributes.Attributes + 1) = 0;
  memset_thunk_772440563353939046((void *)(a6 + 4), 0, 0x64uLL);
  *(_DWORD *)a6 = 104;
  if ( a5 && *(_WORD *)a5 != 1 )
    return -1073741811;
  ProcessObjectAttributes.RootDirectory = 0LL;
  ProcessObjectAttributes.Length = 48;
  ProcessObjectAttributes.Attributes = 512;
  ProcessObjectAttributes.ObjectName = 0LL;
  if ( a5 )
    ProcessObjectAttributes.SecurityDescriptor = *(PVOID *)(a5 + 8);
  else
    ProcessObjectAttributes.SecurityDescriptor = 0LL;
  ProcessObjectAttributes.SecurityQualityOfService = 0LL;
  ThreadObjectAttributes.Length = 48;
  ThreadObjectAttributes.RootDirectory = 0LL;
  ThreadObjectAttributes.Attributes = 512;
  ThreadObjectAttributes.ObjectName = 0LL;
  if ( a5 )
    ThreadObjectAttributes.SecurityDescriptor = *(PVOID *)(a5 + 16);
  else
    ThreadObjectAttributes.SecurityDescriptor = 0LL;
  ThreadObjectAttributes.SecurityQualityOfService = 0LL;
  v26 = 0LL;
  memset_thunk_772440563353939046(&CreateInfo.State, 0, 0x50uLL);
  *(_BYTE *)&CreateInfo.InitState.1 |= 4u;
  AttributeList.Attributes[0].Value = a6 + 24;
  CreateInfo.Size = 88LL;
  v33 = a6 + 40;
  v11 = 2;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  v31 = 6LL;
  v32 = 64LL;
  v34 = 0LL;
  if ( a1 )
  {
    v11 = 4;
    v35[1] = *a1;
    v35[2] = *((_QWORD *)a1 + 1);
    v35[6] = &v25;
    v35[0] = 131077LL;
    v35[3] = 0LL;
    LODWORD(v25) = 2;
    v35[4] = 131082LL;
    v35[5] = 8LL;
    v35[7] = 0LL;
  }
  if ( a5 )
  {
    v12 = *(_QWORD *)(a5 + 24);
    if ( v12 )
    {
      v13 = v11++;
      AttributeList.Attributes[v13].Attribute = 393216LL;
      AttributeList.Attributes[v13].Size = 8LL;
      AttributeList.Attributes[v13].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v13 * 32) = v12;
    }
    v14 = *(_QWORD *)(a5 + 32);
    if ( v14 )
    {
      v15 = v11++;
      AttributeList.Attributes[v15].Attribute = 393217LL;
      AttributeList.Attributes[v15].Size = 8LL;
      AttributeList.Attributes[v15].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v15 * 32) = v14;
    }
    v16 = *(_QWORD *)(a5 + 40);
    if ( v16 )
    {
      v17 = v11++;
      AttributeList.Attributes[v17].Attribute = 393218LL;
      AttributeList.Attributes[v17].Size = 8LL;
      AttributeList.Attributes[v17].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v17 * 32) = v16;
    }
    if ( *(_QWORD *)(a5 + 48) )
    {
      v18 = v11++;
      AttributeList.Attributes[v18].Attribute = 131091LL;
      AttributeList.Attributes[v18].Size = 8LL;
      AttributeList.Attributes[v18].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v18 * 32) = a5 + 48;
    }
    v19 = *(_WORD *)(a5 + 2);
    if ( v19 )
    {
      v24 = v19 - 1;
      v20 = v11++;
      AttributeList.Attributes[v20].Attribute = 131085LL;
      AttributeList.Attributes[v20].Size = 2LL;
      AttributeList.Attributes[v20].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v20 * 32) = (ULONG_PTR)&v24;
    }
    else
    {
      a3 |= 0x100u;
    }
  }
  if ( (a3 & 0x40) != 0 )
  {
    v21 = v11++;
    AttributeList.Attributes[v21].Attribute = 393233LL;
    AttributeList.Attributes[v21].Size = 1LL;
    AttributeList.Attributes[v21].ReturnLength = 0LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v21 * 32) = 97LL;
  }
  if ( a2 )
  {
    v22 = a2[2];
    if ( v22 < 0 )
    {
      a2[2] = v22 & 0x7FFFFFFF;
      v23 = v11++;
      AttributeList.Attributes[v23].Attribute = 131090LL;
      AttributeList.Attributes[v23].Size = 8LL;
      AttributeList.Attributes[v23].ReturnLength = 0LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v23 * 32) = (ULONG_PTR)&v26;
    }
  }
  AttributeList.TotalLength = 32LL * v11 + 8;
  return NtCreateUserProcess(
           (PHANDLE)(a6 + 8),
           (PHANDLE)(a6 + 16),
           0x2000000u,
           0x2000000u,
           &ProcessObjectAttributes,
           &ThreadObjectAttributes,
           a3,
           a4,
           a2,
           &CreateInfo,
           &AttributeList);
}
