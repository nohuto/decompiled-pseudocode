/*
 * XREFs of ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x140061A58
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1400375F4 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1402A3D74 (-QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 * Callees:
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x140061AC0 (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 */

__int64 __fastcall BLTQUEUE::UpdateVsyncCount(BLTQUEUE *this, union _LARGE_INTEGER *a2)
{
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF
  __int64 QuadPart; // [rsp+38h] [rbp+10h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
  BLTQUEUE::QuantizeVSync(this, 4u, (__int64 *)&PerformanceFrequency, &QuadPart);
  if ( a2 )
    *a2 = PerformanceFrequency;
  return *((unsigned int *)this + 118);
}
