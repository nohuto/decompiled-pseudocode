/*
 * XREFs of ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14007AF80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1400207D0 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140022110 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 */

void __fastcall ndisSendNBLToFilter(char *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rcx
  void **v7; // rcx
  char *v8; // rdx
  KIRQL v9; // si
  unsigned int Number; // edi
  __int64 v11; // r12
  char v12; // r13
  int v13; // r15d
  void **v14; // r14
  void **v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  struct _NET_BUFFER_LIST *v18; // [rsp+70h] [rbp+8h] BYREF
  char *v19; // [rsp+78h] [rbp+10h]
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v18 = a2;
  v5 = *((_QWORD *)a1 + 321);
  if ( *(_BYTE *)v5 == 5
    && (*(_DWORD *)(v5 + 56) & 0x8000) != 0
    && !*(_DWORD *)(v5 + 336)
    && (a1[91] && (*((_WORD *)a1 + 910) > 1u || a1[1999]) || (a4 & 2) != 0 || (*((_DWORD *)a1 + 30) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v5, a2, a3, a4, &v18);
  }
  if ( v18 )
  {
    v7 = (void **)(a1 + 2552);
    v8 = (char *)*((_QWORD *)a1 + 319);
    v9 = 2;
    Number = -1;
    v11 = 0LL;
    v12 = 0;
    LOBYTE(v13) = 0;
    v19 = v8;
    if ( *((_DWORD *)a1 + 12) )
    {
      v15 = (void **)(a1 + 2552);
    }
    else
    {
      v14 = (void **)(a1 + 2552);
      if ( !*((_DWORD *)a1 + 20) )
      {
LABEL_17:
        if ( v8 == a1 )
        {
          v7 = v14;
          if ( (v13 & 0x80u) != 0 )
          {
            if ( (a4 & 1) == 0 )
            {
              v9 = KfRaiseIrql(2u);
              v12 = 1;
            }
            Number = KeGetPcr()->Prcb.Number;
            *(_QWORD *)(ndisPcwOffsetToPerCpuData + v11 + ndisPcwPerCpuDataStride * Number + 360) = __rdtsc();
            v7 = v14;
          }
        }
        ndisInvokeNextSendHandler(
          v18,
          v20,
          a4,
          *((struct _NDIS_OBJECT_HEADER **)a1 + 321),
          *v7,
          *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))a1 + 331));
        if ( v19 == a1 )
        {
          if ( (v13 & 0x80u) != 0 )
          {
            if ( Number == -1 )
              Number = KeGetPcr()->Prcb.Number;
            v16 = v11 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
            v17 = __rdtsc();
            *(_QWORD *)(v16 + 160) += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17)
                                    - *(_QWORD *)(v16 + 360);
            *(_QWORD *)(v16 + 360) = 0LL;
          }
          if ( v12 )
          {
            if ( v9 != 2 )
              KeLowerIrql(v9);
          }
        }
        return;
      }
      v15 = (void **)(a1 + 2552);
    }
    v11 = *((_QWORD *)a1 + 5);
    v14 = (void **)(a1 + 2552);
    v13 = *((_DWORD *)a1 + 20);
    if ( !v11 )
    {
      v11 = *((_QWORD *)a1 + 5);
      v14 = v15;
    }
    goto LABEL_17;
  }
}
