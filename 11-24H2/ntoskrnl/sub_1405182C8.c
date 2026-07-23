/*
 * XREFs of sub_1405182C8 @ 0x1405182C8
 * Callers:
 *     KiMarkBugCheckRegions @ 0x140505D78 (KiMarkBugCheckRegions.c)
 * Callees:
 *     MmIsAddressValid @ 0x1402433E0 (MmIsAddressValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeKvaShadowingActive @ 0x1404A367C (KeKvaShadowingActive.c)
 *     ExQueryBigPoolTag @ 0x140652D9C (ExQueryBigPoolTag.c)
 */

void __fastcall sub_1405182C8(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  ULONG *v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  int v9; // r9d
  int v10; // edx
  int v11; // r8d
  int v12; // edi
  __int64 v13; // rcx
  ULONG MaxDataSize[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 7 && a3 == -1073741694 )
  {
    v4 = (unsigned __int64)KiSystemCall64Shadow;
    if ( !(unsigned int)KeKvaShadowingActive() )
      v4 = (unsigned __int64)KiSystemCall64;
    v5 = (*(_QWORD *)&KiMismatchSummary ^ v4) & 0xFFFFFFFFFFFFF000uLL;
    IoAddTriageDumpDataBlock(v5, (PVOID)0x1000);
    _mm_lfence();
    if ( MmIsAddressValid((PVOID)v5) )
    {
      v6 = MaxDataSize;
      v7 = 4LL;
      v8 = MmPteBase + ((v5 >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *(_QWORD *)v6 = v8;
        v6 += 2;
        v8 = MmPteBase + ((v8 >> 9) & 0x7FFFFFFFF8LL);
        --v7;
      }
      while ( v7 );
      v9 = 0;
      v10 = 3;
      while ( 1 )
      {
        v11 = v10;
        if ( !v9 )
        {
          if ( !v10 )
            goto LABEL_15;
          if ( (**(_DWORD **)&MaxDataSize[2 * v10] & 0x80) == 0 )
            goto LABEL_14;
          --v10;
          v9 = 1;
          v11 = v10;
        }
        *(_QWORD *)&MaxDataSize[2 * v10] = 0LL;
LABEL_14:
        --v10;
        if ( !v11 )
        {
LABEL_15:
          v12 = 4;
          do
          {
            v13 = *(_QWORD *)&MaxDataSize[2 * (v12 - 1)];
            if ( !v13 )
              break;
            IoAddTriageDumpDataBlock(v13, (PVOID)8);
            --v12;
          }
          while ( v12 );
          break;
        }
      }
    }
    if ( (unsigned int)ExQueryBigPoolTag(v5, &KiSuspectPoolTag) )
      IoAddTriageDumpDataBlock((ULONG)&KiSuspectPoolTag, (PVOID)4);
  }
}
