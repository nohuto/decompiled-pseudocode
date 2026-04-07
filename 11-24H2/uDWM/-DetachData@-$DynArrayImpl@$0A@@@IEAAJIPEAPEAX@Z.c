/*
 * XREFs of ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800F50A4
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B84E0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800F4990 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800F6378 (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<0>::DetachData(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v3; // rsi
  unsigned int v4; // edi
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  int v9; // eax
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(void **)a1;
  v4 = 0;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
  {
    v7 = *(unsigned int *)(a1 + 20);
    v10 = 0LL;
    result = HrMalloc(a1, v7, &v10);
    v4 = result;
    if ( (int)result < 0 )
    {
      *a3 = 0LL;
      return result;
    }
    v9 = *(_DWORD *)(a1 + 24);
    v3 = v10;
    if ( v9 )
      memcpy_0(v10, *(const void **)a1, (unsigned int)(8 * v9));
  }
  *(_QWORD *)a1 = 0LL;
  result = v4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *a3 = v3;
  return result;
}
