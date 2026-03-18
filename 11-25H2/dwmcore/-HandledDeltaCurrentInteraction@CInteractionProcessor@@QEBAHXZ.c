/*
 * XREFs of ?HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ @ 0x1802295CC
 * Callers:
 *     ?HandledDeltaCurrentInteraction@CInteraction@@UEBAHXZ @ 0x180232860 (-HandledDeltaCurrentInteraction@CInteraction@@UEBAHXZ.c)
 *     ?HandledDeltaCurrentInteraction@CInteractionRoot@@UEBAHXZ @ 0x180262870 (-HandledDeltaCurrentInteraction@CInteractionRoot@@UEBAHXZ.c)
 * Callees:
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801F1FB8 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::HandledDeltaCurrentInteraction(CInteractionProcessor *this)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx
  _BYTE *v5; // rbx
  bool v6; // zf

  if ( *((_DWORD *)this + 197) == 2 )
  {
    v3 = *((_DWORD *)this + 4);
    goto LABEL_9;
  }
  if ( *((_DWORD *)this + 197) == 3 )
  {
    v3 = *((_DWORD *)this + 44);
LABEL_9:
    result = 1LL;
    if ( (v3 & 3) != 0 && (*((_BYTE *)this + 808) & 1) != 0 || (v3 & 0xC) != 0 && (*((_BYTE *)this + 808) & 2) != 0 )
      return result;
    if ( (v3 & 0x30) == 0 )
      return 0LL;
    v6 = (*((_BYTE *)this + 808) & 4) == 0;
    goto LABEL_27;
  }
  if ( *((_DWORD *)this + 197) != 4 )
  {
    if ( *((_DWORD *)this + 197) != 5 )
    {
      if ( *((_DWORD *)this + 197) != 6 )
        return 0LL;
      v3 = *((_DWORD *)this + 124);
      goto LABEL_9;
    }
    return CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 1u);
  }
  if ( !CInteractionProcessor::AllowPenGestureDetection(this) )
    return CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 1u);
  v4 = *((_DWORD *)this + 84);
  result = 1LL;
  v5 = (char *)this + 808;
  if ( (v4 & 3) != 0 && (*v5 & 1) != 0 || (v4 & 0xC) != 0 && (*v5 & 2) != 0 )
    return result;
  if ( (v4 & 0x30) == 0 )
    return 0LL;
  v6 = (*v5 & 4) == 0;
LABEL_27:
  if ( v6 )
    return 0LL;
  return result;
}
