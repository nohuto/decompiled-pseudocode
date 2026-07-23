/*
 * XREFs of MiQueryAddressSpan @ 0x14044AF24
 * Callers:
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 */

unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, ULONG_PTR a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  int v10; // r15d
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int8 v12; // r12
  int v13; // ecx
  unsigned __int64 v14; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+50h] [rbp-18h] BYREF
  int v20; // [rsp+54h] [rbp-14h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-10h] BYREF
  __int16 v22; // [rsp+B0h] [rbp+48h] BYREF
  __int16 v23; // [rsp+B8h] [rbp+50h] BYREF
  int v24; // [rsp+C0h] [rbp+58h] BYREF
  int v25; // [rsp+C8h] [rbp+60h] BYREF

  v6 = *(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32);
  v24 = 0;
  v19 = 0;
  v8 = ((v6 << 12) | 0xFFF) + 1;
  v21[0] = 0LL;
  v25 = 0;
  v9 = a3;
  v20 = 0;
  v10 = 0;
  v22 = 0;
  v23 = 0;
  if ( a3 > v8 || !a3 )
    v9 = v8;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v12 = MiLockWorkingSetShared((__int64)p_Blink, v8, a3, a4);
  *(_DWORD *)(a1 + 32) = MiQueryAddressState(a2, v9 - 1, v12, a4, 0LL, &v24, &v25, &v22, v21);
  if ( v24 )
    v13 = MmProtectToValue[v24] | v25;
  else
    v13 = 0;
  *(_DWORD *)(a1 + 36) = v13;
  v14 = v21[0];
  *(_WORD *)(a1 + 20) = v22;
  while ( v14 < v9
       && (unsigned int)MiQueryAddressState(v14, v9 - 1, v12, a4, a1, &v19, &v20, &v23, v21) == *(_DWORD *)(a1 + 32)
       && v19 == v24
       && v23 == v22
       && v20 == v25 )
  {
    v14 = v21[0];
    if ( (++v10 & 0x1F) == 0 && (unsigned int)MiWorkingSetIsContended((__int64)p_Blink, 0) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)p_Blink, v12);
      MiLockWorkingSetShared((__int64)p_Blink, v16, v17, v18);
    }
  }
  MiUnlockWorkingSetShared((__int64)p_Blink, v12);
  return v14;
}
