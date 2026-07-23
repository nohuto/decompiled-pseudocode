/*
 * XREFs of HsaGetPageFault @ 0x1405703F0
 * Callers:
 *     <none>
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HsaGetPageFault(_QWORD *a1, int *a2, _QWORD *a3, _WORD *a4, _QWORD *a5, __int64 *a6)
{
  unsigned __int64 v6; // r15
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  int v15; // ebp
  __int128 *v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  signed __int32 v26[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-88h]
  _WORD *v28; // [rsp+38h] [rbp-80h]
  _QWORD *v29; // [rsp+40h] [rbp-78h]
  _QWORD *v30; // [rsp+48h] [rbp-70h]
  __int64 *v31; // [rsp+50h] [rbp-68h]
  __int128 v32; // [rsp+58h] [rbp-60h]

  v6 = a1[14];
  v8 = (_QWORD *)*a1;
  v28 = a4;
  v29 = a5;
  v9 = a1[12];
  v10 = v6 >> 4;
  v31 = a6;
  v27 = v9;
  v30 = a3;
  v32 = 0LL;
  do
  {
    while ( 1 )
    {
      v11 = v8[1028];
      v12 = v8[1030];
      v13 = v12 >> 4;
      v14 = (v12 >> 4) & 0x7FFF;
      if ( v14 != ((v8[1031] >> 4) & 0x7FFFLL) )
        break;
      if ( (v11 & 0x20) == 0 )
        return 0LL;
      if ( (v11 & 0x80u) == 0LL )
      {
        v19 = v8[3] & 0xFFFFFFFFFFFFDFFFuLL;
        v8[3] = v19;
        _InterlockedOr(v26, 0);
        v8[1028] = 32LL;
        _InterlockedOr(v26, 0);
        v8[3] = v19 | 0x6000;
        _InterlockedOr(v26, 0);
        *a2 = -1;
        *v28 = -1;
        *v29 = 0LL;
        *v31 = 32LL;
        *v30 = 0LL;
        return 1LL;
      }
      while ( (v8[1028] & 0x80u) != 0LL )
        ;
    }
    v15 = 0;
    v16 = (__int128 *)(v9 + 16 * v14);
    while ( 1 )
    {
      v32 = *v16;
      if ( v32 != 0 )
        break;
      KeStallExecutionProcessor(0xAu);
      if ( (unsigned int)++v15 > 0x186A0 )
        KeBugCheckEx(0x159u, 0x2000uLL, 0LL, 0LL, 0LL);
    }
    if ( v15 )
      ++AmdErrataPprWriteOrderMitigated;
    v17 = 0LL;
    if ( (v13 & 0x7FFF) + 1 != (_DWORD)v10 )
      v17 = v13 + 1;
    *v16 = 0LL;
    v8[1030] = (16 * v17) ^ (v12 ^ (16 * v17)) & 0xFFFFFFFFFFF8000FuLL;
    _InterlockedOr(v26, 0);
    v18 = v32;
    v9 = v27;
  }
  while ( (unsigned __int64)v32 >> 60 != 1 || (v32 & 0x24020000000000LL) == 0x20000000000LL );
  if ( (v32 & 0x100000000000000LL) != 0 )
    v21 = WORD1(v32);
  else
    v21 = -1;
  *a2 = v21;
  *v28 = WORD2(v18) & 0x1FF;
  *v29 = *((_QWORD *)&v32 + 1);
  *v30 = (unsigned __int16)v18;
  v22 = (2 * ((v18 >> 53) & 1)) | 1;
  if ( (v18 & 0x4000000000000LL) == 0 )
    v22 = 2 * ((v18 >> 53) & 1);
  v23 = v22 | 4;
  if ( (v18 & 0x2000000000000LL) == 0 )
    v23 = v22;
  v24 = v23 | 8;
  if ( (v18 & 0x40000000000000LL) != 0 )
    v24 = v23;
  v25 = v24 | 0x10;
  if ( (v18 & 0x20000000000LL) == 0 )
    v25 = v24;
  *v31 = v25;
  return 1LL;
}
