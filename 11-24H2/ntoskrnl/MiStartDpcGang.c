/*
 * XREFs of MiStartDpcGang @ 0x1403A875C
 * Callers:
 *     MiAllocateFastLargePagesForMdl @ 0x1403A7798 (MiAllocateFastLargePagesForMdl.c)
 *     MiInitializeDynamicPfns @ 0x14066D8BC (MiInitializeDynamicPfns.c)
 *     MiZeroHotAddMemory @ 0x1407EA394 (MiZeroHotAddMemory.c)
 * Callees:
 *     MiDoGangAssignment @ 0x1403A8984 (MiDoGangAssignment.c)
 *     KeGenericCallDpcEx @ 0x140414C8C (KeGenericCallDpcEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetGangAssignment @ 0x1404F700C (MiGetGangAssignment.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiStartDpcGang(__int64 *BugCheckParameter2)
{
  unsigned __int64 v1; // rbp
  _DWORD *v3; // rcx
  int v4; // esi
  _QWORD *v5; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // r10
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned int i; // eax
  __int64 *v21; // rcx
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((unsigned int *)BugCheckParameter2 + 47);
  *((_DWORD *)BugCheckParameter2 + 51) = 0;
  *((_DWORD *)BugCheckParameter2 + 44) = 0;
  v3 = BugCheckParameter2 + 23;
  v22 = 0LL;
  if ( (*v3 & 1) != 0 )
  {
    v14 = BugCheckParameter2[1];
    v15 = *BugCheckParameter2;
    v16 = BugCheckParameter2 + 2;
    v17 = v14 / v1;
    v18 = 0LL;
    v19 = v1;
    do
    {
      *(_QWORD *)(v18 + *v16) = v15;
      v15 += v17;
      v18 += 16LL;
      *(_QWORD *)(v18 + *v16 - 8) = v17;
      --v19;
    }
    while ( v19 );
    v3 = BugCheckParameter2 + 23;
    *(_QWORD *)(*v16 + 16 * v1 - 8) += v14 % v1;
  }
  else if ( !*((_WORD *)BugCheckParameter2 + 77) )
  {
    return;
  }
  if ( (_DWORD)v1 != 1 || (v4 = 0, (*v3 & 2) != 0) )
    v4 = 1;
  while ( 1 )
  {
    *((_DWORD *)BugCheckParameter2 + 44) = 0;
    if ( v4 )
    {
      KeGenericCallDpcEx(MiDpcGangTarget, BugCheckParameter2);
    }
    else
    {
      MiGetGangAssignment(BugCheckParameter2, &v22);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = 2;
        LOBYTE(v11) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v11, v10);
      }
      MiDoGangAssignment(BugCheckParameter2, &v22);
      if ( KiIrqlFlags )
      {
        LOBYTE(v13) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      }
      __writecr8(CurrentIrql);
    }
    if ( !*((_DWORD *)BugCheckParameter2 + 51) )
      break;
    v9 = *((unsigned __int16 *)BugCheckParameter2 + 107);
    *(__int64 *)((char *)BugCheckParameter2 + 204) = 0LL;
    memmove((void *)BugCheckParameter2[28], (const void *)BugCheckParameter2[27], 16 * v9);
  }
  if ( !*((_DWORD *)BugCheckParameter2 + 39) )
    KeBugCheckEx(0x1Au, 0x6181uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter2[23] & 1) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      v21 = (__int64 *)BugCheckParameter2[2];
      if ( i >= (unsigned int)v1 )
        break;
      if ( v21[2 * i + 1] )
        KeBugCheckEx(0x1Au, 0x6182uLL, (ULONG_PTR)BugCheckParameter2, v21[2 * i], v21[2 * i + 1]);
    }
    if ( v21 != BugCheckParameter2 + 3 )
    {
      ExFreePoolWithTag(v21, 0);
      BugCheckParameter2[2] = 0LL;
    }
  }
  else
  {
    v5 = (_QWORD *)BugCheckParameter2[1];
    for ( BugCheckParameter4 = 0LL;
          (unsigned int)BugCheckParameter4 < (unsigned int)v1;
          BugCheckParameter4 = (unsigned int)(BugCheckParameter4 + 1) )
    {
      if ( *v5 )
        KeBugCheckEx(0x1Au, 0x6183uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter2[1], BugCheckParameter4);
      ++v5;
    }
    v7 = (__int64 *)BugCheckParameter2[1];
    if ( v7 != BugCheckParameter2 + 2 )
    {
      ExFreePoolWithTag(v7, 0);
      BugCheckParameter2[1] = 0LL;
    }
  }
  v8 = (__int64 *)BugCheckParameter2[27];
  if ( v8 )
  {
    if ( v8 != BugCheckParameter2 + 29 )
      ExFreePoolWithTag(v8, 0);
  }
}
