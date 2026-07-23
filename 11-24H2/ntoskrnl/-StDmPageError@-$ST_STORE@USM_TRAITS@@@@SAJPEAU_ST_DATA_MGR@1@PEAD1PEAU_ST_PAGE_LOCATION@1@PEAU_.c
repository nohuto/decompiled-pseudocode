/*
 * XREFs of ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x14060A408
 * Callers:
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1402F8440 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14060A0A8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     SmEtwEnabled @ 0x140380D60 (SmEtwEnabled.c)
 *     SmLogConsumedPoison @ 0x1404B664C (SmLogConsumedPoison.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14060A0A8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 *     SmEtwLogStoreCorruption @ 0x14060BA08 (SmEtwLogStoreCorruption.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageError(
        __int64 a1,
        const void *a2,
        void *a3,
        ULONG_PTR a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v7; // ebx
  ULONGLONG *v11; // rax
  int v12; // edx
  __int64 v13; // r9
  unsigned int v14; // edi
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v7 = a6;
  v11 = SmEtwEnabled((unsigned __int8)*(_DWORD *)(a1 + 776) == 0 ? 2 : 0);
  if ( v11 && (*(_BYTE *)(v13 + 20) & 0xC) != 0xC )
  {
    v17 = 0LL;
    if ( ((v7 + 1073740576) & 0xFFFFFFFD) != 0 )
    {
      if ( v7 == -1073741761 )
        BYTE1(v17) = 1;
    }
    else
    {
      BYTE1(v17) = 2;
    }
    SmEtwLogStoreCorruption((_DWORD)v11, v12, a1, (_DWORD)a2, *(_WORD *)(v13 + 4), (__int64)&v17);
  }
  v14 = (*(_DWORD *)(a1 + 832) >> 5) & 3;
  if ( v14 >= 2 && (_BYTE)KdDebuggerEnabled )
    __debugbreak();
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0 )
  {
    if ( v7 == -1073740576 )
    {
      result = ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(a1, a2, a3, a4, a5);
      if ( (int)result >= 0 )
        return result;
    }
    else if ( v7 == -1073740574 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 2320));
      SmLogConsumedPoison((__int64)a2, *(unsigned __int16 *)(a4 + 4), 0LL);
    }
  }
  if ( v14 >= 3 )
  {
    v16 = -1073741116;
    if ( v7 != -1073740576 )
      v16 = v7;
    KeBugCheckEx(0x12Bu, v16, *(unsigned __int16 *)(a4 + 4), (ULONG_PTR)a2, (ULONG_PTR)a3);
  }
  return v7;
}
