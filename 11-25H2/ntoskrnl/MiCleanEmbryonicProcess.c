/*
 * XREFs of MiCleanEmbryonicProcess @ 0x140A04FF4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x1403C5C8C (PsReturnProcessQuota.c)
 *     MiGetSharedVm @ 0x14040A910 (MiGetSharedVm.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     PsDereferenceSession @ 0x140A05104 (PsDereferenceSession.c)
 */

__int64 __fastcall MiCleanEmbryonicProcess(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 ProcessPartition; // rax
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  bool v10; // zf

  v1 = a1 + 1024;
  MiGetSharedVm(a1 + 1024);
  v4 = *(unsigned int *)(a1 + 500);
  if ( (v4 & 0x20) != 0 )
  {
    if ( (HIBYTE(*(_DWORD *)(v1 + 184)) & 0x30) == 0x30 )
      return 0LL;
    goto LABEL_12;
  }
  v5 = *(_DWORD *)(a1 + 500) & 0xC00;
  if ( v5 <= 0x400 )
  {
LABEL_12:
    v10 = (v4 & 0x10000) == 0;
    goto LABEL_8;
  }
  if ( v5 != 2048 )
    return 0LL;
  PsReturnProcessQuota((struct _KPROCESS *)a1, v3, *(_QWORD *)(v1 + 112) - 4LL);
  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnResident(ProcessPartition, *(_QWORD *)(v1 + 112) - 4LL);
  v8 = *(_DWORD *)(a1 + 500);
  v3 = 4294965247LL;
  do
  {
    v4 = v8 & 0xFFFFF7FF;
    LODWORD(v4) = v8 & 0xFFFFF3FF | 0x400;
    v9 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 500), v4, v8);
  }
  while ( v9 != v8 );
  v10 = (*(_DWORD *)(a1 + 500) & 0x10000) == 0;
LABEL_8:
  if ( !v10 )
    PsDereferenceSession(v4, v3);
  return 1LL;
}
