/*
 * XREFs of RtlSelfRelativeToAbsoluteSD2 @ 0x1800CF210
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800CEBBC (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlSelfRelativeToAbsoluteSD2(__int64 a1, unsigned int *a2)
{
  __int16 v4; // cx
  unsigned __int64 v5; // rbx
  __int64 v6; // r10
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r11
  __int64 v13; // r14
  bool v14; // zf
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax

  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( *a2 < 0x14 )
    return 3221225485LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 >= 0 )
    return 3221225703LL;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    v5 = 0LL;
    goto LABEL_39;
  }
  v5 = a1 + *(unsigned int *)(a1 + 4);
  if ( !v5 )
  {
LABEL_39:
    v6 = 0LL;
    goto LABEL_8;
  }
  v6 = (4LL * *(unsigned __int8 *)(v5 + 1) + 11) & 0xFFFFFFFCLL;
LABEL_8:
  if ( (v4 & 4) == 0 || !*(_DWORD *)(a1 + 16) )
  {
    v7 = 0LL;
LABEL_10:
    v8 = 0LL;
    goto LABEL_14;
  }
  v7 = a1 + *(unsigned int *)(a1 + 16);
  if ( !v7 )
    goto LABEL_10;
  v8 = (*(unsigned __int16 *)(v7 + 2) + 3LL) & 0xFFFFFFFCLL;
LABEL_14:
  if ( !*(_DWORD *)(a1 + 8) )
  {
    v9 = 0LL;
    goto LABEL_36;
  }
  v9 = a1 + *(unsigned int *)(a1 + 8);
  if ( !v9 )
  {
LABEL_36:
    v10 = 0LL;
    goto LABEL_17;
  }
  v10 = (4LL * *(unsigned __int8 *)(v9 + 1) + 11) & 0xFFFFFFFCLL;
LABEL_17:
  if ( (v4 & 0x10) != 0 && *(_DWORD *)(a1 + 12) )
  {
    v13 = *(unsigned int *)(a1 + 12);
    v14 = a1 + v13 == 0;
    v11 = a1 + v13;
    v12 = v11;
    if ( !v14 )
    {
      v15 = (*(unsigned __int16 *)(v11 + 2) + 3LL) & 0xFFFFFFFCLL;
      goto LABEL_22;
    }
  }
  else
  {
    v11 = 0LL;
    v12 = 0LL;
  }
  v15 = 0LL;
LABEL_22:
  v16 = v9 + v10;
  v17 = v6 + v5;
  if ( v5 <= v9 )
    v17 = v16;
  if ( v17 <= v7 )
    v17 = v8 + v7;
  if ( v17 <= v11 )
    v17 = v12 + v15;
  v18 = 40;
  if ( v17 )
    v18 = ((v17 - a1 - 13) & 0xFFFFFFF8) + 40;
  if ( v18 > *a2 )
  {
    *a2 = v18;
    return 3221225507LL;
  }
  else
  {
    if ( v17 )
      memmove((void *)(a1 + 40), (const void *)(a1 + 20), v18 - 40LL);
    *(_WORD *)(a1 + 2) &= ~0x8000u;
    *(_QWORD *)(a1 + 8) = (v5 + 20) & -(__int64)(v5 != 0);
    *(_QWORD *)(a1 + 16) = (v9 + 20) & -(__int64)(v9 != 0);
    *(_QWORD *)(a1 + 24) = (v11 + 20) & -(__int64)(v11 != 0);
    *(_QWORD *)(a1 + 32) = (v7 + 20) & -(__int64)(v7 != 0);
    return 0LL;
  }
}
