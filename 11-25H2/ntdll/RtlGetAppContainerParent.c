/*
 * XREFs of RtlGetAppContainerParent @ 0x180084AF0
 * Callers:
 *     RtlDefaultNpAcl @ 0x180065B00 (RtlDefaultNpAcl.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180084060 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  char *Heap; // rax
  _DWORD *v6; // rdx
  char *v7; // rbx
  __int64 v8; // r8

  *AppContainerSidParent = 0LL;
  if ( *((_BYTE *)AppContainerSid + 1) < 2u
    || *(_BYTE *)AppContainerSid != 1
    || RtlCompareMemory((char *)AppContainerSid + 2, &RtlpAppPackageAuthority, 6uLL) != 6
    || *((_DWORD *)AppContainerSid + 2) != 2
    || *((_BYTE *)AppContainerSid + 1) != 12 )
  {
    return -1073741811;
  }
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 0x28uLL);
  if ( !Heap )
    return -1073741670;
  *(_WORD *)Heap = 2049;
  v6 = Heap + 8;
  v7 = (char *)((_BYTE *)AppContainerSid - Heap);
  *(_SID_IDENTIFIER_AUTHORITY *)(Heap + 2) = RtlpAppPackageAuthority;
  v8 = 8LL;
  do
  {
    *v6 = *(_DWORD *)((char *)v6 + (_QWORD)v7);
    ++v6;
    --v8;
  }
  while ( v8 );
  *AppContainerSidParent = Heap;
  return 0;
}
