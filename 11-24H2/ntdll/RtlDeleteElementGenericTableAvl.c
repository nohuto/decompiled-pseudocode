/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x180071B40
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     DeleteNodeFromTree @ 0x180072710 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x1800728B0 (RealPredecessor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlDeleteElementGenericTableAvl(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(); // rax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-18h]

  if ( !*((_DWORD *)a1 + 11) )
    return 0;
  v4 = *((_QWORD *)a1 + 2);
  while ( 1 )
  {
    v5 = (__int64 (__fastcall *)())*((_QWORD *)a1 + 9);
    if ( v5 == RtlCompareUnicodeString )
    {
      LOBYTE(v8) = v4 + 32;
      v6 = RtlCompareUnicodeStrings(
             *((_QWORD *)a1 + 1),
             (unsigned __int64)*a1 >> 1,
             *((_QWORD *)a2 + 1),
             (unsigned __int64)*a2 >> 1,
             v8);
    }
    else
    {
      v6 = ((__int64 (__fastcall *)(unsigned __int16 *, unsigned __int16 *, __int64))v5)(a1, a2, v4 + 32);
    }
    if ( v6 )
      break;
    v4 = *(_QWORD *)(v4 + 8);
LABEL_7:
    if ( !v4 )
      return 0;
  }
  if ( v6 == 1 )
  {
    v4 = *(_QWORD *)(v4 + 16);
    goto LABEL_7;
  }
  if ( v4 == *((_QWORD *)a1 + 7) )
    *((_QWORD *)a1 + 7) = RealPredecessor(v4);
  ++*((_DWORD *)a1 + 16);
  DeleteNodeFromTree(a1, v4);
  --*((_DWORD *)a1 + 11);
  *((_DWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  (*((void (__fastcall **)(unsigned __int16 *, __int64))a1 + 11))(a1, v4);
  return 1;
}
