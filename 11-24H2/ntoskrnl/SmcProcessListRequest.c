/*
 * XREFs of SmcProcessListRequest @ 0x1407992C8
 * Callers:
 *     SmQueryStoreInformation @ 0x140A11F10 (SmQueryStoreInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmcProcessListRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r10d
  unsigned int v12; // r9d
  __int128 v14; // [rsp+20h] [rbp-78h] BYREF
  __int128 v15; // [rsp+30h] [rbp-68h]
  __int128 v16; // [rsp+40h] [rbp-58h]
  __int128 v17; // [rsp+50h] [rbp-48h]
  int v18; // [rsp+60h] [rbp-38h]

  memset_0(&v14, 0, 0x44uLL);
  if ( a2 == 68 )
  {
    if ( a4 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v9 = a1;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + 67) = *(_BYTE *)(v9 + 67);
    }
    v14 = *(_OWORD *)a1;
    v15 = *(_OWORD *)(a1 + 16);
    v16 = *(_OWORD *)(a1 + 32);
    v17 = *(_OWORD *)(a1 + 48);
    v18 = *(_DWORD *)(a1 + 64);
    if ( (_BYTE)v14 != 1 || (v14 & 0xFF00) != 0 || (v14 & 0xFFFF0000) != 0 )
    {
      LODWORD(v8) = -1073741811;
    }
    else
    {
      v10 = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 2288;
      v11 = v8;
      v12 = v8;
      do
      {
        if ( *(_QWORD *)v10 != v8 )
          *((_DWORD *)&v14 + ++v11) = v12 | (16 * (*(_DWORD *)(v10 + 24) & 0xFFF));
        ++v12;
        v10 += 32LL;
      }
      while ( v12 < 0x10 );
      LODWORD(v14) = v14 & 0xFFFF00FF | ((unsigned __int8)v11 << 8);
      *(_OWORD *)a1 = v14;
      *(_OWORD *)(a1 + 16) = v15;
      *(_OWORD *)(a1 + 32) = v16;
      *(_OWORD *)(a1 + 48) = v17;
      *(_DWORD *)(a1 + 64) = v18;
      *a3 = 68;
    }
  }
  else
  {
    LODWORD(v8) = -1073741306;
  }
  return (unsigned int)v8;
}
