/*
 * XREFs of PnprAddMemoryResources @ 0x14072CDA4
 * Callers:
 *     PnprAddDeviceResources @ 0x14072CD20 (PnprAddDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x14048FE80 (RtlCmDecodeMemIoResource.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprAddMemoryResources(__int64 a1, _DWORD **a2)
{
  _DWORD *v3; // rbx
  _DWORD *v4; // rsi
  unsigned int *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // rbp
  unsigned int v11; // r12d
  int v12; // eax
  _DWORD *Pool2; // rax
  _DWORD *v14; // r13
  ULONGLONG v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  void *v19; // rcx
  int v21; // [rsp+70h] [rbp+8h]
  int v22; // [rsp+78h] [rbp+10h]
  ULONGLONG Start; // [rsp+80h] [rbp+18h] BYREF
  PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor; // [rsp+88h] [rbp+20h]

  Start = 0LL;
  v3 = *a2;
  v4 = *a2;
  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  v5 = *(unsigned int **)(a1 + 416);
  if ( !v5 )
  {
    v6 = PnprContext;
    LODWORD(v7) = 0;
    v8 = *(_DWORD *)(PnprContext + 33288);
    if ( !v8 )
      v8 = 631;
    *(_DWORD *)(PnprContext + 33288) = v8;
    v9 = *(_DWORD *)(v6 + 33292);
    if ( !v9 )
      v9 = 6;
    *(_DWORD *)(v6 + 33292) = v9;
    *a2 = v3;
    return (unsigned int)v7;
  }
  v10 = v5 + 1;
  v11 = 0;
LABEL_10:
  v7 = 0LL;
  if ( v11 < *v5 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v7 >= v10[3] )
      {
        v10 = (_DWORD *)((char *)v10 + (unsigned int)(v7 + 36));
        ++v11;
        goto LABEL_10;
      }
      Descriptor = (PCM_PARTIAL_RESOURCE_DESCRIPTOR)&v10[5 * v7 + 4];
      if ( ((Descriptor->Type - 3) & 0xFB) == 0 )
      {
        v12 = v3[1];
        v21 = v12;
        if ( v12 == *v3 )
        {
          v22 = v12 + 4;
          Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, (unsigned int)(16 * (v12 + 5)), 0x51706E50u);
          v14 = Pool2;
          if ( !Pool2 )
          {
            v16 = PnprContext;
            LODWORD(v7) = -1073741670;
            v17 = *(_DWORD *)(PnprContext + 33288);
            if ( !v17 )
              v17 = 671;
            *(_DWORD *)(PnprContext + 33288) = v17;
            v18 = *(_DWORD *)(v16 + 33292);
            if ( !v18 )
              v18 = 10;
            *(_DWORD *)(v16 + 33292) = v18;
            *a2 = v4;
            if ( v3 != v4 )
            {
              v19 = v3;
              goto LABEL_29;
            }
            return (unsigned int)v7;
          }
          memmove(Pool2, v3, (unsigned int)(16 * (v21 + 1)));
          *v14 = v22;
          if ( v3 != v4 )
            ExFreePoolWithTag(v3, 0x51706E50u);
          v3 = v14;
        }
        v15 = RtlCmDecodeMemIoResource(Descriptor, &Start);
        *(_QWORD *)&v3[4 * v3[1] + 4] = Start;
        *(_QWORD *)&v3[4 * v3[1] + 6] = v15;
        *((_QWORD *)v3 + 1) += v15;
        ++v3[1];
      }
      v7 = (unsigned int)(v7 + 1);
    }
  }
  *a2 = v3;
  if ( v3 != v4 )
  {
    v19 = v4;
LABEL_29:
    ExFreePoolWithTag(v19, 0x51706E50u);
  }
  return (unsigned int)v7;
}
