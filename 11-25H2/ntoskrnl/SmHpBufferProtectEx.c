/*
 * XREFs of SmHpBufferProtectEx @ 0x14039FBF0
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14039D230 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpBufferUpdateFullness @ 0x14039F7E0 (SmHpBufferUpdateFullness.c)
 * Callees:
 *     SmPrepareForFatalHeapCorruption @ 0x140397098 (SmPrepareForFatalHeapCorruption.c)
 *     ExProtectPoolEx @ 0x14039FD08 (ExProtectPoolEx.c)
 *     wyhash @ 0x1403A0738 (wyhash.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall SmHpBufferProtectEx(__int64 a1, _QWORD *a2, char a3, unsigned int a4)
{
  ULONG_PTR v4; // rbp
  unsigned int v7; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  int v12; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+50h] [rbp+8h] BYREF

  v4 = a4;
  BugCheckParameter4 = 0LL;
  v7 = 1;
  if ( *((_DWORD *)a2 + 3) )
  {
    if ( (a3 & 3) != 0 )
    {
      v9 = wyhash(*a2, 4096LL, 0LL);
      v11 = *((_DWORD *)a2 + 3);
      if ( !v9 )
        v9 = 1;
      if ( v9 == v11 )
      {
        if ( (a3 & 1) != 0 )
        {
          ExProtectPoolEx(*a2, *a2, 4096LL, 4LL);
          *((_DWORD *)a2 + 3) = 0;
        }
      }
      else
      {
        if ( (a3 & 4) == 0 )
        {
          SmPrepareForFatalHeapCorruption((void *)*a2, v10, v11, v9, (LONGLONG *)&BugCheckParameter4);
          KeBugCheckEx(0x1C7u, v4, *a2, *((unsigned int *)a2 + 3), BugCheckParameter4);
        }
        return 0;
      }
    }
  }
  else if ( (a3 & 3) == 0 )
  {
    ExProtectPoolEx(*a2, *a2, 4096LL, 2LL);
    v12 = wyhash(*a2, 4096LL, 0LL);
    *((_DWORD *)a2 + 3) = v12;
    if ( !v12 )
      *((_DWORD *)a2 + 3) = 1;
  }
  return v7;
}
