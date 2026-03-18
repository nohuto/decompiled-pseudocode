/*
 * XREFs of MiInsertSubsectionNode @ 0x1402A7D14
 * Callers:
 *     MiAppendSubsectionChain @ 0x1402A6358 (MiAppendSubsectionChain.c)
 *     MiCreateDataFileMap @ 0x14093BE74 (MiCreateDataFileMap.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiInsertSubsectionNode(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // bl
  __int64 v4; // rdi
  KIRQL v7; // si
  _QWORD *v8; // r10
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx

  v3 = 0;
  v4 = a1 + 280;
  if ( (_DWORD)a3 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = *(_QWORD **)v4;
  if ( !*(_QWORD *)v4 )
    goto LABEL_12;
  while ( 1 )
  {
    a3 = *(unsigned int *)(a2 + 36) | ((*(_DWORD *)(a2 + 32) & 0xFFC0LL) << 26);
    v9 = *((unsigned int *)v8 - 5) | ((*(_DWORD *)(v8 - 3) & 0xFFC0LL) << 26);
    v10 = v9 + *((unsigned int *)v8 - 4);
    if ( *((_DWORD *)v8 - 6) < 0x100000u )
      --v10;
    if ( a3 >= v9 || a3 > v10 )
      break;
    v11 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_12;
LABEL_9:
    v8 = v11;
  }
  v11 = (_QWORD *)v8[1];
  if ( v11 )
    goto LABEL_9;
  v3 = 1;
LABEL_12:
  LOBYTE(a3) = v3;
  result = RtlAvlInsertNodeEx(v4, v8, a3, a2 + 56);
  ++*(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 16) = a2;
  if ( v7 != 17 )
  {
    LOBYTE(v13) = v7;
    return MiReleaseSpinLockExclusive(a1 + 72, v13);
  }
  return result;
}
