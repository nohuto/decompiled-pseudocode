/*
 * XREFs of TranslateBridgeResources @ 0x1400A83D0
 * Callers:
 *     <none>
 * Callees:
 *     CmMemIoResourceUpdateType @ 0x1400694A8 (CmMemIoResourceUpdateType.c)
 */

__int64 __fastcall TranslateBridgeResources(
        __int64 a1,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor)
{
  unsigned __int8 Type; // bp
  ULONGLONG v11; // rax
  unsigned __int64 QuadPart; // r9
  unsigned int v13; // ebx
  unsigned int v14; // r8d
  ULONGLONG v15; // r15
  __int64 v16; // r10
  int v17; // eax
  unsigned __int64 v18; // rcx
  char v19; // al

  Type = a2->Type;
  v11 = RtlCmDecodeMemIoResource(a2, 0LL);
  QuadPart = a2->u.Generic.Start.QuadPart;
  v13 = 0;
  v14 = 0;
  v15 = v11;
  while ( 1 )
  {
    if ( v14 >= *(_DWORD *)(a1 + 8) )
      return 3221226021LL;
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(_DWORD *)(v16 + 40LL * v14 + 32);
    if ( a3 == 1 )
    {
      if ( (v17 & 2) == 0 )
        goto LABEL_13;
      v18 = *(_QWORD *)(v16 + 40LL * v14 + 8);
      v19 = *(_BYTE *)(v16 + 40LL * v14);
    }
    else
    {
      if ( (v17 & 1) == 0 )
        goto LABEL_13;
      v18 = *(_QWORD *)(v16 + 40LL * v14 + 16);
      v19 = *(_BYTE *)(v16 + 40LL * v14 + 1);
    }
    if ( (v19 == Type || v19 == 7 && Type == 3)
      && QuadPart >= v18
      && QuadPart + v15 <= *(_QWORD *)(v16 + 40LL * v14 + 24) + v18 )
    {
      break;
    }
LABEL_13:
    ++v14;
  }
  *(_OWORD *)&Descriptor->Type = *(_OWORD *)&a2->Type;
  *((_DWORD *)&Descriptor->u.Memory48 + 3) = *((_DWORD *)&a2->u.Memory48 + 3);
  if ( a3 )
  {
    if ( a3 == 1 )
      CmMemIoResourceUpdateType(
        Descriptor,
        *(_BYTE *)(v16 + 40LL * v14 + 1),
        a2->u.Generic.Start.QuadPart + *(_QWORD *)(v16 + 40LL * v14 + 16) - *(_QWORD *)(v16 + 40LL * v14 + 8));
    else
      return (unsigned int)-1073741811;
  }
  else
  {
    CmMemIoResourceUpdateType(
      Descriptor,
      *(_BYTE *)(v16 + 40LL * v14),
      a2->u.Generic.Start.QuadPart + *(_QWORD *)(v16 + 40LL * v14 + 8) - *(_QWORD *)(v16 + 40LL * v14 + 16));
    return 288;
  }
  return v13;
}
