/*
 * XREFs of RootHub_HideInvalidDebugPortStatusAndChange @ 0x140009C50
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x140009CC0 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x140024160 (RootHub_UcxEvtGetPortStatus.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 */

bool __fastcall RootHub_HideInvalidDebugPortStatusAndChange(__int64 a1, int a2)
{
  __int64 v3; // rcx

  if ( (*(_DWORD *)(120LL * (unsigned int)(a2 - 1) + *(_QWORD *)(a1 + 48) + 64) & 2) != 0 )
    return 1;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( *(_BYTE *)(a1 + 56) )
    {
      v3 = *(_QWORD *)(a1 + 8);
      if ( _bittest64((const signed __int64 *)(v3 + 736), 0x33u) )
        return (unsigned int)XilRegister_ReadUlong(
                               *(_QWORD *)(v3 + 88),
                               *(_QWORD *)(*(_QWORD *)(v3 + 88) + 72LL) + 36LL) >> 24 == a2;
    }
  }
  return 0;
}
