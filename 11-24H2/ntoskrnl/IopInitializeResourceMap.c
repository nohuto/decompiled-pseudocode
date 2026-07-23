/*
 * XREFs of IopInitializeResourceMap @ 0x140C24FB8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlCmEncodeMemIoResource @ 0x1405E6EA0 (RtlCmEncodeMemIoResource.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     IopWriteResourceList @ 0x14071ED00 (IopWriteResourceList.c)
 *     IopCreateRegistryKeyEx @ 0x140A6AFFC (IopCreateRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     MmInitializeMemoryLimits @ 0x140C58680 (MmInitializeMemoryLimits.c)
 */

void __fastcall IopInitializeResourceMap(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int i; // r14d
  __int64 k; // rax
  unsigned int *v4; // rsi
  __int64 j; // rax
  int v6; // ebx
  _QWORD *v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  int v11; // ebx
  bool v12; // zf
  int v13; // eax
  ULONG v14; // r15d
  _DWORD *Pool2; // rax
  _DWORD *v16; // r12
  unsigned int v17; // r13d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v18; // rdi
  ULONGLONG v19; // rbx
  ULONGLONG v20; // r15
  unsigned __int64 v21; // rax
  ULONG v22; // [rsp+3Ch] [rbp-55h]
  HANDLE Handle; // [rsp+40h] [rbp-51h] BYREF
  __int64 v24; // [rsp+48h] [rbp-49h]
  UNICODE_STRING v25; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING v26; // [rsp+60h] [rbp-31h] BYREF
  _DWORD *v27; // [rsp+70h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v29[22]; // [rsp+88h] [rbp-9h] BYREF
  __int16 v30; // [rsp+9Eh] [rbp+Dh]
  char v31; // [rsp+A2h] [rbp+11h]
  char v32; // [rsp+A5h] [rbp+14h]
  __int16 v33; // [rsp+A6h] [rbp+15h]
  char v34; // [rsp+A8h] [rbp+17h]
  __int16 v35; // [rsp+ACh] [rbp+1Bh]

  Handle = 0LL;
  v24 = a1;
  v1 = a1;
  v26 = 0LL;
  DestinationString = 0LL;
  v25 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"System Resources");
  for ( i = 0; i < 3; ++i )
  {
    if ( i )
    {
      if ( i == 1 )
      {
        RtlInitUnicodeString(&v26, L"Reserved");
        RtlInitUnicodeString(&v25, L".Translated");
        for ( j = 0LL; (unsigned int)j < 0x2F; j = (unsigned int)(j + 1) )
          v29[j] = 0;
        LOBYTE(v30) = 1;
        v31 = 1;
        v4 = (unsigned int *)MmInitializeMemoryLimits(v1, v29);
        if ( !v4 )
          continue;
      }
      else
      {
        RtlInitUnicodeString(&v26, L"Loader Reserved");
        RtlInitUnicodeString(&v25, L".Raw");
        for ( k = 0LL; (unsigned int)k < 0x2F; k = (unsigned int)(k + 1) )
          v29[k] = 0;
        v29[3] = 1;
        v33 = 257;
        v29[6] = 1;
        v34 = 1;
        v35 = 257;
        v30 = 257;
        v31 = 1;
        v32 = 1;
        v4 = (unsigned int *)MmInitializeMemoryLimits(v1, v29);
        if ( !v4 )
          return;
      }
    }
    else
    {
      RtlInitUnicodeString(&v26, L"Physical Memory");
      RtlInitUnicodeString(&v25, L".Translated");
      v4 = (unsigned int *)MmPhysicalMemoryBlock;
    }
    if ( !*v4 )
    {
      if ( i )
        ExFreePoolWithTag(v4, 0);
      continue;
    }
    v6 = 0;
    v7 = v4 + 6;
    v8 = *v4;
    do
    {
      v9 = *v7 << 12;
      if ( v9 == (unsigned __int64)(unsigned int)(16 * *(_DWORD *)v7) << 8
        || v9 == (unsigned __int64)(unsigned int)(v9 >> 16) << 16
        || v9 == (v9 & 0xFFFFFFFF00000000uLL)
        || v9 <= 0xFFFFF000 )
      {
        ++v6;
      }
      else
      {
        v10 = (v9 - 4294963201u) / 0xFFFFF000 + 1;
        v11 = v10 + v6;
        v12 = 0xFFFFFFFF00001000uLL * v10 + v9 == 0;
        v13 = v11 + 1;
        if ( v12 )
          v13 = v11;
        v6 = v13;
      }
      v7 += 2;
      --v8;
    }
    while ( v8 );
    v14 = 20 * (v6 + 1);
    v22 = v14;
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v14, 0x20207050uLL);
    v27 = Pool2;
    v16 = Pool2;
    if ( !Pool2 )
    {
      if ( i )
        ExFreePoolWithTag(v4, 0);
      return;
    }
    v17 = 0;
    *Pool2 = 1;
    Pool2[4] = v6;
    v18 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(Pool2 + 5);
    if ( !*v4 )
      goto LABEL_41;
    do
    {
      v19 = *(_QWORD *)&v4[4 * v17 + 4] << 12;
      v20 = *(_QWORD *)&v4[4 * v17 + 6] << 12;
      if ( RtlCmEncodeMemIoResource(v18, 3u, v20, v19) >= 0 )
      {
        v18->ShareDisposition = 1;
LABEL_38:
        ++v18;
        goto LABEL_39;
      }
      if ( v20 > 0xFFFFF000 )
      {
        v21 = (v20 - 4294963201u) / 0xFFFFF000 + 1;
        v20 += 0xFFFFFFFF00001000uLL * v21;
        do
        {
          v18->u.Generic.Start.QuadPart = v19;
          v19 += 4294963200LL;
          *(_WORD *)&v18->Type = 259;
          v18->u.Generic.Length = -4096;
          ++v18;
          --v21;
        }
        while ( v21 );
      }
      if ( v20 )
      {
        *(_WORD *)&v18->Type = 259;
        v18->u.Generic.Start.QuadPart = v19;
        v18->u.Generic.Length = v20;
        goto LABEL_38;
      }
LABEL_39:
      ++v17;
    }
    while ( v17 < *v4 );
    v16 = v27;
    v14 = v22;
LABEL_41:
    if ( (int)IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL) >= 0 )
    {
      IopWriteResourceList((__int64)Handle, (__int64)&DestinationString, (__int64)&v26, &v25, v16, v14);
      ZwClose(Handle);
    }
    ExFreePoolWithTag(v16, 0);
    if ( i )
      ExFreePoolWithTag(v4, 0);
    v1 = v24;
  }
}
