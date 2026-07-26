/*
 * XREFs of NdisDereferenceWithTag @ 0x140013540
 * Callers:
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006F10 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1400110D0 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14009C094 (-ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1400136E0 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140013860 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall NdisDereferenceWithTag(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  int v3; // ecx
  __int64 v4; // r10
  unsigned __int8 j; // al
  _BYTE *v6; // r9
  char v7; // cl
  ULONG_PTR v8; // rbx
  unsigned int v9; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rdi

  if ( BugCheckParameter3 - 2 > 1 )
  {
    if ( BugCheckParameter3 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, BugCheckParameter3, 0LL);
    if ( a2 == 0xFF )
    {
      if ( (*(_BYTE *)BugCheckParameter3 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, 0xFFuLL);
      *(_BYTE *)BugCheckParameter3 &= ~2u;
    }
    else
    {
      if ( a2 >= *(_BYTE *)(BugCheckParameter3 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, BugCheckParameter3, a2);
      v3 = *(unsigned __int8 *)(BugCheckParameter3 + 1);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v8 = BugCheckParameter3 + ((unsigned __int64)a2 << 6);
          v9 = *(_DWORD *)(v8 + 64);
          if ( v9 >> 17 >= 0x3FFE || (unsigned __int16)v9 >> 1 != (v9 >> 17) + 1 )
          {
            if ( (unsigned __int16)v9 >> 1 || (v9 & 1) != 0 )
            {
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v8 + 8), 0);
              return;
            }
            goto LABEL_16;
          }
          for ( i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v8 + 8); i; i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v8 + 8) )
          {
            *(_QWORD *)(v8 + 8) = i->Next;
            ndisFreeRefCountStacksInBlock(i);
            ExFreePoolWithTag(i, 0);
          }
          ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v8 + 8));
          *(_DWORD *)(v8 + 64) &= 0x10001u;
        }
      }
      else
      {
        v4 = *(_QWORD *)(BugCheckParameter3 + 8);
        if ( !v4 )
        {
LABEL_7:
          if ( _bittestandreset((signed __int32 *)(BugCheckParameter3 + 16), a2) )
            return;
LABEL_16:
          ndisReportRefcountImbalance(BugCheckParameter3, a2);
        }
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_BYTE *)(BugCheckParameter3 + 3) )
            goto LABEL_7;
          v6 = (_BYTE *)(v4 + 2LL * j);
          if ( *v6 == a2 )
          {
            v7 = v6[1];
            if ( v7 )
              break;
          }
        }
        v6[1] = v7 - 1;
      }
    }
  }
}
