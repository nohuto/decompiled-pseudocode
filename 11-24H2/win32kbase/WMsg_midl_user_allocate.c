/*
 * XREFs of WMsg_midl_user_allocate @ 0x140149620
 * Callers:
 *     WmsgpPostMessage @ 0x1402C3D84 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WMsg_midl_user_allocate(__int64 a1)
{
  return ExAllocatePool2(258LL, a1, 1399025746LL);
}
