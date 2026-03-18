/*
 * XREFs of DxgkGetAdapterMiracastInfo @ 0x140061C80
 * Callers:
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x140373298 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkGetAdapterMiracastInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // r8d
  int v9; // ecx
  int v10; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = 128;
  v4 = *(_DWORD *)(v2 + 3360);
  v5 = (v4 != -1) + 128;
  *(_DWORD *)(a2 + 24) = v5;
  if ( v4 == -1 )
  {
    *(_DWORD *)(a2 + 24) = v5;
  }
  else
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v6 = *(_DWORD *)(a2 + 24) ^ ((unsigned __int8)*(_DWORD *)(a2 + 24) ^ (unsigned __int8)(2 * *(_DWORD *)(v2 + 3356))) & 2;
    *(_DWORD *)(a2 + 24) = v6;
    v7 = *(_QWORD *)(v2 + 3368);
    v8 = v6 & 0xFFFFFFFB | (v7 != 0 ? 4 : 0);
    *(_DWORD *)(a2 + 24) = v8;
    if ( v7 )
    {
      v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3368) + 600LL))) & 8;
      *(_DWORD *)(a2 + 24) = v9;
      v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3368) + 600LL))) & 0x10;
      *(_DWORD *)(a2 + 24) = v10;
      *(_DWORD *)(a2 + 24) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(8
                                                                           * *(_DWORD *)(*(_QWORD *)(v2 + 3368) + 600LL))) & 0x20;
      *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)(v2 + 3368) + 608LL);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(*(_QWORD *)(v2 + 3368) + 616LL);
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v2 + 3368) + 624LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
