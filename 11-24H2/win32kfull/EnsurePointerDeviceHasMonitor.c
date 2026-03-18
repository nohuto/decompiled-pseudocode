/*
 * XREFs of EnsurePointerDeviceHasMonitor @ 0x140083760
 * Callers:
 *     _GetPointerDeviceRects @ 0x1400264A4 (_GetPointerDeviceRects.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  if ( !*(_DWORD *)(v3 + 1336) )
    return 1;
  if ( *(_QWORD *)(v3 + 1344) )
  {
LABEL_7:
    if ( *(_DWORD *)(v3 + 1336) && !*(_QWORD *)(v3 + 1344) )
      return v4;
    return 1;
  }
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3) )
  {
    RIMFindMonitorForDigitizer(v3, a1, 1LL);
    goto LABEL_7;
  }
  return 0LL;
}
