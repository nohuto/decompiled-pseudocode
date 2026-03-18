/*
 * XREFs of ?CheckIfScreenBoundaryLimitHapticNeeded@MoveSizeHaptic@@AEAA_NXZ @ 0x1402DC31C
 * Callers:
 *     ?CheckAndEmitRequiredHaptic@MoveSizeHaptic@@QEAAXXZ @ 0x1402DC1F4 (-CheckAndEmitRequiredHaptic@MoveSizeHaptic@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall MoveSizeHaptic::CheckIfScreenBoundaryLimitHapticNeeded(MoveSizeHaptic *this)
{
  char v3; // al
  _DWORD *v4; // rdx
  char v5; // r8
  char v6; // r9
  int v7; // ecx
  int v8; // eax
  int v9; // eax

  if ( *(_DWORD *)(*(_QWORD *)this + 176LL) == 9 )
    return 0;
  v3 = MoveSizeReadAndClearMouseMoveBoundHitFlags();
  v4 = *(_DWORD **)this;
  v5 = 0;
  v6 = v3;
  v7 = *(_DWORD *)(*(_QWORD *)this + 176LL);
  if ( v7 != 3 && v7 != 6 )
  {
    if ( (v3 & 1) != 0 )
    {
      v8 = *((_DWORD *)this + 2);
      if ( (v8 & 4) != 0 )
      {
        v5 = 1;
        *((_DWORD *)this + 2) = v8 & 0xFFFFFFFB;
      }
    }
    else if ( *((_DWORD *)this + 7) != v4[10] || *((_DWORD *)this + 9) != v4[12] )
    {
      *((_DWORD *)this + 2) |= 4u;
    }
  }
  if ( (unsigned int)(v4[44] - 1) > 1 )
  {
    if ( (v6 & 2) != 0 )
    {
      v9 = *((_DWORD *)this + 2);
      if ( (v9 & 8) != 0 )
      {
        v5 = 1;
        *((_DWORD *)this + 2) = v9 & 0xFFFFFFF7;
      }
    }
    else if ( *((_DWORD *)this + 8) != v4[11] || *((_DWORD *)this + 10) != v4[13] )
    {
      *((_DWORD *)this + 2) |= 8u;
    }
  }
  return v5;
}
