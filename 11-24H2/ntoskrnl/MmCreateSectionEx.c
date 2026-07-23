/*
 * XREFs of MmCreateSectionEx @ 0x14098AECC
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140443420 (FsRtlCreateSectionForDataScan.c)
 *     AlpcpCreateSection @ 0x140893594 (AlpcpCreateSection.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408EB67C (PspSchedulerSharedDataRegionCreate.c)
 *     MmCreateSection @ 0x14098ADB0 (MmCreateSection.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiLogSectionObjectEvent @ 0x1407EC868 (MiLogSectionObjectEvent.c)
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14098AE58 (MiCaptureSectionCreateExtendedParameters.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B630 (MiInitializeCreateSectionPacket.c)
 *     MiFinishCreateSection @ 0x14098B9F0 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 */

__int64 __fastcall MmCreateSectionEx(
        LARGE_INTEGER **a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9,
        _BYTE *Address,
        ULONGLONG ullMultiplicand)
{
  __int64 result; // rax
  int v13; // ebx
  _KPROCESS *Process; // rdi
  char PreviousMode; // r15
  char v16; // r14
  void *v17; // rsi
  int v18; // edx
  int v19; // r12d
  int SessionId; // edi
  int i; // ebx
  int SectionPacket; // edi
  int ImageOrDataSection; // eax
  __int64 v24; // r14
  LARGE_INTEGER *v25; // rbx
  unsigned __int64 v26; // rax
  LARGE_INTEGER *v27; // r8
  unsigned __int64 v28; // r9
  LARGE_INTEGER v29; // rax
  __int64 v30[2]; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+80h] [rbp-80h]
  char v32; // [rsp+84h] [rbp-7Ch]
  LARGE_INTEGER v33; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v34[10]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-48h]
  __int64 v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-30h]
  PVOID Object; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+140h] [rbp+40h]
  int v41; // [rsp+1B0h] [rbp+B0h]
  int v43; // [rsp+1E0h] [rbp+E0h]

  v41 = a3;
  v31 = 0;
  v32 = 0;
  *(_OWORD *)v30 = 0LL;
  result = MiCaptureSectionCreateExtendedParameters(Address, (unsigned int)ullMultiplicand, a3, 0, (__int64)v30);
  if ( (int)result >= 0 )
  {
    v13 = 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v16 = BYTE1(Process[3].ActiveGroupsMask.Masks[1]);
      v17 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
    }
    else
    {
      v17 = 0LL;
      v16 = (v31 & 8) != 0 ? BYTE4(v30[1]) : 0;
      v13 = (v31 & 8) != 0 ? 0x10 : 0;
    }
    v18 = v13 | 2;
    if ( !a7 )
      v18 = v13;
    v19 = v18 | 4;
    if ( (a8 & 2) == 0 )
      v19 = v18;
    SessionId = PsGetSessionIdEx((__int64)Process);
    v43 = SessionId;
    for ( i = 0; ; i = (HIBYTE(v34[0]) & 1) << 24 )
    {
      memset_0(v34, 0, 0xC8uLL);
      SectionPacket = MiInitializeCreateSectionPacket(
                        (unsigned int)v34,
                        a2,
                        v41,
                        a4,
                        a5,
                        v19,
                        (__int64)v17,
                        v16,
                        a6,
                        a7,
                        PreviousMode,
                        SessionId,
                        (__int64)v30);
      if ( SectionPacket < 0 )
        break;
      v34[0] |= i;
      if ( !v35 && !v36 )
      {
        SectionPacket = MiCreatePagingFileMap(v34);
LABEL_13:
        if ( SectionPacket >= 0 )
        {
          SectionPacket = MiFinishCreateSection(v34);
          if ( SectionPacket >= 0 )
          {
            v24 = v37;
            v25 = (LARGE_INTEGER *)Object;
            v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v37 + 24LL), -1LL, -1LL);
            v27 = v25 + 6;
            v28 = v26;
            if ( ((v34[0] & 9) == 0 && (*(_DWORD *)(v24 + 56) & 0x8000) != 0 || v27->QuadPart > v26)
              && (v29 = *v27,
                  v27->QuadPart = v28,
                  v33 = v29,
                  SectionPacket = MmExtendSection((__int64)v25, &v33, v34[0] & 1),
                  SectionPacket < 0) )
            {
              ObfDereferenceObjectWithTag(v25, 0x43536D4Du);
            }
            else
            {
              *a1 = v25;
              if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 && !*(_QWORD *)(v24 + 64) )
                MiLogSectionObjectEvent((__int64)v25);
            }
          }
        }
        break;
      }
      ImageOrDataSection = MiCreateImageOrDataSection(v34);
      SectionPacket = ImageOrDataSection;
      if ( ImageOrDataSection != -1073741740 && ImageOrDataSection != -1073740682 )
        goto LABEL_13;
      if ( v39 )
        PsDereferencePartition(v39);
      SessionId = v43;
    }
    if ( v39 )
      PsDereferencePartition(v39);
    if ( v17 )
      ObfDereferenceObject(v17);
    return (unsigned int)SectionPacket;
  }
  return result;
}
