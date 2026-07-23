/*
 * XREFs of EmonReleaseReservedCounters @ 0x14055B600
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall EmonReleaseReservedCounters(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  bool i; // zf
  __int64 v7; // r8
  int v8; // ecx
  char v9; // r9
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v1 = &retaddr;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = (unsigned int)v1;
  v4 = *(_QWORD *)(a1 + 80LL * (_QWORD)v1 + 32);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  __writemsr(0x390u, v4);
  for ( i = !_BitScanForward64((unsigned __int64 *)&v7, v4); !i; LODWORD(v7) = v13 )
  {
    v8 = 0;
    v9 = v7;
    if ( (unsigned int)v7 >= 0x20 )
    {
      LODWORD(v7) = v7 - 32;
      v8 = 1;
    }
    v10 = *(_QWORD *)(KiProcessorBlock[v3] + 88);
    if ( v8 )
    {
      v11 = v8 - 1;
      if ( v11 )
      {
        v12 = v11 - 99;
        if ( v12 )
        {
          if ( v12 == 1 )
            v10 += 72LL;
          else
            v10 = 0LL;
        }
        else
        {
          v10 += 48LL;
        }
      }
      else
      {
        v10 += 24LL;
      }
    }
    v4 ^= 1LL << v9;
    *(_DWORD *)(*(_QWORD *)(v10 + 16) + 48LL * (unsigned int)v7 + 24) = 3;
    i = !_BitScanForward64(&v13, v4);
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v14 = EmonDsManagementAreas + 160 * v3;
    if ( EmonPebs64Bit )
    {
      v15 = *(_QWORD *)(v14 + 32);
      *(_QWORD *)(v14 + 40) = v15;
      *(_QWORD *)(v14 + 56) = v15;
    }
    else
    {
      v16 = *(_DWORD *)(v14 + 16);
      *(_DWORD *)(v14 + 20) = v16;
      *(_DWORD *)(v14 + 28) = v16;
    }
    EmonPebsInUse = 0;
  }
  _InterlockedAdd((volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[3], 0xFFFFFFFE);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 0LL;
}
