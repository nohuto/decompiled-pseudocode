/*
 * XREFs of SharedAlloc @ 0x14014DBE0
 * Callers:
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SharedAlloc(SIZE_T Size)
{
  unsigned int v1; // ebx
  __int64 UserSessionState; // rax

  v1 = Size;
  UserSessionState = W32GetUserSessionState(Size);
  return RtlAllocateHeap(*(PVOID *)(UserSessionState + 19920), 0, v1);
}
