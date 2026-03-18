/*
 * XREFs of ??$_Move_unchecked@PEAUMonitorData@CCursorState@@PEAU12@@std@@YAPEAUMonitorData@CCursorState@@PEAU12@00@Z @ 0x1802BAA8C
 * Callers:
 *     ?DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z @ 0x1802BC0DC (-DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z.c)
 * Callees:
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180229D14 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::_Move_unchecked<CCursorState::MonitorData *,CCursorState::MonitorData *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // rsi
  char *v5; // rdi
  __int64 v6; // rbx
  char v7; // al

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = (char *)a3 + 12;
    v6 = a1 + 12;
    do
    {
      *v3 = *(_QWORD *)(v6 - 12);
      *((_DWORD *)v5 - 1) = *(_DWORD *)(v6 - 4);
      *(_OWORD *)v5 = *(_OWORD *)v6;
      *((_OWORD *)v5 + 1) = *(_OWORD *)(v6 + 16);
      *((_OWORD *)v5 + 2) = *(_OWORD *)(v6 + 32);
      *((_OWORD *)v5 + 3) = *(_OWORD *)(v6 + 48);
      *((_DWORD *)v5 + 16) = *(_DWORD *)(v6 + 64);
      *(_OWORD *)(v5 + 68) = *(_OWORD *)(v6 + 68);
      std::shared_ptr<CCursorState::ShapeData>::operator=(v5 + 84, (__int64 *)(v6 + 84));
      v3 += 16;
      *((_DWORD *)v5 + 25) = *(_DWORD *)(v6 + 100);
      *((_DWORD *)v5 + 26) = *(_DWORD *)(v6 + 104);
      *((_DWORD *)v5 + 27) = *(_DWORD *)(v6 + 108);
      v5[112] = *(_BYTE *)(v6 + 112);
      v7 = *(_BYTE *)(v6 + 113);
      v6 += 128LL;
      v5[113] = v7;
      v5 += 128;
    }
    while ( v6 - 12 != a2 );
  }
  return v3;
}
