/*
 * XREFs of ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x140189AE4
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall QueryDriverCapsExt(struct DXGADAPTER *a1, struct _D3DKMT_DRIVERCAPS_EXT *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v12; // rdx
  UINT Value; // eax
  UINT v14; // ecx
  UINT v15; // eax
  _BYTE v16[144]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL);
  if ( v5 >= 0 )
  {
    v12 = *((_QWORD *)a1 + 390);
    Value = a2->Value;
    if ( v12 )
    {
      v14 = Value ^ ((unsigned __int8)Value ^ (unsigned __int8)(*(_DWORD *)(v12 + 24) >> 1)) & 1;
      a2->Value = v14;
      v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(*(_DWORD *)(v12 + 24) >> 5)) & 2;
    }
    else
    {
      v15 = Value & 0xFFFFFFFC;
    }
    a2->Value = v15;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
    return 0LL;
  }
  else
  {
    if ( v5 == -1073741130 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v10[3] = a1;
      v10[4] = *((int *)a1 + 104);
      v10[5] = *((unsigned int *)a1 + 103);
      WdLogGlobalForLineNumber = 2518;
    }
    else
    {
      v2 = v5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
    return v2;
  }
}
