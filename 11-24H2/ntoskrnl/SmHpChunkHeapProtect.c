/*
 * XREFs of SmHpChunkHeapProtect @ 0x140379518
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140378D1C (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x140608F88 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 * Callees:
 *     SmPrepareForFatalHeapCorruption @ 0x14037A040 (SmPrepareForFatalHeapCorruption.c)
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall SmHpChunkHeapProtect(__int64 a1, char a2, unsigned int a3)
{
  ULONG_PTR v3; // r14
  unsigned int i; // edi
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  v3 = a3;
  for ( i = 1; i < *(_DWORD *)(a1 + 256); ++i )
  {
    LODWORD(BugCheckParameter4) = 0;
    _BitScanReverse((unsigned int *)&v7, i);
    v8 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v7) + 16 * (i ^ (unsigned __int64)(unsigned int)(1 << v7)));
    v9 = *v8;
    if ( *v8 )
    {
      BugCheckParameter4 = 0LL;
      if ( *((_DWORD *)v8 + 3) )
      {
        if ( (a2 & 3) != 0 )
        {
          v10 = wyhash(v9, 4096LL, 0LL);
          if ( !v10 )
            v10 = 1;
          if ( v10 == *((_DWORD *)v8 + 3) )
          {
            if ( (a2 & 1) != 0 )
            {
              ExProtectPoolEx(*v8, *v8, 4096LL, 4LL);
              *((_DWORD *)v8 + 3) = 0;
            }
          }
          else if ( (a2 & 4) == 0 )
          {
            SmPrepareForFatalHeapCorruption((void *)*v8, (__int64)&BugCheckParameter4);
            KeBugCheckEx(0x1C7u, v3, *v8, *((unsigned int *)v8 + 3), BugCheckParameter4);
          }
        }
      }
      else if ( (a2 & 3) == 0 )
      {
        ExProtectPoolEx(v9, v9, 4096LL, 2LL);
        v11 = wyhash(*v8, 4096LL, 0LL);
        *((_DWORD *)v8 + 3) = v11;
        if ( !v11 )
          *((_DWORD *)v8 + 3) = 1;
      }
    }
  }
}
