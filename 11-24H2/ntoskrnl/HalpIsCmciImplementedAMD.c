/*
 * XREFs of HalpIsCmciImplementedAMD @ 0x140B4E39C
 * Callers:
 *     HalpCmciInitProcessor @ 0x140478374 (HalpCmciInitProcessor.c)
 * Callees:
 *     HalpWheaReadMsrMisc @ 0x14047807C (HalpWheaReadMsrMisc.c)
 */

char HalpIsCmciImplementedAMD()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  unsigned int v3; // esi
  unsigned int v4; // ebp
  __int64 MsrMisc; // rax

  v0 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
LABEL_2:
  if ( !v0 )
    return 0;
  v1 = *(_QWORD *)(v0 + 172);
  if ( !HalpMcaNumberOfBanks )
  {
    v2 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v2;
  }
  v3 = 0;
  v4 = (unsigned __int8)HalpMcaNumberOfBanks;
  while ( 1 )
  {
    if ( v3 >= v4 )
    {
      v0 = *(_QWORD *)(v0 + 184);
      goto LABEL_2;
    }
    MsrMisc = HalpWheaReadMsrMisc(v1, v3);
    if ( MsrMisc < 0 && (MsrMisc & 0x6000000000000000LL) == 0x4000000000000000LL )
      return 1;
    ++v3;
  }
}
