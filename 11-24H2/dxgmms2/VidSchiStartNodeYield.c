/*
 * XREFs of VidSchiStartNodeYield @ 0x1400242C8
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x140008BD0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSelectContext @ 0x1400159F0 (VidSchiSelectContext.c)
 *     VidSchiScheduleCommandToRun @ 0x140018790 (VidSchiScheduleCommandToRun.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x140023930 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1400240F4 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1400249FC (McTemplateK0pqxx_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiStartNodeYield(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8

  v4 = *(_QWORD *)(a1 + 24);
  v8 = *(unsigned int *)(v4 + 224);
  if ( !*(_QWORD *)(v4 + 200) )
  {
    v9 = (_DWORD)v8 == 10 && a4 == 16 ? 9500LL : (unsigned int)(100 * a4 * v8);
    ExSetTimer(*(_QWORD *)(v4 + 192), -v9, v9, 0LL);
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
  }
  v10 = 100LL * *(_QWORD *)(a1 + 2128);
  *(_QWORD *)(a1 + 2120) = a2;
  result = a2 + 2 * (v10 / v8) + v10 / v8;
  *(_QWORD *)(v4 + 200) = result;
  if ( (byte_140081241 & 1) != 0 )
  {
    v12 = *(_QWORD *)(v4 + 200) - a2;
    if ( is_mul_ok(v12, 0x989680uLL) )
      v13 = v12 * (unsigned __int128)0x989680uLL / a3;
    else
      v13 = 10000000 * (v12 / a3) + 10000000 * ((*(_QWORD *)(v4 + 200) - a2) % a3) / a3;
    v14 = *(_QWORD *)(a1 + 2128);
    if ( is_mul_ok(v14, 0x989680uLL) )
      v15 = v14 * (unsigned __int128)0x989680uLL / a3;
    else
      v15 = 10000000 * (v14 / a3) + 10000000 * (*(_QWORD *)(a1 + 2128) % a3) / a3;
    return McTemplateK0pqxx_EtwWriteTransfer(
             *(unsigned __int16 *)(a1 + 4),
             (unsigned int)&EventYieldStartNode,
             v15,
             *(_QWORD *)(v4 + 16),
             *(_WORD *)(a1 + 4),
             v15,
             v13);
  }
  return result;
}
