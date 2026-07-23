/*
 * XREFs of MiInsertPageFileMemoryExtents @ 0x140682F58
 * Callers:
 *     MiCreatePagefileMemoryExtents @ 0x1407EDFFC (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiComparePageFileMemoryExtents @ 0x140682A74 (MiComparePageFileMemoryExtents.c)
 */

__int64 __fastcall MiInsertPageFileMemoryExtents(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  KIRQL v5; // cl
  unsigned __int64 v6; // rbx
  int v7; // r12d
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rsi
  signed __int64 v12; // rdi
  BOOLEAN v13; // r8
  int v14; // ebp
  unsigned __int64 v15; // rax
  char v16; // al
  KIRQL v19; // [rsp+68h] [rbp+10h]

  v2 = (_DWORD *)(a1 + 200);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v6 = *(_QWORD *)a2;
  v19 = v5;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v6 )
    v6 ^= a2;
  v7 = *(_BYTE *)(a2 + 8) & 1;
  if ( v6 )
  {
    v8 = a1 + 224;
    while ( 1 )
    {
      v9 = *(_QWORD *)v6;
      if ( *(_QWORD *)v6 )
        break;
      v10 = (_QWORD *)(v6 + 8);
      v9 = *(_QWORD *)(v6 + 8);
      if ( v9 )
      {
LABEL_9:
        if ( v7 )
          v6 ^= v9;
        else
          v6 = v9;
        *v10 = 0LL;
      }
      else
      {
        v11 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v7 && v11 )
          v11 ^= v6;
        v12 = *(_QWORD *)v8;
        if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v12 )
          v12 ^= v8;
        v13 = 0;
        v14 = *(_BYTE *)(v8 + 8) & 1;
        if ( v12 )
        {
          while ( 1 )
          {
            if ( (int)MiComparePageFileMemoryExtents((_DWORD *)(v6 + 24), v12) < 0 )
            {
              v15 = *(_QWORD *)v12;
              if ( v14 )
              {
                if ( !v15 )
                  goto LABEL_31;
                v15 ^= v12;
              }
              if ( !v15 )
              {
LABEL_31:
                v13 = 0;
                break;
              }
            }
            else
            {
              v15 = *(_QWORD *)(v12 + 8);
              if ( v14 )
              {
                if ( !v15 )
                  goto LABEL_25;
                v15 ^= v12;
              }
              if ( !v15 )
              {
LABEL_25:
                v13 = 1;
                break;
              }
            }
            v12 = v15;
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)v8, (PRTL_BALANCED_NODE)v12, v13, (PRTL_BALANCED_NODE)v6);
        if ( !v11 )
        {
          v5 = v19;
          v2 = (_DWORD *)(a1 + 200);
          goto LABEL_35;
        }
        v6 = v11;
      }
    }
    v10 = (_QWORD *)v6;
    goto LABEL_9;
  }
LABEL_35:
  v16 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (v16 & 1) != 0 )
    *(_BYTE *)(a2 + 8) = 1;
  return MiReleaseSpinLockExclusive(v2, v5);
}
