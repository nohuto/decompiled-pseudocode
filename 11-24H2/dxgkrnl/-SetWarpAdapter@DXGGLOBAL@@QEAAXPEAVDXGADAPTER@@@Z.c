/*
 * XREFs of ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D6D5C
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018E474 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::SetWarpAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8

  v2 = *((_QWORD *)this + 125);
  v3 = (_QWORD *)((char *)this + 984);
  if ( !v2 || v2 == *v3 )
  {
    *((_QWORD *)this + 125) = a2;
    if ( a2 )
      *((_QWORD *)this + 126) = *(_QWORD *)((char *)a2 + 412);
  }
  *v3 = a2;
}
