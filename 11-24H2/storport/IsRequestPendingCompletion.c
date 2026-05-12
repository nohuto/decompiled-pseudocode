/*
 * XREFs of IsRequestPendingCompletion @ 0x1400BE9A0
 * Callers:
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x1400BFF70 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsRequestPendingCompletion(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  unsigned __int64 v5; // rbx
  __int16 v6; // cx
  unsigned __int16 *v7; // r11
  __int16 v8; // ax
  bool v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int i; // edi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx

  if ( a2 == 0xFFFF )
  {
    v11 = *(_QWORD *)(a1 + 856);
    v7 = (unsigned __int16 *)(*(_QWORD *)v11 + 16LL * *(unsigned __int16 *)(v11 + 34));
    if ( (v7[7] & 1) != *(_WORD *)(v11 + 36) )
    {
LABEL_15:
      v9 = 1;
      goto LABEL_16;
    }
    v9 = 0;
    for ( i = 0; ; ++i )
    {
      v14 = *(_QWORD *)(a1 + 864);
      if ( !v14 )
        break;
      v9 = 0;
      if ( i >= *(unsigned __int16 *)(a1 + 26) )
        break;
      v13 = (unsigned __int64)i << 7;
      v7 = (unsigned __int16 *)(*(_QWORD *)(v13 + v14) + 16LL * *(unsigned __int16 *)(v13 + v14 + 34));
      if ( (v7[7] & 1) != *(_WORD *)(v13 + v14 + 36) )
        goto LABEL_15;
    }
  }
  else
  {
    if ( a2 )
      v5 = ((unsigned __int64)a2 << 7) + *(_QWORD *)(a1 + 864) - 128LL;
    else
      v5 = *(_QWORD *)(a1 + 856);
    v6 = *(_WORD *)(v5 + 36);
    v7 = (unsigned __int16 *)(*(_QWORD *)v5 + 16LL * *(unsigned __int16 *)(v5 + 34));
    v8 = v7[7] & 1;
    v9 = v8 != v6;
    if ( v8 != v6 )
    {
      if ( !a2 )
      {
        v10 = *(_QWORD *)(a1 + 712);
LABEL_17:
        *a3 = *(unsigned __int16 *)(((unsigned __int64)v7[6] << 7) + *(_QWORD *)(v10 + 32) + 52);
        return v9;
      }
LABEL_16:
      v10 = 192LL * v7[5] + *(_QWORD *)(a1 + 728) - 192LL;
      goto LABEL_17;
    }
  }
  return v9;
}
