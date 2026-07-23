/*
 * XREFs of HalpRemoveProfileSourceFromList @ 0x140543948
 * Callers:
 *     EmonRemoveProfileSourceEnhanced @ 0x14055B770 (EmonRemoveProfileSourceEnhanced.c)
 *     EmonRemoveProfileSourceOriginal @ 0x14055B870 (EmonRemoveProfileSourceOriginal.c)
 *     Amd64RemoveProfileSource @ 0x140569A10 (Amd64RemoveProfileSource.c)
 * Callees:
 *     KeSubtractAffinityEx2 @ 0x1402B2C40 (KeSubtractAffinityEx2.c)
 *     HalpGetProfileDescriptor @ 0x1404AB874 (HalpGetProfileDescriptor.c)
 */

char __fastcall HalpRemoveProfileSourceFromList(int *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  char result; // al
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  if ( (int)HalpGetProfileDescriptor(*a1, a2, &v9) < 0 )
    return 0;
  v5 = v9;
  *v3 = v9;
  if ( KeSubtractAffinityEx2(
         (struct _KAFFINITY_EX *)(v5 + 32),
         (struct _KAFFINITY_EX *)(v4 + 8),
         (struct _KAFFINITY_EX *)(v5 + 32)) )
  {
    return 0;
  }
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v6 + 8) != v5 + 8 || (v7 = *(_QWORD **)(v5 + 16), *v7 != v5 + 8) )
    __fastfail(3u);
  *v7 = v6;
  result = 1;
  *(_QWORD *)(v6 + 8) = v7;
  return result;
}
