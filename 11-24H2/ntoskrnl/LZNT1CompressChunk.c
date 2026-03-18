/*
 * XREFs of LZNT1CompressChunk @ 0x140B64200
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x140B640F0 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     LZNT1FindMatchStandard @ 0x140B64500 (LZNT1FindMatchStandard.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(_QWORD, _QWORD),
        char *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  unsigned __int64 v7; // rbp
  char *v8; // r12
  __int64 *v9; // r9
  __int64 v12; // rcx
  char *v13; // rdx
  void *v14; // r11
  char *v15; // rbx
  char *v16; // rdi
  unsigned int v17; // r10d
  int v18; // esi
  int v19; // r15d
  char *v20; // rax
  int *v21; // r12
  __int64 v22; // rax
  __int64 v23; // rcx
  char *v24; // rcx
  char *v25; // rax
  bool v26; // cf
  int v27; // edi
  char *v29; // rax
  int v30; // eax
  __int64 v31; // rbp
  unsigned __int64 v32; // [rsp+20h] [rbp-58h]
  __int64 *v33; // [rsp+28h] [rbp-50h]
  char *v34; // [rsp+30h] [rbp-48h]
  _WORD *v35; // [rsp+38h] [rbp-40h]
  unsigned __int8 v36; // [rsp+88h] [rbp+10h]

  v7 = a3;
  LOBYTE(a3) = 0;
  v8 = a4;
  v36 = 0;
  v9 = &LZNT1Formats;
  v33 = &LZNT1Formats;
  if ( (unsigned __int64)(a2 + 4096) < v7 )
    v7 = (unsigned __int64)(a2 + 4096);
  v12 = a7;
  v13 = (char *)a5;
  v14 = v8 + 2;
  v35 = v8 + 2;
  v15 = a2;
  v16 = v8 + 3;
  if ( (unsigned __int64)(v8 + 4095) < a5 )
    v13 = v8 + 4095;
  *(_QWORD *)a7 = a2;
  v17 = 0;
  v32 = (unsigned __int64)v13;
  LOBYTE(v18) = 0;
  *(_QWORD *)(a7 + 8) = v7;
  *(_DWORD *)(a7 + 16) = 4098;
  LOBYTE(v19) = 0;
  v20 = v8 + 2;
  if ( (unsigned __int64)a2 < v7 )
  {
    v34 = v8 + 2;
    v21 = &dword_140B7132C;
    while ( 1 )
    {
      if ( &a2[*v21] < v15 )
      {
        do
        {
          v30 = *((_DWORD *)v9 + 7);
          v9 = (__int64 *)((char *)v9 + 20);
          *(_DWORD *)(v12 + 16) = v30;
          v21 = (int *)v9 + 3;
        }
        while ( &a2[*((unsigned int *)v9 + 3)] < v15 );
        v33 = v9;
      }
      if ( (unsigned __int64)(v15 + 3) <= v7 )
      {
        if ( a1 == LZNT1FindMatchStandard )
          LODWORD(v22) = LZNT1FindMatchStandard(v15, v12);
        else
          LODWORD(v22) = guard_dispatch_icall_no_overrides(v15, v12, a3, v9);
        v13 = (char *)v32;
        if ( (_DWORD)v22 )
        {
          if ( (unsigned __int64)(v16 + 1) >= v32 )
          {
LABEL_18:
            v20 = v34;
            v17 = 0;
            LOBYTE(a3) = v36;
            v8 = a4;
            v14 = v35;
            break;
          }
          v9 = v33;
          v23 = 2LL;
          v22 = (int)v22;
          a3 = v36;
          v18 = (unsigned __int8)v18 | (1 << v19);
          *(_WORD *)v16 = (v22 - 3) | (((_WORD)v15 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v33 + 16));
          v13 = (char *)v32;
          goto LABEL_15;
        }
        a3 = v36;
        v9 = v33;
      }
      if ( v16 >= v13 )
        goto LABEL_18;
      LOBYTE(a3) = *v15 | a3;
      *v16 = *v15;
      v22 = 1LL;
      v23 = 1LL;
      v36 = a3;
      v18 = (unsigned __int8)v18 & ~(1 << v19);
LABEL_15:
      v24 = &v16[v23];
      v25 = &v15[v22];
      v16 = v24;
      v15 = v25;
      v19 = ((_BYTE)v19 + 1) & 7;
      if ( v19 )
      {
        v26 = (unsigned __int64)v25 < v7;
LABEL_17:
        v12 = a7;
        if ( !v26 )
          goto LABEL_18;
      }
      else
      {
        v26 = (unsigned __int64)v25 < v7;
        if ( (unsigned __int64)v25 >= v7 )
          goto LABEL_17;
        v29 = v34;
        v16 = v24 + 1;
        v13 = (char *)v32;
        v34 = v24;
        v12 = a7;
        *v29 = v18;
        LOBYTE(v18) = 0;
      }
    }
  }
  if ( (unsigned __int64)v15 < v7 )
  {
    v31 = (unsigned int)(v7 - (_DWORD)a2);
    if ( (unsigned __int64)&v8[v31 + 2] > a5 )
    {
      return 3221225507LL;
    }
    else
    {
      memmove(v14, a2, (unsigned int)v31);
      *a6 = v31 + 2;
      *(_WORD *)v8 = (v31 - 1) & 0xFFF | 0x3000;
      return 0LL;
    }
  }
  else
  {
    if ( v20 >= v13 )
      LODWORD(v16) = (_DWORD)v16 - 1;
    else
      *v20 = v18;
    v27 = (_DWORD)v16 - (_DWORD)v8;
    *a6 = v27;
    *(_WORD *)v8 = (v27 - 3) & 0xFFF | 0xB000;
    if ( !(_BYTE)a3 )
      return 279;
    return v17;
  }
}
