/*
 * XREFs of ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAU_D3DDDI_NATIVEFENCEINFO@@@Z @ 0x14032D9B8
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x14032D508 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGSYNCOBJECT::DXGSYNCOBJECT(__int64 a1, __int64 a2, _OWORD *a3, int a4, _OWORD *a5)
{
  int v5; // edx
  int v6; // r9d
  int v7; // r8d
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  v5 = 0;
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 33;
  *(_DWORD *)(a1 + 72) = 75;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 400) = a4;
  *(_DWORD *)(a1 + 412) = 0;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_OWORD *)(a1 + 128) = 0LL;
  *(_OWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 112) = a1 + 104;
  *(_QWORD *)(a1 + 104) = a1 + 104;
  if ( a5 )
  {
    v5 = 1;
    *(_OWORD *)(a1 + 288) = *a5;
    v7 = 7;
    *(_OWORD *)(a1 + 304) = a5[1];
    *(_OWORD *)(a1 + 320) = a5[2];
    *(_OWORD *)(a1 + 336) = a5[3];
    *(_OWORD *)(a1 + 352) = a5[4];
    *(_OWORD *)(a1 + 368) = a5[5];
    *(_OWORD *)(a1 + 384) = a5[6];
    v6 = *(_DWORD *)(a1 + 304);
  }
  else
  {
    *(_OWORD *)(a1 + 208) = *a3;
    *(_OWORD *)(a1 + 224) = a3[1];
    *(_OWORD *)(a1 + 240) = a3[2];
    *(_OWORD *)(a1 + 256) = a3[3];
    *(_OWORD *)(a1 + 272) = a3[4];
    v6 = *(_DWORD *)(a1 + 212);
    v7 = *(_DWORD *)a3;
  }
  *(_DWORD *)(a1 + 404) = v7;
  *(_DWORD *)(a1 + 408) = v6;
  result = a1;
  *(_BYTE *)(a1 + 168) = v5;
  *(_DWORD *)(a1 + 172) = v5;
  return result;
}
