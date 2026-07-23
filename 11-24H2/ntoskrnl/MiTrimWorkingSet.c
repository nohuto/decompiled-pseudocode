/*
 * XREFs of MiTrimWorkingSet @ 0x140390208
 * Callers:
 *     MiReduceWs @ 0x1402430A0 (MiReduceWs.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 *     MiForcedTrim @ 0x1402F4A18 (MiForcedTrim.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C9030 (MiEmptyWorkingSetInitiate.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 * Callees:
 *     MiVmAccessLoggingEnabled @ 0x140346A3C (MiVmAccessLoggingEnabled.c)
 *     MiLogTrimWs @ 0x14038F63C (MiLogTrimWs.c)
 *     MiFastTrimWorkingSet @ 0x140390500 (MiFastTrimWorkingSet.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiTrimWorkingSet(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4, int a5)
{
  __int64 v6; // r12
  int v9; // eax
  unsigned __int8 v10; // bl
  __int64 v11; // r11
  int v12; // ecx
  __int64 v13; // rax
  _QWORD *v14; // r10
  __int64 *v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int8 v21; // si
  char v22; // r15
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-BCh]
  char v26; // [rsp+49h] [rbp-B7h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v30)(__int64, unsigned __int64 *, __int64); // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v31)(); // [rsp+F0h] [rbp-10h]
  int *v32; // [rsp+F8h] [rbp-8h]
  int v33; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v34; // [rsp+108h] [rbp+8h]
  __int64 v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  __int64 v38; // [rsp+130h] [rbp+30h]
  unsigned __int64 v39; // [rsp+138h] [rbp+38h]
  __int64 v40; // [rsp+150h] [rbp+50h]

  v6 = a4;
  memset_0(&v33, 0, 0xF8uLL);
  memset_0(&v24, 0, 0xC0uLL);
  v9 = v6 & 0xF;
  v33 = v9;
  if ( (a5 & 2) != 0 )
  {
    v9 |= 0x200u;
    v33 = v9;
  }
  if ( (a5 & 4) != 0 )
  {
    v9 |= 0x400u;
    v33 = v9;
  }
  if ( (a5 & 1) != 0 )
  {
    v9 |= 0x800u;
    v33 = v9;
  }
  v10 = 8;
  if ( (a5 & 8) != 0 )
  {
    v9 |= 0x1000u;
    v33 = v9;
  }
  if ( (a5 & 0x10) != 0 )
  {
    v33 = v9 | 0x4000;
    v39 = *(_QWORD *)(a1 + 144);
    if ( a2 > v39 )
      a2 = v39;
    if ( (a5 & 0x20) != 0 )
      v33 |= 0x8000u;
  }
  if ( (unsigned int)MiVmAccessLoggingEnabled(a1) )
    v33 |= 0x100u;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    if ( !_bittest64(&MiFlags, 0x24u) )
      goto LABEL_21;
    v12 = v11 & (*(_DWORD *)(a1 + 184) >> 11);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 624) != 0LL;
  }
  v13 = v40;
  if ( v12 )
    v13 = v11;
  v40 = v13;
LABEL_21:
  v38 = 0LL;
  v14 = *(_QWORD **)(a1 + 16);
  if ( (unsigned int)v6 < 8 )
  {
    v15 = (__int64 *)(a1 + 8 * (v6 + 5));
    v16 = (unsigned int)(8 - v6);
    do
    {
      v17 = *v15++;
      v18 = v38 + v17;
      v38 = v18;
      v16 -= v11;
    }
    while ( v16 );
    if ( v18 )
    {
      v19 = -1LL;
      v34 = a2;
      v24 = 22;
      v27 = a1;
      v26 = a3;
      v25 = v25 & 0xFFFF0FFF | ((v6 & 0xF) << 12);
      v32 = &v33;
      v30 = MiTrimPte;
      v31 = MiTrimWorkingSetTail;
      v20 = v28;
      if ( !*v14 )
        v20 = -1LL;
      v28 = v20;
      if ( (a5 & 0x46) != 0 )
      {
        do
        {
          if ( *(_QWORD *)(a1 + 8LL * --v10 + 40) )
          {
            LOBYTE(v19) = v10;
            MiFastTrimWorkingSet(&v24, v19);
          }
        }
        while ( v10 != (_DWORD)v6 );
      }
      else
      {
        v21 = 8;
        do
        {
          --v21;
          v22 = 8;
          while ( v22 != v21 )
          {
            if ( *(_QWORD *)(a1 + 8LL * (unsigned __int8)--v22 + 40) )
            {
              LOBYTE(v19) = v22;
              v25 = v25 & 0xFFFF0FFF | ((v21 & 0xF) << 12);
              MiFastTrimWorkingSet(&v24, v19);
            }
          }
        }
        while ( v21 != (_DWORD)v6 );
      }
    }
  }
  if ( (a5 & 0x40) == 0 )
    MiLogTrimWs(a1, v36, v37, v35, v38, v6, a5);
  return v35;
}
