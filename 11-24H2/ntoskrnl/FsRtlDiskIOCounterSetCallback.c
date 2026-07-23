/*
 * XREFs of FsRtlDiskIOCounterSetCallback @ 0x140A43320
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PcwAddInstance @ 0x1409F7360 (PcwAddInstance.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x140A433A0 (FsRtlAddDiskIOCounterInstance.c)
 */

__int64 __fastcall FsRtlDiskIOCounterSetCallback(int a1, __int64 a2)
{
  int v3; // ecx
  struct _PCW_BUFFER *v5; // rcx
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v3 = a1 - 2;
  if ( v3 )
  {
    if ( v3 == 1 )
      return FsRtlAddDiskIOCounterInstance(*(_QWORD *)(a2 + 24));
    else
      return 0LL;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"default");
    v5 = *(struct _PCW_BUFFER **)(a2 + 24);
    v6 = 0;
    Data.Size = 16;
    Data.Data = 0LL;
    v7 = PcwAddInstance(v5, &DestinationString, 0, 1u, &Data);
    if ( v7 < 0 )
      return (unsigned int)v7;
    return v6;
  }
}
