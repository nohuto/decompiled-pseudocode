/*
 * XREFs of MiInsertSubsectionNode @ 0x140291B54
 * Callers:
 *     MiAppendSubsectionChain @ 0x140470BE4 (MiAppendSubsectionChain.c)
 *     MiCreateDataFileMap @ 0x14098A990 (MiCreateDataFileMap.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

char __fastcall MiInsertSubsectionNode(__int64 a1, unsigned __int64 a2, int a3)
{
  bool v3; // bl
  unsigned __int64 *v4; // rdi
  KIRQL v7; // si
  _QWORD *v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax
  char result; // al
  __int64 v14; // rdx

  v3 = 0;
  v4 = (unsigned __int64 *)(a1 + 280);
  if ( a3 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = (_QWORD *)*v4;
  if ( !*v4 )
    goto LABEL_12;
  while ( 1 )
  {
    v9 = *(unsigned int *)(a2 + 36) | ((*(_DWORD *)(a2 + 32) & 0xFFC0LL) << 26);
    v10 = *((unsigned int *)v8 - 5) | ((*(_DWORD *)(v8 - 3) & 0xFFC0LL) << 26);
    v11 = v10 + *((unsigned int *)v8 - 4);
    if ( *((_DWORD *)v8 - 6) < 0x100000u )
      --v11;
    if ( v9 >= v10 || v9 > v11 )
      break;
    v12 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_12;
LABEL_9:
    v8 = v12;
  }
  v12 = (_QWORD *)v8[1];
  if ( v12 )
    goto LABEL_9;
  v3 = 1;
LABEL_12:
  result = RtlAvlInsertNodeEx(v4, (unsigned __int64)v8, v3, (_QWORD *)(a2 + 56));
  ++v4[1];
  v4[2] = a2;
  if ( v7 != 17 )
  {
    LOBYTE(v14) = v7;
    return MiReleaseSpinLockExclusive(a1 + 72, v14);
  }
  return result;
}
