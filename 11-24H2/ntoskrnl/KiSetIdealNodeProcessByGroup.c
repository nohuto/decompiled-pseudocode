/*
 * XREFs of KiSetIdealNodeProcessByGroup @ 0x14032B52C
 * Callers:
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     KiExtendProcessAffinity @ 0x1405C6828 (KiExtendProcessAffinity.c)
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
 * Callees:
 *     ?KiSelectIdealProcessorForProcess@@YAGPEAU_KSCHEDULER_SUBNODE@@PEAU_GROUP_AFFINITY@@@Z @ 0x14032B5C4 (-KiSelectIdealProcessorForProcess@@YAGPEAU_KSCHEDULER_SUBNODE@@PEAU_GROUP_AFFINITY@@@Z.c)
 *     KeSelectNodeForAffinity @ 0x14032B690 (KeSelectNodeForAffinity.c)
 */

unsigned __int16 __fastcall KiSetIdealNodeProcessByGroup(__int64 a1, _WORD *a2, unsigned __int16 a3)
{
  unsigned __int16 *v3; // r11
  __int64 v5; // rdi
  unsigned __int64 v6; // r11
  struct _KSCHEDULER_SUBNODE *v7; // rcx
  __int64 v8; // rbx
  unsigned __int16 result; // ax
  struct _GROUP_AFFINITY v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(unsigned __int16 **)(a1 + 80);
  v10 = 0LL;
  v10.Group = a3;
  v5 = a3;
  if ( a3 >= *v3 )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)&v3[4 * a3 + 4];
  v10.Mask = v6;
  if ( !a2 )
    a2 = (_WORD *)KeSelectNodeForAffinity(&v10);
  v7 = *(struct _KSCHEDULER_SUBNODE **)&a2[4 * v5 + 16];
  v8 = *(_QWORD *)(a1 + 184);
  *(_WORD *)(v8 + 2 * v5 + 144) = *a2;
  v10.Mask = v6 & v7->Affinity.Mask;
  result = KiSelectIdealProcessorForProcess(v7, &v10);
  *(_WORD *)(v8 + 2 * v5 + 80) = result;
  *(_WORD *)(v8 + 2 * v5 + 16) = result;
  return result;
}
