/*
 * XREFs of NeedToBeTrimmed @ 0x140101EC8
 * Callers:
 *     ?VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z @ 0x140097798 (-VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z.c)
 *     VidMmGetNextBuffersContractedSize @ 0x140101E50 (VidMmGetNextBuffersContractedSize.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 */

char __fastcall NeedToBeTrimmed(_DWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax

  if ( (a1[7] & 8) != 0 )
    return 0;
  if ( (int)a1[28] <= qword_1400819D8 )
    v1 = qword_1400819F0;
  else
    v1 = qword_1400819E8;
  if ( qword_140081A00 > v1 )
  {
    if ( (byte_140081241 & 1) == 0 )
      return 1;
    goto LABEL_12;
  }
  if ( (int)a1[29] <= qword_1400819A8 )
    v2 = qword_1400819C0;
  else
    v2 = qword_1400819B8;
  if ( qword_1400819D0 > v2 )
  {
    if ( (byte_140081241 & 1) == 0 )
      return 1;
    goto LABEL_12;
  }
  v3 = qword_140081988;
  if ( (int)a1[30] <= qword_140081978 )
    v3 = qword_140081990;
  if ( qword_1400819A0 <= v3 )
    return 0;
  if ( (byte_140081241 & 1) != 0 )
LABEL_12:
    McTemplateK0pq_EtwWriteTransfer();
  return 1;
}
