/*
 * XREFs of MiCreateSection @ 0x140941160
 * Callers:
 *     MiCreateSystemSection @ 0x14044C348 (MiCreateSystemSection.c)
 *     MiCreateSectionCommon @ 0x14096B594 (MiCreateSectionCommon.c)
 *     MmCreateSpecialImageSection @ 0x140AE6B20 (MmCreateSpecialImageSection.c)
 * Callees:
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiLogSectionObjectEvent @ 0x1407EC298 (MiLogSectionObjectEvent.c)
 *     MiInitializeCreateSectionPacket @ 0x1409413D0 (MiInitializeCreateSectionPacket.c)
 *     MiFinishCreateSection @ 0x140941784 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     MmExtendSection @ 0x140946018 (MmExtendSection.c)
 */

__int64 __fastcall MiCreateSection(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11,
        int a12,
        __int64 a13)
{
  int i; // ebx
  int SectionPacket; // edi
  int ImageOrDataSection; // eax
  __int64 v19; // rsi
  _QWORD *v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  __int64 v25; // [rsp+70h] [rbp-108h] BYREF
  _DWORD v26[10]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-D0h]
  __int64 v28; // [rsp+B0h] [rbp-C8h]
  __int64 v29; // [rsp+C0h] [rbp-B8h]
  PVOID Object; // [rsp+110h] [rbp-68h]
  __int64 v31; // [rsp+130h] [rbp-48h]

  for ( i = 0; ; i = (HIBYTE(v26[0]) & 1) << 24 )
  {
    memset_0(v26, 0, 0xC8uLL);
    SectionPacket = MiInitializeCreateSectionPacket(
                      (unsigned int)v26,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
                      a13);
    if ( SectionPacket < 0 )
      break;
    v26[0] |= i;
    if ( !v27 && !v28 )
    {
      SectionPacket = MiCreatePagingFileMap(v26);
LABEL_6:
      if ( SectionPacket >= 0 )
      {
        SectionPacket = MiFinishCreateSection(v26);
        if ( SectionPacket >= 0 )
        {
          v19 = v29;
          v20 = Object;
          v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v29 + 24LL), -1LL, -1LL);
          v22 = v21;
          if ( ((v26[0] & 9) == 0 && (*(_DWORD *)(v19 + 56) & 0x8000) != 0 || v20[6] > v21)
            && (v23 = v20[6],
                v20[6] = v22,
                v25 = v23,
                SectionPacket = MmExtendSection(v20, &v25, v26[0] & 1),
                SectionPacket < 0) )
          {
            ObfDereferenceObjectWithTag(v20, 0x43536D4Du);
          }
          else
          {
            *a1 = v20;
            if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 && !*(_QWORD *)(v19 + 64) )
              MiLogSectionObjectEvent((__int64)v20);
          }
        }
      }
      break;
    }
    ImageOrDataSection = MiCreateImageOrDataSection(v26);
    SectionPacket = ImageOrDataSection;
    if ( ImageOrDataSection != -1073741740 && ImageOrDataSection != -1073740682 )
      goto LABEL_6;
    if ( v31 )
      PsDereferencePartition(v31);
  }
  if ( v31 )
    PsDereferencePartition(v31);
  return (unsigned int)SectionPacket;
}
