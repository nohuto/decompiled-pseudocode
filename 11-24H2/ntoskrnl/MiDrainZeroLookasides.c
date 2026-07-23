/*
 * XREFs of MiDrainZeroLookasides @ 0x1402FD2B0
 * Callers:
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiReturnPartitionPagesToParent @ 0x14068C3BC (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
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
  _SLIST_HEADER *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int8 CurrentIrql; // al
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // r8d
  unsigned int v27; // r14d
  unsigned __int64 v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+28h] [rbp-70h]
  unsigned __int64 i; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+40h] [rbp-58h]
  unsigned __int64 v32; // [rsp+48h] [rbp-50h]
  int v33; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v34; // [rsp+A8h] [rbp+10h]
  __int64 v35; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v36; // [rsp+B0h] [rbp+18h]
  char v37; // [rsp+B8h] [rbp+20h]

  v37 = a4;
  v35 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = a3;
  v28 = v4;
  LOBYTE(v6) = a4;
  if ( a2 )
  {
    v8 = 1;
    v33 = 1;
    v9 = 57216LL * (unsigned int)MI_NODE_FROM_PFN(a2);
    v10 = 1LL;
    v4 += v9;
    v28 = v4;
  }
  else
  {
    v8 = dword_140E2DD0C;
    LOBYTE(v6) = 0;
    v10 = (unsigned __int16)KeNumberNodes;
    v37 = 0;
    v33 = dword_140E2DD0C;
  }
  v11 = 512;
  v12 = v4 + 57216 * v10 - 57216;
  result = a2 + 48 * v5;
  v32 = v12;
  for ( i = result; v4 <= v32; v28 = v4 )
  {
    for ( j = 0LL; j <= 1; ++j )
    {
      if ( j )
        v11 = v11 & 0xFFFFFFFC | 2;
      else
        v11 = v11 & 0xFFFFFFFC | 1;
      v15 = *(_QWORD *)(v4 + 8 * j + 14944);
      result = (unsigned __int8)v6;
      v31 = v15;
      if ( v8 )
      {
        v6 = (unsigned __int8)v6;
        v16 = v35;
        v29 = v8;
        do
        {
          if ( v8 != 1 )
            v6 %= v8;
          result = 16LL * v6;
          v17 = (_SLIST_HEADER *)(result + v15);
          if ( LOWORD(v17->Alignment) )
          {
            result = (unsigned __int64)RtlpInterlockedFlushSList(v17);
            v20 = result;
            if ( result )
            {
              CurrentIrql = KeGetCurrentIrql();
              v34 = CurrentIrql;
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v18) = 2;
                LOBYTE(v19) = CurrentIrql;
                KiRaiseIrqlProcessIrqlFlags(v19, v18);
              }
              do
              {
                v36 = *(_QWORD *)v20;
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
                  if ( qword_140E2DCC0 )
                  {
                    if ( (v25 & 0x10) != 0 )
                      LODWORD(v25) = v25 & 0xFFFFFFEF;
                    else
                      LODWORD(v25) = ~(_DWORD)qword_140E2DCC0 & v25;
                  }
                }
                else
                {
                  LODWORD(v25) = 0;
                }
                *(_QWORD *)(v20 + 16) = MiSwizzleInvalidPte((unsigned int)v25, v18);
                v27 = v26;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v27 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v27);
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
                v20 = v36;
              }
              while ( v36 );
              v35 = v16;
              if ( KiIrqlFlags )
              {
                LOBYTE(v18) = v34;
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
              }
              result = v34;
              __writecr8(v34);
            }
            v8 = v33;
          }
          v15 = v31;
          ++v6;
          --v29;
        }
        while ( v29 );
        LOBYTE(v6) = v37;
        v4 = v28;
        v5 = v35;
      }
      if ( a2 && !v5 )
        return result;
    }
    v4 += 57216LL;
  }
  return result;
}
