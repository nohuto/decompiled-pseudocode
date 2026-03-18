/*
 * XREFs of MiCommitPageTablesForVad @ 0x140900E00
 * Callers:
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiCommitPageTableRangesForVad @ 0x140489444 (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x1402B94E0 (MiMakeHyperRangeAccessible.c)
 *     MmGetMinWsPagePriority @ 0x140311E90 (MmGetMinWsPagePriority.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     MiVadPageTableChargeLevel @ 0x1403FD8E0 (MiVadPageTableChargeLevel.c)
 *     RtlAreBitsClearEx @ 0x140420500 (RtlAreBitsClearEx.c)
 *     MiVadLeafPagesPrecharged @ 0x14042A9A0 (MiVadLeafPagesPrecharged.c)
 *     MiUpdateChargedWsles @ 0x1404F37B0 (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // r13
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  volatile _KAFFINITY_EX *ActiveProcessors; // r14
  __int64 v9; // rbp
  __int64 result; // rax
  int v11; // r13d
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // r10
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  __int64 v25; // r9
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  bool v28; // al
  bool v29; // al
  __int64 v30; // [rsp+20h] [rbp-88h]
  __int64 v31; // [rsp+28h] [rbp-80h]
  int v32; // [rsp+30h] [rbp-78h]
  __int64 v33; // [rsp+38h] [rbp-70h]
  _KPROCESS *v34; // [rsp+40h] [rbp-68h]
  unsigned __int64 v35; // [rsp+48h] [rbp-60h]
  unsigned __int64 v36; // [rsp+50h] [rbp-58h]
  volatile _KAFFINITY_EX *v37; // [rsp+58h] [rbp-50h]
  __int64 v38; // [rsp+60h] [rbp-48h]
  __int64 v40; // [rsp+C8h] [rbp+20h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v34 = Process;
  if ( *(_QWORD *)(a1 + 16) == -2LL && MiVadPureReserve(a1) )
  {
    v27 = *(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32);
    if ( !v27 )
      return 0LL;
    result = MiChargeFullProcessCommitment(Process, v27);
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    v5 = 0;
    v35 = (unsigned int)(a2 >> 21);
    v36 = (unsigned int)(a3 >> 21);
    v40 = 0LL;
    v6 = v35;
    v7 = v36;
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    while ( 1 )
    {
      v9 = 2 - v5;
      result = MiMakeHyperRangeAccessible(
                 *((_QWORD *)&ActiveProcessors[5].Count + 2 * v9) + (v6 >> 3),
                 *((_QWORD *)&ActiveProcessors[5].Count + 2 * v9) + (v7 >> 3),
                 &v40);
      if ( (int)result < 0 )
        break;
      ++v5;
      ActiveProcessors[5].StaticBitmap[v9 + 4] += v40;
      v6 >>= 9;
      v7 >>= 9;
      if ( v5 >= 2 )
      {
        v37 = Process[2].ActiveProcessors;
        MiVadPageTableChargeLevel(a1);
        v32 = MiVadLeafPagesPrecharged(a1);
        v11 = 0;
        v13 = v12 + 1344;
        LODWORD(v40) = 0;
        v15 = v14;
        v38 = v12 + 1344;
        v33 = v14;
        while ( 1 )
        {
          v16 = v35;
          v17 = 0LL;
          v18 = v36;
          v19 = 0LL;
          v31 = 0LL;
          v20 = 0LL;
          v21 = v13;
          do
          {
            v22 = 0LL;
            v23 = 0LL;
            v30 = 0LL;
            v24 = v16;
            if ( v16 <= v18 )
            {
              if ( v20 >= v15 )
              {
                do
                {
                  if ( !_bittest64(*(const signed __int64 **)(v21 + 8), v24) )
                  {
                    ++v23;
                    if ( v11 )
                    {
                      _bittestandset64(*(signed __int64 **)(v21 + 8), v24);
                    }
                    else
                    {
                      LODWORD(v40) = 1;
                      if ( !(unsigned int)MmGetMinWsPagePriority() && (v24 == v16 || (v24 & 7) == 0) )
                      {
                        v28 = RtlAreBitsClearEx((unsigned __int64 *)v21, v24 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL);
                        v22 = v30;
                        if ( v28 )
                          v22 = ++v30;
                      }
                    }
                  }
                  ++v24;
                }
                while ( v24 <= v18 );
              }
              else
              {
                do
                {
                  if ( !_bittest64(*(const signed __int64 **)(v21 + 8), v24) )
                  {
                    ++v23;
                    if ( !v11 )
                    {
                      LODWORD(v40) = 1;
                      if ( !(unsigned int)MmGetMinWsPagePriority() && (v24 == v16 || (v24 & 7) == 0) )
                      {
                        v29 = RtlAreBitsClearEx((unsigned __int64 *)v21, v24 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL);
                        v22 = v30;
                        if ( v29 )
                          v22 = ++v30;
                      }
                    }
                  }
                  ++v24;
                }
                while ( v24 <= v18 );
              }
              v15 = v33;
              v17 = v31;
              if ( v23 && v20 >= v33 )
              {
                v17 = v23 + v31;
                v31 += v23;
              }
            }
            v19 += v22;
            v16 >>= 9;
            v18 >>= 9;
            ++v20;
            v21 -= 16LL;
          }
          while ( v20 < 3 );
          if ( v11 )
            break;
          v25 = v19 + v17;
          if ( !v32
            && !MiVadPureReserve(a1)
            && (*(unsigned int *)(v26 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 34) << 32)) != 0x7FFFFFFFELL )
          {
            v25 += *(unsigned int *)(v26 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 34) << 32);
          }
          if ( v25 )
          {
            result = MiChargeFullProcessCommitment(v34, v25);
            if ( (int)result < 0 )
              return result;
            v17 = v31;
          }
          if ( !(_DWORD)v40 )
            return 0LL;
          v37[3].StaticBitmap[26] += v17;
          if ( v19 )
            MiUpdateChargedWsles((__int64)&v34[2].ReadyListHead.Blink, v19);
          v15 = v33;
          v11 = 1;
          v13 = v38;
        }
        return 0LL;
      }
    }
  }
  return result;
}
