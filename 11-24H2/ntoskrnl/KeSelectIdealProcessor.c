/*
 * XREFs of KeSelectIdealProcessor @ 0x1403A10AC
 * Callers:
 *     KiSetAffinityThread @ 0x1403A0218 (KiSetAffinityThread.c)
 *     KiReselectIdealProcessorAfterAffinityChange @ 0x1403A1D94 (KiReselectIdealProcessorAfterAffinityChange.c)
 *     KeSelectInitialIdealProcessorForThread @ 0x1403A2604 (KeSelectInitialIdealProcessorForThread.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x1404A092C (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C066C (ExpWorkQueueManagerInitialize.c)
 *     ExpNodeCreateSystemThread @ 0x1408F8B1C (ExpNodeCreateSystemThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSelectIdealProcessor(__int64 a1, _WORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 *v7; // rbx
  unsigned __int16 v9; // r8
  unsigned int i; // ecx
  __int64 v11; // rsi
  __int16 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r11
  __int64 j; // rcx
  __int64 k; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // edx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx

  v4 = *(_QWORD *)a1;
  v7 = &KiGroupBlock[4 * *(unsigned __int16 *)(a1 + 8)];
  if ( (*(_QWORD *)a1 & ~v7[3]) != 0 )
    v4 = *(_QWORD *)a1 & ~v7[3];
  v9 = 0;
  if ( a3 && (KiCacheAwareScheduling & 4) != 0 )
  {
    for ( i = 0; i < a4; ++i )
    {
      if ( (*(_QWORD *)(a3 + 8LL * i) & v4) != 0 )
      {
        v4 &= *(_QWORD *)(a3 + 8LL * i);
        break;
      }
    }
  }
  v11 = v7[2];
  v12 = *a2 & 0x3F;
  v13 = *v7;
  v14 = 1LL << (*a2 & 0x3F);
  if ( (v14 & v13) == 0 )
  {
    _BitScanForward64(&v26, __ROR8__(v13, v12));
    v14 = 1LL << ((v12 + v26) & 0x3F);
  }
  v15 = v11;
  v16 = ~v13;
  for ( j = v11 & v13; (v14 & j) == 0; j = v15 & ~v16 )
  {
    v16 |= v15;
    v15 *= 2LL;
  }
  for ( k = ~(v14 | (v14 - 1)) & j; (k & v4) == 0; k = v15 & ~v16 )
  {
    v23 = v15 | v16;
    v24 = ~(v15 | v16);
    v16 = ~v13;
    if ( (v24 & v13) != 0 )
      v16 = v23;
    v25 = 2 * v15;
    v15 = v11;
    if ( (v24 & v13) != 0 )
      v15 = v25;
  }
  _BitScanForward64((unsigned __int64 *)&v19, v4 & k);
  *a2 = (unsigned __int8)v19;
  v20 = *(unsigned __int16 *)(a1 + 8);
  if ( (_WORD)v20 || (_BYTE)v19 )
  {
    if ( (unsigned __int16)v20 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v19 >= 0x40u )
    {
      return (unsigned __int16)-1;
    }
    else
    {
      v21 = *((_DWORD *)qword_140F22998 + 64 * v20 + (unsigned __int8)v19);
      if ( !v21 )
        LOWORD(v21) = -1;
      return (unsigned __int16)v21;
    }
  }
  return v9;
}
