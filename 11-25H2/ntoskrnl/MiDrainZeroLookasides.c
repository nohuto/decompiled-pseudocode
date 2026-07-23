/*
 * XREFs of MiDrainZeroLookasides @ 0x140448904
 * Callers:
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiProcessWorkingSets @ 0x1403C24F0 (MiProcessWorkingSets.c)
 *     MiReturnPartitionPagesToParent @ 0x14067F9FC (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x14067FC6C (MiTransferPartitionPageRun.c)
 * Callees:
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 */

unsigned __int64 __fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // r14
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edi
  unsigned __int64 v12; // rcx
  unsigned __int64 result; // rax
  __int64 j; // r12
  __int64 v15; // rcx
  __int64 v16; // r12
  _SLIST_HEADER *v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned __int8 CurrentIrql; // al
  int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // r14d
  __int64 v27; // rdx
  unsigned __int64 v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h]
  unsigned __int64 i; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  unsigned __int64 v33; // [rsp+48h] [rbp-50h]
  int v34; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v35; // [rsp+A8h] [rbp+10h]
  __int64 v36; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v37; // [rsp+B0h] [rbp+18h]
  char v38; // [rsp+B8h] [rbp+20h]

  v38 = a4;
  v36 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  LOBYTE(v5) = a4;
  v28 = v4;
  v6 = a3;
  if ( a2 )
  {
    v8 = 1;
    v34 = 1;
    v9 = 57216LL * (unsigned int)MI_NODE_FROM_PFN(a2);
    v10 = 1LL;
    v4 += v9;
    v28 = v4;
  }
  else
  {
    v8 = dword_140E2D98C;
    LOBYTE(v5) = 0;
    v10 = (unsigned __int16)KeNumberNodes;
    v38 = 0;
    v34 = dword_140E2D98C;
  }
  v11 = 512;
  v12 = v4 + 57216 * v10 - 57216;
  result = a2 + 48 * v6;
  v33 = v12;
  for ( i = result; v4 <= v33; v28 = v4 )
  {
    for ( j = 0LL; ; ++j )
    {
      v30 = j;
      if ( j > 1 )
        break;
      if ( j )
        v11 = v11 & 0xFFFFFFFC | 2;
      else
        v11 = v11 & 0xFFFFFFFC | 1;
      v15 = *(_QWORD *)(v4 + 8 * j + 14944);
      result = (unsigned __int8)v5;
      v32 = v15;
      if ( v8 )
      {
        v5 = (unsigned __int8)v5;
        v16 = v36;
        v29 = v8;
        do
        {
          if ( v8 != 1 )
            v5 %= v8;
          result = 16LL * v5;
          v17 = (_SLIST_HEADER *)(result + v15);
          if ( LOWORD(v17->Alignment) )
          {
            result = (unsigned __int64)RtlpInterlockedFlushSList(v17);
            v19 = result;
            if ( result )
            {
              CurrentIrql = KeGetCurrentIrql();
              v35 = CurrentIrql;
              __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v18) = CurrentIrql;
                KiRaiseIrqlProcessIrqlFlags(v18);
              }
              do
              {
                v37 = *(_QWORD *)v19;
                if ( a2 )
                {
                  if ( v19 < a2 || v19 >= i )
                  {
                    v21 = 0;
                  }
                  else
                  {
                    v21 = 1;
                    --v16;
                  }
                }
                else
                {
                  v21 = 1;
                }
                v22 = v11;
                v11 |= 0x40u;
                v23 = v22 & 0xFFFFFFBF;
                if ( !v21 )
                  v11 = v23;
                v24 = *(_QWORD *)(v19 + 16);
                if ( v24 )
                {
                  if ( qword_140E2D940 )
                  {
                    if ( (v24 & 0x10) != 0 )
                      LODWORD(v24) = v24 & 0xFFFFFFEF;
                    else
                      LODWORD(v24) = ~(_DWORD)qword_140E2D940 & v24;
                  }
                }
                else
                {
                  LODWORD(v24) = 0;
                }
                v25 = (unsigned int)v24;
                if ( qword_140E2D940 )
                {
                  if ( ((unsigned int)v24 & (unsigned int)qword_140E2D940) != 0 )
                    v25 = (unsigned int)v24 | 0x10LL;
                  else
                    v25 = qword_140E2D940 | (unsigned int)v24;
                }
                *(_QWORD *)(v19 + 16) = v25;
                v26 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v26 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait();
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v19 + 24) < 0 );
                }
                MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v19 + 0x220000000000LL) >> 4), v11);
                _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v19 = v37;
              }
              while ( v37 );
              v36 = v16;
              if ( KiIrqlFlags )
              {
                LOBYTE(v27) = v35;
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
              }
              result = v35;
              __writecr8(v35);
            }
            v8 = v34;
          }
          v15 = v32;
          ++v5;
          --v29;
        }
        while ( v29 );
        LOBYTE(v5) = v38;
        v4 = v28;
        j = v30;
        v6 = v36;
      }
      if ( a2 && !v6 )
        return result;
    }
    v4 += 57216LL;
  }
  return result;
}
