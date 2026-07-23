/*
 * XREFs of SmSetStoreInformation @ 0x140A57E40
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     SmProcessConfigRequest @ 0x140797D74 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x140798068 (SmProcessDeleteRequest.c)
 *     SmProcessResizeRequest @ 0x140798690 (SmProcessResizeRequest.c)
 *     SmcProcessCreateRequest @ 0x140798F8C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140799240 (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x14079945C (SmcProcessResizeRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x140799754 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1407998C0 (SmcProcessStoreDeleteRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     SmProcessCreateRequest @ 0x140A38664 (SmProcessCreateRequest.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140A57F94 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140A58168 (SmProcessSystemStoreTrimRequest.c)
 */

__int64 __fastcall SmSetStoreInformation(__int64 a1, __int64 a2, unsigned int a3, KPROCESSOR_MODE a4)
{
  __int64 v5; // r8
  struct _SM_PARTITION *ProcessPartition; // rax
  volatile void *Address[2]; // [rsp+20h] [rbp-28h]
  SIZE_T Length; // [rsp+30h] [rbp-18h]

  if ( a3 < 0x18 )
    return 3221225990LL;
  *(_OWORD *)Address = *(_OWORD *)a2;
  Length = *(_QWORD *)(a2 + 16);
  if ( (unsigned int)*(_OWORD *)a2 != 1 )
    return 3221225561LL;
  if ( a3 != 24 )
    return 3221225476LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return 3221225506LL;
  if ( SHIDWORD(Address[0]) <= 12 )
  {
    switch ( HIDWORD(Address[0]) )
    {
      case 0xC:
        return SmcProcessStoreDeleteRequest((__int128 *)Address[1], Length, a4);
      case 3:
        ProcessPartition = (struct _SM_PARTITION *)SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
        return SmProcessCreateRequest(ProcessPartition, (unsigned __int64)Address[1], Length, a4);
      case 4:
        return SmProcessDeleteRequest((__int64 *)Address[1], Length, a4);
      case 9:
        return SmcProcessCreateRequest((unsigned __int64)Address[1], Length, a4);
      case 0xA:
        return SmcProcessDeleteRequest((__int64 *)Address[1], Length, a4);
      case 0xB:
        return SmcProcessStoreCreateRequest((unsigned __int64)Address[1], Length, a4);
      default:
        return 3221225475LL;
    }
  }
  else
  {
    switch ( HIDWORD(Address[0]) )
    {
      case 0x11:
        return SmProcessResizeRequest((__int64)Address[1], Length, a4);
      case 0x12:
        return SmcProcessResizeRequest((unsigned __int64)Address[1], Length, a4);
      case 0x13:
        LOBYTE(v5) = a4;
        return SmProcessConfigRequest((__m256i *)Address[1], Length, v5);
      case 0x14:
        LOBYTE(v5) = a4;
        return SmProcessStoreMemoryPriorityRequest(Address[1], (unsigned int)Length, v5);
      case 0x15:
        return SmProcessSystemStoreTrimRequest(Address[1], (unsigned int)Length);
      default:
        return 3221225475LL;
    }
  }
}
