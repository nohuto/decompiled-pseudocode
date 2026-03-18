/*
 * XREFs of ProcessNvmeSanitizeStatus @ 0x14002D20C
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x140013EA0 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x14000AAB0 (NVMeRequestComplete.c)
 *     NVMeQueueWorkItem @ 0x14002393C (NVMeQueueWorkItem.c)
 */

char __fastcall ProcessNvmeSanitizeStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 i; // rcx
  __int64 v7; // rbp
  int v8; // eax
  __int64 SrbExtension; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v14; // [rsp+D0h] [rbp-58h]

  v14 = *(_OWORD *)(GetSrbExtension(a2) + 4096);
  if ( DWORD1(v14) != -1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(a1 + 8 * i + 1672);
      if ( v7 && *(_DWORD *)(v7 + 16) == DWORD1(v14) )
        goto LABEL_8;
    }
  }
  v7 = 0LL;
LABEL_8:
  if ( (*(_WORD *)(a3 + 2) & 5) != 0 && *(_QWORD *)(a1 + 4056) )
  {
    v8 = *(_DWORD *)(a1 + 4064);
    if ( (v8 & 1) != 0 )
    {
      SrbExtension = GetSrbExtension(*(_QWORD *)(a1 + 4056));
      *(_BYTE *)(SrbExtension + 4225) |= 8u;
      *(_BYTE *)(v10 + 3) = 4;
      NVMeRequestComplete(a1, v10, 0);
      *(_QWORD *)(a1 + 4056) = 0LL;
      *(_DWORD *)(a1 + 4064) &= ~1u;
    }
    else if ( (*(_WORD *)(a3 + 2) & 7) == 3 )
    {
      *(_DWORD *)(a1 + 4064) = v8 | 1;
      NVMeQueueWorkItem(a1, (__int64)NVMeSanitizeRecoverWorkItem, *(unsigned int *)(a3 + 4), v5);
    }
    else
    {
      v11 = GetSrbExtension(*(_QWORD *)(a1 + 4056));
      *(_BYTE *)(v11 + 4225) |= 8u;
      *(_BYTE *)(v12 + 3) = 1;
      NVMeRequestComplete(a1, v12, 0);
      *(_QWORD *)(a1 + 4056) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, a1, v7, 1LL);
  }
  return 0;
}
