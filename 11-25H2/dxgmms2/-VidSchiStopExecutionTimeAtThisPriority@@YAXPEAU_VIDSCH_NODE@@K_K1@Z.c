/*
 * XREFs of ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1400383D8
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1400090A0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x140047F6C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1400483F0 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSetPriorityContext @ 0x1400488DC (VidSchiSetPriorityContext.c)
 * Callees:
 *     McTemplateK0pqxq_EtwWriteTransfer @ 0x1400384C4 (McTemplateK0pqxq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiStopExecutionTimeAtThisPriority(unsigned __int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  struct _VIDSCH_NODE *v6; // rsi
  __int64 v7; // rdi
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  __int64 v11; // rdx

  v6 = (struct _VIDSCH_NODE *)a1;
  v7 = gulPriorityToYieldPriorityBand[a2];
  if ( (_DWORD)v7 )
  {
    v8 = (unsigned __int64 *)(a1 + 2088 + 8 * v7);
    do
    {
      if ( *(v8 - 8) )
      {
        v9 = *v8 - *(v8 - 4);
        *(v8 - 4) = 0LL;
        v10 = a3 + v9;
        *v8 = v10;
        if ( (byte_140081241 & 2) != 0 )
        {
          if ( is_mul_ok(v10, 0x989680uLL) )
          {
            v11 = v10 * (unsigned __int128)0x989680uLL % a4;
            v10 = v10 * (unsigned __int128)0x989680uLL / a4;
          }
          else
          {
            a1 = v10 / a4;
            v11 = 10000000 * (v10 % a4) % a4;
            LODWORD(v10) = 10000000 * (v10 / a4) + 10000000 * (v10 % a4) / a4;
          }
          McTemplateK0pqxq_EtwWriteTransfer(
            a1,
            v11,
            v10,
            *(_QWORD *)(*((_QWORD *)v6 + 3) + 16LL),
            v7,
            v10,
            *((_WORD *)v6 + 2));
        }
      }
      --v8;
      LODWORD(v7) = v7 - 1;
    }
    while ( (_DWORD)v7 );
  }
}
