/*
 * XREFs of ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x140216094
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216C00 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ChildSubmitRootSynthesizedMouseInput @ 0x1402124D8 (ChildSubmitRootSynthesizedMouseInput.c)
 */

void __fastcall DeliverSynthesizedMouseInput(const struct _IVMouseInputPacket *a1, void *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v6; // rax
  _QWORD *v7; // r8
  _WORD *v8; // rcx
  __int64 v9; // r9
  _WORD *v10; // rdx
  __int16 v11; // ax

  v2 = *((_DWORD *)a1 + 8);
  v4 = *((_QWORD *)a1 + 3);
  v6 = Win32AllocPoolZInitImpl(256LL, (int)(28 * v2) + 36LL, 0x736D5649u);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 16) = a2;
    *(_DWORD *)(v6 + 32) = v2;
    *(_QWORD *)(v6 + 24) = *((_QWORD *)a1 + 6);
    if ( v2 )
    {
      v8 = (_WORD *)(v4 + 8);
      v9 = v2;
      v10 = (_WORD *)(v6 + 40);
      do
      {
        *(v10 - 2) = *(v8 - 4);
        *(v10 - 1) = *(v8 - 2);
        v11 = *v8;
        v8 += 24;
        *v10 = v11;
        v10 += 14;
        *(v10 - 13) = *(v8 - 22);
        *((_DWORD *)v10 - 6) = *((_DWORD *)v8 - 10);
        *((_DWORD *)v10 - 5) = *((_DWORD *)v8 - 9);
        *((_DWORD *)v10 - 4) = *((_DWORD *)v8 - 8);
        *((_DWORD *)v10 - 3) = *((_DWORD *)v8 - 7);
        *((_DWORD *)v10 - 2) = *((_DWORD *)v8 - 4);
        --v9;
      }
      while ( v9 );
    }
    ChildSubmitRootSynthesizedMouseInput(v7);
  }
}
