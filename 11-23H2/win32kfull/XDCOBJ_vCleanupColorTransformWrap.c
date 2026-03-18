/*
 * XREFs of XDCOBJ_vCleanupColorTransformWrap @ 0x1C0078E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C02644C0 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C0299E80 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall XDCOBJ_vCleanupColorTransformWrap(struct XDCOBJ *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rsi
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  result = *(_QWORD *)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 2080LL);
  while ( v3 )
  {
    COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v6, *(void **)v3);
    v4 = v7;
    v5 = v3;
    if ( v7 )
    {
      COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)v6, a1);
      v4 = v7;
    }
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 2080LL);
    if ( v3 == v5 )
    {
      v3 = *(_QWORD *)(v3 + 8);
      *(_QWORD *)(*(_QWORD *)a1 + 2080LL) = v3;
      v4 = v7;
    }
    if ( v4 )
      DEC_SHARE_REF_CNT(v4);
    result = UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v6);
  }
  return result;
}
