/*
 * XREFs of RtlpExtendedHeapInformationGenerator @ 0x180140190
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpExtendedHeapInformationGenerator(__int64 a1, _QWORD *a2)
{
  _QWORD *v5; // r9
  _OWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _OWORD *v11; // rax
  char *v12; // rcx
  char *v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  _OWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rax
  _OWORD *v27; // rcx

  switch ( *(_DWORD *)a1 )
  {
    case 1:
      v27 = (_OWORD *)((a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
      a2[10] = v27;
      if ( (unsigned __int64)(v27 + 2) <= a2[11] )
      {
        *v27 = *(_OWORD *)(a1 + 16);
        v27[1] = *(_OWORD *)(a1 + 32);
        v27 = (_OWORD *)a2[10];
        a2[1] = v27;
      }
      a2[10] = v27 + 2;
      return 0LL;
    case 2:
      v5 = a2 + 10;
      v22 = (_OWORD *)((a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
      *v5 = v22;
      if ( (unsigned __int64)(v22 + 3) <= a2[11] )
      {
        *v22 = *(_OWORD *)(a1 + 16);
        v22[1] = *(_OWORD *)(a1 + 32);
        v22[2] = *(_OWORD *)(a1 + 48);
        v23 = a2[1];
        if ( v23 )
        {
          v24 = *v5 - a2[9];
          v25 = a2[2];
          if ( v25 )
            *(_QWORD *)(v25 + 40) = v24;
          else
            *(_QWORD *)(v23 + 24) = v24;
          a2[2] = *v5;
          v26 = a2 + 10;
        }
        else
        {
          v26 = v5;
        }
        v22 = (_OWORD *)*v5;
        v5 = v26;
        a2[3] = v22;
      }
      v11 = v22 + 3;
      break;
    case 3:
      v20 = (a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
      a2[10] = v20;
      if ( v20 + 40 <= a2[11] )
      {
        *(_OWORD *)v20 = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v20 + 16) = *(_OWORD *)(a1 + 32);
        *(_QWORD *)(v20 + 32) = *(_QWORD *)(a1 + 48);
        v21 = a2[4];
        if ( !v21 )
          v21 = a2[3];
        *(_QWORD *)(v21 + 32) = a2[10] - a2[9];
        v20 = a2[10];
        a2[4] = v20;
        a2[5] = v20;
      }
      a2[10] = v20 + 40;
      goto LABEL_45;
    case 4:
      v17 = (a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
      a2[10] = v17;
      if ( v17 + 40 <= a2[11] )
      {
        *(_OWORD *)v17 = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v17 + 16) = *(_OWORD *)(a1 + 32);
        *(_QWORD *)(v17 + 32) = *(_QWORD *)(a1 + 48);
        v18 = a2[10] - a2[9];
        v19 = a2[6];
        if ( v19 )
          *(_QWORD *)(v19 + 32) = v18;
        else
          *(_QWORD *)(a2[5] + 24LL) = v18;
        v17 = a2[10];
        a2[6] = v17;
        a2[7] = v17;
      }
      a2[10] = v17 + 40;
      goto LABEL_46;
    case 5:
      v12 = (char *)((a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
      a2[10] = v12;
      v13 = v12;
      v14 = *(_QWORD *)(a1 + 8) - 16LL;
      if ( (unsigned __int64)&v12[v14] >= v14 && (unsigned __int64)&v12[v14] <= a2[11] )
      {
        memmove(v12, (const void *)(a1 + 16), *(_QWORD *)(a1 + 8) - 16LL);
        v15 = a2[10] - a2[9];
        v16 = a2[8];
        if ( v16 )
          *(_QWORD *)(v16 + 32) = v15;
        else
          *(_QWORD *)(a2[7] + 24LL) = v15;
        v13 = (char *)a2[10];
        a2[8] = v13;
      }
      a2[10] = &v13[v14];
      return 0LL;
    case 0x80000000:
      v5 = a2 + 10;
      v6 = (_OWORD *)((a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
      *v5 = v6;
      if ( (unsigned __int64)(v6 + 10) <= a2[11] )
      {
        *v6 = *(_OWORD *)(a1 + 16);
        v6[1] = *(_OWORD *)(a1 + 32);
        v6[2] = *(_OWORD *)(a1 + 48);
        v6[3] = *(_OWORD *)(a1 + 64);
        v6[4] = *(_OWORD *)(a1 + 80);
        v6[5] = *(_OWORD *)(a1 + 96);
        v6[6] = *(_OWORD *)(a1 + 112);
        v6[7] = *(_OWORD *)(a1 + 128);
        v6[8] = *(_OWORD *)(a1 + 144);
        v6[9] = *(_OWORD *)(a1 + 160);
        v7 = a2[1];
        if ( v7 )
        {
          v8 = *v5 - a2[9];
          v9 = a2[2];
          if ( v9 )
            *(_QWORD *)(v9 + 40) = v8;
          else
            *(_QWORD *)(v7 + 24) = v8;
          a2[2] = *v5;
          v10 = a2 + 10;
        }
        else
        {
          v10 = v5;
        }
        v6 = (_OWORD *)*v5;
        v5 = v10;
        a2[3] = v6;
      }
      v11 = v6 + 10;
      break;
    default:
      return 3221225485LL;
  }
  *v5 = v11;
  a2[4] = 0LL;
  a2[5] = 0LL;
LABEL_45:
  a2[6] = 0LL;
  a2[7] = 0LL;
LABEL_46:
  a2[8] = 0LL;
  return 0LL;
}
