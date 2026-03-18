/*
 * XREFs of VidSchInvalidateHwContext @ 0x1400526B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     McTemplateK0dp_EtwWriteTransfer @ 0x14004F8F0 (McTemplateK0dp_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchInvalidateHwContext(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  _BYTE *v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // r8
  char v15; // al
  _BYTE *v16; // rax
  int v17; // eax
  bool IsLimitExhausted; // al
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v2 + 32);
  VidSchMarkDeviceAsError(v2, 7);
  v7 = *(_QWORD *)(v3 + 1776);
  if ( v7 && (a2 & 1) == 0 )
  {
    v8 = *(_QWORD *)(v2 + 40);
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
    {
      v10 = (_BYTE *)(v7 + 2821);
      *(_QWORD *)(v7 + 2808) = *(_QWORD *)(v9 + 56);
      v11 = *(_QWORD *)(v8 + 2648);
      if ( !v11 )
        goto LABEL_12;
      v12 = 15LL;
      v13 = (_BYTE *)(v7 + 2821);
      v14 = v11 - (_QWORD)v10;
      do
      {
        if ( v12 == -2147483631 )
          break;
        v15 = v13[v14];
        if ( !v15 )
          break;
        *v13++ = v15;
        --v12;
      }
      while ( v12 );
      v16 = v13 - 1;
      if ( v12 )
        v16 = v13;
      *v16 = 0;
      if ( !v12 )
LABEL_12:
        *v10 = 0;
      *(_DWORD *)(v7 + 2836) = *(_DWORD *)(a1 + 84);
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v2 + 40) + 2632LL) )
    {
      v17 = *(_DWORD *)(v2 + 48);
      if ( (v17 & 8) == 0 && (v17 & 1) == 0 )
      {
        TdrHistoryUpdate((struct _TDR_HISTORY *)(v8 + 40), (const struct _TDR_RECOVERY_CONTEXT *)v7);
        IsLimitExhausted = TdrHistoryIsLimitExhausted(
                             (const struct _TDR_HISTORY *)(v8 + 40),
                             (const struct _TDR_RECOVERY_CONTEXT *)v7,
                             1);
        *(_BYTE *)(v7 + 2820) = IsLimitExhausted;
        if ( IsLimitExhausted )
        {
          v19 = *(_QWORD *)(v8 + 2624);
          v20 = (unsigned __int64)*(unsigned int *)(v6 + 4) >> 5;
          v21 = *(_DWORD *)(v6 + 4) & 0x1F;
          *(_DWORD *)(v19 + 4 * v20) |= 1 << (*(_BYTE *)(v6 + 4) & 0x1F);
          if ( (byte_140081241 & 1) != 0 )
            McTemplateK0dp_EtwWriteTransfer(v21, v19, v20, *(_DWORD *)(v6 + 4), *(_QWORD *)(v7 + 2808));
        }
      }
    }
  }
  return 0LL;
}
