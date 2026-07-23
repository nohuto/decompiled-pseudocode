/*
 * XREFs of RtlAllocateAndInitializeSid @ 0x1800DF990
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        ULONG SubAuthority0,
        ULONG SubAuthority1,
        ULONG SubAuthority2,
        ULONG SubAuthority3,
        ULONG SubAuthority4,
        ULONG SubAuthority5,
        ULONG SubAuthority6,
        ULONG SubAuthority7,
        PSID *Sid)
{
  int v11; // ebx
  char *Heap; // rax

  v11 = SubAuthorityCount;
  if ( SubAuthorityCount > 8u )
    return -1073741704;
  Heap = (char *)RtlAllocateHeap(
                   NtCurrentPeb()->ProcessHeap,
                   NtdllBaseTag + 1310720,
                   4 * (unsigned int)SubAuthorityCount + 8);
  if ( !Heap )
    return -1073741801;
  Heap[1] = v11;
  *Heap = 1;
  *(_DWORD *)(Heap + 2) = *(_DWORD *)IdentifierAuthority->Value;
  *((_WORD *)Heap + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
  if ( v11 != 1 )
  {
    if ( v11 != 2 )
    {
      switch ( v11 )
      {
        case 3:
          goto LABEL_14;
        case 4:
          goto LABEL_13;
        case 5:
          goto LABEL_12;
        case 6:
          goto LABEL_11;
        case 7:
          goto LABEL_16;
        case 8:
          *((_DWORD *)Heap + 9) = SubAuthority7;
LABEL_16:
          *((_DWORD *)Heap + 8) = SubAuthority6;
LABEL_11:
          *((_DWORD *)Heap + 7) = SubAuthority5;
LABEL_12:
          *((_DWORD *)Heap + 6) = SubAuthority4;
LABEL_13:
          *((_DWORD *)Heap + 5) = SubAuthority3;
LABEL_14:
          *((_DWORD *)Heap + 4) = SubAuthority2;
          break;
        default:
          goto LABEL_5;
      }
    }
    *((_DWORD *)Heap + 3) = SubAuthority1;
  }
  *((_DWORD *)Heap + 2) = SubAuthority0;
LABEL_5:
  *Sid = Heap;
  return 0;
}
