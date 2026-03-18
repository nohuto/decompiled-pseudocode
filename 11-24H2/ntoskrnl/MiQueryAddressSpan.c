/*
 * XREFs of MiQueryAddressSpan @ 0x1403CE718
 * Callers:
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
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
  int v16; // [rsp+50h] [rbp-18h] BYREF
  int v17; // [rsp+54h] [rbp-14h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-10h] BYREF
  __int16 v19; // [rsp+B0h] [rbp+48h] BYREF
  __int16 v20; // [rsp+B8h] [rbp+50h] BYREF
  int v21; // [rsp+C0h] [rbp+58h] BYREF
  int v22; // [rsp+C8h] [rbp+60h] BYREF

  v6 = *(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32);
  v21 = 0;
  v16 = 0;
  v8 = ((v6 << 12) | 0xFFF) + 1;
  v18[0] = 0LL;
  v22 = 0;
  v9 = a3;
  v17 = 0;
  v10 = 0;
  v19 = 0;
  v20 = 0;
  if ( a3 > v8 || !a3 )
    v9 = v8;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v12 = MiLockWorkingSetShared((__int64)p_Blink);
  *(_DWORD *)(a1 + 32) = MiQueryAddressState(a2, v9 - 1, v12, a4, 0LL, &v21, &v22, &v19, v18);
  if ( v21 )
    v13 = MmProtectToValue[v21] | v22;
  else
    v13 = 0;
  *(_DWORD *)(a1 + 36) = v13;
  v14 = v18[0];
  *(_WORD *)(a1 + 20) = v19;
  while ( v14 < v9
       && (unsigned int)MiQueryAddressState(v14, v9 - 1, v12, a4, a1, &v16, &v17, &v20, v18) == *(_DWORD *)(a1 + 32)
       && v16 == v21
       && v20 == v19
       && v17 == v22 )
  {
    v14 = v18[0];
    if ( (++v10 & 0x1F) == 0 && (unsigned int)MiWorkingSetIsContended(p_Blink, 0LL) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)p_Blink, v12);
      MiLockWorkingSetShared((__int64)p_Blink);
    }
  }
  MiUnlockWorkingSetShared((__int64)p_Blink, v12);
  return v14;
}
