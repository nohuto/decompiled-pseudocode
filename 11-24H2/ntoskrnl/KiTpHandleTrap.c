/*
 * XREFs of KiTpHandleTrap @ 0x1404F4C00
 * Callers:
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 * Callees:
 *     KiTpWriteBreakpoint @ 0x1405C6D4C (KiTpWriteBreakpoint.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KiTpCompletion @ 0x140BB9010 (KiTpCompletion.c)
 */

bool __fastcall KiTpHandleTrap(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // r11
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v9; // rdx
  _KPROCESS *Process; // r8
  __int64 *i; // rdi
  bool v12; // cl
  bool v13; // al
  _KPROCESS *v14; // rax
  int v15; // eax
  int v16; // r15d
  bool v17; // [rsp+20h] [rbp-38h]

  v6 = a1;
  if ( (KiDynamicTraceEnabled & 2) == 0 && (!a3 || (KiDynamicTraceEnabled & 1) == 0) )
    return 0;
  v17 = 0;
  CurrentPrcb = 0LL;
  v9 = *(_QWORD *)(a2 + 248);
  Process = KeGetCurrentThread()->Process;
  _InterlockedAdd(&KiTpActiveTrapsCount, 1u);
  for ( i = (__int64 *)*((_QWORD *)KiTpHashTable + ((v9 >> 4) & 0x3FFF)); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v17 = *(_BYTE *)v9 != 0xCC;
      goto LABEL_36;
    }
    if ( v9 == i[1] && (!*((_BYTE *)i + 50) || Process == (_KPROCESS *)i[2]) )
      break;
  }
  if ( (KiDynamicTraceMask & 4) == 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = (CurrentPrcb->PrcbFlagsReserved & 0x400) != 0;
      if ( CurrentPrcb->CombinedNmiMceActive )
        v12 = 1;
      if ( v12 )
      {
        CurrentPrcb = 0LL;
        LOBYTE(a4) = a3;
        v13 = (int)KiTpCompletion((char *)i + 52, v6, a2, a4) >= 0;
LABEL_35:
        v17 = v13;
        goto LABEL_36;
      }
      CurrentPrcb->PrcbFlagsReserved |= 0x400u;
    }
    if ( (_BYTE)a4 )
    {
      v14 = (_KPROCESS *)i[2];
      if ( v14 && !*((_BYTE *)i + 50) && v14 != Process )
      {
        LOBYTE(a4) = a3;
        v15 = KiTpCompletion((char *)i + 52, v6, a2, a4);
LABEL_33:
        v16 = v15;
LABEL_34:
        v13 = v16 >= 0;
        goto LABEL_35;
      }
      if ( *((_BYTE *)i + 24) )
      {
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(a2, i[4]) )
          goto LABEL_27;
        v6 = a1;
      }
      LOBYTE(a4) = a3;
      v16 = KiTpCompletion((char *)i + 52, v6, a2, a4);
      if ( v16 >= 0 )
      {
        if ( *((_BYTE *)i + 25) )
          guard_dispatch_icall_no_overrides(a2, i[5]);
        goto LABEL_34;
      }
    }
    v15 = KiTpWriteBreakpoint(i, 0LL, 0LL);
    goto LABEL_33;
  }
  LOBYTE(a4) = a3;
  if ( (int)KiTpCompletion((char *)i + 52, a1, a2, a4) >= 0 )
  {
LABEL_27:
    v17 = 1;
    goto LABEL_36;
  }
  KiTpWriteBreakpoint(i, 0LL, 0LL);
LABEL_36:
  if ( CurrentPrcb )
    CurrentPrcb->PrcbFlagsReserved &= ~0x400u;
  _InterlockedDecrement(&KiTpActiveTrapsCount);
  return v17;
}
