/*
 * XREFs of ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D1A2C
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::SetWarpAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8

  v2 = *((_QWORD *)this + 121);
  v3 = (_QWORD *)((char *)this + 952);
  if ( !v2 || v2 == *v3 )
  {
    *((_QWORD *)this + 121) = a2;
    if ( a2 )
      *((_QWORD *)this + 122) = *(_QWORD *)((char *)a2 + 412);
  }
  *v3 = a2;
}
