/*
 * XREFs of MiMapImageInSystemProcess @ 0x1407EDE38
 * Callers:
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiGetUserReservationHighestAddress @ 0x1408DC990 (MiGetUserReservationHighestAddress.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 */

__int64 __fastcall MiMapImageInSystemProcess(__int64 *a1, int a2, _QWORD *a3, __int64 *a4)
{
  __int64 v4; // r10
  int v5; // r14d
  int v6; // esi
  __int64 v8; // rdi
  _KPROCESS *Process; // rbx
  __int64 v10; // rdx
  __int64 v12; // [rsp+28h] [rbp-59h]
  _BYTE v13[8]; // [rsp+48h] [rbp-39h] BYREF
  __int64 UserReservationHighestAddress; // [rsp+50h] [rbp-31h]
  __int64 v15; // [rsp+58h] [rbp-29h]
  unsigned __int64 v16; // [rsp+60h] [rbp-21h]
  __int64 v17; // [rsp+68h] [rbp-19h]
  int v18; // [rsp+70h] [rbp-11h]
  char v19; // [rsp+81h] [rbp+0h]
  _KPROCESS *v20; // [rsp+A0h] [rbp+1Fh]
  _KPROCESS *v21; // [rsp+A8h] [rbp+27h]
  __int64 v22; // [rsp+E8h] [rbp+67h] BYREF

  v4 = *a1;
  v5 = (int)a1;
  v6 = (int)a3;
  *a4 = _InterlockedCompareExchange64((volatile signed __int64 *)(*a1 + 24), -1LL, -1LL);
  if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), -1LL, -1LL) >= 0x100000000LL )
    return 3221225503LL;
  v8 = *a4;
  if ( (unsigned __int64)*a4 > 0x7FFFFFFF0000LL )
    return 3221225503LL;
  *a3 = 0LL;
  v22 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset_0(v13, 0, 0x80uLL);
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, 0LL);
  v19 = v10;
  v16 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v15 = 0x10000LL;
  v17 = v8;
  v18 = 0x40000;
  v21 = Process;
  v20 = Process;
  return MiMapViewOfImageSection(v5, (unsigned int)v13, v6, (unsigned int)&v22, v10 & v12, 2, 1, a2);
}
