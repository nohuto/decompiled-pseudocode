/*
 * XREFs of MmStoreLogDecompressionFailure @ 0x14068DA68
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14060A0A8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MmStoreLogDecompressionFailure(char *a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  PHYSICAL_ADDRESS v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned __int8 *v12; // rdx
  __int64 *v13; // rax
  int v14; // [rsp+20h] [rbp-E0h]
  int v15; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  PHYSICAL_ADDRESS v20; // [rsp+58h] [rbp-A8h] BYREF
  PHYSICAL_ADDRESS v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  int *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  PHYSICAL_ADDRESS *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  PHYSICAL_ADDRESS *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]

  v5 = a2;
  if ( *(_QWORD *)&qword_140E37658 )
  {
    v9.QuadPart = (unsigned __int64)MmGetPhysicalAddress(a1).QuadPart >> 12;
    if ( ((v5 + 4095 + ((unsigned __int16)a1 & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL) != 0x1000 )
      MmGetPhysicalAddress(&a1[(unsigned int)(v5 - 1)]);
    if ( a3 )
    {
      if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000002LL) )
      {
        v19 = (__int64)a1;
        v24 = &v19;
        v12 = (unsigned __int8 *)byte_140058E2D;
        v16 = v5;
        v26 = &v16;
        v28 = &v17;
        v18 = a5;
        v30 = &v18;
        v32 = &v20;
        v34 = &v21;
        v13 = &v22;
        v20 = v9;
        v21.QuadPart = v10;
        v22 = 0x1000000LL;
LABEL_11:
        v36 = v13;
        v25 = 8LL;
        v27 = 4LL;
        v17 = a4;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 8LL;
        v35 = 8LL;
        v37 = 8LL;
        tlgWriteEx_EtwWriteEx(v11, v12, v10, 1u, v14, v15, 9u, &v23);
      }
    }
    else if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000002LL) )
    {
      v22 = (__int64)a1;
      v24 = &v22;
      v12 = (unsigned __int8 *)&word_140058C6A;
      v18 = v5;
      v26 = &v18;
      v28 = &v17;
      v16 = a5;
      v30 = &v16;
      v32 = &v21;
      v34 = &v20;
      v13 = &v19;
      v21 = v9;
      v20.QuadPart = v10;
      v19 = 0x1000000LL;
      goto LABEL_11;
    }
  }
}
