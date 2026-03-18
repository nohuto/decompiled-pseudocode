/*
 * XREFs of ?bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z @ 0x14015BF84
 * Callers:
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x14015C704 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 */

bool __fastcall STACKMEMOBJ::bMergeScanline(STACKMEMOBJ *this, struct RGNOBJ *a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  int *v6; // r9
  unsigned int v7; // edi
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int *v10; // rax
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(*((_QWORD *)this + 1) + 24LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 20LL) + 1;
  v4 = *((_QWORD *)this + 1);
  v5 = (8 * (unsigned __int64)*(unsigned int *)(v4 + 16) + 12) >> 2;
  while ( 1 )
  {
    v6 = (int *)*((_QWORD *)this + 2);
    v7 = *v6;
    v8 = v6 ? v7 >> 2 : 0;
    v14 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
    v9 = RGNCOREOBJ::UploadForFloodFill((RGNCOREOBJ *)&v14, (const int *)(v4 + 16), v5, v6, v8);
    **((_DWORD **)this + 2) = v7;
    if ( v9 != -1073741789 )
      break;
    v10 = (unsigned int *)*((_QWORD *)this + 2);
    if ( v10 )
      v11 = *v10;
    else
      v11 = 0;
    v12 = 4LL * (unsigned int)(4 * *(_DWORD *)(*((_QWORD *)this + 1) + 16LL));
    if ( v12 <= v11 )
      LODWORD(v12) = v11;
    if ( !(unsigned int)STACKOBJ::bExpandScanline(this, v11 + (unsigned int)v12, 0) )
    {
      v9 = -1073741801;
      return v9 >= 0;
    }
  }
  return v9 >= 0;
}
