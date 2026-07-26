/*
 * XREFs of ??$ndisCallNextDatapathHandler@$0A@AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z0AEAPEAU0@AEAK55@Z @ 0x14005FDA0
 * Callers:
 *     ??$ndisDataPathExpandStackCallback@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAX@Z @ 0x14005FD60 (--$ndisDataPathExpandStackCallback@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisCallNextDatapathHandler<0,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
        __int64 *a1,
        __int64 (__fastcall **a2)(__int64, __int64, _QWORD, _QWORD),
        __int64 *a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6,
        unsigned int *a7)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD, _QWORD); // r14
  unsigned int v10; // edi
  __int64 v11; // r15
  unsigned int v12; // esi
  __int64 v14; // rax
  bool v15; // zf
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int128 v19; // [rsp+40h] [rbp-48h] BYREF
  __int128 v20; // [rsp+50h] [rbp-38h]
  __int64 v21; // [rsp+60h] [rbp-28h]

  v7 = *a4;
  v8 = *a3;
  v9 = *a2;
  v10 = *a7;
  v11 = *a1;
  v12 = *a5;
  if ( byte_1401278B0 )
  {
    if ( *(_BYTE *)v11 == 5 )
    {
      v14 = *(_QWORD *)(v11 + 912);
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 56) & 1) != 0 )
        {
          v15 = (*(_DWORD *)(v7 + 128) & 0x8000) == 0;
          v16 = *(_DWORD *)(v11 + 920);
          v19 = 0LL;
          LODWORD(v21) = 0;
          v20 = 0LL;
          if ( v15 )
          {
            if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
            {
              v17 = *(_QWORD *)(v11 + 904);
              LOWORD(v19) = 40;
              *((_QWORD *)&v19 + 1) = v7;
              LODWORD(v20) = 1;
              *(_QWORD *)((char *)&v20 + 4) = v16 | 0x200000000LL;
              v21 = 0LL;
              (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1) + 40LL))(
                xmmword_1401278D0,
                v17,
                &v19,
                0LL);
              ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
            }
          }
        }
      }
    }
  }
  if ( ndisVerifierNdisDispatch && *(_BYTE *)v11 == 5 && (v18 = *(_QWORD *)(v11 + 776)) != 0 )
    return (*((__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD)))ndisVerifierNdisDispatch
            + 10))(
             v8,
             v7,
             v12,
             v10,
             v18,
             v9);
  else
    return v9(v8, v7, v12, v10);
}
