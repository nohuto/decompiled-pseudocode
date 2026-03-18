/*
 * XREFs of ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x180142160
 * Callers:
 *     ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x180163A80 (-EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180164BE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801658F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18018D970 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18018DEA0 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18025B75C (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::PrepareIndexBuffer(CD3DBatchExecutionContext *this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // r14d
  __int64 v6; // rbp
  int v8; // eax
  unsigned int v9; // r15d
  int v10; // r14d
  __int64 v11; // r13
  int v12; // ebp
  unsigned int v13; // r12d
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // ecx
  int v18; // r9d
  int v19; // eax
  _OWORD v20[3]; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+88h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 3);
  v5 = 0;
  if ( 2 * (unsigned __int64)a2 <= *(unsigned int *)(v2 + 104) )
    goto LABEL_2;
  CD3DBatchExecutionContext::Flush(this, 16LL);
  v19 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)(v2 + 64), 2 * a2, 0);
  v5 = v19;
  if ( v19 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 152LL))(
      *((_QWORD *)this + 2),
      *(_QWORD *)(v2 + 72),
      57LL);
LABEL_2:
    if ( *(_QWORD *)(v2 + 88) )
    {
      if ( a2 > (unsigned int)(*(_DWORD *)(v2 + 104) - *(_DWORD *)(v2 + 100)) / *(_DWORD *)(v2 + 96) )
      {
        *((_DWORD *)this + 8) |= 0x40u;
        v6 = *((_QWORD *)this + 3);
        if ( *(_QWORD *)(v6 + 40) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 560LL) + 120LL))(
            *(_QWORD *)(*(_QWORD *)(v6 + 16) + 560LL),
            *(_QWORD *)(v6 + 24),
            0LL);
          *(_QWORD *)(v6 + 40) = 0LL;
          *(_DWORD *)(v6 + 48) = 0;
          if ( *((_BYTE *)this + 74) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 104LL))(
              *((_QWORD *)this + 2),
              *((unsigned int *)this + 22),
              *((unsigned int *)this + 19));
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v6 + 64) + 560LL) + 120LL))(
              *(_QWORD *)(*(_QWORD *)(v6 + 64) + 560LL),
              *(_QWORD *)(v6 + 72),
              0LL);
            *(_QWORD *)(v6 + 88) = 0LL;
            *(_DWORD *)(v6 + 96) = 0;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 96LL))(
              *((_QWORD *)this + 2),
              *((unsigned int *)this + 23),
              *((unsigned int *)this + 20),
              0LL);
          }
          ++*((_DWORD *)this + 32);
          *((_QWORD *)this + 11) = 0LL;
          *((_DWORD *)this + 24) = 0;
        }
      }
      if ( *(_QWORD *)(v2 + 88) )
        return v5;
    }
    v8 = 300;
    v9 = *(_DWORD *)(v2 + 104) - *(_DWORD *)(v2 + 100);
    v10 = -*(_DWORD *)(v2 + 100) & 1;
    v11 = *(_QWORD *)(v2 + 64);
    if ( a2 >= 0x12C )
      v8 = a2;
    v20[0] = 0LL;
    v12 = -2003304307;
    v13 = v10 + 2 * v8;
    if ( *(_DWORD *)(v11 + 1112) )
    {
      v15 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0xA07u, 0LL);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _OWORD *))(**(_QWORD **)(v11 + 560)
                                                                                        + 112LL))(
              *(_QWORD *)(v11 + 560),
              *(_QWORD *)(v2 + 72),
              0LL,
              5 - (unsigned int)(v9 < v13),
              0,
              v20);
      v15 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xA0Du, 0LL);
    }
    if ( !*(_DWORD *)(v11 + 1112)
      && (v15 == -2005532292 || v15 == -2147024882 || v15 == -2005270523)
      && *(_DWORD *)(v11 + 448) )
    {
      if ( v15 != -2005270523 )
        goto LABEL_31;
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 552) + 312LL))(*(_QWORD *)(v11 + 552));
      v17 = *(_DWORD *)(v11 + 1112);
      if ( v16 != -2005270480 )
      {
        if ( !v17 )
          *(_DWORD *)(v11 + 1112) = -2005270523;
LABEL_33:
        if ( *(_DWORD *)(v11 + 1112) )
        {
          v15 = -2003304307;
          goto LABEL_35;
        }
LABEL_20:
        v21 = 0;
        if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v15, 0LL, &v21) )
        {
          v18 = v21;
          if ( v21 == -2003304307 )
          {
            if ( v15 >= 0 )
              v15 = -2003304307;
            if ( !*(_DWORD *)(v11 + 1112) )
              *(_DWORD *)(v11 + 1112) = v15;
          }
          v15 = v18;
          if ( v18 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xB4Du, 0LL);
        }
        v12 = v15;
        if ( v15 >= 0 )
        {
          *(_QWORD *)(v2 + 88) = *(_QWORD *)&v20[0];
          *(_DWORD *)(v2 + 96) = 2;
          if ( v9 < v13 )
            *(_DWORD *)(v2 + 100) = 0;
          else
            *(_DWORD *)(v2 + 100) += v10;
          *((_DWORD *)this + 20) = *(_DWORD *)(v2 + 100) / *(_DWORD *)(v2 + 96);
          return (unsigned int)v15;
        }
LABEL_35:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x6Cu, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xCBu, 0LL);
        return (unsigned int)v15;
      }
      if ( !v17 )
      {
        *(_DWORD *)(v11 + 1112) = -2005270480;
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v11 + 16));
      }
      else
      {
LABEL_31:
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v11 + 16));
      }
    }
    if ( v15 >= 0 )
      goto LABEL_20;
    goto LABEL_33;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xBFu, 0LL);
  return v5;
}
