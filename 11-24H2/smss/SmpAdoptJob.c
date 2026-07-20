/*
 * XREFs of SmpAdoptJob @ 0x140018DD0
 * Callers:
 *     <none>
 * Callees:
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 */

__int64 __fastcall SmpAdoptJob(__int64 a1, __int64 a2)
{
  void *v3; // rdx
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  void *TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(void **)(a1 + 48);
  TargetHandle = 0LL;
  v4 = NtDuplicateObject(*(HANDLE *)(a2 + 32), v3, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0x1F003Fu, 0, 0);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = NtAssignProcessToJobObject(TargetHandle, (HANDLE)0xFFFFFFFFFFFFFFF9LL);
    NtClose(TargetHandle);
  }
  else
  {
    SmpLogFailure((__int64)"SmpAdoptJob", 551, v4);
  }
  return v5;
}
