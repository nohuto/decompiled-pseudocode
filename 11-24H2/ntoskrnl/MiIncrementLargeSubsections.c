/*
 * XREFs of MiIncrementLargeSubsections @ 0x1404C96E0
 * Callers:
 *     MiReferenceDataSubsections @ 0x140416740 (MiReferenceDataSubsections.c)
 *     MiCloneLargeFileOnlyVad @ 0x1407EFDD4 (MiCloneLargeFileOnlyVad.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 *     MiBuildWakeList @ 0x140445610 (MiBuildWakeList.c)
 *     MiDecrementLargeSubsections @ 0x1404C8E10 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14067AA74 (MiEnableLargeSubsection.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  int v21; // [rsp+28h] [rbp-28h]
  int v22; // [rsp+2Ch] [rbp-24h]
  _DWORD v23[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int8 i; // [rsp+90h] [rbp+40h]
  __int64 v26; // [rsp+A0h] [rbp+50h]

  v2 = *a1;
  v4 = a1;
  v26 = *a1;
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
      v22 = 0;
      v23[1] = 0;
      v24[1] = v24;
      v23[0] = 393479;
      v24[0] = v24;
      v20 = *(_QWORD *)(v2 + 80);
      *(_QWORD *)(v2 + 80) = &v20;
      v21 = 512;
      MiReleaseSpinLockExclusive(v8, v9);
      KeWaitForGate((__int64)v23, 19LL, 0);
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
        v14 = MiBuildWakeList(v26, 512);
        MiReleaseControlAreaWaiters(v14, v15, v16);
        v17 = *((_DWORD *)v4 + 27);
        if ( !v13 )
        {
          v5 = -1;
          *((_DWORD *)v4 + 27) = v17 - 1;
          goto LABEL_20;
        }
        v2 = v26;
        *((_DWORD *)v4 + 27) = v17 + 1;
      }
      v6 = v4;
      if ( a2 )
      {
        v18 = *((unsigned int *)v4 + 11);
        if ( a2 <= v18 )
          goto LABEL_20;
        a2 -= v18;
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
