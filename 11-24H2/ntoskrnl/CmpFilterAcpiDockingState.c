/*
 * XREFs of CmpFilterAcpiDockingState @ 0x1407D402C
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1407D2A94 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpFilterAcpiDockingState(unsigned __int16 *a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  char v7; // r13
  char v8; // r10
  int v9; // r12d
  __int64 v12; // rdi
  unsigned int v13; // ecx
  SIZE_T v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // r8d
  int v17; // r14d
  __int64 v18; // rcx
  char v19; // r8
  unsigned int v20; // ebx
  unsigned int v21; // edi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rbp
  void *v25; // rcx
  char v27; // [rsp+20h] [rbp-38h]
  char v28; // [rsp+24h] [rbp-34h]
  int v29; // [rsp+28h] [rbp-30h]
  int v30; // [rsp+2Ch] [rbp-2Ch]
  int v31; // [rsp+78h] [rbp+20h]

  v31 = a4;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  v30 = 0;
  v9 = a2;
  v28 = 0;
  LOBYTE(a2) = 0;
  v27 = 0;
  v29 = a2;
  if ( a6 && *(_DWORD *)(a6 + 4) )
  {
    do
    {
      v12 = 3 * v6;
      if ( (*(_DWORD *)(a6 + 24 * v6 + 12) & 3) == 0 || (*(_DWORD *)(a6 + 24 * v6 + 12) & 3) == (*a1 & 3) )
      {
        v13 = *(_DWORD *)(a6 + 24 * v6 + 16);
        if ( v13 == a1[1] )
        {
          v14 = RtlCompareMemory(a1 + 2, *(const void **)(a6 + 24 * v6 + 24), v13);
          a4 = v31;
          v8 = v28;
          if ( *(_DWORD *)(a6 + 24 * v6 + 16) == v14 )
          {
            v15 = *(_DWORD *)(a5 + 4);
            v16 = 0;
            if ( v15 )
            {
              v17 = v29;
              do
              {
                v18 = 32LL * v16;
                if ( *(_DWORD *)(v18 + a5 + 28) == *(_DWORD *)(a6 + 8 * v12 + 8) )
                {
                  *(_DWORD *)(v18 + a5 + 32) |= 2u;
                  v7 = 1;
                  v15 = *(_DWORD *)(a5 + 4);
                }
                if ( v9 == *a1 )
                {
                  v17 = (unsigned __int8)v17;
                  if ( !a3 )
                    v17 = 1;
                }
                if ( *(_DWORD *)(a6 + 8 * v12 + 8) == v31 )
                  v8 = 1;
                ++v16;
              }
              while ( v16 < v15 );
              v29 = v17;
              LODWORD(v6) = v30;
              v28 = v8;
            }
          }
        }
      }
      v6 = (unsigned int)(v6 + 1);
      v30 = v6;
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a6 + 4) );
    LOBYTE(a2) = v29;
    if ( (_BYTE)v29 )
      goto LABEL_24;
  }
  if ( a3 || v7 || v9 != *a1 )
  {
LABEL_24:
    v19 = 0;
  }
  else
  {
    v19 = 1;
    v27 = 1;
    v7 = 1;
  }
  v20 = 0;
  if ( *(_DWORD *)(a5 + 4) )
  {
    v21 = 1;
    do
    {
      v22 = 32LL * v20;
      v23 = *(_DWORD *)(v22 + a5 + 32);
      if ( (_BYTE)a2 )
      {
        if ( (v23 & 2) == 0 )
          goto LABEL_38;
        if ( !v8 )
        {
          *(_DWORD *)(v22 + a5 + 32) = v23 | 8;
          goto LABEL_31;
        }
      }
      else
      {
        if ( (v23 & 4) != 0 && !v7 || (v23 & 1) != 0 || (v23 & 2) != 0 )
          goto LABEL_31;
        if ( !v19 )
        {
LABEL_38:
          v24 = 32LL * v20;
          v25 = *(void **)(a5 + v24 + 16);
          if ( v25 )
          {
            ExFreePoolWithTag(v25, 0x20204D43u);
            *(_QWORD *)(a5 + v24 + 16) = 0LL;
          }
          if ( *(_DWORD *)(a5 + 4) - v20 != 1 )
            memmove(
              (void *)(a5 + 32LL * v20 + 8),
              (const void *)(a5 + 32LL * v21 + 8),
              32LL * (*(_DWORD *)(a5 + 4) - v20 - 1));
          --*(_DWORD *)(a5 + 4);
          LOBYTE(a2) = v29;
          goto LABEL_43;
        }
      }
      if ( *(_DWORD *)(v22 + a5 + 28) != a4 )
        goto LABEL_38;
LABEL_31:
      ++v20;
      ++v21;
LABEL_43:
      a4 = v31;
      v19 = v27;
      v8 = v28;
    }
    while ( v20 < *(_DWORD *)(a5 + 4) );
  }
  return 0LL;
}
