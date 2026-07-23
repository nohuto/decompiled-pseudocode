/*
 * XREFs of MiStartDpcGang @ 0x140270670
 * Callers:
 *     MiAllocateFastLargePagesForMdl @ 0x14026EEC8 (MiAllocateFastLargePagesForMdl.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiZeroHotAddMemory @ 0x1407EA964 (MiZeroHotAddMemory.c)
 * Callees:
 *     MiDoGangAssignment @ 0x14026FEE4 (MiDoGangAssignment.c)
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetGangAssignment @ 0x1404F48F0 (MiGetGangAssignment.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiStartDpcGang(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rbp
  _DWORD *v3; // rcx
  int v4; // esi
  _QWORD *v5; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  void *v7; // rcx
  void *v8; // rcx
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
  _QWORD *v21; // rcx
  ULONG_PTR *v22; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(BugCheckParameter2 + 188);
  *(_DWORD *)(BugCheckParameter2 + 204) = 0;
  *(_DWORD *)(BugCheckParameter2 + 176) = 0;
  v3 = (_DWORD *)(BugCheckParameter2 + 184);
  v22 = 0LL;
  if ( (*v3 & 1) != 0 )
  {
    v14 = *(_QWORD *)(BugCheckParameter2 + 8);
    v15 = *(_QWORD *)BugCheckParameter2;
    v16 = (_QWORD *)(BugCheckParameter2 + 16);
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
    v3 = (_DWORD *)(BugCheckParameter2 + 184);
    *(_QWORD *)(*v16 + 16 * v1 - 8) += v14 % v1;
  }
  else if ( !*(_WORD *)(BugCheckParameter2 + 154) )
  {
    return;
  }
  if ( (_DWORD)v1 != 1 || (v4 = 0, (*v3 & 2) != 0) )
    v4 = 1;
  while ( 1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 176) = 0;
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
      MiDoGangAssignment((__int64 *)BugCheckParameter2, &v22);
      if ( KiIrqlFlags )
      {
        LOBYTE(v13) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      }
      __writecr8(CurrentIrql);
    }
    if ( !*(_DWORD *)(BugCheckParameter2 + 204) )
      break;
    v9 = *(unsigned __int16 *)(BugCheckParameter2 + 214);
    *(_QWORD *)(BugCheckParameter2 + 204) = 0LL;
    memmove(*(void **)(BugCheckParameter2 + 224), *(const void **)(BugCheckParameter2 + 216), 16 * v9);
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 156) )
    KeBugCheckEx(0x1Au, 0x6181uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 1) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      v21 = *(_QWORD **)(BugCheckParameter2 + 16);
      if ( i >= (unsigned int)v1 )
        break;
      if ( v21[2 * i + 1] )
        KeBugCheckEx(0x1Au, 0x6182uLL, BugCheckParameter2, v21[2 * i], v21[2 * i + 1]);
    }
    if ( v21 != (_QWORD *)(BugCheckParameter2 + 24) )
    {
      ExFreePoolWithTag(v21, 0);
      *(_QWORD *)(BugCheckParameter2 + 16) = 0LL;
    }
  }
  else
  {
    v5 = *(_QWORD **)(BugCheckParameter2 + 8);
    for ( BugCheckParameter4 = 0LL;
          (unsigned int)BugCheckParameter4 < (unsigned int)v1;
          BugCheckParameter4 = (unsigned int)(BugCheckParameter4 + 1) )
    {
      if ( *v5 )
        KeBugCheckEx(0x1Au, 0x6183uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 8), BugCheckParameter4);
      ++v5;
    }
    v7 = *(void **)(BugCheckParameter2 + 8);
    if ( v7 != (void *)(BugCheckParameter2 + 16) )
    {
      ExFreePoolWithTag(v7, 0);
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    }
  }
  v8 = *(void **)(BugCheckParameter2 + 216);
  if ( v8 )
  {
    if ( v8 != (void *)(BugCheckParameter2 + 232) )
      ExFreePoolWithTag(v8, 0);
  }
}
