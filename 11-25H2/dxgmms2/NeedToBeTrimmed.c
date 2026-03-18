/*
 * XREFs of NeedToBeTrimmed @ 0x140102F68
 * Callers:
 *     ?VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z @ 0x140097668 (-VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z.c)
 *     VidMmGetNextBuffersContractedSize @ 0x140102EF0 (VidMmGetNextBuffersContractedSize.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140018FD8 (McTemplateK0pq_EtwWriteTransfer.c)
 */

char __fastcall NeedToBeTrimmed(_DWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax

  if ( (a1[7] & 8) != 0 )
    return 0;
  if ( (int)a1[28] <= qword_140081950 )
    v1 = qword_140081968;
  else
    v1 = qword_140081960;
  if ( qword_140081978 > v1 )
  {
    if ( (byte_140081241 & 1) == 0 )
      return 1;
    goto LABEL_12;
  }
  if ( (int)a1[29] <= qword_140081920 )
    v2 = qword_140081938;
  else
    v2 = qword_140081930;
  if ( qword_140081948 > v2 )
  {
    if ( (byte_140081241 & 1) == 0 )
      return 1;
    goto LABEL_12;
  }
  v3 = qword_140081900;
  if ( (int)a1[30] <= qword_1400818F0 )
    v3 = qword_140081908;
  if ( qword_140081918 <= v3 )
    return 0;
  if ( (byte_140081241 & 1) != 0 )
LABEL_12:
    McTemplateK0pq_EtwWriteTransfer();
  return 1;
}
