/*
 * XREFs of MiStartDpcGang @ 0x140417840
 * Callers:
 *     MiAllocateFastLargePagesForMdl @ 0x1403907B8 (MiAllocateFastLargePagesForMdl.c)
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 *     MiZeroHotAddMemory @ 0x1407DA4D4 (MiZeroHotAddMemory.c)
 * Callees:
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     MiDoGangAssignment @ 0x1404D4858 (MiDoGangAssignment.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetGangAssignment @ 0x1404F449C (MiGetGangAssignment.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // r10
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned int i; // eax
  __int64 *v20; // rcx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((unsigned int *)BugCheckParameter2 + 47);
  *((_DWORD *)BugCheckParameter2 + 51) = 0;
  *((_DWORD *)BugCheckParameter2 + 44) = 0;
  v3 = BugCheckParameter2 + 23;
  v21 = 0LL;
  if ( (*v3 & 1) != 0 )
  {
    v13 = BugCheckParameter2[1];
    v14 = *BugCheckParameter2;
    v15 = BugCheckParameter2 + 2;
    v16 = v13 / v1;
    v17 = 0LL;
    v18 = v1;
    do
    {
      *(_QWORD *)(v17 + *v15) = v14;
      v14 += v16;
      v17 += 16LL;
      *(_QWORD *)(v17 + *v15 - 8) = v16;
      --v18;
    }
    while ( v18 );
    v3 = BugCheckParameter2 + 23;
    *(_QWORD *)(*v15 + 16 * v1 - 8) += v13 % v1;
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
      MiGetGangAssignment(BugCheckParameter2, &v21);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v10);
      }
      MiDoGangAssignment(BugCheckParameter2, &v21);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
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
      v20 = (__int64 *)BugCheckParameter2[2];
      if ( i >= (unsigned int)v1 )
        break;
      if ( v20[2 * i + 1] )
        KeBugCheckEx(0x1Au, 0x6182uLL, (ULONG_PTR)BugCheckParameter2, v20[2 * i], v20[2 * i + 1]);
    }
    if ( v20 != BugCheckParameter2 + 3 )
    {
      ExFreePoolWithTag(v20, 0);
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
