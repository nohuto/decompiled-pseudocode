/*
 * XREFs of PipCreateDependencyNode @ 0x14071C21C
 * Callers:
 *     IoResolveDependency @ 0x1404B4110 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x14071BC90 (IoDuplicateDependency.c)
 *     PipSetDependency @ 0x14071C634 (PipSetDependency.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1406F35EC (PipDeleteDependencyNode.c)
 *     PipAddBindingId @ 0x14071BF24 (PipAddBindingId.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PipCreateDependencyNode(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rax

  Pool2 = ExAllocatePool2(0x40uLL, 0x60uLL, 0x53706E50u);
  v3 = Pool2;
  if ( Pool2 )
  {
    v4 = (_QWORD *)(Pool2 + 56);
    v4[1] = v4;
    *v4 = v4;
    *(_QWORD *)(v3 + 40) = v3 + 32;
    *(_QWORD *)(v3 + 32) = v3 + 32;
    *(_QWORD *)(v3 + 24) = v3 + 16;
    *(_QWORD *)(v3 + 16) = v3 + 16;
    *(_QWORD *)(v3 + 80) = v3 + 72;
    *(_QWORD *)(v3 + 72) = v3 + 72;
    *(_DWORD *)(v3 + 88) = 0;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_DWORD *)(v3 + 92) = 0;
    v5 = (__int64 *)qword_140F8C3D8;
    if ( *(__int64 **)qword_140F8C3D8 != &PiDependencyNodeListHead )
      __fastfail(3u);
    *(_QWORD *)v3 = &PiDependencyNodeListHead;
    *(_QWORD *)(v3 + 8) = v5;
    *v5 = v3;
    qword_140F8C3D8 = v3;
    if ( *(_DWORD *)a1 == 1 )
    {
      if ( PipAddBindingId(v3, *(const UNICODE_STRING **)(a1 + 8)) < 0 )
      {
        PipDeleteDependencyNode((_QWORD *)v3);
        return 0LL;
      }
    }
    else if ( !*(_DWORD *)a1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(v3 + 88);
      *(_QWORD *)(v3 + 48) = v6;
      *(_QWORD *)(*(_QWORD *)(v6 + 312) + 80LL) = v3;
    }
    ++*(_DWORD *)(v3 + 88);
  }
  return v3;
}
