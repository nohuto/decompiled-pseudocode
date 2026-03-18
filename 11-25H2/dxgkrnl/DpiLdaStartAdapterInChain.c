/*
 * XREFs of DpiLdaStartAdapterInChain @ 0x14024CB40
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024092C (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     DpiLdaPreStartChain @ 0x14008AF6C (DpiLdaPreStartChain.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 */

__int64 __fastcall DpiLdaStartAdapterInChain(
        __int64 a1,
        char a2,
        void *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  PVOID DeviceExtension; // rdi
  struct _DEVICE_OBJECT *v11; // rsi
  int started; // ebx
  unsigned int v13; // r11d
  __int64 v14; // r10
  char v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int i; // esi
  __int64 v19; // rbp
  struct _DEVICE_OBJECT *v20; // rcx

  DeviceExtension = *(PVOID *)(a1 + 64);
  if ( *((_BYTE *)DeviceExtension + 508) == 1 )
  {
    v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 3);
  }
  else
  {
    v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 354);
    if ( !v11 )
    {
      started = 1075708986;
      WdLogSingleEntry1(3LL, a1);
      WdLogGlobalForLineNumber = 745;
      return (unsigned int)started;
    }
    DeviceExtension = v11->DeviceExtension;
  }
  v13 = *((_DWORD *)DeviceExtension + 710);
  if ( v13 == *((_DWORD *)DeviceExtension + 126) )
  {
    v14 = 0LL;
    *((_BYTE *)DeviceExtension + 2844) = 0;
    v15 = 0;
    while ( (unsigned int)v14 < v13 )
    {
      v16 = *((_QWORD *)DeviceExtension + 354);
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8 * v14) + 64LL);
      if ( *(_BYTE *)(v17 + 232) == 1 )
      {
        started = -1071774669;
        WdLogSingleEntry1(3LL, *(_QWORD *)(v16 + 8 * v14));
        WdLogGlobalForLineNumber = 798;
        return (unsigned int)started;
      }
      if ( (unsigned int)(*(_DWORD *)(v17 + 236) - 1) > 1 )
      {
        started = 1075708986;
        WdLogSingleEntry1(3LL, a1);
        WdLogGlobalForLineNumber = 809;
        return (unsigned int)started;
      }
      if ( v15 || *((_DWORD *)DeviceExtension + 281) != *(_DWORD *)(v17 + 1124) )
        v15 = 1;
      *((_BYTE *)DeviceExtension + 2844) = v15;
      v14 = (unsigned int)(v14 + 1);
    }
    started = DpiLdaPreStartChain(v11);
    if ( started >= 0 )
    {
      for ( i = 1; i < *((_DWORD *)DeviceExtension + 710); ++i )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 354) + 8LL * i) + 64LL);
        if ( *(_DWORD *)(v19 + 236) == 1 )
        {
          started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v19 + 24), a2, a3, a4, a5, a6, 0LL);
          if ( started < 0 )
          {
            v20 = *(struct _DEVICE_OBJECT **)(v19 + 152);
            goto LABEL_28;
          }
        }
      }
      started = DpiFdoStartAdapter(*((struct _DEVICE_OBJECT **)DeviceExtension + 3), a2, a3, a4, a5, a6, a7);
      if ( started >= 0 )
        return (unsigned int)started;
      v20 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
LABEL_28:
      IoInvalidateDeviceState(v20);
    }
    else
    {
      WdLogSingleEntry1(3LL, v11);
      WdLogGlobalForLineNumber = 837;
    }
  }
  else
  {
    started = 1075708986;
    WdLogSingleEntry1(3LL, a1);
    WdLogGlobalForLineNumber = 766;
  }
  return (unsigned int)started;
}
