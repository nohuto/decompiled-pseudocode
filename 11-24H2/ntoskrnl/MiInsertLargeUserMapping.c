/*
 * XREFs of MiInsertLargeUserMapping @ 0x14036ECE0
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 * Callees:
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiWriteLargePte @ 0x1403090A0 (MiWriteLargePte.c)
 *     MiGetLargePteAddress @ 0x14036EE90 (MiGetLargePteAddress.c)
 *     MiInitializeLargeUserBasePfn @ 0x1404F5550 (MiInitializeLargeUserBasePfn.c)
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
  __int64 v19; // rsi
  unsigned int i; // edx
  unsigned int v21; // ecx
  _KPROCESS *Process; // [rsp+60h] [rbp+8h]
  unsigned __int64 v23; // [rsp+70h] [rbp+18h]
  int v25; // [rsp+80h] [rbp+28h]

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
    return MiIncreaseUsedPtes((__int64)v17, ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v16, 2);
  return result;
}
