/*
 * XREFs of MiIncrementLargeSubsections @ 0x1404C2B90
 * Callers:
 *     MiReferenceDataSubsections @ 0x1403953D8 (MiReferenceDataSubsections.c)
 *     MiCloneLargeFileOnlyVad @ 0x1407F03A4 (MiCloneLargeFileOnlyVad.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x14043D7C0 (MiBuildWakeList.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14067BC54 (MiEnableLargeSubsection.c)
 */

__int64 __fastcall MiIncrementLargeSubsections(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 *v4; // rdi
  unsigned int v5; // esi
  __int64 *v6; // r15
  volatile LONG *v8; // r12
  KIRQL v9; // cl
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  __int64 *v14; // rax
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  int v19; // [rsp+28h] [rbp-28h]
  int v20; // [rsp+2Ch] [rbp-24h]
  _DWORD v21[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int8 i; // [rsp+90h] [rbp+40h]
  __int64 v24; // [rsp+A0h] [rbp+50h]

  v2 = *a1;
  v4 = a1;
  v24 = *a1;
  v5 = 0;
  v6 = 0LL;
  v8 = (volatile LONG *)(*a1 + 72);
  v9 = ExAcquireSpinLockExclusive(v8);
  for ( i = v9; ; v9 = i )
  {
    v10 = *((_DWORD *)v4 + 12) >> 30;
    if ( !v10 )
      break;
    if ( v10 == 1 && !v5 )
      v5 = 1;
    v11 = *((_DWORD *)v4 + 27);
    if ( v11 == -1 )
      break;
    if ( v11 == 1 )
    {
      v20 = 0;
      v21[1] = 0;
      v22[1] = v22;
      v21[0] = 393479;
      v22[0] = v22;
      v18 = *(_QWORD *)(v2 + 80);
      *(_QWORD *)(v2 + 80) = &v18;
      v19 = 512;
      MiReleaseSpinLockExclusive(v8, v9);
      KeWaitForGate((__int64)v21, 19LL);
    }
    else
    {
      v12 = v11 + 1;
      *((_DWORD *)v4 + 27) = v12;
      if ( v12 == 1 )
      {
        MiReleaseSpinLockExclusive(v8, v9);
        v13 = MiEnableLargeSubsection(v4);
        ExAcquireSpinLockExclusive(v8);
        v14 = MiBuildWakeList(v24, 512);
        MiReleaseControlAreaWaiters(v14);
        v15 = *((_DWORD *)v4 + 27);
        if ( !v13 )
        {
          v5 = -1;
          *((_DWORD *)v4 + 27) = v15 - 1;
          goto LABEL_20;
        }
        v2 = v24;
        *((_DWORD *)v4 + 27) = v15 + 1;
      }
      v6 = v4;
      if ( a2 )
      {
        v16 = *((unsigned int *)v4 + 11);
        if ( a2 <= v16 )
          goto LABEL_20;
        a2 -= v16;
      }
      v4 = (__int64 *)v4[2];
    }
    if ( !v4 )
      goto LABEL_20;
  }
  v5 = -1;
LABEL_20:
  MiReleaseSpinLockExclusive(v8, i);
  if ( v5 == -1 && v6 )
    MiDecrementLargeSubsections(a1, v6);
  return v5;
}
