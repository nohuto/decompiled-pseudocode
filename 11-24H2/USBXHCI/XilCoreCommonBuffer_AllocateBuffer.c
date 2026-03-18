/*
 * XREFs of XilCoreCommonBuffer_AllocateBuffer @ 0x140056294
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x14001F364 (XilCoreCommonBuffer_AcquireBuffer.c)
 * Callees:
 *     DmaEnabler_AllocateCommonBufferPage @ 0x140018768 (DmaEnabler_AllocateCommonBufferPage.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C838 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x140083898 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 */

_QWORD *__fastcall XilCoreCommonBuffer_AllocateBuffer(_QWORD *a1, unsigned int a2)
{
  __int64 *v2; // rax
  _QWORD *v3; // rbx
  __int64 v6; // rcx
  bool v7; // zf
  int CommonBufferPage; // eax
  int v9; // edx
  _QWORD *v10; // rdi
  void *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = (__int64 *)*a1;
  v3 = 0LL;
  v13 = 0LL;
  v6 = *v2;
  v7 = *((_BYTE *)v2 + 80) == 0;
  v12 = 0LL;
  if ( v7 )
    CommonBufferPage = DmaEnabler_AllocateCommonBufferPage(*(_QWORD **)(v6 + 96), 104LL, a2, &v13, &v12);
  else
    CommonBufferPage = SecureDmaEnabler_AllocateCommonBufferPage(
                         *(_QWORD *)(v6 + 104),
                         104,
                         a2,
                         (unsigned int)&v13,
                         (__int64)&v12);
  if ( CommonBufferPage < 0 )
    return v12;
  v10 = (_QWORD *)v13;
  if ( (*(_DWORD *)(v13 + 8) & 0xFFF) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 72LL), v9, 8, 11, (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids);
    }
    if ( *(_BYTE *)(*a1 + 80LL) )
      SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(*(_QWORD *)*a1 + 104LL), (__int64)v10);
    else
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, v10[2]);
  }
  else
  {
    v3 = v12;
    memset(v12, 0, 0x68uLL);
    v3[2] = *v10;
    v3[3] = v10[1];
    *((_DWORD *)v3 + 10) = a2;
    v3[12] = v10;
  }
  return v3;
}
