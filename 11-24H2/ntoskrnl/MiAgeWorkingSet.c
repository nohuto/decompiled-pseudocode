/*
 * XREFs of MiAgeWorkingSet @ 0x14020F2A0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 *     MiForcedTrim @ 0x1402F4A18 (MiForcedTrim.c)
 * Callees:
 *     MiLogWsAging @ 0x14020F50C (MiLogWsAging.c)
 *     MiComputeAgingAmount @ 0x14020F5E0 (MiComputeAgingAmount.c)
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiIsStoreProcess @ 0x140343630 (MiIsStoreProcess.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiAgeWorkingSet(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // r9
  __int64 v8; // r13
  unsigned int v9; // edi
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v24; // [rsp+28h] [rbp-E0h] BYREF
  int v25; // [rsp+2Ch] [rbp-DCh]
  int v26; // [rsp+30h] [rbp-D8h]
  unsigned int v27; // [rsp+34h] [rbp-D4h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  _DWORD v30[2]; // [rsp+78h] [rbp-90h] BYREF
  char v31; // [rsp+81h] [rbp-87h]
  __int64 v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall *v35)(); // [rsp+120h] [rbp+18h]
  __int64 (__fastcall *v36)(); // [rsp+128h] [rbp+20h]
  int *v37; // [rsp+130h] [rbp+28h]

  memset_0(&v24, 0, 0x50uLL);
  memset_0(v30, 0, 0xC0uLL);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  v10 = 4;
  v11 = *(_QWORD *)(v8 + 32);
  v12 = *(_QWORD *)(a1 + 144);
  if ( v12 > v11 )
  {
    v13 = 10;
    if ( a4 )
      v13 = a4;
    v7 = MiComputeAgingAmount(a1, v12 - v11, a3, v13);
    if ( v7 )
    {
      v14 = *(unsigned __int16 *)(a1 + 174);
      v27 = v13;
      v15 = (_QWORD *)*((_QWORD *)qword_140E300C8 + v14);
      v16 = v15[2200];
      if ( (a3 & 3) != 0 )
      {
        v17 = v15[376] + v15[360];
        v18 = v15 + 408;
        v19 = v15 + 463;
        while ( v18 < v19 )
        {
          v17 += *v18;
          v18 += 11;
        }
        if ( v17 + *v19 < *(_QWORD *)(v16 + 72) )
        {
          if ( (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 184)) != 2 )
            v26 = v17 < *(_QWORD *)(v16 + 64) ? 3 : 5;
          if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 || !(unsigned int)MiIsStoreProcess(a1 - 1024, v19, v17, v7) )
            LOWORD(v25) = *(_WORD *)(v16 + 278);
        }
        if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
        {
          v20 = *(_QWORD *)(a1 + 624) != 0LL;
LABEL_12:
          v21 = v29;
          if ( v20 )
            v21 = 1LL;
          v29 = v21;
          goto LABEL_15;
        }
        if ( _bittest64(&MiFlags, 0x24u) )
        {
          v20 = (*(_DWORD *)(a1 + 184) >> 11) & 1;
          goto LABEL_12;
        }
      }
LABEL_15:
      v31 = a2;
      v37 = (int *)&v24;
      v35 = MiAgePte;
      v36 = MiAgeWorkingSetTail;
      v32 = a1;
      v24 = a3;
      v28 = v7;
      v30[0] = 14;
      v22 = v33;
      if ( !*(_QWORD *)(((a3 & 2) != 0 ? 8 : 0) + v8 + 8) )
        v22 = -1LL;
      v33 = v22;
      v10 = MiWalkPageTables(v30);
      if ( v10 == 5 )
        ++*(_DWORD *)(v16 + 496);
    }
  }
  ((void (__fastcall *)(__int64, unsigned int *, _QWORD, __int64))MiLogWsAging)(a1, &v24, a3, v7);
  LOBYTE(v9) = v10 == 5;
  return v9;
}
