/*
 * XREFs of ??0ResourceHandleInfo@@QEAA@AEBU0@@Z @ 0x1800E6384
 * Callers:
 *     ?NewNode@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBUResourceHandleInfo@@PEAV312@1@Z @ 0x1800E978C (-NewNode@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@AEAA.c)
 * Callees:
 *     ??0EndpointInfo@@QEAA@AEBV0@@Z @ 0x1800E6208 (--0EndpointInfo@@QEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
ResourceHandleInfo *__fastcall ResourceHandleInfo::ResourceHandleInfo(
        ResourceHandleInfo *this,
        const struct ResourceHandleInfo *a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  *(_QWORD *)this = *(_QWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v4 = (_OWORD *)((char *)this + 12);
  v5 = (_OWORD *)((char *)a2 + 12);
  v6 = 2LL;
  do
  {
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    v4[6] = v5[6];
    v4 += 8;
    *(v4 - 1) = v5[7];
    v5 += 8;
    --v6;
  }
  while ( v6 );
  *(_OWORD *)((char *)this + 268) = *(_OWORD *)((char *)a2 + 268);
  *((_DWORD *)this + 71) = *((_DWORD *)a2 + 71);
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 72);
  *((_DWORD *)this + 73) = *((_DWORD *)a2 + 73);
  *((_DWORD *)this + 74) = *((_DWORD *)a2 + 74);
  EndpointInfo::EndpointInfo(
    (ResourceHandleInfo *)((char *)this + 304),
    (const struct ResourceHandleInfo *)((char *)a2 + 304));
  *((_DWORD *)this + 108) = *((_DWORD *)a2 + 108);
  *((_DWORD *)this + 109) = *((_DWORD *)a2 + 109);
  *((_DWORD *)this + 110) = *((_DWORD *)a2 + 110);
  v7 = *((_QWORD *)a2 + 56);
  *((_QWORD *)this + 56) = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return this;
}
