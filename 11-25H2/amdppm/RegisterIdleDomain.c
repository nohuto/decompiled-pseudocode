/*
 * XREFs of RegisterIdleDomain @ 0x140034510
 * Callers:
 *     RegisterKernelIdleDomains @ 0x140040420 (RegisterKernelIdleDomains.c)
 * Callees:
 *     <none>
 */

char __fastcall RegisterIdleDomain(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  char v3; // si
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 Pool2; // rax
  _QWORD *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx

  v2 = *(_QWORD *)(a1 + 536);
  v3 = 0;
  v5 = 3LL * a2;
  if ( *(_DWORD *)(v2 + 24LL * a2 + 24) >= **(_DWORD **)(a1 + 728) )
    return v3;
  v6 = qword_140014618;
  if ( (__int64 *)qword_140014618 == &qword_140014618 )
    goto LABEL_6;
  do
  {
    v7 = v6;
    if ( *(_DWORD *)(v6 + 36) == *(_DWORD *)(v2 + 24LL * a2 + 12) )
      break;
    v6 = *(_QWORD *)v6;
    v7 = 0LL;
  }
  while ( (__int64 *)v6 != &qword_140014618 );
  if ( !v7 )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(64LL, 312LL, 1919119952LL);
    v7 = Pool2;
    if ( !Pool2 )
      return v3;
    v9 = (_QWORD *)(Pool2 + 16);
    v9[1] = v9;
    *v9 = v9;
    v10 = (__int64 *)qword_140014620;
    if ( *(__int64 **)qword_140014620 != &qword_140014618 )
LABEL_15:
      __fastfail(3u);
    *(_QWORD *)v7 = &qword_140014618;
    *(_QWORD *)(v7 + 8) = v10;
    *v10 = v7;
    qword_140014620 = v7;
    KeInitializeAffinityEx2(v7 + 48, 32LL);
    *(_DWORD *)(v7 + 36) = *(_DWORD *)(v2 + 8 * v5 + 12);
    *(_DWORD *)(v7 + 40) = *(_DWORD *)(v2 + 8 * v5 + 16);
    *(_DWORD *)(v7 + 44) = *(_DWORD *)(v2 + 8 * v5 + 20);
  }
  v11 = *(_QWORD *)(a1 + 728);
  v12 = 32LL * *(unsigned int *)(v2 + 8 * v5 + 24);
  v13 = (_QWORD *)(v12 + v11 + 24);
  *(_QWORD *)(v12 + v11 + 16) = v7;
  v14 = *(_QWORD **)(v7 + 24);
  if ( *v14 != v7 + 16 )
    goto LABEL_15;
  v13[1] = v14;
  *v13 = v7 + 16;
  *v14 = v13;
  *(_QWORD *)(v7 + 24) = v13;
  if ( !(unsigned int)KeCheckProcessorAffinityEx(v7 + 48) )
  {
    KeAddProcessorAffinityEx(v7 + 48, *(unsigned int *)(a1 + 56));
    ++*(_DWORD *)(v7 + 32);
  }
  if ( *(_DWORD *)(v7 + 32) == *(_DWORD *)(v7 + 44) )
    return 1;
  return v3;
}
