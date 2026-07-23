/*
 * XREFs of PopExtendConnectionState @ 0x14075E728
 * Callers:
 *     PopSetGlobalUserStatus @ 0x1409A357C (PopSetGlobalUserStatus.c)
 *     PopInitializeAdpm @ 0x140C357A4 (PopInitializeAdpm.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopExtendConnectionState(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  void *v3; // rdi
  PVOID v4; // rsi

  if ( PopMaximumConnectionSessions )
  {
    if ( 2 * PopMaximumConnectionSessions <= a1 )
      v1 = (a1 + 8) >> 3;
    else
      v1 = (unsigned int)PopMaximumConnectionSessions >> 2;
  }
  else
  {
    v1 = 8;
  }
  result = ExAllocatePool2(0x100uLL, v1, 0x73655350u);
  v3 = (void *)result;
  if ( result )
  {
    v4 = PopConnectionState;
    if ( PopConnectionState )
    {
      memmove((void *)result, PopConnectionState, (unsigned __int64)(unsigned int)PopMaximumConnectionSessions >> 3);
      ExFreePoolWithTag(v4, 0x73655350u);
    }
    result = 8 * v1;
    PopConnectionState = v3;
    PopMaximumConnectionSessions = 8 * v1;
    PopConnectionBitmap.SizeOfBitMap = 8 * v1;
    PopConnectionBitmap.Buffer = (unsigned int *)v3;
  }
  else
  {
    PopMaximumConnectionSessions = 0;
  }
  return result;
}
