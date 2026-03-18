/*
 * XREFs of AdminQueueInitialize @ 0x140019CE4
 * Callers:
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeSubmissionQueueInit @ 0x14000D510 (NVMeSubmissionQueueInit.c)
 *     NVMeCompletionQueueInit @ 0x14001C334 (NVMeCompletionQueueInit.c)
 *     NVMeFreePool @ 0x14001DC5C (NVMeFreePool.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

char __fastcall AdminQueueInitialize(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  void **v3; // rsi
  char result; // al
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  char *v10; // [rsp+70h] [rbp+30h]
  char *v11; // [rsp+78h] [rbp+38h]

  v1 = *(unsigned __int16 *)(a1 + 324);
  v2 = a1 + 336;
  v3 = (void **)(a1 + 544);
  if ( *(_BYTE *)(a1 + 20) )
  {
    v11 = (char *)*v3 + 16 * v1;
    v10 = &v11[16 * v1];
    v6 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 324)) >> 2;
    if ( v6 )
      memset(v11, 0, 4LL * v6);
    v7 = (32 * (unsigned int)*(unsigned __int16 *)(a1 + 324)) >> 2;
    if ( v7 )
      memset(v10, 0, 4LL * v7);
    NVMeSubmissionQueueInit(a1, v2, 0, *(_QWORD *)v2, 0LL, (__int64)v11, (__int64)v10, 0LL);
    NVMeCompletionQueueInit(a1, (_DWORD)v3, 0, (unsigned int)*v3, 0LL, 0LL, 0LL);
    v8 = (unsigned int)(*(unsigned __int16 *)(a1 + 324) << 6) >> 2;
    if ( v8 )
      memset(*(void **)v2, 0, 4LL * v8);
    v9 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 324)) >> 2;
    if ( v9 )
      memset(*v3, 0, 4LL * v9);
    *(_WORD *)(v2 + 58) = 0;
    result = 1;
    *(_DWORD *)(a1 + 724) = 1;
  }
  else
  {
    StorPortExtendedFunction(0LL, a1, (unsigned int)(16 * v1), 1701672526LL);
    NVMeFreePool(a1, 0LL);
    NVMeFreePool(a1, 0LL);
    NVMeFreePool(a1, 0LL);
    return 0;
  }
  return result;
}
