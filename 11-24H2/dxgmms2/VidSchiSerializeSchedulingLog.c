/*
 * XREFs of VidSchiSerializeSchedulingLog @ 0x14010B484
 * Callers:
 *     VidSchiCreateNodeSchedulingLog @ 0x1400523B8 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x140036F0C (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x140037154 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pqqxxxxqbr7_EtwWriteTransfer @ 0x1400437A4 (McTemplateK0pqqxxxxqbr7_EtwWriteTransfer.c)
 *     ?VidMmGetSchLogCpuVa@@YAPEAXPEAVVIDMM_SCH_LOG@@@Z @ 0x14004B4E0 (-VidMmGetSchLogCpuVa@@YAPEAXPEAVVIDMM_SCH_LOG@@@Z.c)
 */

int __fastcall VidSchiSerializeSchedulingLog(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned int v8; // edx
  __int64 v9; // rcx
  struct VIDMM_SCH_LOG *v10; // r10
  _DWORD *SchLogCpuVa; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r11d
  unsigned int v16; // ebx
  _DWORD *v17; // r14
  unsigned int v18; // edi
  int v19; // esi
  __int64 v21; // [rsp+20h] [rbp-88h]
  __int64 v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+50h] [rbp-58h]
  unsigned int v24; // [rsp+60h] [rbp-48h]
  int v25; // [rsp+B0h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 24);
  v25 = VidSchiSchedulerNodeToDriverEngine(v6, *(unsigned __int16 *)(a1 + 4));
  v24 = VidSchiSchedulerNodeToDriverNode(v9, v8);
  SchLogCpuVa = VidMmGetSchLogCpuVa(v10);
  v16 = 0;
  v17 = SchLogCpuVa;
  v18 = SchLogCpuVa[2];
  if ( SchLogCpuVa[1] || (v18 = *SchLogCpuVa) != 0 )
  {
    do
    {
      v19 = 1536;
      LODWORD(SchLogCpuVa) = v18 - v16;
      if ( v18 - v16 < 0x600 )
        v19 = v18 - v16;
      if ( (byte_140081243 & 8) != 0 )
      {
        LODWORD(v23) = 32 * v19;
        LODWORD(v22) = v15;
        LODWORD(v21) = v12;
        LODWORD(SchLogCpuVa) = McTemplateK0pqqxxxxqbr7_EtwWriteTransfer(
                                 (__int64)&v17[8 * v16 + 8],
                                 v12,
                                 v13,
                                 *(_QWORD *)(v6 + 16),
                                 v21,
                                 v22,
                                 v14,
                                 a5,
                                 a4,
                                 a6,
                                 v23,
                                 &v17[8 * v16 + 8]);
        v14 = a3;
        v15 = v25;
        v12 = v24;
      }
      v16 += v19;
    }
    while ( v16 < v18 );
  }
  return (int)SchLogCpuVa;
}
