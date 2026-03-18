/*
 * XREFs of KeGetTopologySiblingAffinityForProcessor @ 0x1404E752C
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140206A10 (KeQueryLogicalProcessorRelationship.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D6E5C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B5004 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall KeGetTopologySiblingAffinityForProcessor(__int64 a1, int a2, struct _KAFFINITY_EX *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rax

  v5 = a2 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 || !(unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(a1) )
          __fastfail(5u);
        v8 = 47424LL;
      }
      else
      {
        v8 = 35856LL;
      }
    }
    else
    {
      v8 = 40128LL;
    }
  }
  else
  {
    v8 = 40720LL;
  }
  KiCopyAffinityEx(a3, a3->Size, (struct _KAFFINITY_EX *)(a1 + v8));
}
