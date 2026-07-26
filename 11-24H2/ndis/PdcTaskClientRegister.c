/*
 * XREFs of PdcTaskClientRegister @ 0x14014E654
 * Callers:
 *     ?ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013ED00 (-ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     memset @ 0x1400E7500 (memset.c)
 *     PdcAllocate @ 0x14014E8B0 (PdcAllocate.c)
 *     PdcPortOpenCommon @ 0x14014E904 (PdcPortOpenCommon.c)
 */

__int64 __fastcall PdcTaskClientRegister(__int64 a1, _QWORD *a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  int v6; // edx
  int v7; // ecx
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = (_DWORD *)PdcAllocate(a1, 64LL, 1667458128LL);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x40uLL);
    v9 = 0LL;
    *v4 = 1667458128;
    v4[8] = 95;
    v5 = PdcPortOpenCommon(v7, v6, (_DWORD)v4, (unsigned int)&v9);
    if ( v5 )
      ExFreePoolWithTag(v4, 0);
    else
      *a2 = v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
