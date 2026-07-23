/*
 * XREFs of HalpDmaCvmMakeMdlDeviceShared @ 0x1406FDAF4
 * Callers:
 *     HalpDmaAllocateScatterMemory @ 0x140A86E40 (HalpDmaAllocateScatterMemory.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpDmaCvmSetPageShareability @ 0x1406FDBFC (HalpDmaCvmSetPageShareability.c)
 */

__int64 __fastcall HalpDmaCvmMakeMdlDeviceShared(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // r14d
  unsigned __int64 i; // rbp
  ULONG_PTR BugCheckParameter4; // rbx
  int v12; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( *(_QWORD *)a1 )
    return 3221225474LL;
  v5 = qword_140FC0D48;
  v6 = 0LL;
  v7 = (*(_DWORD *)(a1 + 40) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 40) & 0xFFF) != 0);
  while ( 1 )
  {
    if ( v6 >= v7 )
      return 0LL;
    v8 = *(_QWORD *)(a1 + 8 * v6 + 48) << 12;
    if ( (v5 & v8) == 0 )
      break;
LABEL_8:
    ++v6;
  }
  LOBYTE(a3) = 1;
  v9 = HalpDmaCvmSetPageShareability(v8, 1LL, a3, &v13);
  if ( v9 >= 0 )
  {
    *(_QWORD *)(a1 + 8 * v6 + 48) = v13 >> 12;
    goto LABEL_8;
  }
  for ( i = 0LL; i < v6; ++i )
  {
    BugCheckParameter4 = *(_QWORD *)(a1 + 8 * i + 48) << 12;
    v12 = HalpDmaCvmSetPageShareability(BugCheckParameter4, 1LL, 0LL, &v13);
    if ( v12 < 0 )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF08uLL, v12, BugCheckParameter4);
    *(_QWORD *)(a1 + 8 * i + 48) = v13 >> 12;
  }
  return (unsigned int)v9;
}
