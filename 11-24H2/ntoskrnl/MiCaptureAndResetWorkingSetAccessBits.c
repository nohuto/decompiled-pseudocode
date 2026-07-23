/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x140462890
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiVmAccessLoggingEnabled @ 0x140346A3C (MiVmAccessLoggingEnabled.c)
 *     MiDrainSystemAccessLog @ 0x140462A14 (MiDrainSystemAccessLog.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2, char a3)
{
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  _QWORD v11[3]; // [rsp+20h] [rbp-91h] BYREF
  __int128 v12; // [rsp+38h] [rbp-79h]
  int v13[2]; // [rsp+48h] [rbp-69h] BYREF
  char v14; // [rsp+51h] [rbp-60h]
  __int64 v15; // [rsp+68h] [rbp-49h]
  __int64 v16; // [rsp+78h] [rbp-39h]
  __int64 (__fastcall *v17)(__int64, unsigned __int64, int); // [rsp+F0h] [rbp+3Fh]
  __int64 (__fastcall *v18)(); // [rsp+F8h] [rbp+47h]
  _QWORD *v19; // [rsp+100h] [rbp+4Fh]

  *(_OWORD *)&v11[1] = 0LL;
  v12 = 0LL;
  memset_0(v13, 0, 0xC0uLL);
  v16 = -1LL;
  v17 = MiResetAccessBitPte;
  v13[0] = 6;
  v18 = MiResetAccessBitsTail;
  v6 = *(_DWORD *)(a1 + 184);
  v15 = a1;
  v14 = a2;
  if ( (v6 & 0xF) != 0 )
  {
    if ( !_bittest64(&MiFlags, 0x24u) )
      goto LABEL_6;
    v7 = (*(_DWORD *)(a1 + 184) >> 11) & 1;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 624) != 0LL;
  }
  v8 = *((_QWORD *)&v12 + 1);
  if ( v7 )
    v8 = 1LL;
  *((_QWORD *)&v12 + 1) = v8;
LABEL_6:
  v9 = HIDWORD(v11[1]);
  if ( (a3 & 0x10) != 0 )
    v9 = 1;
  HIDWORD(v11[1]) = v9;
  LODWORD(v11[1]) = MiVmAccessLoggingEnabled(a1);
  v19 = &v11[1];
  MiWalkPageTables(v13);
  return MiDrainSystemAccessLog(a1);
}
