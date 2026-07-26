/*
 * XREFs of ??$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@KKK@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x140026CC0
 * Callers:
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall ndisIterativeDPInvokeHandlerOnTracker<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, _QWORD, int),
        __int64 a3,
        __int64 *a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbx
  __int64 v8; // rdi
  int v9; // esi
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned int v13; // r13d
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v17; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h]
  __int64 v19; // [rsp+60h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+8h]

  result = &retaddr;
  v21 = a1;
  v5 = *a4;
  *a4 = 0LL;
  if ( v5 )
  {
    do
    {
      v8 = *(_QWORD *)(v5 + 112);
      v9 = *(_DWORD *)(v5 + 132);
      v10 = *(_DWORD *)(v5 + 140);
      if ( *(_QWORD *)v5 )
        v11 = *(_DWORD *)(*(_QWORD *)v5 + 112LL);
      else
        v11 = 1;
      *(_DWORD *)(v5 + 132) = 0;
      if ( byte_14011D800 )
      {
        if ( *(_BYTE *)a1 == 5 )
        {
          v12 = *(_QWORD *)(a1 + 872);
          if ( v12 )
          {
            if ( (*(_DWORD *)(v12 + 56) & 1) != 0 )
            {
              v13 = *(_DWORD *)(a1 + 880);
              v14 = (*(_DWORD *)(v5 + 128) & 0x8000) == 0;
              v17 = 0LL;
              LODWORD(v19) = 0;
              v18 = 0LL;
              if ( v14 )
              {
                if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                {
                  LOWORD(v17) = 40;
                  v15 = *(_QWORD *)(v21 + 864);
                  *((_QWORD *)&v17 + 1) = v5;
                  LODWORD(v18) = 1;
                  *(_QWORD *)((char *)&v18 + 4) = v13 | 0x100000000LL;
                  v19 = 0LL;
                  (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_14011D820 + 1)
                                                                              + 40LL))(
                    xmmword_14011D820,
                    v15,
                    &v17,
                    0LL);
                  ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                }
                a1 = v21;
              }
            }
          }
        }
      }
      if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && (v16 = *(_QWORD *)(a1 + 776)) != 0 )
        result = (_UNKNOWN **)(*((__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, __int64, __int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int)))ndisVerifierNdisDispatch
                               + 14))(
                                a3,
                                v5,
                                v10,
                                v11,
                                v9,
                                v16,
                                a2);
      else
        result = (_UNKNOWN **)a2(a3, v5, v10, v11, v9);
      a1 = v21;
      v5 = v8;
    }
    while ( v8 );
  }
  return result;
}
