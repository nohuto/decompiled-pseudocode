/*
 * XREFs of ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x18000AB74
 * Callers:
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x18000C608 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000EF88 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall AddSidMappingToLsa(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        void *a3,
        enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *a4)
{
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  _BYTE v9[42]; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+5Ah] [rbp-6h]
  __int16 v11; // [rsp+5Eh] [rbp-2h]
  PVOID Buffer; // [rsp+80h] [rbp+20h] BYREF

  v10 = 0;
  v11 = 0;
  v5 = 0;
  Buffer = 0LL;
  v6 = 1;
  memset(&v9[2], 0, 40);
  *(struct _UNICODE_STRING *)v9 = *a1;
  if ( a2 )
    *(struct _UNICODE_STRING *)&v9[16] = *a2;
  *(_QWORD *)&v9[32] = a3;
  v7 = LsaLookupManageSidNameMapping(0LL, v9, &Buffer);
  if ( v7 < 0 )
  {
    v5 = v7 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180014D80, 3u, v7 | 0x10000000, 0x1F5u, 0LL);
  }
  if ( Buffer )
  {
    v6 = *(_DWORD *)Buffer;
    if ( v5 < 0 && (unsigned int)(v6 - 2) <= 1 )
      v5 = 0;
    LsaLookupFreeMemory(Buffer);
  }
  *(_DWORD *)a4 = v6;
  return (unsigned int)v5;
}
