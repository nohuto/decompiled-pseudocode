/*
 * XREFs of FsFilterCtrlFree @ 0x14035B19C
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14035B210 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14035BCBC (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlQueryOpen @ 0x140861E30 (FsRtlQueryOpen.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14093DA50 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x14093E880 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409CEE20 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409CF0D0 (FsRtlReleaseFileForCcFlush.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall FsFilterCtrlFree(__int64 a1)
{
  int v1; // eax
  __int16 *v3; // r9
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v1 = *(_DWORD *)(a1 + 64);
  if ( (v1 & 1) != 0 )
  {
    v3 = 0LL;
    if ( (v1 & 2) == 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x676D5346u);
      return;
    }
    v4 = *(unsigned __int8 *)(a1 + 4) - 250;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
        goto LABEL_11;
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( !v7 )
          goto LABEL_11;
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
          {
LABEL_13:
            *(_QWORD *)(*(_QWORD *)(a1 + 80) - 8LL) = 0LL;
            KeSetEvent((PRKEVENT)v3, 0, 0);
            return;
          }
LABEL_11:
          v3 = &AcquireOpsEvent;
          goto LABEL_13;
        }
      }
    }
    v3 = &ReleaseOpsEvent;
    goto LABEL_13;
  }
}
