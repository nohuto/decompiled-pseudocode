/*
 * XREFs of ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x180106950
 * Callers:
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18015FAE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801607F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180250164 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::BeginAppend(CD3DDynamicAppendBuffer *this, unsigned int a2, int a3)
{
  unsigned int v4; // r12d
  __int64 v5; // r15
  unsigned int v7; // esi
  unsigned int v8; // eax
  int v9; // r13d
  int v10; // eax
  int v11; // edi
  __int64 result; // rax
  int v13; // eax
  int v14; // ecx
  int v15; // r9d
  _OWORD v16[4]; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+18h]

  v4 = *((_DWORD *)this + 10) - *((_DWORD *)this + 9);
  v5 = *(_QWORD *)this;
  v7 = -2003304307;
  v8 = a2 - *((_DWORD *)this + 9) % a2;
  v9 = v8 % a2;
  v16[0] = 0LL;
  v18 = v8 % a2 + a3 * a2;
  if ( *(_DWORD *)(v5 + 1112) )
  {
    v11 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x9EBu, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _OWORD *))(**(_QWORD **)(v5 + 560) + 112LL))(
            *(_QWORD *)(v5 + 560),
            *((_QWORD *)this + 1),
            0LL,
            5 - (unsigned int)(v4 < v18),
            0,
            v16);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x9F1u, 0LL);
  }
  if ( *(_DWORD *)(v5 + 1112)
    || v11 != -2005532292 && v11 != -2147024882 && v11 != -2005270523
    || !*(_DWORD *)(v5 + 448) )
  {
    goto LABEL_8;
  }
  if ( v11 != -2005270523 )
  {
LABEL_18:
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v5 + 16));
    goto LABEL_8;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 552) + 312LL))(*(_QWORD *)(v5 + 552));
  v14 = *(_DWORD *)(v5 + 1112);
  if ( v13 == -2005270480 )
  {
    if ( v14 )
      goto LABEL_18;
    *(_DWORD *)(v5 + 1112) = -2005270480;
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v5 + 16));
LABEL_8:
    if ( v11 >= 0 )
      goto LABEL_9;
    goto LABEL_20;
  }
  if ( !v14 )
    *(_DWORD *)(v5 + 1112) = -2005270523;
LABEL_20:
  if ( *(_DWORD *)(v5 + 1112) )
  {
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x6Cu, 0LL);
    return v7;
  }
LABEL_9:
  v17 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v11, 0LL, &v17) )
  {
    v15 = v17;
    if ( v17 == -2003304307 )
    {
      if ( v11 >= 0 )
        v11 = -2003304307;
      if ( !*(_DWORD *)(v5 + 1112) )
        *(_DWORD *)(v5 + 1112) = v11;
    }
    v11 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xB31u, 0LL);
  }
  v7 = v11;
  if ( v11 < 0 )
    goto LABEL_21;
  result = (unsigned int)v11;
  *((_QWORD *)this + 3) = *(_QWORD *)&v16[0];
  *((_DWORD *)this + 8) = a2;
  if ( v4 < v18 )
    *((_DWORD *)this + 9) = 0;
  else
    *((_DWORD *)this + 9) += v9;
  return result;
}
