/*
 * XREFs of ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x18018DA50
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180144C20 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x18018D6A0 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 * Callees:
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18018D970 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?Commit@CTypedConstantBufferBase@@IEAAXPEAVCD3DDevice@@PEBX@Z @ 0x18018DD00 (-Commit@CTypedConstantBufferBase@@IEAAXPEAVCD3DDevice@@PEBX@Z.c)
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 */

void __fastcall CD3DBatchExecutionContext::SetLights(
        CD3DBatchExecutionContext *this,
        struct CHwLightCollectionBuffer *a2)
{
  _BYTE *v4; // rbp
  _OWORD *v5; // rbx
  _OWORD *v6; // rcx
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  __int64 v11; // rax

  if ( !a2 )
  {
    v10 = (_QWORD *)((char *)this + 40);
LABEL_9:
    CD3DBatchExecutionContext::Flush((__int64)this, -2147483647);
    goto LABEL_10;
  }
  v4 = (_BYTE *)*((_QWORD *)this + 3);
  v5 = (_OWORD *)((char *)a2 + 20);
  if ( memcmp_0(v4 + 320, (char *)a2 + 20, 0x104uLL) )
  {
    CD3DBatchExecutionContext::Flush((__int64)this, 128);
    v6 = v4 + 320;
    v4[312] = 1;
    v7 = 2LL;
    do
    {
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      v6[4] = v5[4];
      v6[5] = v5[5];
      v6[6] = v5[6];
      v6 += 8;
      v8 = v5[7];
      v5 += 8;
      *(v6 - 1) = v8;
      --v7;
    }
    while ( v7 );
    *(_DWORD *)v6 = *(_DWORD *)v5;
    CTypedConstantBufferBase::Commit(
      (CTypedConstantBufferBase *)(v4 + 304),
      *((struct CD3DDevice **)this + 1),
      v4 + 320);
    v4[312] = 0;
  }
  v9 = *((_QWORD *)this + 3);
  if ( memcmp_0((const void *)(v9 + 608), (char *)a2 + 280, 0xF0uLL) )
  {
    CD3DBatchExecutionContext::Flush((__int64)this, 256);
    *(_BYTE *)(v9 + 600) = 1;
    *(_OWORD *)(v9 + 608) = *(_OWORD *)((char *)a2 + 280);
    *(_OWORD *)(v9 + 624) = *(_OWORD *)((char *)a2 + 296);
    *(_OWORD *)(v9 + 640) = *(_OWORD *)((char *)a2 + 312);
    *(_OWORD *)(v9 + 656) = *(_OWORD *)((char *)a2 + 328);
    *(_OWORD *)(v9 + 672) = *(_OWORD *)((char *)a2 + 344);
    *(_OWORD *)(v9 + 688) = *(_OWORD *)((char *)a2 + 360);
    *(_OWORD *)(v9 + 704) = *(_OWORD *)((char *)a2 + 376);
    *(_OWORD *)(v9 + 720) = *(_OWORD *)((char *)a2 + 392);
    *(_OWORD *)(v9 + 736) = *(_OWORD *)((char *)a2 + 408);
    *(_OWORD *)(v9 + 752) = *(_OWORD *)((char *)a2 + 424);
    *(_OWORD *)(v9 + 768) = *(_OWORD *)((char *)a2 + 440);
    *(_OWORD *)(v9 + 784) = *(_OWORD *)((char *)a2 + 456);
    *(_OWORD *)(v9 + 800) = *(_OWORD *)((char *)a2 + 472);
    *(_OWORD *)(v9 + 816) = *(_OWORD *)((char *)a2 + 488);
    *(_OWORD *)(v9 + 832) = *(_OWORD *)((char *)a2 + 504);
    CTypedConstantBufferBase::Commit(
      (CTypedConstantBufferBase *)(v9 + 592),
      *((struct CD3DDevice **)this + 1),
      (const void *)(v9 + 608));
    *(_BYTE *)(v9 + 600) = 0;
  }
  v10 = (_QWORD *)((char *)this + 40);
  v11 = *((_QWORD *)this + 5);
  if ( !v11 || *((_DWORD *)a2 + 4) != *(_DWORD *)(v11 + 16) )
    goto LABEL_9;
LABEL_10:
  *v10 = a2;
}
