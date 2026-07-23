/*
 * XREFs of LZNT1CompressChunk @ 0x140B66310
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x140B66200 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     LZNT1FindMatchStandard @ 0x140B66610 (LZNT1FindMatchStandard.c)
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
  char v8; // r8
  char *v9; // r12
  __int64 *v10; // r9
  __int64 v13; // rcx
  char *v14; // rdx
  void *v15; // r11
  char *v16; // rbx
  char *v17; // rdi
  unsigned int v18; // r10d
  int v19; // esi
  int v20; // r15d
  char *v21; // rax
  int *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rcx
  char *v25; // rcx
  char *v26; // rax
  bool v27; // cf
  int v28; // edi
  char *v30; // rax
  int v31; // eax
  __int64 v32; // rbp
  unsigned __int64 v33; // [rsp+20h] [rbp-58h]
  __int64 *v34; // [rsp+28h] [rbp-50h]
  char *v35; // [rsp+30h] [rbp-48h]
  _WORD *v36; // [rsp+38h] [rbp-40h]
  char v37; // [rsp+88h] [rbp+10h]

  v8 = 0;
  v9 = a4;
  v37 = 0;
  v10 = &LZNT1Formats;
  v34 = &LZNT1Formats;
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    a3 = (unsigned __int64)(a2 + 4096);
  v13 = a7;
  v14 = (char *)a5;
  v15 = v9 + 2;
  v36 = v9 + 2;
  v16 = a2;
  v17 = v9 + 3;
  if ( (unsigned __int64)(v9 + 4095) < a5 )
    v14 = v9 + 4095;
  *(_QWORD *)a7 = a2;
  v18 = 0;
  v33 = (unsigned __int64)v14;
  LOBYTE(v19) = 0;
  *(_QWORD *)(a7 + 8) = a3;
  *(_DWORD *)(a7 + 16) = 4098;
  LOBYTE(v20) = 0;
  v21 = v9 + 2;
  if ( (unsigned __int64)a2 < a3 )
  {
    v35 = v9 + 2;
    v22 = &dword_140B733AC;
    while ( 1 )
    {
      if ( &a2[*v22] < v16 )
      {
        do
        {
          v31 = *((_DWORD *)v10 + 7);
          v10 = (__int64 *)((char *)v10 + 20);
          *(_DWORD *)(v13 + 16) = v31;
          v22 = (int *)v10 + 3;
        }
        while ( &a2[*((unsigned int *)v10 + 3)] < v16 );
        v34 = v10;
      }
      if ( (unsigned __int64)(v16 + 3) <= a3 )
      {
        if ( a1 == LZNT1FindMatchStandard )
          LODWORD(v23) = LZNT1FindMatchStandard(v16, v13);
        else
          LODWORD(v23) = guard_dispatch_icall_no_overrides(v16, v13);
        v14 = (char *)v33;
        if ( (_DWORD)v23 )
        {
          if ( (unsigned __int64)(v17 + 1) >= v33 )
          {
LABEL_18:
            v21 = v35;
            v18 = 0;
            v8 = v37;
            v9 = a4;
            v15 = v36;
            break;
          }
          v10 = v34;
          v24 = 2LL;
          v23 = (int)v23;
          v8 = v37;
          v19 = (unsigned __int8)v19 | (1 << v20);
          *(_WORD *)v17 = (v23 - 3) | (((_WORD)v16 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v34 + 16));
          v14 = (char *)v33;
          goto LABEL_15;
        }
        v8 = v37;
        v10 = v34;
      }
      if ( v17 >= v14 )
        goto LABEL_18;
      v8 |= *v16;
      *v17 = *v16;
      v23 = 1LL;
      v24 = 1LL;
      v37 = v8;
      v19 = (unsigned __int8)v19 & ~(1 << v20);
LABEL_15:
      v25 = &v17[v24];
      v26 = &v16[v23];
      v17 = v25;
      v16 = v26;
      v20 = ((_BYTE)v20 + 1) & 7;
      if ( v20 )
      {
        v27 = (unsigned __int64)v26 < a3;
LABEL_17:
        v13 = a7;
        if ( !v27 )
          goto LABEL_18;
      }
      else
      {
        v27 = (unsigned __int64)v26 < a3;
        if ( (unsigned __int64)v26 >= a3 )
          goto LABEL_17;
        v30 = v35;
        v17 = v25 + 1;
        v14 = (char *)v33;
        v35 = v25;
        v13 = a7;
        *v30 = v19;
        LOBYTE(v19) = 0;
      }
    }
  }
  if ( (unsigned __int64)v16 < a3 )
  {
    v32 = (unsigned int)(a3 - (_DWORD)a2);
    if ( (unsigned __int64)&v9[v32 + 2] > a5 )
    {
      return 3221225507LL;
    }
    else
    {
      memmove(v15, a2, (unsigned int)v32);
      *a6 = v32 + 2;
      *(_WORD *)v9 = (v32 - 1) & 0xFFF | 0x3000;
      return 0LL;
    }
  }
  else
  {
    if ( v21 >= v14 )
      LODWORD(v17) = (_DWORD)v17 - 1;
    else
      *v21 = v19;
    v28 = (_DWORD)v17 - (_DWORD)v9;
    *a6 = v28;
    *(_WORD *)v9 = (v28 - 3) & 0xFFF | 0xB000;
    if ( !v8 )
      return 279;
    return v18;
  }
}
