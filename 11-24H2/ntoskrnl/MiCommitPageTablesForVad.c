/*
 * XREFs of MiCommitPageTablesForVad @ 0x140919270
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiCommitPageTableRangesForVad @ 0x1403C7634 (MiCommitPageTableRangesForVad.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 * Callees:
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MmGetMinWsPagePriority @ 0x1403C11A0 (MmGetMinWsPagePriority.c)
 *     RtlAreBitsClearEx @ 0x140411AE0 (RtlAreBitsClearEx.c)
 *     MiVadPageTableChargeLevel @ 0x140414CB0 (MiVadPageTableChargeLevel.c)
 *     MiVadLeafPagesPrecharged @ 0x1404184A0 (MiVadLeafPagesPrecharged.c)
 *     MiUpdateChargedWsles @ 0x1404F3904 (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
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
  volatile _KAFFINITY_EX *v11; // rbx
  int v12; // r12d
  unsigned __int64 *v13; // rax
  __int64 v14; // r10
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // r11
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r10
  __int64 v20; // rbp
  unsigned __int64 *v21; // r13
  __int64 v22; // rsi
  __int64 v23; // r15
  unsigned __int64 v24; // rbx
  __int64 v25; // r9
  unsigned __int64 v26; // [rsp+20h] [rbp-88h]
  __int64 v27; // [rsp+28h] [rbp-80h]
  int v28; // [rsp+30h] [rbp-78h]
  __int64 i; // [rsp+38h] [rbp-70h]
  _KPROCESS *v30; // [rsp+40h] [rbp-68h]
  unsigned __int64 v31; // [rsp+48h] [rbp-60h]
  unsigned __int64 v32; // [rsp+50h] [rbp-58h]
  volatile _KAFFINITY_EX *v33; // [rsp+58h] [rbp-50h]
  unsigned __int64 *v34; // [rsp+60h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp+20h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v30 = Process;
  if ( *(_QWORD *)(a1 + 16) == -2LL && MiVadPureReserve(a1) )
  {
    if ( !(*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) )
      return 0LL;
    result = MiChargeFullProcessCommitment(Process);
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    v5 = 0;
    v31 = (unsigned int)(a2 >> 21);
    v32 = (unsigned int)(a3 >> 21);
    v36 = 0LL;
    v6 = v31;
    v7 = v32;
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    while ( 1 )
    {
      v9 = 2 - v5;
      result = MiMakeHyperRangeAccessible(
                 *((_QWORD *)&ActiveProcessors[5].Count + 2 * v9) + (v6 >> 3),
                 *((_QWORD *)&ActiveProcessors[5].Count + 2 * v9) + (v7 >> 3),
                 &v36);
      if ( (int)result < 0 )
        break;
      ++v5;
      ActiveProcessors[5].StaticBitmap[v9 + 4] += v36;
      v6 >>= 9;
      v7 >>= 9;
      if ( v5 >= 2 )
      {
        v11 = Process[2].ActiveProcessors;
        v33 = v11;
        MiVadPageTableChargeLevel(a1);
        v28 = MiVadLeafPagesPrecharged(a1);
        v12 = 0;
        v13 = &v11[5].StaticBitmap[2];
        LODWORD(v36) = 0;
        v15 = v14;
        v34 = &v11[5].StaticBitmap[2];
        for ( i = v14; ; v15 = i )
        {
          v16 = v31;
          v17 = 0LL;
          v18 = v32;
          v19 = 0LL;
          v27 = 0LL;
          v20 = 0LL;
          v26 = 0LL;
          v21 = v13;
          do
          {
            v22 = 0LL;
            v23 = 0LL;
            v24 = v16;
            if ( v16 <= v18 )
            {
              if ( v20 >= v15 )
              {
                do
                {
                  if ( !_bittest64((const signed __int64 *)v21[1], v24) )
                  {
                    ++v22;
                    if ( v12 )
                    {
                      _bittestandset64((signed __int64 *)v21[1], v24);
                    }
                    else
                    {
                      LODWORD(v36) = 1;
                      if ( !(unsigned int)MmGetMinWsPagePriority()
                        && (v24 == v16 || (v24 & 7) == 0)
                        && RtlAreBitsClearEx(v21, v24 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL) )
                      {
                        ++v23;
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
                  if ( !_bittest64((const signed __int64 *)v21[1], v24) )
                  {
                    ++v22;
                    if ( !v12 )
                    {
                      LODWORD(v36) = 1;
                      if ( !(unsigned int)MmGetMinWsPagePriority()
                        && (v24 == v16 || (v24 & 7) == 0)
                        && RtlAreBitsClearEx(v21, v24 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL) )
                      {
                        ++v23;
                      }
                    }
                  }
                  ++v24;
                }
                while ( v24 <= v18 );
              }
              v15 = i;
              v17 = v27;
              v19 = v26;
              if ( v22 && v20 >= i )
              {
                v17 = v22 + v27;
                v27 += v22;
              }
            }
            v19 += v23;
            v16 >>= 9;
            v18 >>= 9;
            ++v20;
            v21 -= 2;
            v26 = v19;
          }
          while ( v20 < 3 );
          if ( v12 )
            break;
          v25 = v19 + v17;
          if ( !v28
            && !MiVadPureReserve(a1)
            && (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) != 0x7FFFFFFFELL )
          {
            v25 += *(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32);
          }
          if ( v25 )
          {
            result = MiChargeFullProcessCommitment(v30);
            if ( (int)result < 0 )
              return result;
            v19 = v26;
            v17 = v27;
          }
          if ( !(_DWORD)v36 )
            return 0LL;
          v33[3].StaticBitmap[26] += v17;
          if ( v19 )
            MiUpdateChargedWsles((__int64)&v30[2].ReadyListHead.Blink, v19);
          v13 = v34;
          v12 = 1;
        }
        return 0LL;
      }
    }
  }
  return result;
}
