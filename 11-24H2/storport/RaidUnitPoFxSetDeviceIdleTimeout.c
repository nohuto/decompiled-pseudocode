/*
 * XREFs of RaidUnitPoFxSetDeviceIdleTimeout @ 0x140030D64
 * Callers:
 *     RaUnitRegisterForIdleDetection @ 0x1401B9B4C (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     McTemplateK0quuuqqtt_EtwWriteTransfer @ 0x140076B48 (McTemplateK0quuuqqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidUnitPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r9
  _QWORD **v4; // rdi
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v9; // rbp
  int v10; // edx
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rdx

  v3 = *(_QWORD *)(a1 + 24);
  v4 = (_QWORD **)(a1 + 1872);
  v6 = a2;
  if ( (*(_BYTE *)(v3 + 110) & 0x40) != 0 )
  {
    v11 = *(_DWORD *)(v3 + 6024);
    v12 = *((_DWORD *)*v4 + 7);
    if ( v11 == v12 && !a3 )
      return result;
    if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
      McTemplateK0quuuqqtt_EtwWriteTransfer(
        (*((_DWORD *)*v4 + 8) >> 10) & 1,
        v11,
        (_BYTE)v12,
        *(_DWORD *)(v3 + 56),
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        v12,
        v11,
        ((*v4)[4] & 0x400) != 0,
        ((*v4)[4] & 0x800) != 0);
    *((_DWORD *)*v4 + 7) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 6024LL);
    v13 = 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 6024LL);
    return PoFxSetDeviceIdleTimeout(**v4, v13);
  }
  if ( a2 == -1 )
  {
    v9 = -1LL;
  }
  else
  {
    if ( a2 < *((_DWORD *)*v4 + 6) )
      v6 = *((_DWORD *)*v4 + 6);
    result = v6;
    v9 = 10000LL * v6;
  }
  v10 = *((_DWORD *)*v4 + 7);
  if ( v6 != v10 )
  {
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_140171462 & 0x10) != 0 )
        McTemplateK0quuuqqtt_EtwWriteTransfer(
          (*((_DWORD *)*v4 + 8) >> 10) & 1,
          v10,
          a3,
          *(_DWORD *)(v3 + 56),
          *(_BYTE *)(a1 + 104),
          *(_BYTE *)(a1 + 105),
          *(_BYTE *)(a1 + 106),
          v10,
          v6,
          ((*v4)[4] & 0x400) != 0,
          ((*v4)[4] & 0x800) != 0);
    }
    v13 = v9;
    *((_DWORD *)*v4 + 7) = v6;
    return PoFxSetDeviceIdleTimeout(**v4, v13);
  }
  return result;
}
