/*
 * XREFs of ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1401941C8
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryPStateEngineData(
        DXGADAPTER *this,
        unsigned int a2,
        struct _DXGK_POWER_P_COMPONENT *a3,
        unsigned int *a4)
{
  __int64 v4; // r11
  __int64 v6; // rcx

  v4 = *((_QWORD *)this + 553);
  if ( v4 )
  {
    if ( a2 < *((_DWORD *)this + 1108) )
    {
      v6 = 248LL * a2;
      *a3 = *(struct _DXGK_POWER_P_COMPONENT *)(v6 + v4);
      *a4 = *(_DWORD *)(*((_QWORD *)this + 553) + v6 + 144);
    }
  }
}
