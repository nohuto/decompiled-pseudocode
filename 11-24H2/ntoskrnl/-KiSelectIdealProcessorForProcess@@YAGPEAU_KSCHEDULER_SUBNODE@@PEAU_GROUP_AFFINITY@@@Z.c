/*
 * XREFs of ?KiSelectIdealProcessorForProcess@@YAGPEAU_KSCHEDULER_SUBNODE@@PEAU_GROUP_AFFINITY@@@Z @ 0x14032B5C4
 * Callers:
 *     KiSetIdealNodeProcessByGroup @ 0x14032B52C (KiSetIdealNodeProcessByGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectIdealProcessorForProcess(struct _KSCHEDULER_SUBNODE *a1, struct _GROUP_AFFINITY *a2)
{
  unsigned __int64 Mask; // rbx
  unsigned __int64 LLCLeaders; // rdi
  int Group; // r8d
  unsigned __int64 v6; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  Mask = a2->Mask;
  LLCLeaders = a1->LLCLeaders;
  Group = a2->Group;
  v6 = a2->Mask & a1->Affinity.Mask;
  if ( LLCLeaders )
  {
    LOBYTE(v7) = a1->ProcessSeed & 0x3F;
    v8 = ~((1LL << v7) - 1) & LLCLeaders;
    do
    {
      v9 = v8 & ~(1LL << v7);
      v8 = LLCLeaders;
      if ( v9 )
        v8 = v9;
      _BitScanForward64((unsigned __int64 *)&v7, v8);
      v10 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + (unsigned int)((Group << 6) + v7))];
    }
    while ( (*(_QWORD *)(v10 + 36464) & Mask) == 0 );
    _BitScanForward64(&v6, *(_QWORD *)(v10 + 36464) & Mask);
    a1->ProcessSeed = v6;
  }
  else
  {
    _BitScanForward64(&v6, v6);
  }
  return *((unsigned __int16 *)qword_140F22998 + 2 * (unsigned int)(v6 + (Group << 6)));
}
