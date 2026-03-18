/*
 * XREFs of KeCopyExceptionRecord @ 0x140433170
 * Callers:
 *     KiInitializeUserApc @ 0x1403E5264 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     DbgkForwardException @ 0x140938C20 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void *__fastcall KeCopyExceptionRecord(__int64 a1, __int64 a2)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_OWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  return memmove((void *)(a1 + 32), (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
