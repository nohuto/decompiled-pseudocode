/*
 * XREFs of ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x14037170C
 * Callers:
 *     ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x1403B293C (-AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QE.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1400351C4 (-Add@-$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNTARGETMODE@@@@QEAA@XZ @ 0x14004A0F4 (--1-$auto_ptr@VDMMVIDPNTARGETMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AddMode(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rdi
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rax

  if ( !*a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 268;
  }
  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 != a1 + 48 )
  {
    v6 = v5 - 8;
    if ( v6 )
    {
      while ( *(_DWORD *)(v6 + 24) != *(_DWORD *)(v4 + 24) )
      {
        v12 = *(_QWORD *)(v6 + 8);
        v6 = v12 - 8;
        if ( v12 == a1 + 48 )
          v6 = 0LL;
        if ( !v6 )
          goto LABEL_5;
      }
      if ( *(_DWORD *)(v6 + 76) != *(_DWORD *)(v4 + 76)
        || *(_DWORD *)(v6 + 80) != *(_DWORD *)(v4 + 80)
        || *(_DWORD *)(v6 + 84) != *(_DWORD *)(v4 + 84)
        || *(_DWORD *)(v6 + 88) != *(_DWORD *)(v4 + 88)
        || *(_DWORD *)(v6 + 92) != *(_DWORD *)(v4 + 92)
        || *(_DWORD *)(v6 + 96) != *(_DWORD *)(v4 + 96)
        || *(_DWORD *)(v6 + 100) != *(_DWORD *)(v4 + 100)
        || *(_DWORD *)(v6 + 104) != *(_DWORD *)(v4 + 104)
        || *(_QWORD *)(v6 + 112) != *(_QWORD *)(v4 + 112)
        || (v9 = *(unsigned int *)(v4 + 120), (((unsigned __int8)v9 ^ *(_BYTE *)(v6 + 120)) & 7) != 0)
        || (((unsigned __int16)v9 ^ (unsigned __int16)*(_DWORD *)(v6 + 120)) & 0x1F8) != 0
        || (v13 = *(_DWORD *)(v6 + 128),
            v7 = *(unsigned int *)(v4 + 128),
            (((unsigned __int8)v7 ^ (unsigned __int8)v13) & 3) != 0)
        || (((unsigned __int8)v7 ^ (unsigned __int8)v13) & 0xFC) != 0
        || (((unsigned __int16)v7 ^ (unsigned __int16)v13) & 0x3F00) != 0
        || (((unsigned int)v7 ^ v13) & 0xFC000) != 0
        || (((unsigned int)v7 ^ v13) & 0x3F00000) != 0
        || (v8 = (unsigned int)v7 ^ v13, (v8 & 0xFC000000) != 0) )
      {
        WdLogSingleEntry3(2LL, *(unsigned int *)(v4 + 24), *a2, a1);
        WdLogGlobalForLineNumber = 305;
        auto_ptr<DMMVIDPNTARGETMODE>::~auto_ptr<DMMVIDPNTARGETMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
        return 3223192356LL;
      }
      goto LABEL_34;
    }
  }
LABEL_5:
  if ( !Set<DMMVIDPNTARGETMODE>::Add((_QWORD *)(a1 + 24), v4) )
  {
LABEL_34:
    v14 = WdLogNewEntry5_WdTrace(v7, v4, v8, v9);
    *(_QWORD *)(v14 + 24) = *a2;
    *(_QWORD *)(v14 + 32) = a1;
    WdLogGlobalForLineNumber = 296;
    auto_ptr<DMMVIDPNTARGETMODE>::~auto_ptr<DMMVIDPNTARGETMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return 3223192340LL;
  }
  v10 = (__int64 (__fastcall ***)(_QWORD, __int64))*a2;
  if ( a1 )
  {
    if ( *(_QWORD *)(*a2 + 40) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 86;
    }
    v10[5] = (__int64 (__fastcall **)(_QWORD, __int64))a1;
  }
  else
  {
    WdLogSingleEntry2(2LL, v10 + 4, *(_QWORD *)(*a2 + 40));
    WdLogGlobalForLineNumber = 79;
  }
  *a2 = 0LL;
  auto_ptr<DMMVIDPNTARGETMODE>::~auto_ptr<DMMVIDPNTARGETMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return 0LL;
}
