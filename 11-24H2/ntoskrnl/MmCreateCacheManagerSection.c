/*
 * XREFs of MmCreateCacheManagerSection @ 0x14098B1B8
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiLogSectionObjectEvent @ 0x1407EC868 (MiLogSectionObjectEvent.c)
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B630 (MiInitializeCreateSectionPacket.c)
 *     MiFinishCreateSection @ 0x14098B9F0 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 */

__int64 __fastcall MmCreateCacheManagerSection(LARGE_INTEGER **a1, int a2, char a3, __int64 a4)
{
  int v7; // ebx
  int v8; // r15d
  int SectionPacket; // edi
  int ImageOrDataSection; // eax
  __int64 v11; // rsi
  LARGE_INTEGER *v12; // rbx
  unsigned __int64 v13; // rax
  LARGE_INTEGER *v14; // r8
  unsigned __int64 v15; // r9
  LARGE_INTEGER v16; // rax
  bool v17; // zf
  LARGE_INTEGER v19[2]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v20[10]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-58h]
  __int64 v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C8h] [rbp-40h]
  PVOID Object; // [rsp+118h] [rbp+10h]
  __int64 v25; // [rsp+138h] [rbp+30h]

  v7 = 0;
  v8 = 4 * (a3 & 1) + 2;
  while ( 1 )
  {
    memset_0(v20, 0, 0xC8uLL);
    SectionPacket = MiInitializeCreateSectionPacket(
                      (unsigned int)v20,
                      0,
                      a2,
                      4,
                      0x8000000,
                      v8,
                      0LL,
                      0,
                      0LL,
                      a4,
                      0,
                      -1,
                      0LL);
    if ( SectionPacket < 0 )
      break;
    v20[0] |= v7;
    if ( !v21 && !v22 )
    {
      SectionPacket = MiCreatePagingFileMap(v20);
LABEL_6:
      if ( SectionPacket >= 0 )
      {
        SectionPacket = MiFinishCreateSection(v20);
        if ( SectionPacket >= 0 )
        {
          v11 = v23;
          v12 = (LARGE_INTEGER *)Object;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v23 + 24LL), -1LL, -1LL);
          v14 = v12 + 6;
          v15 = v13;
          if ( ((v20[0] & 9) == 0 && (*(_DWORD *)(v11 + 56) & 0x8000) != 0 || v14->QuadPart > v13)
            && (v16 = *v14,
                v14->QuadPart = v15,
                v19[0] = v16,
                SectionPacket = MmExtendSection((__int64)v12, v19, v20[0] & 1),
                SectionPacket < 0) )
          {
            ObfDereferenceObjectWithTag(v12, 0x43536D4Du);
          }
          else
          {
            v17 = (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) == 0;
            *a1 = v12;
            if ( !v17 && !*(_QWORD *)(v11 + 64) )
              MiLogSectionObjectEvent((__int64)v12);
          }
        }
      }
      break;
    }
    ImageOrDataSection = MiCreateImageOrDataSection(v20);
    SectionPacket = ImageOrDataSection;
    if ( ImageOrDataSection != -1073741740 && ImageOrDataSection != -1073740682 )
      goto LABEL_6;
    if ( v25 )
      PsDereferencePartition(v25);
    v7 = (HIBYTE(v20[0]) & 1) << 24;
  }
  if ( v25 )
    PsDereferencePartition(v25);
  return (unsigned int)SectionPacket;
}
