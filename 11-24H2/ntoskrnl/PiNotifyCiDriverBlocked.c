/*
 * XREFs of PiNotifyCiDriverBlocked @ 0x140722830
 * Callers:
 *     PiIsDriverBlocked @ 0x1409BA914 (PiIsDriverBlocked.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiNotifyCiDriverBlocked(__int128 *a1, int a2, const void **a3)
{
  unsigned int v6; // ebx
  __int64 Pool2; // rax
  void *v8; // rdi
  __int128 v10; // xmm0
  ULONG v11; // r8d
  unsigned int updated; // ebx

  v6 = *(unsigned __int16 *)a3 + 22;
  Pool2 = ExAllocatePool2(0x100uLL, v6, 0x20207050u);
  v8 = (void *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v10 = *a1;
  *(_DWORD *)(Pool2 + 16) = a2;
  *(_OWORD *)Pool2 = v10;
  *(_WORD *)(Pool2 + 20) = *(_WORD *)a3;
  memmove((void *)(Pool2 + 22), a3[1], *(unsigned __int16 *)a3);
  v11 = 4096;
  if ( v6 < 0x1000 )
    v11 = v6;
  updated = ZwUpdateWnfStateData(&WNF_CI_BLOCKED_DRIVER, v8, v11, 0LL, 0LL, 0, 0);
  ExFreePoolWithTag(v8, 0);
  return updated;
}
