/*
 * XREFs of ExpQueryChannelInformation @ 0x140A518D8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetProcessPartitionId @ 0x14046A3A0 (MmGetProcessPartitionId.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MmGetChannelInformation @ 0x140A519B8 (MmGetChannelInformation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQueryChannelInformation(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  size_t v4; // rsi
  unsigned __int16 ProcessPartitionId; // ax
  int ChannelInformation; // ebx
  size_t v8; // r8
  unsigned int v10; // [rsp+24h] [rbp-24h]
  size_t Size[4]; // [rsp+28h] [rbp-20h] BYREF
  void *Src; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  Size[0] = 0LL;
  Src = 0LL;
  if ( a2 < 4 )
  {
    ChannelInformation = -1073741306;
  }
  else
  {
    v10 = *a1;
    ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
    ChannelInformation = MmGetChannelInformation(ProcessPartitionId, v10, &Src, Size);
    if ( ChannelInformation >= 0 )
    {
      v8 = Size[0];
      *a3 = Size[0];
      if ( v8 > 0xFFFFFFFF )
      {
        ChannelInformation = -1073741670;
      }
      else if ( v4 < v8 )
      {
        ChannelInformation = -1073741789;
      }
      else
      {
        memmove(a1, Src, v8);
        ChannelInformation = 0;
      }
    }
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)ChannelInformation;
}
