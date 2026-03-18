/*
 * XREFs of ?FillMdmStatus@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_STATUS@@@Z @ 0x140027134
 * Callers:
 *     DpiGetMdmStatus @ 0x140027114 (DpiGetMdmStatus.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ @ 0x14005FCC0 (-DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ.c)
 *     ?DoesSystemSupportDynamicMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ @ 0x14006338C (-DoesSystemSupportDynamicMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ.c)
 *     ?FillMdmStatus@DISPLAY_MUX_PAIRING@@QEBAXPEAU_DISPLAYCONFIG_DISPLAYMUX_MUX_INFO@@@Z @ 0x140084014 (-FillMdmStatus@DISPLAY_MUX_PAIRING@@QEBAXPEAU_DISPLAYCONFIG_DISPLAYMUX_MUX_INFO@@@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

void __fastcall DISPLAY_MUX_MGR::FillMdmStatus(DISPLAY_MUX_MGR *this, struct _DISPLAYCONFIG_DISPLAYMUX_STATUS *a2)
{
  __int64 v4; // rcx
  _OWORD *v5; // rax
  struct _DISPLAYCONFIG_DISPLAYMUX_STATUS *v6; // r8
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // eax
  DISPLAY_MUX_PAIRING *v21; // rcx
  _BYTE v22[16]; // [rsp+20h] [rbp-318h] BYREF
  _BYTE v23[776]; // [rsp+30h] [rbp-308h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (DISPLAY_MUX_MGR *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  memset(v23, 0, 0x2F4uLL);
  v4 = 5LL;
  v5 = v23;
  v6 = a2;
  do
  {
    v7 = v5[1];
    *(_OWORD *)v6 = *v5;
    v8 = v5[2];
    *((_OWORD *)v6 + 1) = v7;
    v9 = v5[3];
    *((_OWORD *)v6 + 2) = v8;
    v10 = v5[4];
    *((_OWORD *)v6 + 3) = v9;
    v11 = v5[5];
    *((_OWORD *)v6 + 4) = v10;
    v12 = v5[6];
    *((_OWORD *)v6 + 5) = v11;
    v13 = v5[7];
    v5 += 8;
    *((_OWORD *)v6 + 6) = v12;
    v6 = (struct _DISPLAYCONFIG_DISPLAYMUX_STATUS *)((char *)v6 + 128);
    *((_OWORD *)v6 - 1) = v13;
    --v4;
  }
  while ( v4 );
  v14 = v5[1];
  *(_OWORD *)v6 = *v5;
  v15 = v5[2];
  *((_OWORD *)v6 + 1) = v14;
  v16 = v5[3];
  *((_OWORD *)v6 + 2) = v15;
  v17 = v5[4];
  *((_OWORD *)v6 + 3) = v16;
  v18 = v5[5];
  *((_OWORD *)v6 + 4) = v17;
  v19 = v5[6];
  v20 = *((_DWORD *)v5 + 28);
  *((_OWORD *)v6 + 5) = v18;
  *((_OWORD *)v6 + 6) = v19;
  *((_DWORD *)v6 + 28) = v20;
  *((_DWORD *)a2 + 8) = 2;
  *((_DWORD *)a2 + 97) = 2;
  *((_DWORD *)a2 + 7) = 1;
  *((_DWORD *)a2 + 96) = 1;
  *((_DWORD *)a2 + 185) = 1;
  v21 = (DISPLAY_MUX_PAIRING *)*((_QWORD *)this + 9);
  if ( v21 )
    DISPLAY_MUX_PAIRING::FillMdmStatus(v21, (struct _DISPLAYCONFIG_DISPLAYMUX_STATUS *)((char *)a2 + 28));
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 1);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 20);
  *((_DWORD *)a2 + 5) = *(unsigned __int8 *)this;
  *((_DWORD *)a2 + 6) = *((unsigned __int8 *)this + 8);
  *(_DWORD *)a2 = DISPLAY_MUX_MGR::DoesSystemSupportStaticMdmNow(this);
  *((_DWORD *)a2 + 2) = DISPLAY_MUX_MGR::DoesSystemSupportDynamicMdmNow(this);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
}
