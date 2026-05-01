/*
 * XREFs of ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180030804
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18005DA60 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180030128 (-RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z.c)
 */

__int64 __fastcall RmpUtilCreateWnfStateNameForApplicationClient(
        union _RM_SID *a1,
        __int64 a2,
        struct _WNF_STATE_NAME *a3)
{
  int v4; // eax
  void *v5; // rdi
  int WnfStateName; // ebx
  void *v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  v4 = RmpUtilCreateSecurityDescriptorForApplicationWnf(a1, &v8);
  v5 = v8;
  WnfStateName = v4;
  if ( v4 >= 0 )
  {
    WnfStateName = NtCreateWnfStateName(a3, 3LL, 0LL);
    if ( WnfStateName >= 0 )
      WnfStateName = 0;
  }
  if ( v5 )
    HampFreeHeap(v5);
  return (unsigned int)WnfStateName;
}
