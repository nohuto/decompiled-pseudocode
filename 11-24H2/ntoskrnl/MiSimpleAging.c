/*
 * XREFs of MiSimpleAging @ 0x140482350
 * Callers:
 *     MiReduceWs @ 0x1402430A0 (MiReduceWs.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiSimpleAging(__int64 a1, char a2)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r10
  unsigned __int64 v9; // r9
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE v15[48]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-B0h]
  __int64 v17; // [rsp+70h] [rbp-98h]
  int v18[2]; // [rsp+78h] [rbp-90h] BYREF
  char v19; // [rsp+81h] [rbp-87h]
  __int64 v20; // [rsp+98h] [rbp-70h]
  __int64 v21; // [rsp+A8h] [rbp-60h]
  __int64 v22; // [rsp+B8h] [rbp-50h]
  __int64 (__fastcall *v23)(); // [rsp+120h] [rbp+18h]
  __int64 (__fastcall *v24)(__int64); // [rsp+128h] [rbp+20h]
  _BYTE *v25; // [rsp+130h] [rbp+28h]

  memset_0(v15, 0, 0x50uLL);
  memset_0(v18, 0, 0xC0uLL);
  *(_QWORD *)&v4 = *(unsigned int *)(a1 + 184);
  if ( (v4 & 0x40) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 144);
    v4 = *(unsigned __int64 *)(a1 + 120) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    if ( v5 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      v6 = *(_QWORD *)(a1 + 40);
      v7 = *(_QWORD *)(a1 + 16);
      v4 = v5 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      v8 = *(_QWORD *)(v7 + 32);
      if ( v8 + v6 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) && v5 - v8 - v6 < 0x400 )
      {
        v9 = v6 >> 5;
        if ( v9 < 8 )
          v9 = 8LL;
        v10 = *(_DWORD *)(a1 + 184);
        v16 = v9;
        if ( (v10 & 0xF) != 0 )
        {
          if ( !_bittest64(&MiFlags, 0x24u) )
          {
LABEL_15:
            v20 = a1;
            v25 = v15;
            v19 = a2;
            v13 = *(_QWORD *)(v7 + 8);
            v21 = -1LL;
            v22 = v13;
            v23 = MiSimpleAgePte;
            v24 = MiAgeWorkingSetTail;
            v18[0] = 6;
            *(_QWORD *)&v4 = MiWalkPageTables(v18);
            return v4;
          }
          v11 = (*(_DWORD *)(a1 + 184) >> 11) & 1;
        }
        else
        {
          v11 = *(_QWORD *)(a1 + 624) != 0LL;
        }
        v12 = v17;
        if ( v11 )
          v12 = 1LL;
        v17 = v12;
        goto LABEL_15;
      }
    }
  }
  return v4;
}
