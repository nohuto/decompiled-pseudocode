/*
 * XREFs of XilCoreCommonBuffer_ReleaseBufferInternal @ 0x14002F794
 * Callers:
 *     CommonBuffer_ReleaseBuffer @ 0x14001F6A4 (CommonBuffer_ReleaseBuffer.c)
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x14002F6F4 (XilCoreCommonBuffer_ReleaseBuffers.c)
 * Callees:
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C838 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall XilCoreCommonBuffer_ReleaseBufferInternal(_BYTE **a1, __int64 a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // eax
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  _QWORD *result; // rax
  _DWORD *v7; // rcx
  _DWORD *v8; // r8
  __int64 v9; // rcx

  v2 = *(_DWORD *)(a2 + 40);
  v3 = 0;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_DWORD *)(a2 + 64) = 0;
  if ( v2 <= 0x1000 )
  {
    v7 = a1 + 4;
    do
    {
      v8 = v7;
      if ( v2 == *v7 )
        break;
      ++v3;
      v7 += 16;
    }
    while ( v3 < 2 );
    result = v8 + 8;
    v9 = *((_QWORD *)v8 + 4);
    if ( *(_DWORD **)(v9 + 8) != v8 + 8 )
      __fastfail(3u);
    *(_QWORD *)a2 = v9;
    *(_QWORD *)(a2 + 8) = result;
    *(_QWORD *)(v9 + 8) = a2;
    *result = a2;
    ++v8[7];
  }
  else
  {
    v4 = *a1;
    v5 = *(_QWORD *)(a2 + 96);
    if ( v4[80] )
      return (_QWORD *)SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(*(_QWORD *)v4 + 104LL), v5);
    else
      return (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(
                         WdfDriverGlobals,
                         *(_QWORD *)(v5 + 16));
  }
  return result;
}
