/*
 * XREFs of ?CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA?AUInputInteropMessageStorage@1@PEBUPointerInputInfo@@@Z @ 0x1800308C8
 * Callers:
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@H@Z @ 0x180030370 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x180030570 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E86C (--_U@YAPEAX_K@Z.c)
 */

__int64 *__fastcall Win32kInterop::CreateInputInteropMessageFromInputInfo(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  _OWORD *v9; // rax
  _OWORD *v10; // rdx

  v4 = 0LL;
  v5 = 240 * *(_DWORD *)(a2 + 316) + 168;
  v6 = operator new[](v5);
  *a1 = (__int64)v6;
  memset_0(v6, 0, v5);
  v7 = *a1;
  *(_DWORD *)v7 = 0;
  v8 = v7 + 8;
  *(_DWORD *)(v7 + 156) = *(_DWORD *)(a2 + 316);
  *(_OWORD *)(v7 + 8) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(v7 + 24) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(v7 + 40) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(v7 + 56) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(v7 + 72) = *(_OWORD *)(a2 + 152);
  *(_OWORD *)(v7 + 88) = *(_OWORD *)(a2 + 168);
  *(_OWORD *)(v7 + 104) = *(_OWORD *)(a2 + 184);
  *(_OWORD *)(v7 + 120) = *(_OWORD *)(a2 + 200);
  *(_OWORD *)(v7 + 136) = *(_OWORD *)(a2 + 216);
  if ( *(_DWORD *)(a2 + 316) )
  {
    do
    {
      v9 = (_OWORD *)(144 * v4 + a2 + 320);
      v10 = (_OWORD *)(v8 + 240LL * (unsigned int)v4 + 160);
      v4 = (unsigned int)(v4 + 1);
      *v10 = *v9;
      v10[1] = v9[1];
      v10[2] = v9[2];
      v10[3] = v9[3];
      v10[4] = v9[4];
      v10[5] = v9[5];
      v10[6] = v9[6];
      v10[7] = v9[7];
      v10[8] = v9[8];
    }
    while ( (unsigned int)v4 < *(_DWORD *)(a2 + 316) );
  }
  return a1;
}
