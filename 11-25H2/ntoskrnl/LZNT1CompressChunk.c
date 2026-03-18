/*
 * XREFs of LZNT1CompressChunk @ 0x140B540B0
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x140B53FA0 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     LZNT1FindMatchStandard @ 0x140B543A0 (LZNT1FindMatchStandard.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(_QWORD),
        char *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  char v8; // r8
  __int64 *v9; // r10
  char *v10; // r15
  __int64 (__fastcall *v12)(_QWORD); // r9
  __int64 v13; // rdx
  char *v14; // rcx
  char *v15; // rdi
  char *v16; // r12
  char *v17; // rbx
  unsigned int v18; // r11d
  int v19; // esi
  int v20; // r14d
  int *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  char *v24; // rcx
  char *v25; // rax
  bool v26; // cf
  int v27; // edi
  int v29; // eax
  __int64 v30; // rbp
  unsigned __int64 v31; // [rsp+20h] [rbp-58h]
  __int64 *v32; // [rsp+28h] [rbp-50h]
  char v34; // [rsp+88h] [rbp+10h]

  v8 = 0;
  v9 = &LZNT1Formats;
  v34 = 0;
  v10 = a4;
  v32 = &LZNT1Formats;
  v12 = a1;
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    a3 = (unsigned __int64)(a2 + 4096);
  v13 = a7;
  v14 = (char *)a5;
  v15 = v10 + 3;
  v16 = v10 + 2;
  v17 = a2;
  if ( (unsigned __int64)(v10 + 4095) < a5 )
    v14 = v10 + 4095;
  *(_QWORD *)a7 = a2;
  v18 = 0;
  v31 = (unsigned __int64)v14;
  LOBYTE(v19) = 0;
  *(_QWORD *)(a7 + 8) = a3;
  *(_DWORD *)(a7 + 16) = 4098;
  LOBYTE(v20) = 0;
  if ( (unsigned __int64)a2 < a3 )
  {
    v16 = v10 + 2;
    v21 = &dword_140B610EC;
    while ( 1 )
    {
      if ( &a2[*v21] < v17 )
      {
        do
        {
          v29 = *((_DWORD *)v9 + 7);
          v9 = (__int64 *)((char *)v9 + 20);
          *(_DWORD *)(v13 + 16) = v29;
          v21 = (int *)v9 + 3;
        }
        while ( &a2[*((unsigned int *)v9 + 3)] < v17 );
        v32 = v9;
      }
      if ( (unsigned __int64)(v17 + 3) <= a3 )
      {
        if ( v12 == LZNT1FindMatchStandard )
          LODWORD(v22) = LZNT1FindMatchStandard(v17);
        else
          LODWORD(v22) = guard_dispatch_icall_no_overrides(v17);
        v14 = (char *)v31;
        if ( (_DWORD)v22 )
        {
          if ( (unsigned __int64)(v15 + 1) >= v31 )
          {
LABEL_18:
            v8 = v34;
            v18 = 0;
            v10 = a4;
            break;
          }
          v9 = v32;
          v23 = 2LL;
          v22 = (int)v22;
          v8 = v34;
          v19 = (unsigned __int8)v19 | (1 << v20);
          *(_WORD *)v15 = (v22 - 3) | (((_WORD)v17 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v32 + 16));
          goto LABEL_15;
        }
        v8 = v34;
        v9 = v32;
      }
      if ( v15 >= v14 )
        goto LABEL_18;
      v8 |= *v17;
      *v15 = *v17;
      v22 = 1LL;
      v23 = 1LL;
      v34 = v8;
      v19 = (unsigned __int8)v19 & ~(1 << v20);
LABEL_15:
      v24 = &v15[v23];
      v25 = &v17[v22];
      v15 = v24;
      v17 = v25;
      v20 = ((_BYTE)v20 + 1) & 7;
      if ( v20 )
      {
        v26 = (unsigned __int64)v25 < a3;
LABEL_17:
        v14 = (char *)v31;
        v13 = a7;
        v12 = a1;
        if ( !v26 )
          goto LABEL_18;
      }
      else
      {
        v26 = (unsigned __int64)v25 < a3;
        if ( (unsigned __int64)v25 >= a3 )
          goto LABEL_17;
        v13 = a7;
        v15 = v24 + 1;
        v12 = a1;
        *v16 = v19;
        v16 = v24;
        v14 = (char *)v31;
        LOBYTE(v19) = 0;
      }
    }
  }
  if ( (unsigned __int64)v17 < a3 )
  {
    v30 = (unsigned int)(a3 - (_DWORD)a2);
    if ( (unsigned __int64)&v10[v30 + 2] > a5 )
    {
      return 3221225507LL;
    }
    else
    {
      memmove(v10 + 2, a2, (unsigned int)v30);
      *a6 = v30 + 2;
      *(_WORD *)v10 = (v30 - 1) & 0xFFF | 0x3000;
      return 0LL;
    }
  }
  else
  {
    if ( v16 >= v14 )
      LODWORD(v15) = (_DWORD)v15 - 1;
    else
      *v16 = v19;
    v27 = (_DWORD)v15 - (_DWORD)v10;
    *a6 = v27;
    *(_WORD *)v10 = (v27 - 3) & 0xFFF | 0xB000;
    if ( !v8 )
      return 279;
    return v18;
  }
}
