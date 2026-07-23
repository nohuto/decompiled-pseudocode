/*
 * XREFs of VfSuspectDriversAllocateEntryEx @ 0x140B9C73C
 * Callers:
 *     VfDriverEnableVerifierForAll @ 0x140B8C3B4 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     RtlUShortAdd @ 0x140463CC0 (RtlUShortAdd.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfSuspectDriversAllocateEntryEx(__int64 a1)
{
  USHORT v2; // si
  USHORT v3; // r10
  NTSTATUS v4; // ebp
  unsigned __int16 v5; // r9
  int v6; // r11d
  __int64 Pool2; // rax
  __int64 v8; // rbx
  void *v9; // rax
  void *v10; // rcx
  USHORT v12; // [rsp+40h] [rbp+8h] BYREF
  USHORT pusResult; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  pusResult = 0;
  if ( !a1 || !*(_QWORD *)(a1 + 96) )
    return 0LL;
  RtlUShortAdd(*(_WORD *)(a1 + 90), 2u, &v12);
  v2 = -1;
  v4 = RtlUShortAdd(*(_WORD *)(a1 + 74), v3, &pusResult);
  if ( v4 != v6 )
    v2 = pusResult;
  Pool2 = ExAllocatePool2(0x40uLL, v5 + 56LL, 0x44536656uLL);
  v8 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_WORD *)(Pool2 + 40) = *(_WORD *)(a1 + 88);
    *(_WORD *)(Pool2 + 42) = *(_WORD *)(a1 + 90);
    *(_QWORD *)(Pool2 + 48) = Pool2 + 56;
    memmove((void *)(Pool2 + 56), *(const void **)(a1 + 96), *(unsigned __int16 *)(a1 + 88));
    v9 = (void *)ExAllocatePool2(0x40uLL, v2, 0x44536656uLL);
    *(_QWORD *)(v8 + 32) = v9;
    if ( !v9
      || (*(_WORD *)(v8 + 24) = *(_WORD *)(a1 + 72),
          *(_WORD *)(v8 + 24) = *(_WORD *)(a1 + 74),
          memmove(v9, *(const void **)(a1 + 80), *(unsigned __int16 *)(a1 + 72)),
          v4 < 0) )
    {
      v10 = *(void **)(v8 + 32);
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0);
        *(_QWORD *)(v8 + 32) = 0LL;
        *(_DWORD *)(v8 + 24) = 0;
      }
      ExFreePoolWithTag((PVOID)v8, 0);
      return 0LL;
    }
  }
  return v8;
}
