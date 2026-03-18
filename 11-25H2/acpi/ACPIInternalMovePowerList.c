/*
 * XREFs of ACPIInternalMovePowerList @ 0x140027D5C
 * Callers:
 *     ACPIDevicePowerDpc @ 0x140026120 (ACPIDevicePowerDpc.c)
 *     ACPIMovePowerListUnblockedItems @ 0x14005D140 (ACPIMovePowerListUnblockedItems.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIInternalMovePowerList(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // r9
  int v9; // r11d
  _DWORD *v10; // rax
  bool v11; // zf

  v4 = (_QWORD *)*a1;
  while ( v4 != a1 )
  {
    v8 = v4;
    v4 = (_QWORD *)*v4;
    if ( *((_DWORD *)v8 + 12) )
      goto LABEL_11;
    v9 = *(_DWORD *)(v8[5] + 740LL);
    v10 = v8 + 7;
    v11 = v9 == 0;
    if ( v9 > 0 )
    {
      if ( (*v10 & 0x2000000) == 0 )
      {
        *v10 |= 0x2000000u;
        _InterlockedIncrement(&AcpiPowerCurrentPagingPathTransitions);
        goto LABEL_11;
      }
      v11 = v9 == 0;
    }
    if ( v11 && (*v10 & 0x2000000) != 0 )
    {
      *v10 &= ~0x2000000u;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
LABEL_11:
    _InterlockedExchange((volatile __int32 *)v8 + 52, 3);
  }
  v5 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = (_QWORD *)a1[1];
    *v7 = a2;
    *(_QWORD *)(a2 + 8) = v7;
    v5[1] = v6;
    *v6 = v5;
    a1[1] = a1;
    *a1 = a1;
  }
}
