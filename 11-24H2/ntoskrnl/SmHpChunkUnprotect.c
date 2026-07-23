/*
 * XREFs of SmHpChunkUnprotect @ 0x140382F80
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14060A0A8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     SmPrepareForFatalHeapCorruption @ 0x14037A040 (SmPrepareForFatalHeapCorruption.c)
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall SmHpChunkUnprotect(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  ULONG_PTR v4; // rbp
  unsigned int v6; // ebx
  __int64 v7; // r10
  __int64 v8; // rcx
  _QWORD **v10; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // r8d
  int v15; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+50h] [rbp+8h] BYREF

  v4 = a4;
  v6 = 1;
  BugCheckParameter4 = 0LL;
  v7 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v8, v7);
  v10 = (_QWORD **)(*(_QWORD *)(a1 + 8 * v8) + 16 * (v7 ^ (unsigned int)(1 << v8)));
  if ( *((_DWORD *)v10 + 3) )
  {
    if ( (a3 & 3) != 0 )
    {
      v12 = wyhash(*v10, 0x1000uLL, 0LL);
      v14 = *((_DWORD *)v10 + 3);
      if ( !v12 )
        v12 = 1;
      if ( v12 == v14 )
      {
        if ( (a3 & 1) != 0 )
        {
          ExProtectPoolEx((unsigned __int64)*v10, (unsigned __int64)*v10, 4096LL, 4u);
          *((_DWORD *)v10 + 3) = 0;
        }
      }
      else
      {
        if ( (a3 & 4) == 0 )
        {
          SmPrepareForFatalHeapCorruption(*v10, v13, v14, v12, (LONGLONG *)&BugCheckParameter4);
          KeBugCheckEx(0x1C7u, v4, (ULONG_PTR)*v10, *((unsigned int *)v10 + 3), BugCheckParameter4);
        }
        return 0;
      }
    }
  }
  else if ( (a3 & 3) == 0 )
  {
    ExProtectPoolEx((unsigned __int64)*v10, (unsigned __int64)*v10, 4096LL, 2u);
    v15 = wyhash(*v10, 0x1000uLL, 0LL);
    *((_DWORD *)v10 + 3) = v15;
    if ( !v15 )
      *((_DWORD *)v10 + 3) = 1;
  }
  return v6;
}
