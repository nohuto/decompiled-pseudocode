/*
 * XREFs of MiDrainZeroLookasides @ 0x14022A040
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiProcessWorkingSets @ 0x140378690 (MiProcessWorkingSets.c)
 *     MiReturnPartitionPagesToParent @ 0x14068B28C (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x14068B4FC (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 */

unsigned __int64 __fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int v6; // ebx
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edi
  unsigned __int64 v12; // rcx
  unsigned __int64 result; // rax
  __int64 j; // r15
  __int64 v15; // rcx
  __int64 v16; // rbp
  union _SLIST_HEADER *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int8 CurrentIrql; // al
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // r14d
  __int64 v29; // rdx
  unsigned __int64 v30; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+28h] [rbp-70h]
  unsigned __int64 i; // [rsp+38h] [rbp-60h]
  __int64 v33; // [rsp+40h] [rbp-58h]
  unsigned __int64 v34; // [rsp+48h] [rbp-50h]
  int v35; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v36; // [rsp+A8h] [rbp+10h]
  __int64 v37; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v38; // [rsp+B0h] [rbp+18h]
  char v39; // [rsp+B8h] [rbp+20h]

  v39 = a4;
  v37 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = a3;
  v30 = v4;
  LOBYTE(v6) = a4;
  if ( a2 )
  {
    v8 = 1;
    v35 = 1;
    v9 = 57216LL * (unsigned int)MI_NODE_FROM_PFN(a2);
    v10 = 1LL;
    v4 += v9;
    v30 = v4;
  }
  else
  {
    v8 = dword_140E2DBCC;
    LOBYTE(v6) = 0;
    v10 = (unsigned __int16)KeNumberNodes;
    v39 = 0;
    v35 = dword_140E2DBCC;
  }
  v11 = 512;
  v12 = v4 + 57216 * v10 - 57216;
  result = a2 + 48 * v5;
  v34 = v12;
  for ( i = result; v4 <= v34; v30 = v4 )
  {
    for ( j = 0LL; j <= 1; ++j )
    {
      if ( j )
        v11 = v11 & 0xFFFFFFFC | 2;
      else
        v11 = v11 & 0xFFFFFFFC | 1;
      v15 = *(_QWORD *)(v4 + 8 * j + 14944);
      result = (unsigned __int8)v6;
      v33 = v15;
      if ( v8 )
      {
        v6 = (unsigned __int8)v6;
        v16 = v37;
        v31 = v8;
        do
        {
          if ( v8 != 1 )
            v6 %= v8;
          result = 16LL * v6;
          v17 = (union _SLIST_HEADER *)(result + v15);
          if ( LOWORD(v17->Alignment) )
          {
            result = (unsigned __int64)RtlpInterlockedFlushSList(v17);
            v20 = result;
            if ( result )
            {
              CurrentIrql = KeGetCurrentIrql();
              v36 = CurrentIrql;
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v18) = 2;
                LOBYTE(v19) = CurrentIrql;
                KiRaiseIrqlProcessIrqlFlags(v19, v18, 0LL);
              }
              do
              {
                v38 = *(_QWORD *)v20;
                if ( a2 )
                {
                  if ( v20 < a2 || v20 >= i )
                  {
                    v22 = 0;
                  }
                  else
                  {
                    v22 = 1;
                    --v16;
                  }
                }
                else
                {
                  v22 = 1;
                }
                v23 = v11;
                v11 |= 0x40u;
                v24 = v23 & 0xFFFFFFBF;
                if ( !v22 )
                  v11 = v24;
                v25 = *(_QWORD *)(v20 + 16);
                if ( v25 )
                {
                  if ( qword_140E2DB80 )
                  {
                    if ( (v25 & 0x10) != 0 )
                      LODWORD(v25) = v25 & 0xFFFFFFEF;
                    else
                      LODWORD(v25) = ~(_DWORD)qword_140E2DB80 & v25;
                  }
                }
                else
                {
                  LODWORD(v25) = 0;
                }
                *(_QWORD *)(v20 + 16) = MiSwizzleInvalidPte((unsigned int)v25);
                v28 = v27;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v28 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
                    {
                      HvlNotifyLongSpinWait(v28);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v20 + 24) < 0 );
                }
                MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v20 + 0x220000000000LL) >> 4), v11);
                _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v20 = v38;
              }
              while ( v38 );
              v37 = v16;
              if ( KiIrqlFlags )
              {
                LOBYTE(v29) = v36;
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29);
              }
              result = v36;
              __writecr8(v36);
            }
            v8 = v35;
          }
          v15 = v33;
          ++v6;
          --v31;
        }
        while ( v31 );
        LOBYTE(v6) = v39;
        v4 = v30;
        v5 = v37;
      }
      if ( a2 && !v5 )
        return result;
    }
    v4 += 57216LL;
  }
  return result;
}
