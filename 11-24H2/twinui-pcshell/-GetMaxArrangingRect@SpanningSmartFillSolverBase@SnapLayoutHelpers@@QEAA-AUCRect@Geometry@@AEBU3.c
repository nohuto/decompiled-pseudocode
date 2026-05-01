/*
 * XREFs of ?GetMaxArrangingRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AUCRect@Geometry@@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805AAB28
 * Callers:
 *     ?GetRectForColumn@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805AB89C (-GetRectForColumn@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEB.c)
 *     ?GetRectForRow@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805AB9BC (-GetRectForRow@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV-$.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall SnapLayoutHelpers::SpanningSmartFillSolverBase::GetMaxArrangingRect(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v10; // esi
  _QWORD *v11; // r14
  unsigned int v12; // eax
  int v13; // edi
  unsigned int v14; // ebx
  __int64 v15; // r13
  int v16; // r9d
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  _DWORD *v22; // rax
  int v23; // ecx
  _DWORD *result; // rax
  unsigned int v25; // [rsp+40h] [rbp-41h] BYREF
  int v26; // [rsp+44h] [rbp-3Dh]
  int v27; // [rsp+48h] [rbp-39h] BYREF
  int v28; // [rsp+4Ch] [rbp-35h]
  int v29; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v30[8]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v31[16]; // [rsp+60h] [rbp-21h] BYREF

  v10 = MulDiv(616, a4, 96);
  (**(void (__fastcall ***)(__int64, int *, __int64))a1)(a1, (int *)&v25, a3);
  (*(void (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)a1 + 8LL))(a1, &v29, a3);
  v11 = *(_QWORD **)a7;
  v12 = v25;
  v13 = v25;
  v14 = v25;
  v15 = *(_QWORD *)a7 + 8LL * *(_QWORD *)(a7 + 8);
  if ( *(_QWORD *)a7 == v15 )
  {
    v16 = v26;
  }
  else
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v11 + 48LL))(*v11, v31);
      (**(void (__fastcall ***)(__int64, int *, _BYTE *))a1)(a1, &v27, v31);
      (*(void (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)a1 + 8LL))(a1, v30, v31);
      v12 = v25;
      v16 = v26;
      v17 = v25 - v27;
      if ( (int)(v25 - v27) < 0 )
        v17 = v27 - v25;
      v18 = v28;
      if ( v17 > a5 || v26 - v28 < v10 )
      {
        v19 = v26 - v28;
        if ( v26 - v28 < 0 )
          v19 = v28 - v26;
        if ( v19 > a5 && v28 - v26 >= v10 )
        {
          if ( v28 < v13 )
            v18 = v13;
          v13 = v18;
        }
      }
      else
      {
        if ( v28 < (int)v14 )
          v18 = v14;
        v14 = v18;
      }
      ++v11;
    }
    while ( v11 != (_QWORD *)v15 );
  }
  if ( v13 != v12 )
  {
    v14 = v13;
    goto LABEL_26;
  }
  if ( v14 == v12 )
  {
    v20 = v16 - v12;
    v21 = 3 - (v20 < 3 * v10);
LABEL_24:
    v14 = v16 - (int)v20 / v21;
    goto LABEL_26;
  }
  if ( v16 - v14 > 2 * v10 )
  {
    v20 = v16 - v14;
    v21 = 2;
    goto LABEL_24;
  }
LABEL_26:
  v22 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, v31, v14);
  *a2 = *v22;
  a2[1] = v22[1];
  a2[2] = v22[2];
  v23 = v22[3];
  result = a2;
  a2[3] = v23;
  return result;
}
