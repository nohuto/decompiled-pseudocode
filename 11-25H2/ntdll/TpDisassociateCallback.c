/*
 * XREFs of TpDisassociateCallback @ 0x1800F92D0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 */

void __fastcall TpDisassociateCallback(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  unsigned int v3; // eax
  __int64 v4; // rdx

  if ( !a1 || (v1 = *(_QWORD *)(a1 + 184)) == 0 || *(_QWORD *)(a1 + 176) || (v2 = *(_BYTE *)(a1 + 76), (v2 & 2) != 0) )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    *(_BYTE *)(a1 + 76) = v2 | 2;
    v3 = *(_DWORD *)(a1 + 144) & 0xFFFFFFBF;
    *(_DWORD *)(a1 + 144) = v3;
    v4 = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(a1 + 176) = v4;
    if ( v4 )
    {
      *(_DWORD *)(a1 + 144) = v3 | 0x20;
      TppBarrierAdjust((volatile signed __int64 *)(v4 + 32), 1, 0);
    }
    TppBarrierAdjust((volatile signed __int64 *)(v1 + 56), -1, 0);
  }
}
