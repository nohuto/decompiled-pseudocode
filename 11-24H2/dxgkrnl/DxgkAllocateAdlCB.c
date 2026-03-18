/*
 * XREFs of DxgkAllocateAdlCB @ 0x14003A570
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x14003A634 (-SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z.c)
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x14003A6E0 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 *     ?SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140048860 (-SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 */

__int64 __fastcall DxgkAllocateAdlCB(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax
  struct SYSMM_ADAPTER_OBJECT *v4; // rsi
  int v5; // edi
  int v6; // edx
  int v7; // edx
  unsigned int v8; // r9d
  __int64 result; // rax
  struct _DXGK_ADL *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)v2 >= 4 )
  {
    WdLogSingleEntry1(3LL, v2 >> 2);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 547;
  }
  else
  {
    v4 = *(struct SYSMM_ADAPTER_OBJECT **)a1;
    v5 = SysMmLockObject(*(struct SYSMM_ADAPTER_OBJECT **)a1, a2);
    if ( v5 >= 0 )
    {
      v6 = *(_DWORD *)(a1 + 24);
      v10 = 0LL;
      v7 = v6 & 1;
      v8 = v7 | 2;
      if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
        v8 = v7;
      v5 = SysMmCreateAdl(v4, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v8, &v10);
      if ( v5 >= 0 )
      {
        *(_QWORD *)(a1 + 32) = v10;
        return 0LL;
      }
      SysMmUnlockObject(v4);
    }
    return (unsigned int)v5;
  }
  return result;
}
