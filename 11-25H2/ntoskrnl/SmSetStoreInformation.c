/*
 * XREFs of SmSetStoreInformation @ 0x1408E8E30
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x140498E1C (SmpGetProcessPartition.c)
 *     SmProcessConfigRequest @ 0x140788894 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x140788B88 (SmProcessDeleteRequest.c)
 *     SmProcessResizeRequest @ 0x1407891B0 (SmProcessResizeRequest.c)
 *     SmcProcessCreateRequest @ 0x140789AAC (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140789D60 (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x140789F7C (SmcProcessResizeRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x14078A274 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x14078A3E0 (SmcProcessStoreDeleteRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1408E8F84 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1408E915C (SmProcessSystemStoreTrimRequest.c)
 *     SmProcessCreateRequest @ 0x1409C16A4 (SmProcessCreateRequest.c)
 */

__int64 __fastcall SmSetStoreInformation(__int64 a1, __int128 *a2, unsigned int a3, KPROCESSOR_MODE a4)
{
  __int64 v5; // r8
  struct _SM_PARTITION *ProcessPartition; // rax
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a3 < 0x18 )
    return 3221225990LL;
  v8 = *a2;
  v9 = *((_QWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 1 )
    return 3221225561LL;
  if ( a3 != 24 )
    return 3221225476LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return 3221225506LL;
  if ( SDWORD1(v8) <= 12 )
  {
    switch ( DWORD1(v8) )
    {
      case 0xC:
        return SmcProcessStoreDeleteRequest(*((__int128 **)&v8 + 1), v9, a4);
      case 3:
        ProcessPartition = (struct _SM_PARTITION *)SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
        return SmProcessCreateRequest(ProcessPartition);
      case 4:
        return SmProcessDeleteRequest(*((__int64 **)&v8 + 1), v9, a4);
      case 9:
        return SmcProcessCreateRequest(*((unsigned __int64 *)&v8 + 1), v9, a4);
      case 0xA:
        return SmcProcessDeleteRequest(*((__int64 **)&v8 + 1), v9, a4);
      case 0xB:
        return SmcProcessStoreCreateRequest(*((unsigned __int64 *)&v8 + 1), v9, a4);
      default:
        return 3221225475LL;
    }
  }
  else
  {
    switch ( DWORD1(v8) )
    {
      case 0x11:
        return SmProcessResizeRequest(*((__int64 *)&v8 + 1), v9, a4);
      case 0x12:
        return SmcProcessResizeRequest(*((unsigned __int64 *)&v8 + 1), v9, a4);
      case 0x13:
        LOBYTE(v5) = a4;
        return SmProcessConfigRequest(*((__m256i **)&v8 + 1), v9, v5);
      case 0x14:
        LOBYTE(v5) = a4;
        return SmProcessStoreMemoryPriorityRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
      case 0x15:
        LOBYTE(v5) = a4;
        return SmProcessSystemStoreTrimRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
      default:
        return 3221225475LL;
    }
  }
}
