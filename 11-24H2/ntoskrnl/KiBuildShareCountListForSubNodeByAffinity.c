/*
 * XREFs of KiBuildShareCountListForSubNodeByAffinity @ 0x14032A81C
 * Callers:
 *     KiPerformHeteroSoftParkElection @ 0x140329E98 (KiPerformHeteroSoftParkElection.c)
 *     KiCompleteKernelInit @ 0x140B57CA0 (KiCompleteKernelInit.c)
 * Callees:
 *     KeGetTopologySiblingGroupAffinityForProcessor @ 0x14032A8E4 (KeGetTopologySiblingGroupAffinityForProcessor.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int8 __fastcall KiBuildShareCountListForSubNodeByAffinity(
        void *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int v5; // r14d
  unsigned __int8 result; // al
  unsigned __int8 i; // bl
  unsigned __int8 v11; // cf
  unsigned __int8 *v12; // rdx
  __int64 v13; // r8
  unsigned __int8 j; // cl
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  result = (unsigned __int8)memset_0(a1, 0, 0x40uLL);
  for ( i = 0; i < 0x40u; ++i )
  {
    v11 = _bittest64(&a4, i);
    v15 = 0LL;
    if ( v11 )
    {
      KeGetTopologySiblingGroupAffinityForProcessor(
        KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * v5 + (unsigned int)i)],
        a5,
        &v15);
      v12 = (unsigned __int8 *)a1;
      v13 = a3 & v15;
      *(_QWORD *)&v15 = a3 & v15;
      for ( j = 0; j < 0x40u; ++j )
      {
        result = j;
        if ( _bittest64(&v13, j) )
        {
          result = *v12 + 1;
          *v12 = result;
        }
        ++v12;
      }
    }
  }
  return result;
}
