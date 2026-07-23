/*
 * XREFs of MiInsertLargeUserMapping @ 0x14026AC6C
 * Callers:
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 * Callees:
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiGetLargePteAddress @ 0x14026AE10 (MiGetLargePteAddress.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiWriteLargePte @ 0x140312F80 (MiWriteLargePte.c)
 *     MiInitializeLargeUserBasePfn @ 0x1404F2E50 (MiInitializeLargeUserBasePfn.c)
 */

int __fastcall MiInsertLargeUserMapping(__int64 a1, unsigned __int64 a2, _QWORD **a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // r15
  __int64 v8; // r13
  unsigned int v9; // r9d
  unsigned __int64 LeafVa; // rbp
  _QWORD *LargePteAddress; // r12
  __int64 v12; // r10
  unsigned __int64 v13; // rbx
  unsigned int v14; // edx
  int result; // eax
  unsigned int v16; // edi
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rsi
  unsigned int i; // edx
  unsigned int v21; // ecx
  _KPROCESS *Process; // [rsp+60h] [rbp+8h]
  unsigned __int64 v23; // [rsp+70h] [rbp+18h]
  unsigned int v25; // [rsp+80h] [rbp+28h]

  v5 = a4;
  v7 = a2;
  v8 = MiPageSizes[a4];
  Process = KeGetCurrentThread()->ApcState.Process;
  LeafVa = MiGetLeafVa(a2);
  LargePteAddress = (_QWORD *)MiGetLargePteAddress(LeafVa, v9);
  v13 = (unsigned __int64)LargePteAddress;
  v14 = a5 | 0x80000000;
  v23 = MiPtesToSupportLargePageSizes[v5];
  if ( (*(_DWORD *)(v12 + 48) & 0x600000) == 0x600000 )
    v14 = a5;
  result = v14 | 0x4000000;
  if ( (_DWORD)v5 == 2 )
    result = v14;
  v16 = 0;
  v25 = result;
  while ( 1 )
  {
    v17 = *a3;
    if ( *a3 == a3 )
      break;
    if ( (_QWORD **)v17[1] != a3 || (v18 = (_QWORD *)*v17, *(_QWORD **)(*v17 + 8LL) != v17) )
      __fastfail(3u);
    *a3 = v18;
    v18[1] = a3;
    v19 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v17 + 0x44000000000LL) >> 4);
    MiInitializeLargeUserBasePfn(v17, v7, Process);
    for ( i = 0; i < v23; v16 = v21 )
    {
      v21 = v16 + 1;
      if ( *LargePteAddress )
        v21 = v16;
      ++i;
      ++LargePteAddress;
    }
    MiWriteLargePte(LeafVa, v19, a4, v25);
    v7 += 8 * v8;
    result = (_DWORD)v8 << 12;
    LeafVa += v8 << 12;
  }
  if ( v16 )
    return MiIncreaseUsedPtes(v17, ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v16);
  return result;
}
