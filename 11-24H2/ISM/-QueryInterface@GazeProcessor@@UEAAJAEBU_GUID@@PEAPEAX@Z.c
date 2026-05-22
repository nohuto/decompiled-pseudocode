/*
 * XREFs of ?QueryInterface@GazeProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B8A90
 * Callers:
 *     ?QueryInterface@GazeProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B8B30 (-QueryInterface@GazeProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B8B40 (-QueryInterface@GazeProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B8B50 (-QueryInterface@GazeProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B8B60 (-QueryInterface@GazeProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B8B70 (-QueryInterface@GazeProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GazeProcessor::QueryInterface(GazeProcessor *this, const struct _GUID *a2, GazeProcessor **a3)
{
  GazeProcessor *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = this;
  if ( !a3 )
    return 2147942487LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)this + 8LL))(this);
    v4 = (GazeProcessor *)(((unsigned __int64)v4 + 40) & -(__int64)(v4 != 0LL));
LABEL_11:
    *a3 = v4;
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data4;
  if ( !v7 )
  {
    (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_11;
  }
  return 2147500034LL;
}
