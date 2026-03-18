/*
 * XREFs of HUBDSM_GettingLanguageIdStringDescriptor @ 0x140022A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x14002B54C (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingLanguageIdStringDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  int Descriptor; // eax
  __int64 v5; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(void **)(v1 + 2032);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  *(_QWORD *)(v1 + 2032) = 0LL;
  Descriptor = HUBDTX_GetDescriptor(v1, (int)v1 + 1740, 255, 3, 0, 0);
  if ( Descriptor < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = Descriptor;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x2Cu,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v5);
    }
    HUBSM_AddEvent(v1 + 512, 4004);
  }
  return 1000LL;
}
