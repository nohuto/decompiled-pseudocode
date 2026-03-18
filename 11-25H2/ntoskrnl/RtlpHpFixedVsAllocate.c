/*
 * XREFs of RtlpHpFixedVsAllocate @ 0x14038FCB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 *     RtlFindClearBitsAndSetEx @ 0x14038DE00 (RtlFindClearBitsAndSetEx.c)
 *     RtlFindClearRunsEx @ 0x1404CC600 (RtlFindClearRunsEx.c)
 */

__int64 __fastcall RtlpHpFixedVsAllocate(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int64 v6; // rdi
  char v8; // si
  unsigned __int64 v9; // rax
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v11; // rdi
  int v13; // eax
  unsigned __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]

  v6 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) != 0 )
    v8 = -1;
  else
    v8 = RtlpHpAcquireLockExclusive((int *)(a1 + 24), *(unsigned __int8 *)(a1 + 32));
  v9 = a1 ^ *(_QWORD *)(a1 + 56);
  v14[0] = *(_QWORD *)(a1 + 48);
  v14[1] = v9;
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(v14, v6 >> 12, 0LL);
  if ( ClearBitsAndSet == -1LL )
  {
    if ( (unsigned int)RtlFindClearRunsEx(v14, &v15) == 1 )
      v13 = v16;
    else
      v13 = 0;
    *a4 = v13 << 12;
    v11 = 0LL;
  }
  else
  {
    *a4 = 0;
    v11 = a1 + (ClearBitsAndSet << 12);
    *a3 = 0;
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) == 0 )
    RtlpHpReleaseLockExclusive(a1 + 24, *(unsigned __int8 *)(a1 + 32), v8);
  return v11;
}
