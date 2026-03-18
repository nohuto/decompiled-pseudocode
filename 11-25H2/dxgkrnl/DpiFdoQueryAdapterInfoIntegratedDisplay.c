/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x14023D870
 * Callers:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14005D800 (DpiQueryIntegratedDescriptorWrapper.c)
 * Callees:
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // r13
  __int64 v7; // rdx
  __int16 v10; // ax
  unsigned __int16 v11; // ax
  _DWORD *Pool2; // rax
  __int64 v13; // r14
  _DWORD *v14; // rsi
  __int64 v15; // rdi
  int v16; // eax
  UINT v17; // eax
  DXGADAPTER *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  struct _DXGKARG_QUERYADAPTERINFO v21; // [rsp+20h] [rbp-60h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h]
  __int128 v23; // [rsp+60h] [rbp-20h]
  __int128 v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+B0h] [rbp+30h] BYREF

  v4 = *(_DWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a1 + 64);
  v7 = *(unsigned __int16 *)(a2 + 92);
  v25 = v4;
  memset(&v21, 0, sizeof(v21));
  if ( (unsigned int)v7 <= 0x7C )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 1186;
    return 3221225485LL;
  }
  *(_WORD *)(a2 + 94) = v7 - 124;
  if ( (unsigned __int16)(v7 - 124) < 0x80u )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 1201;
    return 3221225485LL;
  }
  v10 = (v7 - 124) & 0xFF80;
  *(_WORD *)(a2 + 94) = v10;
  v11 = v10 + 124;
  if ( v11 != (_WORD)v7 )
  {
    WdLogSingleEntry1(3LL, v7 - v11);
    WdLogGlobalForLineNumber = 1210;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, *(unsigned __int16 *)(a2 + 92), 1953656900LL, a4);
  v13 = 0LL;
  v14 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, *(unsigned __int16 *)(a2 + 92));
    v16 = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
    LODWORD(v15) = v16;
    if ( v16 >= 0 )
    {
      *(_QWORD *)&v21.Type = 0LL;
      v21.pInputData = &v25;
      v17 = *(unsigned __int16 *)(a2 + 92);
      *(&v21.InputDataSize + 1) = 0;
      v21.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR;
      *(_OWORD *)&v21.OutputDataSize = 0LL;
      v21.OutputDataSize = v17;
      v21.InputDataSize = 4;
      v21.pOutputData = v14;
      v18 = *(DXGADAPTER **)(v5 + 4032);
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v15 = (int)DXGADAPTER::DdiQueryAdapterInfo(v18, &v21);
      DpiReleaseCoreSyncAccessSafe(a1, 0LL);
      if ( (int)v15 >= 0 )
      {
        **(_DWORD **)(a2 + 104) = *v14;
        v19 = *(_QWORD *)(a2 + 104);
        *(_OWORD *)(v19 + 8) = *(_OWORD *)(v14 + 2);
        *(_OWORD *)(v19 + 24) = *(_OWORD *)(v14 + 6);
        *(_OWORD *)(v19 + 40) = *(_OWORD *)(v14 + 10);
        *(_QWORD *)(v19 + 56) = *((_QWORD *)v14 + 7);
        *(_DWORD *)(*(_QWORD *)(a2 + 104) + 64LL) = v14[16];
        v20 = *(_QWORD *)(a2 + 104);
        *(_OWORD *)(v20 + 68) = *(_OWORD *)(v14 + 17);
        *(_OWORD *)(v20 + 84) = *(_OWORD *)(v14 + 21);
        *(_OWORD *)(v20 + 100) = *(_OWORD *)(v14 + 25);
        *(_DWORD *)(v20 + 116) = v14[29];
        do
        {
          *(_BYTE *)(*(_QWORD *)(a2 + 104) + v13 + 120) = *((_BYTE *)v14 + v13 + 120);
          ++v13;
        }
        while ( v13 < 4 );
        memmove(*(void **)(a2 + 112), v14 + 31, *(unsigned __int16 *)(a2 + 94));
      }
      else
      {
        WdLogSingleEntry1(2LL, v15);
        WdLogGlobalForLineNumber = 1264;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v16);
      WdLogGlobalForLineNumber = 1246;
    }
    ExFreePoolWithTag(v14, 0);
  }
  else
  {
    LODWORD(v15) = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 1227;
  }
  return (unsigned int)v15;
}
