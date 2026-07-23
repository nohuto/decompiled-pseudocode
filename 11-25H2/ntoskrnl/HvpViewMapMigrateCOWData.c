/*
 * XREFs of HvpViewMapMigrateCOWData @ 0x1407CF564
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x14088274C (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14046BB00 (CmSiProtectViewOfSection.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     HvpAllExceptionsFatalFilter @ 0x1407CF4FC (HvpAllExceptionsFatalFilter.c)
 *     HvpViewMapMakeViewRangeReadOnly @ 0x140881A14 (HvpViewMapMakeViewRangeReadOnly.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140881B00 (HvpViewMapMakeViewRangeCOWByCaller.c)
 */

__int64 __fastcall HvpViewMapMigrateCOWData(ULONG_PTR a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r9
  unsigned __int8 v9; // r8
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  size_t v13; // r14
  _QWORD *v14; // rcx
  _QWORD *v15; // r12
  __int64 v16; // rcx
  unsigned __int8 *v17; // [rsp+50h] [rbp-48h]
  ULONG_PTR v19; // [rsp+A0h] [rbp+8h]
  __int64 v20; // [rsp+B8h] [rbp+20h] BYREF

  v19 = a1;
  v5 = a2;
  v6 = a2[5];
  v7 = a3[6];
  if ( v7 >= a2[6] )
    v7 = a2[6];
  if ( a3[5] >= v6 )
    v6 = a3[5];
  while ( v6 < v7 )
  {
    v8 = a3[3];
    v17 = (unsigned __int8 *)a3 + ((unsigned __int64)(v6 - v8) >> 12) + 72;
    v9 = *v17;
    v10 = v6 + 4096;
    if ( (*v17 & 6) != 0 )
    {
      if ( v10 < v7 )
      {
        v11 = v10 - v8;
        do
        {
          if ( ((*((_BYTE *)a3 + (v11 >> 12) + 72) & 2) != 0) != ((v9 & 2) != 0) )
            break;
          if ( ((*((_BYTE *)a3 + (v11 >> 12) + 72) ^ v9) & 4) != 0 )
            break;
          v10 += 4096LL;
          v11 += 4096LL;
        }
        while ( v10 < v7 );
        a1 = v19;
      }
      if ( (v9 & 2) != 0 )
      {
        result = HvpViewMapMakeViewRangeCOWByCaller(a1, a2, v6, v10);
        if ( (int)result < 0 )
          return result;
        v13 = v10 - v6;
        v14 = v5 + 7;
        v15 = v5 + 3;
      }
      else
      {
        LODWORD(v20) = 0;
        v15 = a2 + 3;
        v13 = v10 - v6;
        CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), (void *)(a2[7] + v6 - a2[3]), v10 - v6, 8u, (ULONG *)&v20);
        v16 = v6;
        if ( v6 >= v10 )
        {
          v14 = a2 + 7;
        }
        else
        {
          do
          {
            *((_BYTE *)a2 + ((unsigned __int64)(v16 - *v15) >> 12) + 72) |= 8u;
            v16 += 4096LL;
          }
          while ( v16 < v10 );
          v14 = a2 + 7;
        }
      }
      memmove((void *)(v6 + *v14 - *v15), (const void *)(v6 + a3[7] - a3[3]), v13);
      if ( (*v17 & 2) == 0 )
        HvpViewMapMakeViewRangeReadOnly(v19, a2, v6, v10);
      v6 = v10;
      a1 = v19;
      v5 = a2;
    }
    else
    {
      v6 += 4096LL;
    }
  }
  return 0LL;
}
