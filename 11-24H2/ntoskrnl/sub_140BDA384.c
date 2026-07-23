/*
 * XREFs of sub_140BDA384 @ 0x140BDA384
 * Callers:
 *     KiSwInterruptDispatch @ 0x1405061B0 (KiSwInterruptDispatch.c)
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     sub_140516C24 @ 0x140516C24 (sub_140516C24.c)
 *     sub_140517D28 @ 0x140517D28 (sub_140517D28.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BD5A04 @ 0x140BD5A04 (sub_140BD5A04.c)
 *     sub_140BD80B0 @ 0x140BD80B0 (sub_140BD80B0.c)
 *     sub_140BDADF0 @ 0x140BDADF0 (sub_140BDADF0.c)
 *     sub_140BDBDF0 @ 0x140BDBDF0 (sub_140BDBDF0.c)
 *     sub_140BDC550 @ 0x140BDC550 (sub_140BDC550.c)
 *     sub_140BE196C @ 0x140BE196C (sub_140BE196C.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140BDA384(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // r11
  _QWORD *v9; // rdx
  __int64 v10; // r9
  int v11; // ecx

  while ( !*(_DWORD *)(a1 + 2328) )
  {
    *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
    result = ((unsigned __int64)a2 - 0x4C48B4211BBACBEBLL) & -(__int64)(a2 != 0LL);
    *(_QWORD *)(a1 + 2344) = result;
    if ( a2 && !a4 )
      a4 = *a2;
    *(_QWORD *)(a1 + 2352) = a4;
    v6 = *(_DWORD *)(a1 + 2520);
    *(_QWORD *)(a1 + 2360) = a3;
    *(_DWORD *)(a1 + 2328) = 1;
    if ( (v6 & 0x20000000) != 0 )
      break;
    if ( (*(_DWORD *)(a1 + 2524) & 0x200000) == 0 )
      break;
    if ( (v6 & 1) == 0 )
      break;
    v7 = *(unsigned int *)(a1 + 2676);
    v8 = *(_QWORD *)(a1 + 2104);
    result = (unsigned int)(*(_DWORD *)(a1 + 2052) - v7);
    a3 = *(_QWORD *)(a1 + 2680);
    v9 = (_QWORD *)(v7 + a1);
    v10 = v7 + a1 + 8 * (result >> 3);
    while ( v9 != (_QWORD *)v10 )
    {
      *v9 ^= a3;
      result = v8 ^ *v9;
      a3 = (result + __ROR8__(a3, a3 & 0x3F)) ^ 0xEFA;
      ++v9;
    }
    *(_DWORD *)(a1 + 2524) &= ~0x200000u;
    if ( a3 == *(_QWORD *)(a1 + 2688) )
      break;
    v11 = *(_DWORD *)(a1 + 2052);
    result = *(_QWORD *)(a1 + 1416);
    *(_QWORD *)result = a1;
    *(_DWORD *)(result + 16) = v11;
    if ( !*(_DWORD *)(a1 + 2328) )
    {
      result = *(_QWORD *)(a1 + 1416);
      *(_QWORD *)(result + 24) = a3 ^ *(_QWORD *)(a1 + 2688);
    }
    a2 = 0LL;
    a4 = 256LL;
  }
  return result;
}
