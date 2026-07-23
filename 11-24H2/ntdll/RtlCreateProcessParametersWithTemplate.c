/*
 * XREFs of RtlCreateProcessParametersWithTemplate @ 0x1800E1DB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateProcessParametersInternal @ 0x1800E1EE0 (RtlCreateProcessParametersInternal.c)
 */

__int64 __fastcall RtlCreateProcessParametersWithTemplate(int a1, __int64 a2, int a3)
{
  return RtlCreateProcessParametersInternal(
           a1,
           (int)a2 + 96,
           *(_QWORD *)(a2 + 88) != 0LL ? a2 + 80 : 0,
           *(_QWORD *)(a2 + 64) != 0LL ? a2 + 56 : 0,
           (a2 + 112) & -(__int64)(*(_QWORD *)(a2 + 120) != 0LL),
           *(void **)(a2 + 128),
           (a2 + 176) & -(__int64)(*(_QWORD *)(a2 + 184) != 0LL),
           (a2 + 192) & -(__int64)(*(_QWORD *)(a2 + 200) != 0LL),
           (a2 + 208) & -(__int64)(*(_QWORD *)(a2 + 216) != 0LL),
           (a2 + 224) & -(__int64)(*(_QWORD *)(a2 + 232) != 0LL),
           (a2 + 1040) & -(__int64)(*(_QWORD *)(a2 + 1048) != 0LL),
           a3);
}
