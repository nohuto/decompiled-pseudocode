/*
 * XREFs of PnpCmResourcesToIoResources @ 0x140731264
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405A37AC (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IoReportResourceUsageInternal @ 0x14071EAA8 (IoReportResourceUsageInternal.c)
 *     IopAllocateBootResourcesInternal @ 0x140722E38 (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x1407327F0 (PnpRestoreResourcesInternal.c)
 *     PnpFilterResourceRequirementsList @ 0x140978308 (PnpFilterResourceRequirementsList.c)
 *     IopQueryDeviceResources @ 0x140978EDC (IopQueryDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x14048FE80 (RtlCmDecodeMemIoResource.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpCmResourcesToIoResources(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r9d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v4; // r14
  ULONG LowPart; // r12d
  int v8; // ebx
  _DWORD *v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 Pool2; // rax
  __int64 v16; // rsi
  int v17; // ebp
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v21; // rdi
  ULONG v22; // r15d
  LONG HighPart; // eax
  int MessageCount; // eax
  KAFFINITY Affinity; // rax
  ULONGLONG v26; // rcx
  ULONGLONG v27; // rax
  __int64 result; // rax
  ULONGLONG Start; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(a2 + 1);
  LowPart = 0;
  v8 = 0;
  v9 = a2 + 1;
  if ( !*a2 )
    return 0LL;
  v10 = v3;
  do
  {
    v11 = v9[3];
    v9 += 4;
    v8 += v11;
    if ( v11 )
    {
      v12 = v11;
      do
      {
        v13 = 0LL;
        if ( *(_BYTE *)v9 == 5 )
        {
          v13 = (unsigned int)v9[1];
          --v8;
        }
        v9 = (_DWORD *)((char *)v9 + v13 + 20);
        --v12;
      }
      while ( v12 );
    }
    --v10;
  }
  while ( v10 );
  if ( !v8 )
    return 0LL;
  v14 = v3 + v8;
  Pool2 = ExAllocatePool2(0x100uLL, 32LL * v14 + 72, 0x36706E50u);
  v16 = Pool2;
  if ( !Pool2 )
    return 0LL;
  v17 = 0;
  *(_DWORD *)(Pool2 + 4) = *(_DWORD *)&v4->Type;
  v18 = a2[2];
  *(_DWORD *)(v16 + 36) = v14;
  v19 = v16 + 72;
  *(_DWORD *)(v16 + 8) = v18;
  *(_QWORD *)(v16 + 12) = 0LL;
  *(_QWORD *)(v16 + 20) = 0LL;
  *(_DWORD *)(v16 + 28) = 1;
  *(_DWORD *)(v16 + 32) = 65537;
  *(_WORD *)(v16 + 40) = -32767;
  *(_DWORD *)(v16 + 42) = 3;
  *(_WORD *)(v16 + 46) = 0;
  *(_DWORD *)(v16 + 48) = a3;
  if ( *a2 )
  {
    while ( 1 )
    {
      if ( v17 )
      {
        *(_DWORD *)(v19 + 2) = 0;
        *(_WORD *)v19 = -4095;
        *(_WORD *)(v19 + 6) = 0;
        v20 = *(_DWORD *)&v4->Type;
        if ( *(_DWORD *)&v4->Type == -1 )
          v20 = 1;
        *(_DWORD *)(v19 + 8) = v20;
        *(_QWORD *)(v19 + 12) = v4->u.Generic.Start.LowPart;
        v19 += 32LL;
      }
      v21 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v4->u.Memory48 + 1);
      v22 = 0;
      if ( v4->u.Generic.Length )
        break;
LABEL_38:
      v4 = v21;
      if ( (unsigned int)++v17 >= *a2 )
        goto LABEL_39;
    }
    while ( 1 )
    {
      *(_BYTE *)v19 = 1;
      *(_BYTE *)(v19 + 1) = v21->Type;
      *(_BYTE *)(v19 + 2) = v21->ShareDisposition;
      *(_WORD *)(v19 + 4) = v21->Flags;
      *(_BYTE *)(v19 + 3) = 0;
      *(_WORD *)(v19 + 6) = 0;
      if ( v21->Type == 1 )
        goto LABEL_34;
      if ( v21->Type == 2 )
        break;
      if ( v21->Type == 3 )
        goto LABEL_34;
      if ( v21->Type == 4 )
      {
        if ( SLOBYTE(v21->Flags) >= 0 )
        {
          *(_DWORD *)(v19 + 8) = v21->u.Generic.Start.LowPart;
          *(_DWORD *)(v19 + 12) = v21->u.Generic.Start.LowPart;
        }
        else
        {
          *(_DWORD *)(v19 + 8) = v21->u.Generic.Start.HighPart;
          *(_DWORD *)(v19 + 12) = v21->u.Generic.Start.HighPart;
          *(_DWORD *)(v19 + 16) = v21->u.Generic.Start.LowPart;
          *(_DWORD *)(v19 + 20) = v21->u.DmaV3.TransferWidth;
        }
        goto LABEL_36;
      }
      if ( v21->Type != 5 )
      {
        if ( v21->Type != 6 )
        {
          if ( v21->Type != 7 )
          {
            *(_DWORD *)(v19 + 8) = v21->u.Generic.Start.LowPart;
            *(_DWORD *)(v19 + 12) = v21->u.Generic.Start.HighPart;
            *(_DWORD *)(v19 + 16) = v21->u.Generic.Length;
LABEL_36:
            v19 += 32LL;
            goto LABEL_37;
          }
LABEL_34:
          Start = 0LL;
          v26 = RtlCmDecodeMemIoResource(v21, &Start);
          *(_DWORD *)(v19 + 8) = v21->u.Generic.Length;
          v27 = Start;
          *(_QWORD *)(v19 + 16) = Start;
          Affinity = v26 + v27 - 1;
          *(_DWORD *)(v19 + 12) = 1;
LABEL_35:
          *(_QWORD *)(v19 + 24) = Affinity;
          goto LABEL_36;
        }
        *(_DWORD *)(v19 + 12) = v21->u.Generic.Start.LowPart;
        *(_DWORD *)(v19 + 16) = v21->u.Generic.Start.LowPart - 1 + v21->u.Generic.Start.HighPart;
        HighPart = v21->u.Generic.Start.HighPart;
        goto LABEL_26;
      }
      LowPart = v21->u.Generic.Start.LowPart;
LABEL_37:
      v21 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v21 + LowPart + 20);
      ++v22;
      LowPart = 0;
      if ( v22 >= v4->u.Generic.Length )
        goto LABEL_38;
    }
    if ( (v21->Flags & 2) != 0 )
    {
      *(_DWORD *)(v19 + 12) = -2;
      MessageCount = v21->u.MessageInterrupt.Raw.MessageCount;
      *(_DWORD *)(v19 + 20) = 0;
      *(_DWORD *)(v19 + 8) = ~MessageCount;
      *(_WORD *)(v19 + 16) = 4;
      *(_WORD *)(v19 + 18) = v21->u.MessageInterrupt.Raw.Reserved;
      Affinity = v21->u.Interrupt.Affinity;
      goto LABEL_35;
    }
    HighPart = v21->u.Generic.Start.HighPart;
    *(_DWORD *)(v19 + 12) = HighPart;
LABEL_26:
    *(_DWORD *)(v19 + 8) = HighPart;
    goto LABEL_36;
  }
LABEL_39:
  result = v16;
  *(_DWORD *)v16 = v19 - v16;
  return result;
}
