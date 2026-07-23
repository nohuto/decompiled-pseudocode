/*
 * XREFs of PiDqObjectManagerHandleObjectEvent @ 0x140A28F80
 * Callers:
 *     PiPnpRtlObjectEventDispatch @ 0x1408CA5A8 (PiPnpRtlObjectEventDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x140A2908C (PiDqObjectActionQueueEntryCreate.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140A9D60C (PiDqDeleteUserObjectFromLoadedHives.c)
 */

void __fastcall PiDqObjectManagerHandleObjectEvent(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // esi
  char v4; // bp
  _QWORD *v7; // rdx
  int v8; // edx
  _QWORD *v9; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v3 = 0;
  v10 = 0LL;
  v4 = 0;
  if ( (v2 & 2) != 0 )
    PiDqDeleteUserObjectFromLoadedHives(
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
      *(unsigned int *)(*(_QWORD *)(a2 + 8) + 28LL));
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 104));
  if ( (*(_DWORD *)(a1 + 228) & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    v3 = PiDqObjectActionQueueEntryCreate(a2, &v10);
    if ( v3 < 0 )
    {
      *(_DWORD *)(a1 + 228) |= 2u;
    }
    else
    {
      v7 = *(_QWORD **)(a1 + 216);
      if ( *v7 != a1 + 208 )
        __fastfail(3u);
      v9 = v10;
      *v10 = a1 + 208;
      v9[1] = v7;
      *v7 = v9;
      *(_QWORD *)(a1 + 216) = v9;
    }
  }
  v8 = *(_DWORD *)(a1 + 228);
  if ( (v8 & 1) == 0 && (*(_QWORD *)(a1 + 208) != a1 + 208 || v3 < 0) )
  {
    v4 = 1;
    *(_DWORD *)(a1 + 228) = v8 | 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
  if ( v4 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
